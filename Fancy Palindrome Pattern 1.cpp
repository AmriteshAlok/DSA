//To create a fancy palindrome pattern

#include <iostream>
using namespace std;

void fancyPattern(int numOfRows){
  for(int i=0;i<numOfRows;i++){
    //For printing stars on the left side
    for(int j=0;j<(2*numOfRows+1)-i-3;j++){
      cout<<"*";
    }
    
    //For printing numbers and stars in middle
    for(int k=0;k<i+1;k++){
    //For numbers
    cout<<i+1;
    //For stars
    if(k!=i){
      cout<<"*";
      }
    }
    
    //For printing stars on the right side
    for(int l=0;l<(2*numOfRows+1)-i-3;l++){
      cout<<"*";
    }
    
    cout<<endl;
  }
}

int main() {
  int n;
  cin>>n;
  fancyPattern(n);
  return 0;
}
