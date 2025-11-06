/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:A program that calculates gross pay, taxes, and net pay.
*/


#include <stdio.h>

int main()
{
    float hours, wage, grossPay, taxes, netPay;

    printf("Enter hours worked: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: $");
    scanf("%f", &wage);

    if (hours <= 40)
        grossPay = hours * wage;
    else
        grossPay = (40 * wage) + ((hours - 40) * wage * 1.5);

    if (grossPay <= 600)
        taxes = grossPay * 0.15;
    else
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);

    netPay = grossPay - taxes;

    printf("\nGross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}
