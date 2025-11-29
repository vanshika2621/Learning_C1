//Q58: Find the maximum and minimum element in an array.
#include<stdio.h>
int main(){
    int a1[7] ={5,26,21,1,47,4,2};
    int max=a1[0];
    int min=a1[0];
    for(int i= 0; i<7; i++){
        if(a1[i]>max){
            max = a1[i] ;
        }
        if(a1[i]<min){
            min = a1[i] ;
        }
    }
    printf("max ele: %d \n", max);
    printf("min ele: %d \n ", min);
    return 0;
}