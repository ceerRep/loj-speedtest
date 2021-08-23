namespace
{
    const int MX = 1 << 25;
    int a[MX];

    inline unsigned int rand1()
    {
        static unsigned int sed = 0;
        return (sed = (sed * 233 + 19260421)) & (MX - 1);
    }
    inline unsigned int rand2()
    {
        static unsigned int sed = 0;
        return (sed = (sed * (MX + 1) + 1025)) & (MX - 1);
    }
    inline unsigned int rand3()
    {
        static unsigned int sed = 0;
        return (sed = (sed * (MX + 1) + 1)) & (MX - 1);
    }
}
int memory_cache1()
{
    for (int i = 0; i < MX; i++)
        a[rand1()] = i;
    return 0;
}
int memory_cache2()
{
    for (int i = 0; i < MX; i++)
        a[rand2()] = i;
    return 0;
}
int memory_cache3()
{
    for (int i = 0; i < MX; i++)
        a[rand3()] = i;
    return 0;
}
int getA(int x)
{
    return a[x];
}
