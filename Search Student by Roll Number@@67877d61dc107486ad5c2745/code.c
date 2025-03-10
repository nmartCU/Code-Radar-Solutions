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
    char *name;
    float marks;
} student_t;

void my_free(student_t *students, int end)
{
    if (!students)
        return;
    for (int j = 0; j < end; j++)
        free(students[j].name);
    free(students);
}

student_t *find(student_t *students, int roll)
{
    if (!students)
        return NULL;
    for (int i = 0; students[i]; i++) {
        if (students[i].roll == roll)
            return &students[i];
    }
    return NULL;
}

int main(int argc, char *const argv[])
{
    int n = 0;
    student_t *students = NULL;
        
    if ((scanf("%d", &n)) != 1)
        return ERROR;
    if ((students = malloc(sizeof(student_t) * (n))) == NULL)
        return ERROR;
    for (int i = 0; i < n; i++) {
        char temp[MAX_LENGTH] = {0};
        if ((scanf("%d %s %f", &students[i].roll, temp, &students[i].marks)) != 3) {
            my_free(students, i);
            return ERROR;
        }
        if ((students[i].name = malloc(sizeof(char) * (strlen(temp) + 1))) == NULL) {
            my_free(students, i);
            return ERROR;
        }
        strcpy(students[i].name, temp);
    }

    int roll = 0;
    if ((scanf("%d ", &roll)) != 1) {
        my_free(students, n);
        return ERROR;
    }
    student_t *student = find(students, roll);
    if (!student) {
        if ((printf("Student not found\n")) < 0) {
            my_free(students, n);
            return ERROR;
        }
        return SUCCESS;
    }
    if ((printf("Roll Number: %d, Name: %s, Marks: %0.2f\n", student->roll, student->name, student->marks)) < 0) {
        my_free(students, n);
        return ERROR;
    }
    my_free(students, n);
    return SUCCESS;
}