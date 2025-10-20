#include <stdio.h>
#include <string.h> 

int main() {
    char source_str[20] = "Hello"; 
    char destination_str[20];       
    char part2_str[] = " World!";  

    printf("Original String (source_str): %s\n", source_str);

    size_t len = strlen(source_str);
    printf("Length of source_str: %zu\n", len); 

    strcpy(destination_str, source_str);
    printf("Copied String (destination_str): %s\n", destination_str);

    strcat(destination_str, part2_str);
    printf("Concatenated String: %s\n", destination_str);
    
    char str1[] = "apple";
    char str2[] = "Apple";
    
    int comparison_result = strcmp(str1, str2);
    
    if (comparison_result == 0) {
        printf("str1 and str2 are identical.\n");
    } else if (comparison_result > 0) {
        printf("str1 is lexicographically greater than str2.\n");
    } else { 
        printf("str1 is lexicographically less than str2.\n");
    }
    
    return 0;
}