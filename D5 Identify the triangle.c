/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths*/ 

#include <stdio.h>

int main()
{ 
    float s1 = 0.0, s2 = 0.0, s3 = 0.0; 
    
    printf("Enter all three sides: ");
    scanf("%f", &s1);
    scanf("%f", &s2);
    scanf("%f", &s3); 
    
    
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) 
    { 
        printf("The given triangle is valid\n"); 
          
        if (s1 == s2 && s2 == s3) 
        {
            printf("The triangle is Equilateral\n");
        }
        else if (s1 == s2 || s2 == s3 || s1 == s3) 
        {
            printf("The triangle is Isosceles\n");
        }
        else 
        { 
            printf("The triangle is Scalene\n"); 
        }

        if ( (s1*s1 + s2*s2 == s3*s3) || 
             (s1*s1 + s3*s3 == s2*s2) || 
             (s2*s2 + s3*s3 == s1*s1) ) 
        { 
            printf("The triangle is Right Angled\n");
        } 
    } 
    else
    {
        printf("The given triangle is Invalid\n");
    }

    return 0; 
}

