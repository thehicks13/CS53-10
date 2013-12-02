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
~~purchase()~~
DESC: adds an item to a customer's purchases if they have room for it
PRE:  none
POST: returns a bool, depending on whether or not the person had room for
      another item
~~getName()~~
DESC: makes the name available for use outside the class
PRE:  none
POST: returns the string of m_cName
~~getMoney()~~
DESC: makes the money available for use outside the class
PRE:  none
POST: returns the value of m_cash
~~setMoney()~~
DESC: sets m_cash equal to the value sent to it
PRE:  none
POST: returns nothing, but changes the value of m_cash
~~print()~~
DESC: prints out details of a customer to the screen
PRE:  none
POST: returns nothing, but prints to the screen
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
    void throwItem();
    void rob(customer cust, int perp);
    friend ostream& operator <<(ostream& os, const Customer cust);
    string getName(){return m_cName;}
    float getMoney(){return m_cash;}
    void setMoney(const float cash){m_cash=cash; return;}
    void print();
    int get_incline();
};

#endif
