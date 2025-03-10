// Your code here...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

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

int main(int argc, char *const argv[])
{
    int n = 0;
    student_t *students = NULL;
    int number = 0;
        
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
        number += (students[i].marks >= 50) ? 1 : 0;
    }
    printf("%s\n", number == n ? "All Passed" : "Not All Passed");
    my_free(students, n);
    return SUCCESS;
}