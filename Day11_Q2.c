#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float profit, loss;
    float profitPercent, lossPercent;

    // Input cost price and selling price
    printf("Enter Cost Price (CP): ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercent = (profit / costPrice) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", profitPercent);
    }
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        lossPercent = (loss / costPrice) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", lossPercent);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}