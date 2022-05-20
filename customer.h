#include<iostream>
#include<cstring>

class Customer
{
private:
   int c_ID ;
   string c_name;
   string c_username;
   string c_password;
   string c_mobile;
   int c_noOfRes;
public:
   Customer();// default constructor
   Customer( int pc_ID, string pc_name, string pc_username, string pc_password, string pc_mobile);//parameterized constructor
   void displayCustomer();
   void displayCustomerName();
   void validate();
   ~Customer();//destructor
};
