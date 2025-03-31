// Your code here...
#include <stdbool.h>

int finalEnergy(int cloud[], int n, int k)
{
    int energy = 100;
    int pos = 0;

    while (energy > 0) {
        int nextCloud = (pos + k) % n;
        int cost = cloud[nextCloud] == 1 ? 3 : 1;
        energy -= cost;
        pos = nextCloud;
        if (pos == 0)
            break;
    }
    return energy;
}