// Your code here...

int finalEnergy(int cloud[], int n, int k)
{
    int energy = 100;
    int pos = 0;

    while (energy > 100 && pos != 0) {
        int nextCloud = (pos + k) % n;
        int cost = cloud[nextCloud] == 1 ? 3 : 1;
        energy -= cost;
        if (cloud[nextCloud] == cloud[0])
            break;
    }
    return energy;
}