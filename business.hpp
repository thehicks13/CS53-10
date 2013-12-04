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
  if(m_bName == 'Comics')
  {
    product merch[]="ComicItems.txt";
    ifstream fin;
    fin.open("ComicItems.txt");
    int i=0;
  }
  if(m_bName == 'Moes')
  {
    product merch[] =  "MoesItems.txt";
    ifstream fin;
    fin.open("MoesItems.txt");
    int i=0;
  }
  while(!fin.eof())
  {
    m_numMerch++;
    fin<<m_merch[i].price;
    getline(fin,m_merch.name[i],'\n');
    i++;
  }
  fin.close();
  return;
}

//////////////////////////////

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

////////////////////////////////

void Business::addCustomer(Customer person)
{
  m_numPeople++;
  m_people[m_numPeople]=person;
  return;
}

///////////////////////////////

void Business::sell_stuff()
{
  for(int i = 0; i < m_numPeople; i++)
  {
    m_people[i].buy_something(*this); 
    m_money += m_merch[product];
  }
  return;
}

//////////////////////////////

void Business::customers_leave(Customer citizens, const int num_cust)
{
  for(int i = 0; i < num_cust; i++)
  {
     citizens[i] = m_people[i];
     m_people[i] = "";
  }
}
