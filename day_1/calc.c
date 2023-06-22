/*4. Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.*/

#include <stdio.h>
int main() {
    float n1, n2, res;
    char operator;
    printf("Enter Operand 1: ");
    scanf("%f", &n1);
    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter Operand 2: ");
    scanf("%f", &n2);
    switch (operator) {
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                res = n1 / n2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }
    printf("Result: %.2f\n", res);
    return 0;
}
