#include<stdio.h>

int main(){
    int a = 1000;
    char *myPtr = &a;
    printf("\n%d\n",*myPtr);
    myPtr++;
    printf("\n%d\n",*myPtr);
}