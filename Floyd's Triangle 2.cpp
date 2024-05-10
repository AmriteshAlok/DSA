//Floyd's Triangle Variation

#include <iostream>
using namespace std;

void flyodsTriangle(int numOfRows){
  int count=1;
  for(int i=0;i<numOfRows;i++){
    for(int j=0;j<i+1;j++){
     
      cout<<count<<" ";
      count++;
    }
   
  cout<<endl;
  }
  
 for(int i=0;i<numOfRows;i++){
    for(int j=0;j<numOfRows-i;j++){
     
      cout<<count-1<<" ";
      count--;
    }
   
  cout<<endl;
  }
 
}

int main() {
  int n;
  cin>>n;
  flyodsTriangle(n);
  return 0;
}
