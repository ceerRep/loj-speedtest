namespace
{
    typedef unsigned long long ull;

#define Pc 1000000007
    int Pv = 1000000007;
    const int MX = 100000000;
}

int integer1()
{
    ull ans = 1;
    for (int i = 1; i < MX; i++)
        ans = ans * i % Pc;
    return ans;
}

int integer2()
{
    ull ans = 1;
    for (int i = 1; i < MX; i++)
        ans = ans * i % Pv;
    return ans;
}
