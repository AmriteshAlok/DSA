//Passing an array in a function using Pass By Value

#include <bits/stdc++.h>
#include<array>
using namespace std;

array<int,10> inc (array<int,10> arr){
  for(int i=0;i<10;i++){
  arr[i]+=2;
  }
  return arr;
  }

int main()
{
	array<int , 10>  arr{};
  cout<<"Initial Array:"<<endl;
  for(int i=0;i<10;i++){
    arr[i]= i+1;
    	cout << arr[i] << " ";
    }
    
    cout<<endl;
  
   arr= inc(arr);
  
   cout<<"Incremented Array:"<<endl;
   for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
   }
  
	return 0;
}
