//Search for an element in an array using linear search. 

#include<stdio.h>
int main(){
    int a1[10]={2,5,8,4,0,9,3,1,6,7};
    int num;
    int found_index = -1;
    printf("enter the element you want to search: ");
    scanf("%d", &num); 
    for(int i=0 ; i<10 ; i++){
        if (num == a1[i]){
            printf("The element was found on index: %d ",i);
            found_index= i ;
            break;
        }
    
    } 
    if(found_index == -1)
       printf("Element not found");
    return 0;
}
