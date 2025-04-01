// Your code here...

int calculatePenalty(int subD, int subM ,int subY, int dueD, int dueM ,int dueY)
{
    int penalt = 0;

    if (subD <= dueD && subM <= dueM && subY <= dueY)
        return penalty;
    if (subY > dueY)
        penalty += 5000;
    if (subM > dueM)
        penalty += 200 * (subM - dueM); 
    if (subD > dueD)
        penalty += 50 * (subD - dueD);
    return penalty;
}