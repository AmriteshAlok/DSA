//Here we do union of two arrays without using any STL apart from vector. Also the result array is unsorted

#include <iostream>
#include<vector>
using namespace std;

void unionArray(vector<int> &arr, vector<int> &brr){
    vector<int> crr;
    //Insertina all the elements from arr
    for(int i=0;i<arr.size();i++){
        crr.push_back(arr[i]);
    }
    //Now inserting elements from brr
    for(int i=0;i<brr.size();i++){
      //Initialising a flag variable to check for duplicates
      bool flag=false;
      for(int j=0;j<crr.size();j++){
        if(brr[i]==crr[j]){
          //As we've found the duplicate so the flag will be set to true
          flag= true;
          break;
        }
      }
      //Now as we've not found any duplicates the flag will remain false
       if(flag==false){
          crr.push_back(brr[i]);
        }

    }
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    
}
int main() {
    
  vector<int> arr(15);
  cout<<"The elements of Array A are: "<<endl;
  for(int i=0;i<arr.size();i++){
   cin>>arr[i];
    cout<<arr[i]<<" ";
  }
  
  vector<int> brr(15);
   cout<<endl<<"The elements of Array B are: "<<endl;
    
  for(int i=0;i<brr.size();i++){
  cin>>brr[i];
    cout<<brr[i]<<" ";
  }
  
  cout<<endl;
  unionArray(arr,brr);

 
  return 0;
}
