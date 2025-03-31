// Your code here...

int gateOpen(int treshold, int entryTimes[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (entryTimes[i] <= 0)
            ++count;
    }
    return count >= treshold ? 1 : 0;
}