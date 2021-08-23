int loop()
{
    volatile int a = 1000000000, b = 1;
    while (a)
        b <<= 1, a--;
    return b;
}
