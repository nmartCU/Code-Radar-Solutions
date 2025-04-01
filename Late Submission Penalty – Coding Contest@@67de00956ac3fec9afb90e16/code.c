// Your code here...

int calculatePenalty(int subD, int subM ,int subY, int dueD, int dueM ,int dueY)
{
    int penalty = 0;

    if (subY > dueY) {
        penalty += 5000;
        return penalty;
    }
    if (subY != dueY)
        return penalty;
    if (subM > dueM)
        penalty += 200 * (subM - dueM); 
    if (subD > dueD)
        penalty += 10 * (subD - dueD);
    return penalty;
}