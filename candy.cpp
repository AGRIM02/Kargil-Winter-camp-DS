#include<bits/stdc++.h>
using namespace std;

int candy(vector<int> ratings){
    int candy=0;
    int n = ratings.size();
    vector<int> ans;
    if(ratings.size()==1){
        return 1;
    }
    for(int i=0;i<n;i++){
        ans.push_back(1);
    }
    for(int i=0;i<n-1;i++){
        if(ratings[i+1]>ratings[i]){
            ans[i+1] = ans[i]+1;
        }
    }
     for (int i = n - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1] && ans[i] <= ans[i + 1]) {
            ans[i] = ans[i + 1] + 1;
        }
    }
    candy = accumulate(ans.begin(),ans.end(),0);
    return candy;
}

int main(){
    vector<int> nums ={1,1,2};
    cout<<candy(nums);
}