//Count even and odd numbers in an array.
#include<stdio.h>
int main(){
    int a2[7]={6,4,5,3,7,8,9};
    int count_odd = 0;
    int count_even = 0;
    for(int i=0; i<7 ;i++){
        if (a2[i]%2 == 0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    printf("The number of even elements are: %d \n", count_even);
    printf("The number of even elements are: %d \n ", count_odd); 

    return 0;
}
