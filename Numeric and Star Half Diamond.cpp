//To create Ha Diamond using Numbers and Stars

#include<iostrean> 
using namespace std;

void numericHalfDiamond(int numOfRows){
  
  for(int i=0;i<numOfRows-1;i++){
    for(int j=0;j<i+1;j++){
     
      cout<<i+1;
      if(j!=i){
        cout<<"*";
      }
    }
   
  cout<<endl;
  }
  
 for(int i=0;i<numOfRows;i++){
    for(int j=0;j<numOfRows-i;j++){
     
      cout<<numOfRows-i;
        if(j!=numOfRows-i-1){
        cout<<"*";
      }
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
