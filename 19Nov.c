#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    FILE *fp;
    int choice;

    fp = fopen("students.txt", "a+");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("\n1. Add Student\n2. Display Records\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Roll No: ");
            scanf("%d", &s.roll);

            printf("Enter Name: ");
            scanf("%s", s.name);

            printf("Enter Marks: ");
            scanf("%f", &s.marks);

            fwrite(&s, sizeof(s), 1, fp);
            printf("Record Added!\n");
        } 
        else if (choice == 2) {
            rewind(fp);
            printf("\n--- Student Records ---\n");
            while (fread(&s, sizeof(s), 1, fp)) {
                printf("Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
            }
        }

    } while (choice != 3);

    fclose(fp);
    return 0;
}
