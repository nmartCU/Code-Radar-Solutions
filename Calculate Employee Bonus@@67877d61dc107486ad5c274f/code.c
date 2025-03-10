// Your code here...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

typedef struct emp_s {
    int id;
    char *name;
    int salary;
} emp_t;

void my_free(emp_t *students, int end)
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
    emp_t *students = NULL;
        
    if ((scanf("%d", &n)) != 1)
        return ERROR;
    if ((students = malloc(sizeof(emp_t) * (n))) == NULL)
        return ERROR;
    for (int i = 0; i < n; i++) {
        char temp[MAX_LENGTH] = {0};
        if ((scanf("%d %s %d", &students[i].id, temp, &students[i].salary)) != 3) {
            my_free(students, i);
            return ERROR;
        }
        if ((students[i].name = malloc(sizeof(char) * (strlen(temp) + 1))) == NULL) {
            my_free(students, i);
            return ERROR;
        }
        strcpy(students[i].name, temp);
    }

    for (int i = 0; i < n; i++) {
        double bonus = students[i].salary < 50000 ? students[i].salary * 0.1 : students[i].salary * 0.05;
        if ((printf("Employee ID: %d, Name: %s, Bonus: %0.2f\n", students[i].id, students[i].name, bonus)) < 0) {
            my_free(students, n);
            return ERROR;
        }
        free(students[i].name);
    }
    free(students);
    return SUCCESS;
}