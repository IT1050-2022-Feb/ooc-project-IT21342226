#include<iostream>
#include<cstring>

class Staff//this details are protected
{
 private:
   int employeeID;//protected
   string name;//protected
   string username;//protected
   string password;//protected
   string mobile;//protected
 public:
   Staff();// default constructor
   Staff(int pemloyeeID,string pname,string pusername, string ppasswor, string pmobile);//parameterized constructors
   void displayStaff();
   ~Staff();//destructors
}