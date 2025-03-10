// Your code here...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0

typedef struct student_s {
    int roll;
    char *name;
    float marks;
} student_t;

int main(int argc, char *const argv[])
{
    int n = 0;
    student_t *student = NULL;
        
    if ((scanf("%d", &n)) != 1)
        return ERROR;
    if ((student = malloc(sizeof(student) * n)) == NULL)
        return ERROR;
    for (int i = 0; i < n; i++) {
        if ((scanf("%d %s %f", &student[i].roll, student[i].name, &student[i].marks)) != 3) {
            return ERROR;
        }
    }
    for (int i = 0; i < n; i++) {
        if ((printf("Roll Number: %d, Name: %s, Marks: %f", student[i].roll, student[i].name, student[i].marks)) < 0) {
            return ERROR;
        }
    }
    return SUCCESS;
}