
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define ERROR 1
#define SUCCESS 0
#define MAX_LENGTH 256

typedef struct rectangle_s {
    int breadth;
    int length;
} rectangle_t;

void my_free(rectangle_t *rectangles, int end)
{
    if (!rectangles)
        return;
    for (int j = 0; j < end; j++)
        free(rectangles[j].name);
    free(rectangles);
}

int main(int argc, char *const argv[])
{
    int n = 0;
    rectangle_t_t *rectangles = NULL;
    int number = 0;
        
    if ((scanf("%d", &n)) != 1)
        return ERROR;
    if ((rectangles = malloc(sizeof(rectangle_t_t) * (n))) == NULL)
        return ERROR;
    for (int i = 0; i < n; i++) {
        char temp[MAX_LENGTH] = {0};
        if ((scanf("%d %d", &rectangles[i].length, temp, &rectangles[i].breadth)) != 2) {
            my_free(rectangles, i);
            return ERROR;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("Rectangle %d: Area = %0.2f, Perimeter = %0.2f\n", i + 1, &rectangles[i].length * &rectangles[i].breadth, 2 * (&rectangles[i].length + &rectangles[i].breadth));
    }
    my_free(rectangles, n);
    return SUCCESS;
}