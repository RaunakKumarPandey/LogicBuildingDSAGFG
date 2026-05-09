/* #include<iostream>
using namespace std;

bool isprime(int n){
  if(n<=1)
      return false;

  for(int i = 2; i<=n/2; i++){
    if(n%i == 0) return false;
    
  }
  return true;

}

int main(){
  int n;
  cin>>n;
  isprime(n) ? cout<< "true\n" : cout << "false\n";
  return 0;
  
} */

// If a number n has a factor greater than √n, then it must also have a factor smaller than √n.

// so method 2 can be 
#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int n){
  if(n<=1)
      return false;

  for(int i = 2; i<=sqrt(n); i++){
    if(n%i == 0) return false;
    
  }
  return true;

}

int main(){
  int n;
  cin>>n;
  isprime(n) ? cout<< "true\n" : cout << "false\n";
  return 0;
  
}

 // Another approach may be based on 6k+i.
