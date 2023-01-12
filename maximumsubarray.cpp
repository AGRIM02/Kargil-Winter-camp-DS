#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    int sum,msum;
    for(int i=0;i<nums.size();i++)
    {
        if(i==0)
        {
            sum=nums[i];
            msum=sum;
        }
        else
        {
            sum=max(sum+nums[i],nums[i]);
            msum=max(sum,msum);
        }
    }
    return msum;
}

int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
}
