/*4. Write a program to find total number of bits set in a given array.
Say we have a array of 3 elements
a[3] = {0x1, 0xF4, 0x10001};
The total number of set bits in the given array is
1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits

Topics to be covered
- Arrays
- Loops
- Bitwise Operators*/

#include <stdio.h>
int countBits(int arr[], int size) {
    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        int count = 0;
        while (num != 0) {
            count += num & 1;
            num >>= 1;
        }
        totalBits += count;
    }
    return totalBits;
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    int result = countBits(arr, size);
    printf("Total number of bits: %d\n", result);
    return 0;
}
