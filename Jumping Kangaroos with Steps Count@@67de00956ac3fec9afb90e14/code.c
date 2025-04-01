// Your code here...

int kangaroo(int x1, int v1, int x2, int v2)
{
    // x1 + n*v1 = x2 + n*v2 / 0 3 4 2
    // 0 + n * 3 = 4 + n * 2
    // 0 + 3n = 4 + 2n
    // 3n = 4 + 2n - 0
    // 3n - 2n = 4
    // n = 4
    // 0 3 4 2

    // x1 + n*v1 = x2 + n*v2 / 0 3 4 2
    // 0 + n * 2 = 5 + n * 3
    // 0 + 2n = 5 + 3n
    // 3n = 5 + 3n - 0
    // 3n - 3n = 5
    // 0 = 3 => -1
    // 0 3 4 2
    
    int n = 0;
    int exp = v1 * n + x1;
    int exp2 = x2 + v2 * n;
    for (int i = 0; i < v1; i++) {
        int exp = v1 * n + x1;
        int exp2 = x2 + v2 * n;
        if (exp == exp2)
            return i;
        n++;
    }
    return -1;
    
}