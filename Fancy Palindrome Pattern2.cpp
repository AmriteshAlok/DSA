

#include <iostream>
using namespace std;

void fancyPatern(int numOfRows){
  //To print the upper pyramid of the pattern
  for(int i=0;i<numOfRows;i++){
    //To create initial stars and print the initial string
    for(int j=0;j<i+1;j++){
      if(j==0){
        cout<<"*"<<" ";
      }
      else{
      cout<<j<<" ";
      }
    }
    //To create last star and print the palindrome string
    for(int k=i-1;k>=0;k--){
      if(k==0){
        cout<<"*"<<" ";
      }
      else{
      cout<<k<<" ";
      }
    }
    cout<<endl;
  }

  //To print the lower pyramid of the pattern
 for(int i=1;i<numOfRows;i++){
  //To create the first star and print the initial string
  for(int j=0;j<numOfRows-i;j++){
    if(j==0){
      cout<<"*"<<" ";
    }
    else{
    cout<<j<<" ";
  }
  }
  //To create the last star and print the palindrome string
  for(int k=(numOfRows-i-1)-1;k>=0;k--){
    if(k==0){
      cout<<"*"<<" ";
    }
    else{
    cout<<k<<" ";
      }
  }
  cout<<endl;
 }
}

void anotherWay(int numOfRows){
  for(int i=0;i<numOfRows;i++){
    int count=0;
    for(int j=0;j<i+1;j++){
      if(j==0){
        cout<<"*"<<" ";
      }
      else{
      cout<<j<<" ";
      }
      count=j;
    }

    for(int k=count-1;k>=0;k--){
      if(k==0){
        cout<<"*"<<" ";
      }
      else{
      cout<<k<<" ";
      }
    }
    cout<<endl;
  }

 for(int i=0;i<numOfRows;i++){
    int count=0;
    for(int j=0;j<numOfRows-i-1;j++){
      if(j==0){
        cout<<"*"<<" ";
      }
      else{
      cout<<j<<" ";
      }
      count=j;
    }

    for(int k=count-1;k>=0;k--){
      if(k==0){
        cout<<"*"<<" ";
      }
      else{
      cout<<k<<" ";
      }
    }
    cout<<endl;
  }
 
}
int main() {
  int n;
  cin>>n;
  fancyPatern(n);
  return 0;
}
