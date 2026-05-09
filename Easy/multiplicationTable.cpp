// #include<iostream>
// using namespace std;
// int main(){
//   int n ;
//   cin>>n;
//   for(int i = 1; i<=n; i++){
//     cout<<n<<"*"<<i<<"="<<
//     n*i<<endl;
//   }
// }

// Recursive approach
#include<iostream>
using namespace std;
void printTable(int n, int i = 1){
  if(i>10) return;
  cout<<n<<"*"<<i<<"="<<n*i<<endl;
  i++;
  printTable(n,i);
}
int main(){
  int n;
  cin>>n;
  printTable(n);
}