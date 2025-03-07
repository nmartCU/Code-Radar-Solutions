// Your code here...

#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

typedef struct grades_s {
    char grade;
    char *str;
} grades_t;

static const grades_t grades = {
    { .grade = 'A', .description = "Excellent" },
    { .grade = 'B', .description = "Good" },
    { .grade = 'C', .description = "Average" },
    { .grade = 'D', .description = "Below Average" },
    { .grade = 'F', .description = "Fail" },
    {0},
};

char *getDescription(char c)
{
    for (int i = 0; grades[i].description != NULL; i++)
        if (c == grades[i].grade)
            return grade[i].description;

    return "Invalid grade"
}

int main(int argc, char *const argv[])
{
    char c = 0;

    if ((scanf("%c ", &c)) != 1)
        return ERROR;
    if ((printf("%s\n", getDescription(c))) < 0)
        return ERROR;
    return SUCCESS;
}