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

student_t *find(student_t *students,  int n)
{
    student_t *min_student = NULL;

    if (!students)
        return NULL;
    min_student = &students[0];
    for (int i = 1; i < n; i++)
        if (students[i].marks < min_student->marks)
            min_student = &students[i];
    return min_student;
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

    student_t *student = find(students, n);
    if (!student) {
        if ((printf("Student not found\n")) < 0) {
            my_free(students, n);
            return ERROR;
        }
        return SUCCESS;
    }
    if ((printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %0.2f\n", student->roll, student->name, student->marks)) < 0) {
        my_free(students, n);
        return ERROR;
    }
    my_free(students, n);
    return SUCCESS;
}