//To create a Rhombus

#include<iostream>
using namespace std;

void rhombus(int numOfRows){
  for(int i=0;i<numOfRows;i++)
  {
    for(int j=0;j<numOfRows-1-i;j++){
      cout<<" ";
    }

    for(int k=0; k<=numOfRows+1;k++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }

}
int main(){
 int n;
 cin>>n;
 rhombus(n);

  return 0;
}
