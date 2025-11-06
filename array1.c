#include<stdio.h>
int main()
{
    int arr= {
        {1,3,14,16}
        {0,2,18,10}
        {1,12,3,20}
        {19,48,4,8}
    };
   int temp = arr1[0][0];
    for (int i=0 ; i<4 , i++)
    {
        for(int j=0; j<4, j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            printf(arr);
        }
    }
    return 0;
}