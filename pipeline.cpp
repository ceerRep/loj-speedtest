namespace
{
    typedef unsigned int uint;
    const int MX = 1 << 24;
}

int pipeline1()
{
    for (int i = 0; i < MX; i++)
    {
        asm("add %%r8, %%r9\n\t"
            "add %%r9, %%r10\n\t"
            "add %%r10, %%r11\n\t"
            "add %%r11, %%r12\n\t"
            "add %%r12, %%r13\n\t"
            "add %%r13, %%r14\n\t"
            "add %%r14, %%r15\n\t"
            "add %%r15, %%r8\n\t"
            :
            :
            : "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15");
    }
    return 0;
}

int pipeline2()
{
    for (int i = 0; i < MX; i++)
    {
        asm("add %%r8, %%r10\n\t"
            "add %%r9, %%r11\n\t"
            "add %%r10, %%r12\n\t"
            "add %%r11, %%r13\n\t"
            "add %%r12, %%r14\n\t"
            "add %%r13, %%r15\n\t"
            "add %%r14, %%r8\n\t"
            "add %%r15, %%r9\n\t"
            :
            :
            : "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15");
    }
    return 0;
}

int pipeline3()
{
    for (int i = 0; i < MX; i++)
    {
        asm("add %%r8, %%r12\n\t"
            "add %%r9, %%r13\n\t"
            "add %%r10, %%r14\n\t"
            "add %%r11, %%r15\n\t"
            "add %%r12, %%r8\n\t"
            "add %%r13, %%r9\n\t"
            "add %%r14, %%r10\n\t"
            "add %%r15, %%r11\n\t"
            :
            :
            : "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15");
    }
    return 0;
}

int pipeline4()
{
    for (int i = 0; i < MX; i++)
    {
        asm("add %%r8, %%r8\n\t"
            "add %%r9, %%r9\n\t"
            "add %%r10, %%r10\n\t"
            "add %%r11, %%r11\n\t"
            "add %%r12, %%r12\n\t"
            "add %%r13, %%r13\n\t"
            "add %%r14, %%r14\n\t"
            "add %%r15, %%r15\n\t"
            :
            :
            : "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15");
    }
    return 0;
}
