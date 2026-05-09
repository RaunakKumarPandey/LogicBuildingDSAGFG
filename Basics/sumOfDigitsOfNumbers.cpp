// #include<iostream>
// using namespace std;
// int sumDigits(int n){
//   int sum = 0;
//   while(n!=0){
//     int last = n%10;
//     sum += last;
//     n = n/10;
//   }
//   return sum;

// }
// int main(){
//   int n ;
//   cin>>n;
//   cout<<sumDigits(n);
//   return 0;
// }
 // method 2 Recursion
// #include<iostream>
// using namespace std;
// int sumDigits(int n){
//   if(n==0) return 0;
//   return (n%10) + sumDigits(n/10);
// }
// int main(){
//   int n ;
//   cin>>n;
//   cout<<sumDigits(n);
//   return 0;
// }

 // method 3 String Conversion
 #include<iostream>
 #include<string>
using namespace std;
int sumDigits(int n){
  int sum = 0;
  string s = to_string(n);
  for(int ch : s){
    sum += ch - '0'; // common trick to convert character into its integers value
  }
  return sum;
}
int main(){
  int n ;
  cin>>n;
  cout<<sumDigits(n);
  return 0;
}

