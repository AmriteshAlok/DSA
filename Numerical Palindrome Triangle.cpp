//To create a numerical palindrome triangle

#include <iostream>
using namespace std;

void palindrome(int num){
  for(int i=0;i<num;i++){
    //To print the string
    for(int j=0;j<i+1;j++){
      cout<<j+1<<" ";
    }
    //To print the reverse of the string
    for(int k=i;k>0;k--){
      
      cout<<k<<" ";
    }
    cout<<endl;
  }
}

int main() {
  int n;
  cin>>n;
  palindrome(n);
  return 0;
}
