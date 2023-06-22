/*5. Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 1st bit, if operation type is 1
    - Clear 31st bit, if operation type is 2
    - Toggle 16th bit, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type);
*/

#include <stdio.h>
int bit_operations(int num, int oper_type) {
    int result = num;
    switch (oper_type) {
        case 1:
            result |= 1 << 0;
            break;
        case 2:
            result &= ~(1 << 31);
            break;
        case 3:
            result ^= 1 << 15;
            break;
        default:
            printf("Error: Invalid operation type.\n");
            return num;
    }
    return result;
}
int main() {
    int num, oper_type;
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);
    int result = bit_operations(num, oper_type);
    printf("Result: %d\n", result);
    return 0;
}