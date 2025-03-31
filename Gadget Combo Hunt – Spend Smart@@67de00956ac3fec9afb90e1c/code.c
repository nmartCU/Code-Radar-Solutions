// Your code here...

int maxGadgetSpend(int keyb[], int n, int headset[], int m, int budget)
{
    int result = -1;

    // 3 1
    //  5 2 8 / i = 0 == 3
    //  3 + 5 == 8 OK save 8 / 3 + 2 == 5 / 3 + 8 == 11 > budget
    //  1 + 5 == 6 / 1 + 2 == 3 / 1 + 8 == 9 >

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int temp = keyb[i] + headset[j];
            if (temp > result && temp <= budget) {
                result = temp;
            }
        }
    }
    return result;
}