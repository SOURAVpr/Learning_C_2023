#include<stdio.h>
void big_ifelse(int a, int b) {
    if (a > b) {
        printf("%d is biggest",a);
    } else {
        printf("%d is biggest",b);
    }
}

int big_ternary(int a, int b) {
    return (a > b) ? a : b;
}
int main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("by using if else:\n");
    big_ifelse(a,b);
    printf("\nby using ternary operator:\n");
    printf("%d is biggest\n",big_ternary(a,b));
    return 0;
}
