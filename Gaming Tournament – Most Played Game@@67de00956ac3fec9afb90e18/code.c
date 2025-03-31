// Your code here...

int mostPlayedGame(int games[], int n)
{
    int max = 0;
    int ids = 0;

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = 0; j < n; j++) {
            if (games[i] == games[j] && i != j) {
                ++count;
            }
        }
        if (count > max || (count == max && ids > games[i])) {
            max = count;
            ids = games[i];
        }
    }
    return ids;
}