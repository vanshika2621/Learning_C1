#include <stdio.h>
#include <string.h>

struct Item {
    char name[50];
    int quantity;
    float price;
    float total;
};

int main() {
    struct Item items[50];
    int n, i;
    float grandTotal = 0, gst, finalAmount;

    printf("========== BILLING SYSTEM ==========\n");
    printf("Enter number of items: ");
    scanf("%d", &n);
    printf("\n");

    for(i = 0; i < n; i++) {
        printf("Enter name of item %d: ", i + 1);
        scanf("%s", items[i].name);

        printf("Enter quantity: ");
        scanf("%d", &items[i].quantity);

        printf("Enter price per item: ");
        scanf("%f", &items[i].price);

        items[i].total = items[i].quantity * items[i].price;
        grandTotal += items[i].total;

        printf("\n");
    }

    gst = 0.18 * grandTotal;      // 18% GST
    finalAmount = grandTotal + gst;

    printf("\n========== FINAL BILL ==========\n");
    printf("%-15s %-10s %-10s %-10s\n", "Item", "Qty", "Price", "Total");
    printf("--------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%-15s %-10d %-10.2f %-10.2f\n", items[i].name, items[i].quantity, items[i].price, items[i].total);
    }

    printf("--------------------------------------------\n");
    printf("Subtotal: %.2f\n", grandTotal);
    printf("GST (18%%): %.2f\n", gst);
    printf("Total Amount: %.2f\n", finalAmount);
    printf("============================================\n");
    printf("Thank you for shopping!\n");

    return 0;
}
