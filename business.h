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
~~stock()~~
DESC: "stocks" the business with items to sell
PRE:  none
POST: returns nothing, but sets values in m_merch equal to strings from a file
~~print()~~
DESC: prints business info. to the screen
PRE:  none
POST: returns nothing, but prints to the screen
~~addCustomer()~~
DESC: adds a customer to the business's list of them
PRE:  none
POST: returns nothing, but adds a customer to the array of customers
~~make_a_sale()~~
DESC: forcibly sells a random item from the store to someone for $40
PRE:  none
POST: returns nothing, but adds money to the business and takes it from a
      customer
      ~~getMoney()~~
      DESC: makes the business's money accessible from outside the class
      PRE:  none
      POST: returns the value of m_money
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
      void make_a_sale();
      float getMoney(){return m_money;}
  };

#endif
