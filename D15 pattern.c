/*Write a program to print the following pattern:
*****
*****
*****
*****
***** */ 

#include<stdio.h> 
int main()
{
    for (int i = 1 ; i <= 5 ; i++)
    {    
        for (int j = i; j <= 5 ; j ++) 
              printf("*****"); 
    }
    
 return 0;
}