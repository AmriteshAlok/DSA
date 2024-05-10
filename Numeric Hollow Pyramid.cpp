//To create a numeric hollow pyramid

#include <iostream>
using namespace std;

void numericHollowPyramid(int num){
  for(int i=0;i<num;i++){
    for(int j=0;j<i+1;j++){
      if(j==0||j==i||i==num-1){
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
  numericHollowPyramid(n);
  return 0;
}
