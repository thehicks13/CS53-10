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
Desc: A random custromer throws an item at another customer if the customer is 
      a different store
Pre: Inclination has to have been intialized
Post: The perps happiness goes up by 5, the victim's happiness goes down by 25

~~ void rob(customer cust, int robber, int victim)~~
Dec: A random customer tries to steal an item from another customer.
Pre: Inclination has to have been initalized
Post: If the robber succeded, his/ her happiness goes up by 25 & the victim's
      goes down by 20. If the robber failed, his/ her happiness goes down by 5

~~void action(customer cust, int perp)
Desc: randomises who the victim is for the rob & throw function. Calls the throw
      rob functions
Pre: none
Post: the victim has either been stolen from or has had an item thrown at them

~~ostream& operator <<(ostream& os, const Customer cust)~~
Desc: displays the name of the customers, their money, and what items they have
Pre: none
Post: the name of the customers, their money, and their items have been outputed 
      to the screen
      
~~int Customer::get_incline()~~
Desc: returns the inclination of the customer
Pre: none
Post: returns the inclination of the customer

~~void shelbyville()~~
Desc: 
Pre:
Post:

~~void shuffle[Customer peoples]~~
Desc:
Pre:
Post:

~~void storeHappiness[Custoemr peoples]~~
Desc:
Pre:
Post:

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
    void shelbyville();
    void shuffle[Customer peoples];
    void storeHappiness[Customer peoples];
};

#endif
