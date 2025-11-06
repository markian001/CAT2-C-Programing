/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:A program that that prints elements of array using a nested for loop
*/

#include <stdio.h>
int main()
{
    int scores[2][2] = {
       {65, 92},
       {84, 72}
    };
    
    printf("Elements of the scores array:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++){
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }
    return 0;
}
