#include <stdio.h>
#include <string.h>

struct list {
    int id;
    char itemName[30];
    int price;
    int quantity;
};

// Create a function to display the bill
void display(struct list items[], int size, char cName[], char cAddress[], char cNumber[]) {
    int total = 0;
    double vat = 0.05;
    //5% vat rate
    printf("\n\n\n\n");
    printf("\t             NUB cafetariA\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n");
    printf("Name : %s\t Address:%s \n", cName, cAddress);
    printf("Number: %s \n", cNumber);
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("Id :%d\t", items[i].id);
        printf("Name :%s\t", items[i].itemName);
        printf("Price :%d\t", items[i].price);
        printf("Quantity :%d\t", items[i].quantity);
        printf("Subtotal :%d\n", items[i].price * items[i].quantity);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        total += items[i].price * items[i].quantity;
    }
    double vatAmount = total*vat;
    double totalwithVAT = total+vatAmount;
    printf("\t\tTotal : %d", total);
    printf("\n");
    printf("\t\tVAT(5%%): %.20f",vatAmount);
    printf("\n");
    printf("\t\tTotal with VAT: %.20f",totalwithVAT);
    printf("\n\n");
    printf("\t Thank You For Visiting With NUB CafetariA \n");
    printf("\n\n");
}

int main(){
    printf("Assalamualaikum. Welcome to our shop\n");
    char Name[30];
    char Address[30];
    char number[15];
    int totalItems;
    printf("Enter your name \t");
    scanf("%s", Name);
    printf("Enter your address \t");
    scanf("%s", Address);
    printf("Enter your number \t");
    scanf("%s", number);
    printf("Enter total items \t");
    scanf("%d", &totalItems);
    printf("\n");

    // Struct array
    struct list items[totalItems];
    // Insert items
    for (int i = 0; i < totalItems; i++) {
        items[i].id = (i + 1);
        printf("Enter %d item name \t", i + 1);
        scanf("%s", items[i].itemName);
        printf("Enter price \t");
        scanf("%d", &items[i].price);
        printf("Enter quantity \t");
        scanf("%d", &items[i].quantity);
    }

    // Call display function
    display(items, totalItems, Name, Address, number);

    return 0;
}
