// CS 53 - Assignment 10
////////////////////////////
//NAME:  HICKS, MICHAEL / JENKINS, TYLER
//CLASS: CS 53
//SECTION: E
//DATE: 18 November, 2013

#ifndef BUSINESS_H
#define BUSINESS_H
#include "customer.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*
~~void Business::stock()~~
Desc: 

*/
  class Business
  {
    private:
      string m_bName;
      float m_money;
      short m_numMerch;
      short m_numPeople;
      product m_merch[10];
      Customer m_people[10];
    public:
      void stock();
      Business(string &name, const float money):m_bName(name),
      m_money(money),m_numPeople(0){stock();};
      Business():m_bName(""),m_money(0),m_numMerch(0),m_numPeople(0){};
      void print();
      void addCustomer(Customer person);
      void sell_stuff();
      void customers_leave(Customer people, const int num_cust);
      float getMoney(){return m_money;}
  };

#endif
