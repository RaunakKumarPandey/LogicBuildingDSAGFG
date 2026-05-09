#include<iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int rem = n/m;
  if(n*m>0){
    int n1 = abs(n-(rem+1)*abs(m));
     int n2= abs(n-(rem*abs(m)));
     if(n1<n2) cout<<(rem+1)*abs(m);
     else cout<< rem*abs(m);
  }
  else{
  int n1 = abs(n-(rem-1)*abs(m));
     int n2= abs(n-(rem*abs(m)));
     if(n1<=n2) cout<<(rem-1)*abs(m);
     else cout<< rem*abs(m);
    }

}