// Your code here...

#include <stdio.h>

#define ERROR
#define SUCCESS

typedef struct traffic_s {
    char input;
    char *action;
} traffic_t;

static const traffic_t lights[] = {
    {.input = 'R', .action = "Stop"},
    {.input = 'G', .action = "Go"},
    {.input = 'Y', .action = "Slow Down"},
    {0},
};

char *getAction(char c)
{
    for (int i = 0; lights[i].action != NULL; i++)
        if (c == lights[i].input)
            return lights[i].description;

    return "Invalid input";
}

int main(int argc, char *const argv[])
{
    char c = 0;

    if ((scanf("%c \n", &c)) != 1)
        return ERROR;
    if ((printf("%s\n", getAction(c))) < 0)
        return ERROR;
    return SUCCESS;
}