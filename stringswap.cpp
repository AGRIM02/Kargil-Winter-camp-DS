<<<<<<< HEAD
#include<iostream>
using namespace std;

int main(){
    char str1[5];
    gets(str1);
    int i=0;
    while(str1[i]!='\0'){
        i++;
    }
    int j=i;
    while(i>=j/2){
        char t;
        t = str1[i];
        str1[i]=str1[j];
        str1[j]=t;
        i--;
    }
    for(int i=0;i<5;i++){
        cout<<str1[i];
    }

=======
#include<iostream>
using namespace std;

int main(){
    char str1[5];
    gets(str1);
    int i=0;
    while(str1[i]!='\0'){
        i++;
    }
    int j=i;
    while(i>=j/2){
        char t;
        t = str1[i];
        str1[i]=str1[j];
        str1[j]=t;
        i--;
    }
    for(int i=0;i<5;i++){
        cout<<str1[i];
    }

>>>>>>> 3007c734c44bc47b109ba5b8e6836f89553b259a
}