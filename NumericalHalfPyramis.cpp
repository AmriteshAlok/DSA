// To create Numeric Half Pyramid

#include<iostream>
using namespace std;

void numericHalfPyramid(int numOfRows)
{
  for(int i=0;i<numOfRows;i++)
   {
      for(int j=0;j<i+1;j++)
       {
         cout<<j+1<<" ";  
       }
     cout<<endl;
   }
}
int main(){
  int n;
  cin>>n;
  numericHalfPyramid(n);
}
