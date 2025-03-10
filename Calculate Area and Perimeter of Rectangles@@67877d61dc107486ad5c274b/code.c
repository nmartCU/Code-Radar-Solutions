
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

int main(int argc, char *const argv[])
{
    int n = 0;
    rectangle_t *rectangles = NULL;
    int number = 0;
        
    if ((scanf("%d", &n)) != 1)
        return ERROR;
    if ((rectangles = malloc(sizeof(rectangle_t) * (n))) == NULL)
        return ERROR;
    for (int i = 0; i < n; i++) {
        char temp[MAX_LENGTH] = {0};
        if ((scanf("%d %d", &rectangles[i].length, temp, &rectangles[i].breadth)) != 2) {
            free(rectangles);
            return ERROR;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("Rectangle %d: Area = %0.2f, Perimeter = %0.2f\n", i + 1, rectangles[i].length * rectangles[i].breadth, 2 * (rectangles[i].length + rectangles[i].breadth));
    }
    free(rectangles);
    return SUCCESS;
}