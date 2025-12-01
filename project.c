#include<stdio.h>
#define MAX_ITEMS 20
typedef struct {
char name[30];
int quantity;
float price;
} Item;
int main() {
Item items[MAX_ITEMS];
int n, i;
float total = 0, gst, netTotal;
printf("Enter number of items: ");
scanf("%d", &n);
for (i = 0; i < n; i++) {
printf("\nEnter name of item %d: ", i + 1);
scanf("%s", items[i].name);
printf("Enter quantity: ");
scanf("%d", &items[i].quantity);
printf("Enter price per unit: ");
scanf("%f", &items[i].price);
}
printf("\n------------ Restaurant Bill ------------\n");
printf("%-20s %-10s %-10s %-10s\n", "Item", "Quantity", "Price", "Amount");
for (i = 0; i < n; i++) {
float amount = items[i].quantity * items[i].price;
total += amount;
printf("%-20s %-10d %-10.2f %-10.2f\n", items[i].name, items[i].quantity, items[i].price,
amount);
}
gst = 0.05f * total; // 5% GST
netTotal = total + gst;
printf("-----------------------------------------\n");
printf("Total: %.2f\n", total);
printf("GST (5%%): %.2f\n", gst);
printf("Net Total: %.2f\n", netTotal);
printf("-----------------------------------------\n");
return 0;
}