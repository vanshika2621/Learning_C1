
#include <stdio.h>

int main()
{
    float len= 0.0 , wid= 0.0 ; 

    printf("Enter Length of rect: ");
    scanf("%f", &len );
    printf("Enter breadth : ");
    scanf("%f", &wid);
    float area1 = len * wid ;
    float perimeter1 = 2 *(len + wid); 
    printf("The area of the rectangle is %f \n", area1) ; 
    printf("The perimeter of the rectangle is %f \n", perimeter1); 
    return 0;
}