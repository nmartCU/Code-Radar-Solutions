// Your code here...

int finalEnergy(int cloud[], int n, int k)
{
    int energy = 100;

    for (int i = 0; i < n; i++) {
        int pos = i + k;
        // 6(i) + 2(k) == 8 => 8 % 8 == 0
            // 6 - 7 = 1
        if (pos >= n) {
            int idx = n - 1 - i;
            pos = n % pos + idx;
        }
        int cost = cloud[pos] == 1 ? 3 : 1;
        energy -= cost;
        if (cloud[pos] == cloud[0])
            break;
    }
    return energy;
}