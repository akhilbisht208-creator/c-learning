//Create a structure representing a bank account of a customer. 
//What fields did you use and why?

#include <stdio.h>

struct bankacc {
    char name[50];
    float balance;
    char acc_number[20];
};

int main() {
    struct bankacc acc = {"AKHIL", 12999899889.50, "1293494949"};

    printf("Customer Name: %s\n", acc.name);
    printf("Account Balance: %.2f\n", acc.balance);
    printf("Account Number: %s\n", acc.acc_number);

    return 0;
}
