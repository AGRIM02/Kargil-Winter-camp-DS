#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> nums1, vector<int> nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> j(m+n);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),j.begin()); 
        //sort(j.begin(),j.end());
        int js= j.size();
        if(js%2!=0){
            int mid = j[js/2];
            return mid; 
        }
        else{
            float a = j[js/2];
            float b = j[(js-1)/2];
            return (a+b)/2;
        }
       
}

int main(){
    vector<int> nums1={1,2};
    vector<int> nums2={3,4};
    cout<<findMedianSortedArrays(nums1,nums2);
}