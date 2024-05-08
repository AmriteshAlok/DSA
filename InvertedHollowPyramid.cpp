//To create inverted Hollow Pyramid

#include<iostream>
using namespace std;

void invertedHolllowPyramid(int numOfRows)
{
  for(int i=0;i<numOfRows;i++)
    {
        for(int j=0;j<numOfRows-i;j++){
          if(i==0||i==numOfRows-1||j==0||j==numOfRows-i-1){
              cout<<"* ";
          }
          else{
            cout<<" ";
          }
        }
      cout<<endl;
    }
  
}
int main(){
  int n;
  cin>>n;
  invertedHollowPyramid(n);
}
