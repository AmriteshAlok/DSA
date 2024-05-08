// To create a inverted Pyramid
#include <iostream>
using namespace std;

void invertedPyramid(int numOfRows){
  for(int i=0;i<numOfRows;i++)
  {
  //loop for printing spaces
   for(int j=0;j<i;j++){
    cout<<" ";
   }
  //loop for printing stars
   for(int k=0;k<numOfRows-i;k++){
    cout<<"* ";
   }
  cout<<endl;
  }
}
int main() {
  int n;
  cin>>n;
  invertedPyramid(n);
  return 0;
}
