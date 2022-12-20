#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,2,3,4,4,4};
    int n=7;
    int count=0;
    for(int k=1;k<=4;k++){
        for(int i =0;i<n;i++){
            if(arr[i]==k){
                count++;
            }
        }
        cout<<count<<endl;
    }
   
}
