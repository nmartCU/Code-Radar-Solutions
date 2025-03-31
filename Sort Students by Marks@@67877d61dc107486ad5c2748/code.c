// Your code here...
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

int compare_students(const void *a, const void *b) {
    return ((student_t *)b)->marks - ((student_t *)a)->marks;
}

int main(int argc, char *const argv[])
{
    int n = 0;
        
    if ((scanf("%d", &n)) != 1)
        return ERROR;
    student_t students[n];
    for (int i = 0; i < n; i++) {
        if ((scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks)) != 3) {
            return ERROR;
        }
    }

    qsort(students, n, sizeof(student_t), compare_students);
    for (int i = 0; i < n; i++) {
        if ((printf("Roll Number: %d, Name: %s, Marks: %0.2f\n", students[i].roll, students[i].name, students[i].marks)) < 0) {
            return ERROR;
        }
    }
    return SUCCESS;
}