// Your code here...
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

int find(student_t *students, float marks, int n)
{
    int nb = 0;

    if (!students)
        return nb;
    for (int i = 0; i < n; i++) {
        if (students[i].marks >= marks)
            ++nb;
    }
    return nb;
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

    float roll = 0;
    if ((scanf("%f ", &roll)) != 1) {
        my_free(students, n);
        return ERROR;
    }
    int number = find(students, roll, n);
    if ((printf("Count of students scoring above %0.2f: %d\n", roll, number)) < 0) {
        my_free(students, n);
        return ERROR;
    }
    my_free(students, n);
    return SUCCESS;
}