/*
5. Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5*/

#include <stdio.h>
void findSmallestLargestDigits(int n, int numbers[]) {
    for (int i = 0; i < n; i++) {
        int number = numbers[i];
        int smallestDigit = 10;
        int largestDigit = -1;
        int countDigits = 0;
        int temp = number;
        while (temp != 0) {
            temp /= 10;
            countDigits++;
        }
        if (countDigits == 1) {
            printf("Not Valid\n");
            continue;
        }
        while (number != 0) {
            int digit = number % 10;
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            number /= 10;
        }
        printf("Smallest and largest digits of %d: %d and %d\n", numbers[i], smallestDigit, largestDigit);
    }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int numbers[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    findSmallestLargestDigits(n, numbers);
    return 0;
}
