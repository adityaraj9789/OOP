#include<iostream>
#include<string>
using namespacestd;

class Employee{
    public:
    int emp_id;
    float emp_name;
    int emp_phone;

void display(){
    cout<<"-----------EMPLOYEE DETAILS-----------"<<endl;
    cout<<"Employee ID: "<<emp_id<<endl;
    cout<<"EMployee Name: "<<emp_name<<endl;
    cout<<"Employee Phone no.: "<<emp_phone<<endl;
}
};
int main(){
    employee e1,e2;
   cout<<"Enter employee id: "<<endl;
   cin>>e1.emp_id;
   cout<<"Enter employee name: "<<endl;
   cin>>e1.emp_name;
   cout<<"Enter employee phone number: "<<endl;
   cin>>e1.emp_phone;
   e1.display();
   e2.display();
   return 0;
  
}
