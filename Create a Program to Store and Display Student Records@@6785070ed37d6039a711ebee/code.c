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
    student_t *students = NULL;
        
    if ((scanf("%d", &n)) != 1)
        return ERROR;
    if ((students = malloc(sizeof(student_t) * n)) == NULL)
        return ERROR;
    for (int i = 0; i < n; i++) {
        if ((scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks)) != 3) {
            free(students);
            return ERROR;
        }
    }
    for (int i = 0; i < n; i++) {
        if ((printf("Roll Number: %d, Name: %s, Marks: %f", students[i].roll, students[i].name, students[i].marks)) < 0) {
            return ERROR;
        }
    }
    return SUCCESS;
}