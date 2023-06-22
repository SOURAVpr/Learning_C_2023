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

void initializeStructs(struct Student* students, int size) {
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
        //printf("%d      %s      %f",students[i].rollno,students[i].name,students[i].marks);
    }
}

void sortStructsByMarks(struct Student* students, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap the positions of the two structures
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
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
    printf("\nStudent Details (before sorting):\n");
    displayStructs(students, size);

    sortStructsByMarks(students, size);
    printf("\nStudent Details (after sorting by marks):\n");
    displayStructs(students, size);
    free(students);
    return 0;
}