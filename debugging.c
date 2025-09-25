#include <stdio.h>
int main() {
char source[] = "Hello World";
char substring[10];
int start = 6; int length = 5; int i, j = 0;
for (i = start; i < start + length; i++) {
substring[j] = source[i];
j++;
}
printf("%s", substring);
return 0;
}