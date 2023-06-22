
#include <stdio.h>

void swap(void* a, void* b, int size) {
    char* ptr1 = (char*)a;
    char* ptr2 = (char*)b;

    for (int i = 0; i < size; i++) {
        char temp = ptr1[i];
        ptr1[i] = ptr2[i];
        ptr2[i] = temp;
    }
}

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap((void*)&num1, (void*)&num2, sizeof(int));
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
