//To create a palindrome of alphabets

#include <iostream>
using namespace std;

void palindrome(int num){
  for(int i=0;i<num;i++){
    //To print the string
    for(int j=0;j<i+1;j++){
      int ans = j+1;
      char charac= ans + 'A'-1;
      cout<<charac<<" ";
    }
    //To print the reverse of the string
    for(int k=i;k>0;k--){
       int ans = k;
      char charac= ans + 'A'-1;
      cout<<charac<<" ";
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
