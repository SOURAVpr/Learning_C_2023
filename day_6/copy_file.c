#include <stdio.h>
int main() {
    FILE *source, *destination;
    char ch;
    source = fopen("file1.txt", "r");
    if (source == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }
    destination = fopen("file2.txt", "w");
    if (destination == NULL) {
        printf("Unable to create the destination file.\n");
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    fclose(source);
    fclose(destination);
    printf("File copied successfully.\n");
    return 0;
}