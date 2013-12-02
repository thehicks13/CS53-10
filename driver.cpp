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
  patrons.set_names();
  for(int i = 0; i <NUM_CUST; i++)
  {
    if(patron[i].inclination == 0)
      Moes.addCustomer();
    else
      Comics.addCustomer();
  }
  Moes.sell_stuff();
  Comics.sell_stuff();
  for(int i = 0; i < NUM_CUST; i++)
  {
    int switcheroo = rand()%NUM_CUST;
    customer temp = patrons[i];
    patrons[i] = patrons[switcheroo];
    patrons[switcheroo] = temp;
  }
  for(int i = 0; i < NUM_CUST; i++)
  {
    customer.action(patrons, i);
  }
  for(int i = 0; i < NUM_CUST; i++)
  {
    if(patron[i] > 90 || patron[i] < 10)
    {
      patron[i].Shelbyville();
    }
  }
  return 0;
}
