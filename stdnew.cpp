namespace
{
    const int MX = 20000000;
    int *it[MX];
}
int stdnew()
{
    for (int i = 0; i < MX; i++)
        it[i] = new int;
    for (int i = 0; i < MX; i++)
        *it[i] = i;
    int ans = 0;
    for (int i = 0; i < MX; i++)
        ans ^= *it[i];
    return ans;
}
