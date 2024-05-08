// To create Hollow Rectangle
#include<iostream>
using namespace std;

void hollowRectangle(int numOfRows, int numOfColumns){
   for(int i=0;i<numOfRows;i++){
     for(int j=0;j<numOfRows;j++){
        if(i==0||i==numOfRows-1||j==0||j==numOfColumns){
             cout<<"*"<<" ";
             }
          else{
            cout<<" ";
              }
           }
   }
 }

int main(){
  int n,m;
  cin>>n>>m;

  hollowRectangle(n,m);
}
