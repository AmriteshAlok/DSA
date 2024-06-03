//To sort 0s and 1s from an array

#include <iostream>
#include<vector>
using namespace std;

void sortZero(vector<int> arr){
  int start=0, end =arr.size()-1;
  
  //While loop can also be used 
  for(int i=0;i!=end;){
    if(arr[i]==0){
      swap(arr[start],arr[i]);
      start++;
      i++;
     
    }
    else{
      swap(arr[i],arr[end]);
      end--;
    }
  }
  
  //For printing the sorted array
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
}

int main() {
  vector<int> arr{0,1,1,1,0,1,0,0,0,1,0,1,1};

  sortZero(arr);
  
  return 0;
}
