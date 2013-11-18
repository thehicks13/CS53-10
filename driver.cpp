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
  string name1 = "Michael";
  string name2 = "Emma";
  string name3 = "Aaron";
  string bname1 = "Tyler's 5 & Dime";

  Customer SusanD(name1,SusanD.getMoney());
  Customer TuckerW(name2,TuckerW.getMoney());
  Customer AaronR(name3,AaronR.getMoney());

  Business BigBadCars(bname1,BigBadCars.getMoney());

  BigBadCars.addCustomer(SusanD);
  BigBadCars.addCustomer(TuckerW);
  BigBadCars.addCustomer(AaronR);

  BigBadCars.make_a_sale();
  BigBadCars.make_a_sale();
  BigBadCars.make_a_sale();

  BigBadCars.print();

  return 0;
}
