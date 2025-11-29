#include<stdio.h>
int main()
{
    int marks[20];
    for (int i=0 ; i<20 ; i++){
        printf("Enter the element %d =  \n", i);
        scanf("%d",&marks[i]);
    }
    for (int j=0 ; j<20 ; j++){
        printf("Value of the element %d = %d \n ", j, marks[j]);   
    }
    return 0;;

}