//Leetcode Problem No. 540 Single Element in a Sorted Array

#include <iostream>
#include<vector>
using namespace std;

int findUniq(vector<int> &arr){
  int ans = 0;

  for(int i=0;i<arr.size();i++){
    //XORing all the elements to so that only unique element is left in the array
    ans = ans ^ arr[i];

  }
  return ans;
}
int main() {
  
  vector<int> arr(15);
  //This code even works if the array in unsorted
  for(int i=0;i<arr.size();i++){
   cin>>arr[i];
    cout<<arr[i]<<" ";
  }
  
  int uniq = findUniq(arr);

 cout<<endl<<"The Unique Element in the array is: "<<uniq;
  return 0;
}
