// method 1 nested loop 
// method 2
#include<iostream>
#include<math.h>
using namespace std;
int countPairs(int n){
  int count = 0;
  for(int i = 1; i<=round(cbrt(n));i++){
    int cb = i*i*i;
    int diff = n-cb;
    int cbrtDiff = round(cbrt(diff));
    if(cbrtDiff*cbrtDiff*cbrtDiff==diff){
      count++;
    }
  }
  return count;
}
int main(){
  int n;
  cin>>n;
  cout<<countPairs(n)<<endl;
  return 0;

}