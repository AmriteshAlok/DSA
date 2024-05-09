//To create a Flipped Solid Diamond

#include<iostream>
using namespace std;

void flippedSolidiamond(int numOfRows){
 
 for(int i=0;i<numOfRows;i++){
   //To create the upper left pyramid of the diamond
  for(int j=0;j<numOfRows-i;j++){
    cout<<"*";
  }
  //To create spaces in between
   for(int m=0;m<i;m++){
      cout<<" "<<" ";
    }
  //To create the upper right pyramid of the diamond
  for(int l=0;l<numOfRows-i;l++){
      cout<<"*";
    }
  cout<<endl;
 }
 

 for(int i=1;i<numOfRows;i++){
   //To create the lower left pyramid of the diamond
  for(int j=0;j<i+1;j++){
    cout<<"*";
  }
  //To create spaces in between
  for(int k=0;k<numOfRows-i-1;k++){
    cout<<" "<<" ";
  }
  //To create the lower right pyramid
  for(int m=0;m<i+1;m++){
    cout<<"*";
  }
  cout<<endl;
 }

}

int main(){
  int n;
  cin>>n;
  flippedSolidiamond(n);
  return 0;
}
