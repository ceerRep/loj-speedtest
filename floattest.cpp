namespace
{
    const int MX = 2000000000;
}

int floattest()
{
    double ans = 0.61234567898765, t = 1, s = 0;
    for (int i = 1; i < MX; i++)
        s += (t *= ans);
    return s;
}
