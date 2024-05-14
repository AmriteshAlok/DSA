//To create a Numeric Palindrome Pyramid


#include <iostream>
using namespace std;

void numericPalindromeEquilateralPyramid(int numOfRows){
  int count=1;
  for(int i=0;i<numOfRows;i++){
    //for printing spaces
    for(int j=0;j<numOfRows-i;j++){
        cout<<" "<<" ";
      }
     //for printing initial string
    for(int k=0;k<i+1;k++){
      cout<<count<<" ";
      count++;
    }
    //for printing reversed string
    for(int l=1;l<i+1;l++){
      cout<<count-2<<" ";
      count--;
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
