#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> nums, int k) {
    int count = 0;
    int sum = 0;
    if (nums.size()==1){
        if(nums[0]==k){
            return 1;
        }
        else{
            return 0;
        }
    }
    for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            sum = accumulate(nums.begin()+i,nums.end(),0);
            if(sum==k){
                count++;
            }
        }
    }

    return count;
}


int main(){
    vector<int> nums ={-1,-1,1};
    int k=0;
    cout<<subarraySum(nums,k);
}