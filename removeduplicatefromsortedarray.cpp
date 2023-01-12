#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> nums){
    vector<int>::iterator it;
    it = unique(nums.begin(), nums.end());
    nums.resize(distance(nums.begin(), it));
    return nums.size();
} 

int main(){
    vector<int> nums ={1,2};
    cout<<removeDuplicates(nums);
}