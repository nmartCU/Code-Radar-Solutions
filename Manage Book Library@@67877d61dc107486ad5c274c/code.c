// Your code here...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

typedef struct student_s {
    int price;
    char *title;
    char *author;
} student_t;

void my_free(student_t *students, int end)
{
    if (!students)
        return;
    for (int j = 0; j < end; j++) {
        free(students[j].author);
        free(students[j].title);
    }
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
        char tempTitle[MAX_LENGTH] = {0};
        char tempAuthor[MAX_LENGTH] = {0};
        if ((scanf("%s %s %d", tempTitle, tempAuthor, &students[i].price)) != 3) {
            my_free(students, i);
            return ERROR;
        }
        if ((students[i].title = malloc(sizeof(char) * (strlen(tempTitle) + 1))) == NULL) {
            my_free(students, i);
            return ERROR;
        }
        if ((students[i].author = malloc(sizeof(char) * (strlen(tempAuthor) + 1))) == NULL) {
            my_free(students, i);
            return ERROR;
        }
        strcpy(students[i].title, tempTitle);
        strcpy(students[i].author, tempAuthor);
    }

    int price = 0;
    scanf("%d ", &price);
    printf("Books above price %0.2f\n", (float)price);
    for (int i = 0; i < n; i++) {
        if (students[i].price >= price) {
            printf("Title: %s, Author: %s, Price: %0.2f\n", students[i].title, students[i].author, students[i].price);
        }
        free(students[i].title);
        free(students[i].author);
    }
    free(students);
    return SUCCESS;
}