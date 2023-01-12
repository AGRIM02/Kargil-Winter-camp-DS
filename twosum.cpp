#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &t){
    int tn = t.size();
    for(int i =0;i<tn;i++){
        cout<<t[i];
    }

}

vector<int> twoSum(vector<int> &nums, int target){
    int n = nums.size();
    vector<int> t;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
            t.push_back(i);
            t.push_back(j);
            return t;
        }
        }
        
    }
}

int main(){
    vector<int> nums={3,2,4};
    int tar = 6;
    vector<int> t=twoSum(nums,tar);
    print(t);
    
}