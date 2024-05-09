//To create a Diamond Pattern

#include<iostream>
using namespace std;

void diamond(int numOfRows){
  //To create the upper pyramid of the diamond
 for(int i=0;i<numOfRows;i++){
  for(int j=0;j<numOfRows-i-1;j++){
    cout<<" ";
  }
  
  for(int k=0;k<i+1;k++){
    cout<<"* ";
  }
  cout<<endl;
  }

  //To create the lower pyramid of the diamond
  for(int m=1;m<numOfRows;m++){
    for(int n=0;n<m;n++){
      cout<<" ";
    }
    for(int q=0;q<numOfRows-m;q++)
    {
      cout<<"*"<<" ";
    }
    cout<<endl;
    }
}

int main(){
  int n;
  cin>>n;
  diamond(n);
  return 0;
}
