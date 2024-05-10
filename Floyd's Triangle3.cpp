// To create a variation of Floyd's Triangle

#include <iostream>
using namespace std;

void numericStarFloydsTriangle(int numOfRows){
  int count=1;
  //To print the upper half of the triangle
  for(int i=0;i<numOfRows-1;i++){
    for(int j=0;j<i+1;j++){
     
      cout<<count;
      if(j!=i){
        cout<<"*";
      }
      count++;
    }
   
  cout<<endl;
  }
  //To print lower half of the triangle
 for(int i=0;i<numOfRows;i++){
    for(int j=0;j<numOfRows-i-1;j++){
     
      cout<<count-1;
        if(j!=numOfRows-i-1){
        cout<<"*";
      }
      count--;
    }
   
  cout<<endl;
  }
 
}

int main() {
  int n;
  cin>>n;
  numericStarFloydsTriangle(n);
  return 0;
}
