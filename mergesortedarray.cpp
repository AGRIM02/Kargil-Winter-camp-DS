#include<bits/stdc++.h>
using namespace std;

 void solution(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> m1(m);
        vector<int> m2(n);
        vector<int> m3(m+n);
        for(int i=0;i<m;i++){
            m1.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            m2.push_back(nums2[i]);
        }
        merge(m1.begin(),m1.end(),m2.begin(),m2.end(),m3.begin());
        for(int i=0;i<m2.size();i++){
            cout<<m2[i];
        }
}

int main(){
    vector<int> nums1={1,2,3,4,0,0,1};
    vector<int> nums2={2,5,6};
    solution(nums1,3,nums2,3);
}