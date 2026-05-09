#include<iostream>
using namespace std;
//  bool isPerfect(int n){
//   int sum = 0;
//   for(int i = 1; i < n; i++){
//     if(n%i==0) sum += i;
//   }
//   return sum == n;

// }

// // method 2 := O(sqrt)

bool isPerfect(int n){
  int sum = 1;
  for(int i = 2; i*i<=n; i++){
    if(n%i==0){
      if(i*i!=n) sum += (i+n/i);
      else sum += i;
    }
  }
  if(sum==n && n!= 1) return true;
  else return false;
}
int main(){
  int n ;
  cin>>n;
  cout<<(isPerfect(n)?"true":"false");
  return 0;

}

 