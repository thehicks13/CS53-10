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
    m_money += aaaaaaaaaaaaaaaaaaaaaaa;
  }
  return;
}

//////////////////////////////

void customers_leave(Customer people, const int num_cust)
{
   
}
}
