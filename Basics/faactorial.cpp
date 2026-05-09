#include<iostream>
using namespace std;
  int fact(int n){
    if(n==1||n==0) return 1;
    int value = n*fact(n-1);
    return value;
  }
int main(){
    int n ;
    cin>>n;
    cout<<fact(n);
}