#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void compressString(char str[MAX_LEN], char compress[MAX_LEN * 2])
{
    int idx = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char temp = str[i];
        int count = 0;
        for (int j = 0; str[j] != '\0'; j++) {
            if (temp == str[j] && strrchr(compress, temp) == NULL)
                ++count;
        }
        if (count > 0) {
            compress[idx] = temp;
            compress[idx + 1] = count + '0';
            idx += 2;
        }
    }
    if (strlen(compress) > strlen(str)) {
        strcpy(compress, str);
    }
}
