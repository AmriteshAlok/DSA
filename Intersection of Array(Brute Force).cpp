//Leetcode Problem No. 349 Intersection of two arrays solved using brute force. 

#include <iostream>
#include<vector>
using namespace std;

 void intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> crr;
        for(int i=0;i<nums1.size();i++){
            bool flag=false;
            for(int j=0;j<nums2.size();j++){
                for(int k=0;k<crr.size();k++){
                    if(nums1[i]==crr[k]){
                        flag = true;
                    }
                }
                if(nums1[i]==nums2[j]&& flag==false){
                    crr.push_back(nums1[i]);
                }
            }
        }
    }

int main() {
  vector<int> nums1(20);
  for(int i=0;i<nums1.size();i++){
    cin>>nums1[i];
  }
    cout<<endl;

    vector<int> nums2(20);
  for(int i=0;i<nums2.size();i++){
    cin>>nums2[i];
  }
  cout<<endl;
  
 intersection(nums1,nums2);

  return 0;
}

