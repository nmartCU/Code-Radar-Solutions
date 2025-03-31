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

student_t *find(student_t *students, int roll, int n)
{
    if (!students)
        return NULL;
    for (int i = 0; i < n; i++) {
        if (students[i].roll == roll)
            return &students[i];
    }
    return NULL;
}

int main(int argc, char *const argv[])
{
    int n = 0, k = 0;        
    if ((scanf("%d", &n)) != 1)
        return ERROR;
    student_t students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }
    scanf("%d", &k);
    student_t *student = find(students, k, n);
    if (student) {
        printf("Roll Number: %d, Name: %s, Marks: %0.2f\n", student->roll, student->name, student->marks);
        free(student);
    } else 
        printf("Student not found");
    return SUCCESS;
}