// Your code here...
// Your code here...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

typedef struct sub_s {
    char *id;
    char *name;
    float price;
} sub_t;

void my_free(sub_t *students, int end)
{
    if (!students)
        return;
    for (int j = 0; j < end; j++) {
        free(students[j].id);
        free(students[j].name);
    }
    free(students);
}

int main(int argc, char *const argv[])
{
    int n = 0;
    sub_t *students = NULL;
    float basic, premium, standard = 0.0f;
    int user, user2, user3 = 0;

    if ((scanf("%d\n", &n)) != 1)
        return ERROR;
    if ((students = malloc(sizeof(sub_t) * (n))) == NULL)
        return ERROR;

    for (int i = 0; i < n; i++) {
        char temp[MAX_LENGTH] = {0};
        char temp2[MAX_LENGTH] = {0};

        if ((scanf("%s %s %f", temp, temp2, &students[i].price)) != 3) {
            my_free(students, i);
            return ERROR;
        }
        if ((students[i].name = malloc(sizeof(char) * (strlen(temp) + 1))) == NULL) {
            my_free(students, i);
            return ERROR;
        }
        if ((students[i].id = malloc(sizeof(char) * (strlen(temp2) + 1))) == NULL) {
            my_free(students, i);
            return ERROR;
        }
        strcpy(students[i].name, temp);
        strcpy(students[i].id, temp2);
        if (strcmp(students[i].id, "Basic") == 0) {
            printf("Inside ");
            basic += students[i].price;
            user += 1;
            printf("%d\n", user);
        } else if (strcmp(students[i].id, "Standard") == 0) {
            standard += students[i].price;
            ++user2;
        } else if (strcmp(students[i].id, "Premium") == 0){
            premium += students[i].price;
            ++user3;
        }
    }

    my_free(students, n);
    if ((printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f\n", user, basic, user2, standard, user3, premium)) < 0)
        return ERROR;
    return SUCCESS;
}