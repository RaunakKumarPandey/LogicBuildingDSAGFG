#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  // method 1 : using third variable
  int temp = a;
     a = b;
     b = temp;
     cout<<"a = "<<a<<endl<<" b = "<<b<<endl; 
  // method 2 without using third variable
  // using arithmetic operators
  a = a+b;
  b = a-b;
  a = a- b;
  cout<<"a = "<<a<<endl<<" b = "<<b<<endl; 
   // using bitwise XOR operator
   a = a^b;
   b = a^b;
   a = a^b;
   cout<<"a = "<<a<<endl<<" b = "<<b<<endl; 
   // method 3 : using Built - in Swap function
   swap(a,b);
   cout<<"a = "<<a<<endl<<" b = "<<b<<endl; 
}