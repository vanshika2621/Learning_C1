#include <stdio.h>
int main() {
    int a1[10]= {2,5,7,9,10,66,47,26,21,1} ;
    int max = a1[0], max2 = a1[0];
    for(int i=0;i<10;i++){
        if (a1[i]>max){
            max2 = max; 
            max = a1[i]; 
            
        }
        else if(a1[i] > max2 && a1[i] != max)
            max2 = a1[i];
        
    }
    printf("second max is: %d", max2);
    return 0;
}
