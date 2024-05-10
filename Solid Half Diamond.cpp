//To create a Solid Half Diamond

#include <iostream>
using namespace std;

void solidHalfDiamond(int numOfRows){
  //To create upper half pyramid
  for(int i=0;i<numOfRows;i++){
    for(int j=0;j<i+1;j++){
      cout<<"*";
    }
   
  cout<<endl;
  }
  //To create lower half pyramid
  for(int i=0;i<numOfRows;i++){
     for(int k=0;k<numOfRows-i-1;k++){
      cout<<"*";
    }
    cout<<endl;
  }
}

int main() {
  int n;
  cin>>n;
  solidHalfDiamond(n);
  return 0;
}
