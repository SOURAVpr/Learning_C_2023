#include <stdio.h>
struct Complex {
    float real;
    float img;
};
void readComplex(struct Complex *num) {
    printf("Enter real part: ");
    scanf("%f", &(num->real));
    printf("Enter imaginary part: ");
    scanf("%f", &(num->img));
}
void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.img);
}
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.img = num1.img + num2.img;
    return sum;
}
struct Complex mulComplex(struct Complex num1, struct Complex num2) {
    struct Complex product;
    product.real = num1.real * num2.real - num1.img * num2.img;
    product.img = num1.real * num2.img + num1.img * num2.real;
    return product;
}
int main() {
    struct Complex num1, num2, sum, product;
    printf("Enter the first complex number:\n");
    readComplex(&num1);
    printf("\nEnter the second complex number:\n");
    readComplex(&num2);
    printf("\nFirst complex number:\n");
    writeComplex(num1);
    printf("\nSecond complex number:\n");
    writeComplex(num2);
    sum = addComplex(num1, num2);
    printf("\nSum of the complex numbers:\n");
    writeComplex(sum);
    product = mulComplex(num1, num2);
    printf("\nProduct of the complex numbers:\n");
    writeComplex(product);
    return 0;
}
