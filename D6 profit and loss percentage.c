/*Write a program to find profit or loss percentage given cost price and selling price*/ 
#include<stdio.h>

int main()
{
    float costP, sellP, profit, loss;
    printf("Enter cost price: ");
    scanf("%f", &costP);
    printf("Enter selling price: ");
    scanf("%f", &sellP);

    if (sellP > costP)
    {
        profit = sellP - costP;
        profit = (profit / costP) * 100;
        printf("Profit percentage is: %.2f%%\n", profit);
    }
    else if (costP > sellP)
    {
        loss = costP - sellP;
        loss = (loss / costP) * 100;
        printf("Loss percentage is: %.2f%%\n", loss);
    }
    else
    {
        printf("No profit, no loss.\n");
    }

    return 0;
}
