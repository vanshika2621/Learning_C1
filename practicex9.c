#include <stdio.h>
int main() {
    int n,a[100],freq[100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) freq[a[i]]++;
    for(int i=0;i<100;i++) 
        if(freq[i] > 0) printf("%d → %d times\n", i, freq[i]);
}
