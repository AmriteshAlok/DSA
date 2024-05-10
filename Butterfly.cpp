//To create a butterfly pattern 

#include <iostream>
using namespace std;

void butterfly(int numOfRows){
  //To print the upper left triangle
  for(int i=0;i<numOfRows-2;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    //To print spaces in between the triangles
   for(int k=0;k<2*(numOfRows-i-1)-1;k++){
    cout<<" ";
   }
   //To print the upper right triangle
   for(int m=0;m<i+1;m++){
    cout<<"*";
   }
  cout<<endl;
  }
  //To print the lower left triangle
 for(int i=0;i<numOfRows;i++){
  //To print the lower left triangle
    for(int j=0;j<numOfRows-i-1;j++){
        cout<<"*";  
    }
   //To print the spaces in between the triangles
   for(int k=0;k<2*i+1;k++){
    cout<<" ";
   }
   //To print the lower right triangle
   for(int l=0;l<numOfRows-i-1;l++){
    cout<<"*";
   }
  cout<<endl;
  }
 
}

int main() {
  int n;
  cin>>n;
  numericStarFloydsTriangle(n);
  return 0;
}
