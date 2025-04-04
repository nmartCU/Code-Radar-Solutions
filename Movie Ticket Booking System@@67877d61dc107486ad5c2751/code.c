// Your code here...
// Your code here...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

typedef struct car_s {
    char *id;
    char *name;
    int price;
} car_t;

void my_free(car_t *students, int end)
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
    car_t *students = NULL;
    float car, truck, bike = 0;
        
    if ((scanf("%d\n", &n)) != 1)
        return ERROR;
    if ((students = malloc(sizeof(car_t) * (n))) == NULL)
        return ERROR;

    for (int i = 0; i < n; i++) {
        char temp[MAX_LENGTH] = {0};
        char temp2[MAX_LENGTH] = {0};

        if ((scanf("%s %s %d", temp2, temp, &students[i].price)) != 3) {
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
        if (strcmp(students[i].name, "Standard") == 0) {
            car += students[i].price;
        } else if (strcmp(students[i].name, "Premium") == 0) {
            truck += students[i].price;
        } else if (strcmp(students[i].name, "VIP") == 0){
            bike += students[i].price;
        }
    }

    my_free(students, n);
    if ((printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", car, truck, bike)) < 0)
        return ERROR;
    return SUCCESS;
}