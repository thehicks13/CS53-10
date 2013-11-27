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

template <typename T>
bool Customer::buy_something(T& cust, const T& Corp)
{
  bool pSuccess=false;
  int chancetoPurchase;
  int product;
  
  if(cust.m_numPurch < 20)
  {
    chancetoPurchase = rand()%2;
    if(chancetoPurchase == 1)
    { 
      if(cust.m_cash >= aaaaaaaaaaaaaaaaaaaaaaaaa)
      {
         product = rand()%Corp.m_numMerch;
         cust.m_purchases[cust.m_numPurch]=Corp.m_merch[product];
         cust.m_cash = cust.m_cash - aaaaaaaaaaaaaaaaaaa;
         cust.m_happiness = cust.m_happiness + 25;
         Corp.m_money = Corp.m_money + aaaaaaaaaaaaaaaaaa;
         cust.m_numPurch++;
         pSuccess=true;
      }
    }
  }
  cust.m_happiness = cust.m_happiness - 10;
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
