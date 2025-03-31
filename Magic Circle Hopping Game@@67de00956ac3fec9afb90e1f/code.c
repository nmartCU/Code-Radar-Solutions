// Your code here...
#include <stdbool.h>

int finalEnergy(int cloud[], int n, int k)
{
    int energy = 100;
    int pos = 0;
    bool isFirst = false;

    while (energy > 0) {
        int nextCloud = (pos + k) % n;
        int cost = cloud[nextCloud] == 1 ? 3 : 1;
        energy -= cost;
        if (nextCloud == 0 && isFirst)
            break;
        pos = nextCloud;
        isFirst = true;        
    }
    return energy;
}