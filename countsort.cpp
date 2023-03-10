#include<iostream>
#include<algorithm>
using namespace std;
void display(int *array, int size) {
   for(int i = 1; i<=size; i++)
      cout << array[i] << " ";
   cout << endl;
}
int getMax(int array[], int size) {
   int max = array[1];
   for(int i = 2; i<=size; i++) {
      if(array[i] > max)
         max = array[i];
   }
   return max; 
}
void countSort(int *array, int size) {
   int output[size+1];
   int max = getMax(array, size);
   int count[max+1];  
   for(int i = 0; i<=max; i++)
      count[i] = 0;     
   for(int i = 1; i <=size; i++)
      count[array[i]]++;    
   for(int i = 1; i<=max; i++)
      count[i] += count[i-1];     
   for(int i = size; i>=1; i--) {
      output[count[array[i]]] = array[i];
      count[array[i]] -= 1; 
   }
   for(int i = 1; i<=size; i++) {
      array[i] = output[i]; 
   }
}
int main() {
   int arr[]={2,4,1,6,3,1,3};
   int n = sizeof(arr)/sizeof(arr[0]);
   countSort(arr, n);
   display(arr, n);
}