#include<stdio.h>
int main
{
    int arr[]={0,1,2,3};
    int *p[]={arr, arr+1, arr+2, arr+3};
    printf("%u %u %u", p , *p, *(*p));
    return 0;
}