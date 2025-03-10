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
    char grade;
} student_t;

void my_free(student_t *students, int end)
{
    if (!students)
        return;
    for (int j = 0; j < end; j++)
        free(students[j].name);
    free(students);
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
        int mark = students[i].marks;
        students[i].grade = (mark >= 85 ? 'A' : mark >= 70 && mark <= 84 ? 'B' : 'C');
    }

    for (int i = 0; i < n; i++) {
        if ((printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].roll, students[i].name, students[i].grade)) < 0) {
            my_free(students, n);
            return ERROR;
        }
        free(students[i].name);
    }
    free(students);
    return SUCCESS;
}