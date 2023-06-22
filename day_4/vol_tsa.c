#include <stdio.h>
struct Box {
    float length;
    float width;
    float height;
};
void calculateVol_TSA(struct Box *box) {
    float volume = box->length * box->width * box->height;
    float surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);  
    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);
}
int main() {
    struct Box b1;   
    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%f", &(b1.length));
    printf("Width: ");
    scanf("%f", &(b1.width));
    printf("Height: ");
    scanf("%f", &(b1.height));
    printf("With the help of (*) asterisk or indirection operator and (.) dot operator.");
    calculateVol_TSA(&b1);
    struct Box *boxPtr = &b1;
    printf("With the help of ( -> ) Arrow operator using pointer as well as dot representation.");
    calculateVol_TSA(boxPtr);   
    return 0;
}