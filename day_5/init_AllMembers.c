#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int size) {
    sscanf(input, "%d %s %f", &students[size].rollno, students[size].name, &students[size].marks);
}

void init_Structs(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

void displayStructs(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar();
    
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));
    
    printf("Enter student details (rollno name marks):\n");
    for (int i = 0; i < size; i++) {
        char input[100];
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        parseString(input, students, i);
    }

    printf("\nStudent Details:\n");
    displayStructs(students, size);
    
    free(students);

    return 0;
}
