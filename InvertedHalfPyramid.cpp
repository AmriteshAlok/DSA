// To create Inverted Half Pyramid

#include<iostream>
using namespace std;

void invertedHalfPyramid(int numOfRows)
{
  for(int i=0;i<numOfRows;i++)
 { 
   for(int j=i+1;j<numOfRows;j++)
   {
    cout<<"* ";
   }
  cout<<endl;
 }
}

int main(){
int n;
cin>>n;

invertedHalfPyramid(n);

return 0;
}
