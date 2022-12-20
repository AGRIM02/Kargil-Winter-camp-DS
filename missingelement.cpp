#include<iostream>
using namespace std;

int main(){
    int arr[] = {11,13,17,19,21,23};
    int n=6;
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
   cout<<(n+1)*(arr[0]+arr[n-1])/2-sum;
    
}