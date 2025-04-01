// Your code here...

int kangaroo(int x1, int v1, int x2, int v2)
{
    // x1 + n * v1 = x2 + n * v2 
    // x1 + n * v1 - n * v2 = x2
    // n * v1 - n * v2 = x2 - x1
    // n * (v1 - v2) = x2 - x1
    // n = (x2 - x1) / (v1 - v2)

    if (v1 == v2 && x1 < x2)
        return -1;
    if (x2 - x1 % v1 - v2 == 0) {
        int exp = (x2 - x1) / (v1 - v2);
        return exp;
    } 
    return -1;
}