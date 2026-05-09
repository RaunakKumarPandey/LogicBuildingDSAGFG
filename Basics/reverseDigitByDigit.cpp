// #include<iostream>
// using namespace std;
// int reverseDigits(int n){
//   int revNum = 0;
//   while(n>0){
//     revNum = revNum*10 + n%10;
//     n/10;
//   }
//   return revNum;
// }
// int main(){
//   int n ;
//   cin>>n;
//   cout<<reverseDigits(n);
//   return 0;
// }

// //method 2 Recursion calls,

/*
#include <bits/stdc++.h>
using namespace std;

void reverseDigits(int n, int &revNum, int &basePos) {
    if (n > 0) {
        reverseDigits(n / 10, revNum, basePos);  
        revNum += (n % 10) * basePos;             
        basePos *= 10;
    }
}

int main() {
    int n = 4562;
    int revNum = 0;
    int basePos = 1;
    reverseDigits(n, revNum, basePos);  
    cout << revNum;
    return 0;
}
  */
 
// // Recursion Calls4
// reverseDigits(4562)
//     reverseDigits(456)
//         reverseDigits(45)
//             reverseDigits(4)
//                 reverseDigits(0)

// // more easier recursive approach    

/*
#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int n = 4562;
    cout << reverseNumber(n);
} */

 // // string method 

 /*
 #include<iostream>
 #include<string>
 using namespace std;
 int reverseDigits(int n){
  string s = to_string(n);
  reverse(s.begin(), s.end());
  n = stoi(s);
  return n;
 }
 int main(){
  int n;
  cin>>n;
  cout<<reverseDigits(n);
  return 0;
 }
  */