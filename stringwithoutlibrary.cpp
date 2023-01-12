<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

char  *strncatt(char *s1,char *s2, int n){
    char *dest = s1;

    while(*dest != '\0'){
        dest++;
    }

    while(n--){
        if(!(*dest++=*s2++)){
            return s1;
        }
    }
    *dest = '\0';
    cout<<s1;



}

int main(){
    char s1[20]= "Ajay";
    char s2[20] =  "Vijay";
    strncatt(s1,s2,2);
=======
#include<bits/stdc++.h>
using namespace std;

char  *strncatt(char *s1,char *s2, int n){
    char *dest = s1;

    while(*dest != '\0'){
        dest++;
    }

    while(n--){
        if(!(*dest++=*s2++)){
            return s1;
        }
    }
    *dest = '\0';
    cout<<s1;



}

int main(){
    char s1[20]= "Ajay";
    char s2[20] =  "Vijay";
    strncatt(s1,s2,2);
>>>>>>> 3007c734c44bc47b109ba5b8e6836f89553b259a
}