#include <stdio.h>

struct Student
{
    char name[20];
    int totalMarks;
    char rollNo[5];
};

void write(struct Student *ptr)
{

    printf("\nEnter Student details");
    printf("\nEnter Student roll no. :");
    scanf("%s", &ptr->rollNo);
    printf("Enter student name : ");
    scanf("%s", &ptr->name);
    printf("Enter Total Marks : ");
    scanf("%d", &ptr->totalMarks);
}

void read(struct Student *ptr)
{

    printf("\n\n----Student Details----");
    printf("\nRoll No : %s", ptr->rollNo);
    printf("\n Student Name : %s", ptr->name);
    printf("\nTotal Marks = %d", ptr->totalMarks);
}

int main()
{
    struct Student s;

    write(&s);
    read(&s);

    return 0;
}