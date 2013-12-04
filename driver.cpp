// CS 53 - Assignment 10
////////////////////////////
//NAME:  HICKS, MICHAEL / JENKINS, TYLER
//CLASS: CS 53
//SECTION: E
//DATE: 18 November, 2013

#include <iostream>
#include "customer.h"
#include "business.h"
using namespace std;

int main()
{
  srand(time(NULL));
  Business Moes;
  Business Comics;
  Customer patrons[NUM_CUST];
  int num_cust = NUM_CUST;
  int cycles = 0;
  int Moes_happiness = 0;
  int Comics_happiness = 0;
  patrons.set_names();
  cout<<"Customers:"<<endl;
  for(int i = o; i < NUM_CUST; i++)
    cout<<patrons[i]<<endl;
  do{
    for(int i = 0; i <num_cust; i++)
    {
      if(patron[i].inclination == 0)
        Moes.addCustomer();
      else if(patron[i].inclination == 1)
        Comics.addCustomer();
    }
    Moes.sell_stuff();
    Comics.sell_stuff();
    for(int i = 0; i < num_cust; i++)
    {
      int switcheroo = rand()%NUM_CUST;
      customer temp = patrons[i];
      patrons[i] = patrons[switcheroo];
      patrons[switcheroo] = temp;
    }
    for(int i = 0; i < num_cust; i++)
    {
      customer.action(patrons, i);
    }
    for(int i = 0; i < num_cust; i++)
    {
      if(patron[i] > 90 || patron[i] < 10)
      {
        patron[i].Shelbyville(patrons);
      }
    }
    cycles++;
    cout<<"Customers:"<<endl;
    for(int i = o; i < NUM_CUST; i++)
    {
      cout<<patrons[i]<<" with purchases:"<<endl;
      for(int k = 0; k < patrons[i].m_numPurch; k++)
        cout<<patrons[i].m_purchases[k]<<endl;
    }
  }while(num_cust >= 1 || cycles = 20);
  for(int i = 0; i < NUM_CUST; i++)
  {
    int store = patrons[i].getline();
    if(store = 0)
      Moes_happiness += patrons[i].m_happiness;
    else if(store = 1)
      Comics_happiness += patons[i].m_happiness;
  }
  return 0;
}
