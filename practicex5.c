//Reverse an array without taking extra space.
#include<stdio.h>
int main(){
    const int SIZE=6;
    int a1[6]={1,2,3,4,5,6};
    int temp;
    for(int i=0; i<SIZE/2 ; i++){
        temp =a1[i];
        a1[i]= a1[SIZE-1-i];
        a1[SIZE-1-i]= temp ;
         
    }
    for (int k = 0; k < SIZE; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");
    
    
    return 0;
}