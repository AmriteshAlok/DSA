//To create Half Pyramid pattern

#include<iostream>
using namespace std;

void halfPyramid(int numOfRows)
{
 for(int i=0;i<numOfRows;i++)
{
  for(int j=0;j<i+1;j++)
{
  cout<<"* ";
}
cout<<endl;
}
}

int main(){
int n;
cin>>n;
halfPyramid(n);
}
