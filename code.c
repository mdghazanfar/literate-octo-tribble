#include<stdio.h>
int main(){
    int array[5];

    for(int i=0; i<5;i++){
        printf("\nEnter %d element::",i+1);
        scanf("%d",&array[i]);
    }

    for(int i=0; i<5;i++){
        printf("\n%dth element is :: %d",i,array[i]);
    }
}
