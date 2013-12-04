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
~~void stock()~~
Desc: Brings the items from the business in
Pre: businesses must have a txt file of their items
Pozt: The two businesses now have set items

~~void print()~~
Desc: prints the items each business has for sale to the screen. 
      Also prints to the screen who is in each store
Pre: the array of customers must be set 
Post: none

~~void addCustomer(Customer person)~~
Desc: Adds a person to the array of customers
Pre: 
Post:

~~void sell_stuff()~~
Desc: Calls the customer's buy_something function 
      and tries to sell an item to a customer.
Pre: a customer must be set
Post: Sells an item to customer if they had enough funds

~~void customer_leave(Customer people, const int num_cust)~~
Desc: 
Pre:
Post:

~~void getMoney(){return m_money}~~
Desc:
Pre:
Post:


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
      m_money(money),m_numPeople(0){stock()};
      Business():m_bName(""),m_money(0),m_numMerch(0),m_numPeople(0){};
      void print();
      void addCustomer(Customer person);
      void sell_stuff();
      void customers_leave(Customer people, const int num_cust);
      float getMoney(){return m_money};
  };

#endif
