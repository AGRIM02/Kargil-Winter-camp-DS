#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            else{
                nums.push_back(target);
                sort(nums.begin(),nums.end());
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return 0;
}

int main(){
    vector<int> nums={1,3,5,6,7,8,9};
    int target = 2;
    cout<<searchInsert(nums,target);
}

