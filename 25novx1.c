#include <stdio.h>

int main() {
    int n; 
    int i; 
    int search_element;
    int found_index = -1;

    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        return 1;
    }

    int arr[100]; 

    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    if (scanf("%d", &search_element) != 1) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == search_element) {
            found_index = i;
            break; 
        }
    }

    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }

    return 0;
}