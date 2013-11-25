// CS 53 - Assignment 10
////////////////////////////
//NAME:  HICKS, MICHAEL / JENKINS, TYLER
//CLASS: CS 53
//SECTION: E
//DATE: 18 November, 2013

#include "customer.h"

Customer()
{
   m_cName = "";
   m_cash = rand()%(250-4)+4;
   m_happiness = rand()%NIRVANA + 1;
}

bool Customer::purchase(string item)
{
  bool pSuccess=false;
  if(m_numPurch < 20)
  {
    m_numPurch++;
    m_purchases[m_numPurch]=item;
    pSuccess=true;
  }
  return pSuccess;
}

void Customer::print()
{
  cout<<m_cName<<" has $"<<m_cash<<" and purchases ";
  for(int j=0;j<=m_numPurch;j++)
  {
    if(j==m_numPurch)
      cout<<m_purchases[j]<<"."<<endl;
    else
      cout<<m_purchases[j]<<", ";
  }
  return;
}
