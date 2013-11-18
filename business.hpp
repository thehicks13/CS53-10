// CS 53 - Assignment 10
////////////////////////////
//NAME:  HICKS, MICHAEL / JENKINS, TYLER
//CLASS: CS 53
//SECTION: E
//DATE: 18 November, 2013

#include "customer.h"
#include "business.h"

void Business::stock()
{
  char merch[]="merchandise.dat";
  ifstream fin;
  fin.open(merch);
  int i=0;
  while(!fin.eof())
  {
    m_numMerch++;
    getline(fin,m_merch[i],'\n');
    i++;
    }
    fin.close();
    return;
  }

  void Business::print()
  {
    string name;
    cout<<m_bName<<" has these items for sale:\n";
    for(int x=0;x<=m_numMerch;x++)
    cout<<'\t'<<m_merch[x]<<endl;
    cout<<"The customers of "<<m_bName<<" are:";
    for(int p=0;p<=m_numPeople;p++)
    {
      name=m_people[p].getName();
      cout<<'\t'<<name<<endl;
    }
    return;
  }

  void Business::addCustomer(Customer person)
  {
    m_numPeople++;
    m_people[m_numPeople]=person;
    return;
  }

  void Business::make_a_sale()
  {
    float cMoney;
    bool bought = false;
    int itemNum = rand()%(m_numMerch-1)+1;
    string item = m_merch[itemNum];

    for(int f=0;f<=m_numPeople;f++)
    {
      bought=m_people[f].purchase(item);

      if(bought)
      {
        cMoney=m_people[f].getMoney();
        cMoney-=40;
        m_people[f].setMoney(cMoney);
        m_money+=40;
      }
    }
    return;
}
