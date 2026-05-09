// // Naive Approach
// #include<iostream> 
// using namespace std;
// void evenOrOdd(int n){
//   if(n%2==0) cout<<"Even";
//   else cout<<"Odd";
// }
// int main(){
//   int n;
//   cin>>n;
//   evenOrOdd(n);
// }

// Efficient Approach

#include<iostream>
using namespace std;
 bool isEven(int n){
  if((n&1)==0) return true;
  else return false;
 }
int main(){
  int n;;
  cin>>n;
  if(isEven(n)==true){
    cout<<"Even";
  }
  else cout<<"Odd";
}