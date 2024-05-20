//To print all the prime upto N

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

  for(int i=0;i<n+1;i++){
      checkPrime(i);
      if(checkPrime(i)==true){
        cout<<i<<endl;
      }
  }
 
  
  return 0;
}
