#include <iostream>
#include<array>
using namespace std;

void swap(int &a, int &b){
  int temp=a;
  a=b;
  b=temp;
}

void printArray(array<int, 7> arr){
    for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
}

void reverseArray(array<int, 7> arr){
  int start=0,end=arr.size()-1;

  while(start<=end){
    if(start<end){
      swap(arr[start],arr[end]);
    }
    start++;
    end--;
  }

  printArray(arr);
}

int main() {
  array<int, 7> arr{};
  int size = arr.end()-arr.begin();
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

    cout<<"Before reversing the array: "<<endl;
    printArray(arr);
    
    cout<<endl<<"After reversing the array: "<<endl;
    reverseArray(arr);

  return 0;
}
