//To create a Numeric Inverted Hollow Pyramid

#include <iostream>
using namespace std;

void numericInvertedHollowPyramid(int num){
  for(int i=0;i<num;i++){
    for(int j=0;j<num-i;j++){
      if(j==0||j==num-i-1||i==0){
        cout<<j+1<<" ";
      }
      else{
        cout<<" "<<" ";
      }
    }
    cout<<endl;
  }
}

int main() {
  int n;
  cin>>n;
  numericInvertedHollowPyramid(n);
  return 0;
}
