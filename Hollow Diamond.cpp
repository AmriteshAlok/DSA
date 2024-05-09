?? To create a Hollow Diamond
//To create a Diamond Pattern

#include<iostream>
using namespace std;

void diamond(int numOfRows){
  //To create the upper pyramid of the diamond
 for(int i=0;i<numOfRows;i++){
  for(int j=0;j<numOfRows-i-1;j++){
    cout<<" ";
  }
  
  for(int k=0;k<2*i+1;k++){
    if(k==0||k==2*i){
    cout<<"*";
    }
    else{
      cout<<" ";
    }
  }
  cout<<endl;
  }
  
  //To create the lower pyramid of the diamond
  for(int m=1;m<numOfRows;m++){
    for(int n=0;n<m;n++){
      cout<<" ";
    }
    //To print stars where needed
    for(int q=0;q<2*numOfRows-2*m-1;q++)
    {
      if(q==0||q==2*numOfRows-2*m-2){
      cout<<"*";
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
  diamond(n);
  return 0;
}
