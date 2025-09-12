/*Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms*/

#include<stdio.h> 
int main()
{
    float  sum = 0.0 ; 
    int num ;
    printf("Enter the nth number: ");
    scanf("%d", num) 
    for (i = 1; i<= num , i++)
    {
        sum += (2.0 * i) / (4.0 * i - 1); 

    }
    printf( "Approx number is = %.2f\n", n, sum);

    return 0 ;

}