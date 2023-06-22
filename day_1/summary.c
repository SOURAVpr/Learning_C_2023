/*3. Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.*/

#include <stdio.h>
int main() {
    int rNo, pMarks, mMarks, cMarks;
    char name[50];
    float total, percentage;
    printf("Enter Roll No: ");
    scanf("%d", &rNo);
    printf("Enter Name: ");
    scanf("%s",&name);
    printf("Enter Marks of Physics: ");
    scanf("%d", &pMarks);
    printf("Enter Marks of Math: ");
    scanf("%d", &mMarks);
    printf("Enter Marks of Chemistry: ");
    scanf("%d", &cMarks);
    total= pMarks + mMarks + cMarks;
    percentage = (total / 300) * 100;
    printf("\n");
    printf("::::::Student Summary ::::\n");
    printf("Roll No: %d\n", rNo);
    printf("Name: %s", name);
    printf("Physics Marks: %d\n", pMarks);
    printf("Math Marks: %d\n", mMarks);
    printf("Chemistry Marks: %d\n", cMarks);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}
