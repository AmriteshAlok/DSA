// To create a Pyramid

#include <iostream>
using namespace std;

void Pyramid(int numOfRows){
  for(int i=0;i<numOfRows;i++)
  {
  //loop for printing spaces
   for(int j=0;j<numOfRows-i-1;j++){
    cout<<" ";
   }
  //loop for printing stars
   for(int k=0;k<i+1;k++){
    cout<<"* ";
   }
  cout<<endl;
  }
}
int main() {
  int n;
  cin>>n;
  Pyramid(n);
  return 0;
}
