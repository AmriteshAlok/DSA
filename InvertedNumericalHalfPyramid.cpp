// To create Inverted Numerical Half Pyramid
#include<iostream>
using namespace std;

void invertedNumericHalfPyramid(int numOfRows)
{
  for(int i=0;i<numOfRows;i++)
 { 
   for(int j=0;j<numOfRows-i;j++ )
    {
     cout<<j+1<<" ";
    }
    cout<<endl;
 }
}

int main(){
 int n;
 cin>>n;
 invertedNumericHalfPyramid(n);

  return 0;
}
