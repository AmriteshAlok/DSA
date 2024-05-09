//To create a Hollow Pyramid

#include<iostream>
using namespace std;

void hollowPyramid(int numOfRows){
  //for outer loop
  for(int i=0;i<numOfRows;i++){
    //for Spaces
    for(int j=0;j<numOfRows-i-1;j++){
      cout<<" ";
    }
    //For Stars
    for(int k=0;k<i+1;k++){
      if(k==0||k==i||i==numOfRows-1){
        cout<<"* ";
      }
      //For spaces in between stars
      else{
        cout<<" ";
      }
    }
  }
}

int main(){
  int n;
  cin>>n;
  hollowPyramid(n);
  return 0;
}
