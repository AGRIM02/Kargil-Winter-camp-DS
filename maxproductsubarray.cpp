#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    int pro,mpro;
    for(int i=0;i<nums.size();i++)
    {
        if(i==0)
        {
            pro=nums[i];
            mpro=pro;
        }
        else if (mpro==0)
        {
            mpro=*max_element(nums.begin(),nums.end());
        }
        else
        {
            pro=pro*nums[i];
            if(nums.size()==3){
                if(pro*nums[i]<0){
                 mpro= *max_element(nums.begin(),nums.end());
                }
            }
            else{
                mpro=max(pro,mpro);
            }
        }
    }
    return mpro;
}

int main(){
    vector<int> nums={-2,0,-1};
    cout<<maxSubArray(nums);
}