//To create Flyod's Triangle

#include<iostream>
using namespace std;

void floydsTrianlge(int numOfRows){
  int count=1;
  for(int i=0;i<numOfRows;i++){
    for(int j=0;j,i+1;j++){
      cout<<count;
      count++;
    }
    cout<<endl;
  }
}

int main(){
  int n;
  cin>>n;
  floydsTriangle(n);
  return 0;
}
