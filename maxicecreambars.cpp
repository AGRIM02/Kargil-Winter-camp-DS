#include<bits/stdc++.h>
using namespace std;

int maxIceCream(vector<int> costs, int coins){
    int count=0;
    sort(costs.begin(),costs.end());
    for(int i=0;i<costs.size();i++){
        count +=costs[i];
        if(count==coins){
            return i+1;
        }
        else if(count>coins){
            return i;
        }

    }
    if(count<coins){
        return costs.size();
    }
    else if(count==coins){
        costs.size();
    }
    return 0;         
}

int main(){
    vector<int> costs={7,3,3,6,6,6,10,5,9,2};
    int coins=56;
    cout<<maxIceCream(costs,coins);
}