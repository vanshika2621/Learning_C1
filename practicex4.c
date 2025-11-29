//Reverse an array without taking extra space.
#include<stdio.h>
int main(){
    const int SIZE=6;
    int a1[6]={1,2,3,4,5,6};
    int rev[6];
    for(int i=0; i<SIZE ; i++){
        rev[i]=a1[SIZE-1-i];
        
    }
    for (int k = 0; k < SIZE; k++) {
        printf("%d ", rev[k]);
    }
    printf("\n");
    
    
    return 0;
}
