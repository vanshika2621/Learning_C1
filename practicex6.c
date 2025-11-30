//Q63: Merge two arrays.
#include<stdio.h>
int main(){
    int a1[6]={1,2,3,4,5,6};
    int a2[6]={7,8,9,10,11,12};
    int merge1[20];
    for(int i=0 ; i<6;i++){
        merge1[i] =a1[i];
        
    }
    for(int j=0 ; j<6;j++){
        merge1[6 + j] =a2[j];
        
    }
    
    for (int k = 0; k <11; k++) {
        printf("%d ", merge1[k]);
    }
    printf("\n");

    return 0;
}