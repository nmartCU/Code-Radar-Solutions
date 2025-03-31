// Your code here...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

typedef struct student_s {
    int roll;
    char name[200];
    float marks;
} student_t;

int main(int argc, char *const argv[])
{
    int n = 0;        
    if ((scanf("%d", &n)) != 1)
        return ERROR;
    student_t students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, &students[i].name, &students[i].marks);
        printf("%p\n", students[i].name);
    }
    for (int i = 0; i < n; i++)
        printf("Roll Number: %d, Name: %s, Marks: %0.2f\n", students[i].roll, students[i].name, students[i].marks);
    return SUCCESS;
}