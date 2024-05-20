//To create a function to check if a number is prime or not

#include <iostream>
#include<cmath>
using namespace std;

bool checkPrime(int num){
    if(num<=1){
        return false;
      }

  for(int i=2;i<=sqrt(num);i++){
      if(num%i==0){
        return false;
      }
    }
        return true;
}

int main() {
  int n;
  cin>>n;
  bool ans;

    ans = checkPrime(n);
    cout<<ans;
  }
