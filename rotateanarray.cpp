#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> nums, int k) {  
    rotate(nums.begin(),nums.begin()+nums.size()-k,nums.end());
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }      
}

int main(){
    vector<int> nums ={-1,-100,3,99};
    int k=2;
    rotate(nums,k);
}
