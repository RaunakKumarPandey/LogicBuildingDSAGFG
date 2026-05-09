#include<iostream>
using namespace std;
int lcd(int a, int b){
  int i = 2;
  if(a%b==0) return a;
  if(b%a==0) return b;
  if(a>b) {
    for(int i = a; i<=a*b;i+=a){
      if(i%b==0)return i;
    }
  }
  if(b>a) return lcd(a,b*i++);
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<lcd(a,b);
}