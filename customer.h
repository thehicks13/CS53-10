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

class Customer
{
  private:
    string m_cName;
    float m_cash;
    string m_purchases[MAX_P];
    short m_numPurch;
  public:
    Customer(string &name, const float money):m_cName(name),m_cash(money),
      m_numPurch(0){};
    Customer():m_cName(""),m_cash(rand()%(250-4)+4)
      {for(int i=0;i<MAX_P;i++) m_purchases[i].clear();};
    bool purchase(string item);
    string getName(){return m_cName;}
    float getMoney(){return m_cash;}
    void setMoney(const float cash){m_cash=cash; return;}
    void print();
};

#endif
