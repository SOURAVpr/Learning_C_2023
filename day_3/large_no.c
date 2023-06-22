/*
4. Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators*/

#include <stdio.h>
int LargestNo(int num) {
    int largestNum = -1;
    // Loop through each digit position
    for (int i = 0; i < 4; i++) {
        int divisor = 1;
        // Move the divisor to the current digit position
        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }
        // Calculate the number without the current digit
        int newNum = (num / (divisor * 10)) * divisor + (num % divisor);
        // Check if the new number is larger than the current largest number
        if (newNum > largestNum) {
            largestNum = newNum;
        }
    }
    return largestNum;
}
int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    int largest = LargestNo(num);
    printf("Largest number by deleting a digit: %d\n", largest);
    return 0;
}