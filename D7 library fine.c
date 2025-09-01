/*Write a program to calculate a library fine based on late days.*/ 
#include<stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Book returned on time!\n");
    }
    else if (days <= 7) {
        fine = days * 2;   // ₹2 per day for up to 7 days
    }
    else {
        fine = (7 * 2) + (days - 7) * 6; // ₹6 per day after 7 days
    }

    if (days > 0) {
        printf("Total fine: ₹%d\n", fine);
    }

    return 0;
}
