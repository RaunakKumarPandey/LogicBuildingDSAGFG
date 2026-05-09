#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main (){
    int arr1[2];
    int arr2[2];
    for(int i = 0; i<2; i++){
      cin>>arr1[i];
    }
    for(int i = 0; i<2; i++){
      cin>>arr2[i];
    }
    int den = arr1[1]*arr2[1]/__gcd(arr1[1],arr2[1]);
    int num = arr1[0]*(den/arr1[1]) + arr2[0]*(den/arr2[1]);
    int cd = __gcd(num,den);
    den = den/cd;
    num = num/cd;
    int ans[2] = {num,den};
    for(int i = 0; i<2; i++){
      cout<< ans[i]<<" ";
    } 
    return 0;
    
}