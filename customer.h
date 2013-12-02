// CS 53 - Assignment 10
////////////////////////////
//NAME:  HICKS, MICHAEL / JENKINS, TYLER
//CLASS: CS 53
//SECTION: E
//DATE: 18 November, 2013

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_P = 20;
const int DESPAIR = 0;
const int NIRVANA = 100;
const int MAX_CASH = 101;
const int NUM_CUST = 20;
/*
~~void set_name(Customer peoples)~~
Desc: Sets the name and inclination of all the customers in the array
Pre: an array of customers must e initialized
Post: the array of customers now have names an inclination to a store

~~ template <typename T>
  bool buy_something(const T& Corp)~~
Desc: Decides whether or not the customer buys something or is able to
Pre: the customer's funds must be set
Post: If the customer was able to buy something it's happiness went up,
      if not, it went down
      
~~void throwItem(customer cust, int perp, int victim)~~
Desc: 

*/

struct product
{
  string name;
  float price;
};

class Customer
{
  private:
    string m_cName;
    float m_cash;
    product m_purchases[MAX_P];
    short m_numPurch;
    int m_happiness;
    bool m_inclination;
  public:
    Customer();
    void set_name(Customer peoples);
    template <typename T>
    bool buy_something(const T& Corp);
    void throwItem(customer cust, int perp, int victim);
    void rob(customer cust, int perp);
    void action(customer cust, int perp, int victim);
    friend ostream& operator <<(ostream& os, const Customer cust);
    string getName(){return m_cName;}
    float getMoney(){return m_cash;}
    void setMoney(const float cash){m_cash=cash; return;}
    void print();
    int get_incline();
};

#endif
