//To create a Hald Diamond using Numbers
#include <iostream>
using namespace std;

void numericHalfDiamond(int numOfRows){
  //To create upper half of the diamond
  for(int i=0;i<numOfRows-1;i++){
    for(int j=0;j<i+1;j++){
     
      cout<<i+3<<" ";
      
    }
  cout<<endl;
  }

  //To create lower half of the diamond
 for(int i=0;i<numOfRows;i++){
    for(int j=0;j<numOfRows-i-2;j++){
     
      cout<<numOfRows-i<<" ";
      
    }
  cout<<endl;
  }
}

int main() {
  int n;
  cin>>n;
  numericHalfDiamond(n);
  return 0;
}
