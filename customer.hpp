// CS 53 - Assignment 10
////////////////////////////
//NAME:  HICKS, MICHAEL / JENKINS, TYLER
//CLASS: CS 53
//SECTION: E
//DATE: 18 November, 2013

#include "customer.h"

Customer()
{
   m_cash = rand()%(250-4)+4;
   m_happiness = rand()%NIRVANA + 1;
}

/////////////////////////

template <typename T>
bool Customer::buy_something(const T& Corp)
{
  bool pSuccess=false;
  int chancetoPurchase;
  int product;
  
  if(m_numPurch < 20)
  {
    chancetoPurchase = rand()%2;
    if(chancetoPurchase == 1)
    { 
      if(m_cash >= aaaaaaaaaaaaaaaaaaaaaaaaa)
      {
         product = rand()%Corp.m_numMerch;
         m_purchases[cust.m_numPurch]=Corp.m_merch[product];
         m_happiness = mhappiness + 25;
         m_numPurch++;
         pSuccess=true;
      }
    }
  }
  m_happiness = m_happiness - 10;
  return pSuccess;
}

////////////////////////

void throw()
{
   
}

////////////////////////

ostream& operator <<(ostream& os, const Customer cust)
{
  os<<m_cName<<" has $"<<m_cash<<" and purchases ";
  for(int j=0;j<=m_numPurch;j++)
  {
    if(j==m_numPurch)
      os<<m_purchases[j]<<"."<<endl;
    else
      os<<m_purchases[j]<<", ";
  }
  return;
}

