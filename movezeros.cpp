#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums){
    int n= nums.size();
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            nums.erase(nums.begin()+i);
            nums.push_back(0);
        }
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
}

int main(){
    vector<int> nums={0,1,0};
    moveZeroes(nums);

}