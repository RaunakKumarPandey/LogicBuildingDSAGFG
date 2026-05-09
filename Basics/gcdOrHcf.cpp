/*#include<iostream>
using namespace std;
int gcd(int a, int b){
  int result = min(a,b);
  while(result>0){
    if(a%result==0 && b%result == 0) break;
    result--;
  }
  return result;
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b);
  return 0;
}*/

// Method 2 : Eculidean algorithm
/*#include<iostream>
using namespace std;
#include<math.h>
int gcd(int a, int b){
  if(a==0) return b;
  if(b==0) return a;
  if(a==b) return a;
  if(a>b) return gcd(a-b,b);
  return (a,b-a);
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b);
  return 0;
}*/

// method 3 :- optimised Eculidean algorithm

/*#include<iostream>
using namespace std;
int gcd(int a, int b){
  if(a==0)return b;
  if(b==0) return a;
  if(a==b) return a;
  if(a>b){
    if(a%b==0) return b;
    else  return gcd(a-b,b);
  }
  else{
    if(b%a==0)return a;
    else  return gcd(a,b-a);
  }
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b);
} */

// method 4 Remainder Eculidian Method

/*#include<stdio.h>
using namespace std;
int gcd(int a, int b){
  return b == 0 ? a : gcd(b,a%b);
}
int main(){
  int a, b;
  cin>>a>>b;
  cout<<gcd(a,b);
  return 0;
} */

// method 5 Built_in function

#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b){
  return __gcd(a,b);
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b);
  return 0;
}