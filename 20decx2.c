#include<stdio.h>
int main() 
{
    int a=26, b=40;
    int *ptr;
    ptr = &a;
    int x1 = *ptr++;
    printf("Case 1: x = %d, ptr -> %p\n", x1, (void*)ptr);
    ptr = &a;
    int x2 = *++ptr; // ptr now points to b
    printf("Case 2: x = %d, ptr -> %p\n", x2, (void*)ptr);
    a = 26;
    ptr = &a;
    int x3 = ++*ptr;
    printf("Case 3: x = %d, a = %d\n", x3, a);
    a = 26;
    ptr = &a;
    int x4 = (*ptr)++;
    printf("Case 4: x = %d, a = %d\n", x4, a);
    return 0;
}
