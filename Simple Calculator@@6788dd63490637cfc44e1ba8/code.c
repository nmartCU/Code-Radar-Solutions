#include <stdio.h>

#define ERROR 1
#define SUCCESS 0

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return  a / b; }

typedef struct operation_handlers_s {
    char operator;
    int (*operation)(int, int);
} operation_handler_t;

static const operation_handler_t operation_handlers[] = {
    {.operator = '+', .operation = &add},
    {.operator = '-', .operation = &subtract},
    {.operator = '*', .operation = &multiply},
    {.operator = '/', .operation = &divide},
    {0}
};

int operations(int a, int b, char c)
{
    for (int i = 0; operation_handlers[i].operation != NULL; i++) {
        if (c == operation_handlers[i].operator)
            return operation_handlers[i].operation(a, b);
    }
    return 0;
}

int main(int argc, char *const av [])
{
    int a, b = 0;
    char op = 0;
    if ((scanf("%d %d %c", &a, &b, &op)) != 3)
        return ERROR;
    if (c == '/' && b == 0)
        return ERROR;
    if ((printf("%d\n", (operation(a, b, c)))) < 0)
        return ERROR;
    return SUCCESS;
}