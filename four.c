#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void addStudent(FILE *fp) {
    struct Student s;
    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    getchar();  // clear newline
    printf("Enter Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';  // remove newline
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);
    printf("✅ Student record added!\n");
}

void displayStudents(FILE *fp) {
    struct Student s;
    rewind(fp);
    printf("\n--- Student Records ---\n");
    while (fread(&s, sizeof(s), 1, fp) == 1) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", s.roll, s.name, s.marks);
    }
}

void searchStudent(FILE *fp) {
    int roll;
    struct Student s;
    int found = 0;
    printf("Enter Roll No to Search: ");
    scanf("%d", &roll);
    rewind(fp);
    while (fread(&s, sizeof(s), 1, fp) == 1) {
        if (s.roll == roll) {
            printf("✅ Found: Roll: %d | Name: %s | Marks: %.2f\n", s.roll, s.name, s.marks);
            found = 1;
            break;
        }
    }
    if (!found) printf("❌ Student not found!\n");
}

int main() {
    FILE *fp;
    int choice;

    fp = fopen("students.dat", "rb+");
    if (fp == NULL) {
        fp = fopen("students.dat", "wb+");
        if (fp == NULL) {
            printf("Error opening file!\n");
            return 1;
        }
    }

    do {
        printf("\n====== Student Management System ======\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(fp); break;
            case 2: displayStudents(fp); break;
            case 3: searchStudent(fp); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);

    fclose(fp);
    return 0;
}
