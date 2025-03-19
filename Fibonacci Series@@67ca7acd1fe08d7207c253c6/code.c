// Your code here...

void fibonacciSeries(int n)
{
    int next = 0;
    int nbr1 = 0;
    int nbr2 = 1;

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = nbr1 + nbr2;
            nbr1 = nbr2;
            nbr2 = nbr2 - i;
        }
        printf("%d ", next);
    }
}