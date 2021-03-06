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

Customer::void set_names()
{
  istream in;
  in.open("people.txt");
  for(int i = 0; i < NUM_CUST; i++)
  {
     in >> m_cname[i];
     in >> m_inclination[i];
  }
  in.close();
  return;
}

////////////////////////

template <typename T>
bool Customer::buy_something(const T& Corp, int product)
{
  bool pSuccess=false;
  int chancetoPurchase;
  int product;
  
  if(m_numPurch < 20)
  {
    chancetoPurchase = rand()%2;
    if(chancetoPurchase == 1)
    { 
      if(m_cash >= m_merch.price[product])
      {
         m_purchases[cust.m_numPurch]=Corp.m_merch[product];
         cust.m_cash -= m_merch.price[product];
         m_happiness += 25;
         m_numPurch++;
         pSuccess=true;
         cout<<cust.m_cname<<" bought "<<cust.m_purchases[cust.m_numPurch]
             <<"for $"<<m_merch.price[product];
      }
    }
  }
  m_happiness = m_happiness - 10;
  return pSuccess;
}

////////////////////////

void throwItem(customer cust, int perp, int victim)
{
   if(cust[perp].numPurch > 0 && cust[perp].inclination != cust[victim].inclination)
   {
     cout<<cust[perp].m_cname<<" throws a "<<cust[perp].m_purchases[m_numPurch]
         <<" at "<<cust[victim].m_cname;
     cust[perp].m_purchases[m_numPurch] = " ";
     cust[perp].m_numPurch --;
     cust[victim].happiness -= 20;
     cust[perp].happiness += 5;
   }
   else
   {
      cust[perp].happiness -= 25;
   }
   return;
}

/////////////////////////

void rob(customer cust, int robber, int victim)
{
   stolenItem = rand()%victiim.m_numPurch;
   if(cust[robber].inclination == cust[victim].inclination && cust[vicitm].m_numPurch > 0
      && cust[robber].m_numPurch < MAX_P)
   {
     cust[robber].m_happiness += 25;
     cust[victim].m_happiness -= 20;
     cust[robber].m_purchases[numPurch + 1] = cust[victim].m_purchases[stolenItem];
     cust[victim].m_purchases[stolenItem] = " ";
     cust[victim].m_numPurch --;
   }
   
   else if(cust[robber].inclination == cust[victim].inclination)
   {
      cust[robber].happiness -= 5;
   }
   return;
}

/////////////////////////

void action(customer cust, int perp)
{
   int victim;
   int stolenItem;
   
   victim = rand()%m_numPeople;
   rob(cust, perp, victim);
   throwItem(cust, perp, victim);
   return;
}
/////////////////////////

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

/////////////////////////
int Customer::get_incline()
{
   return m_inclination;
}

////////////////////////
void shelbyville(customer patrons)
{
   int temp = patrons[num_cust];
   patrons[num_cust] = *this;
   *this = temp;
   cout<<temp.m_cname<<" has left for shelbyville.";
   num_cust--;
   return;
}
