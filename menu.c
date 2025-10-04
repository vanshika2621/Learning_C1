#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student students[100];
    int choice, count = 0;

    while (1) {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Roll No: ");
            scanf("%d", &students[count].roll);
            printf("Enter Name: ");
            scanf("%s", students[count].name);
            printf("Enter Marks: ");
            scanf("%f", &students[count].marks);
            count++;
        }
        else if (choice == 2) {
            printf("\n--- Student List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Roll: %d, Name: %s, Marks: %.2f\n",
                       students[i].roll, students[i].name, students[i].marks);
            }
        }
        else if (choice == 3) {
            int r, found = 0;
            printf("Enter Roll No to search: ");
            scanf("%d", &r);
            for (int i = 0; i < count; i++) {
                if (students[i].roll == r) {
                    printf("Found: Roll: %d, Name: %s, Marks: %.2f\n",
                           students[i].roll, students[i].name, students[i].marks);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Student not found!\n");
        }
        else if (choice == 4) {
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
