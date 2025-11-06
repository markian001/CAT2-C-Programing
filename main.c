/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:A program that reads a list of integers from a file, processes and reads results
*/

#include <stdio.h>

void writeInput() {
    FILE *fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d", &num);
        fprintf(fptr, "%d\n", num);
    }
    fclose(fptr);
}

void processFile() {
    FILE *fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error opening input.txt!\n");
        return;
    }

    int num, sum = 0, count = 0;
    while (fscanf(fptr, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fptr);

    float avg = (float)sum / count;

    fptr = fopen("output.txt", "w");
    if (fptr == NULL) {
        printf("Error opening output.txt!\n");
        return;
    }
    fprintf(fptr, "Sum: %d\n", sum);
    fprintf(fptr, "Average: %.2f\n", avg);
    fclose(fptr);
}

void displayFiles() {
    FILE *fptr;
    int num;
    char line[100];

    printf("\ninput.txt\n");
    fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error opening input.txt!\n");
        return;
    }
    while (fscanf(fptr, "%d", &num) == 1) {
        printf("%d\n", num);
    }
    fclose(fptr);

    printf("\n output.txt \n");
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error opening output.txt!\n");
        return;
    }
    while (fgets(line, 100, fptr) != NULL) {
        printf("%s", line);
    }
    fclose(fptr);
}

int main() {
    writeInput();
    processFile();
    displayFiles();
    return 0;
}
