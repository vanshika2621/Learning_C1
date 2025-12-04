#include<stdio.h>
int main(){
    for(int i=1; i<=9; i++){
        if(i%2 != 0){
            for(int j= i; j>0; j--){
            printf("*");
        }
    printf("\n");
    }
    }
    return 0;
}