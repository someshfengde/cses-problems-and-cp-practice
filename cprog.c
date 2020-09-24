#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
char a[100];
int count=0;
void push(char* aas){
    a[count]=aas;
    count++;
}
void pop(){
   printf("%c",a[count]);
   count--;
}
int main(){

    char s[100];
    scanf("%s", &s);
    int l= strlen(s);
    char a[l];
    for(int i=0;i<l;i++){
        push(s[i]);
    }
    for(int i=l;i>=0;i--){
        pop();
    }
    printf("/n");
}