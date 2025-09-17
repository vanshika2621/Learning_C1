/* Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* */ 

#include<stdio.h> 
int main()
{
    int i , j, k;
    for(i= 1; i<= 9 ; i++)
    {
        if(i%2 != 0) 
        {
            for( j= i ; j>0;j--)
            {
                printf("*");
            }  
             printf("\n");
        }
    } 

    for (i=7 ; i>0 ; i--)
    {
        if(i%2 != 0)
        {
            for(j=i ; j>0 ; j--)
               printf("*");
               printf("\n");

        } 
        

    
    }
    return 0 ;
} 

