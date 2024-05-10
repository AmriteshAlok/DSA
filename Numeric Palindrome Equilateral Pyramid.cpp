//To create a Numeric Palindrome Equilateral Pyramid

#include <iostream>
using namespace std;

void numericPalindromeEquilateralPyramid(int numOfRows){
  for(int i=0;i<numOfRows;i++){
    //for printing spaces
    for(int j=0;j<numOfRows-i;j++){
        cout<<" "<<" ";
      }
     //for printing initial string
    for(int k=0;k<i+1;k++){
      cout<<k+1<<" ";
    }
    //for printing reversed string
    for(int l=i;l>0;l--){
      cout<<l<<" ";
    }
    cout<<endl;
  }
}

int main() {
  int n;
  cin>>n;
  numericPalindromeEquilateralPyramid(n);
  return 0;
}
