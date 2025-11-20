#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    FILE *fp;

    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
    fclose(fp);

    printf("\nData written to file. Reading it back...\n\n");

    fp = fopen("student.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
