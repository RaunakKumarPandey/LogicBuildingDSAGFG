#include<iostream>
using namespace std;
int oppositeFaceOfDice(int n){
  // int ans = 7-n;
  // return ans;
  return 7-n;
}
int main(){
  int n;
  cin>>n;
  cout<<oppositeFaceOfDice(n);
  return 0;
}