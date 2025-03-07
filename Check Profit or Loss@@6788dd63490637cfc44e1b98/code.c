// Your code here...
    // Your code here...
    #include <stdio.h>

    #define ERROR 1
    #define SUCCESS 0

    int main(int argc, char *const av [])
    {
        int a, b = 0;
        if ((scanf("%d %d", &a, &b)) != 2)
            return ERROR;
        int profit = b - a;
        if ((printf("%s\n", (profit > 0 ? "Profit" : (profit < 0) ? "Loss" : "No Profit No Loss" ))) < 0)
            return ERROR;
        return SUCCESS;
    }