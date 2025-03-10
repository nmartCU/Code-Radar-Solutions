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

int main(int argc, char *const argv[])
{
    int n = 0;
    student_t *students = NULL;
    int max = 0;
    int pos = 0;
        
    if ((scanf("%d", &n)) != 1)
        return ERROR;
    if ((students = malloc(sizeof(student_t) * (n))) == NULL)
        return ERROR;
    for (int i = 0; i < n; i++) {
        char temp[MAX_LENGTH] = {0};
        if ((scanf("%d %s %f", &students[i].roll, temp, &students[i].marks)) != 3) {
            for (int j = 0; j < i; j++)
                free(students[j].name);
            free(students);
            return ERROR;
        }
        if ((students[i].name = malloc(sizeof(char) * (strlen(temp) + 1))) == NULL) {
            for (int j = 0; j < i; j++) {
                free(students[j].name);
            }
            free(students);
            return ERROR;
        }
        strcpy(students[i].name, temp);
        if (students[i].marks > max) {
            max = students[i].marks;
            pos = i;
        }
    }
    if ((printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %0.2f", students[pos].roll, students[pos].name, students[pos].marks)) < 0) {
        for (int i = 0; i < n; i++)
            free(students[i].name);
        free(students);
        return ERROR;
    }
    for (int i = 0; i < n; i++)
        free(students[i].name);
    free(students);
    return SUCCESS;
}