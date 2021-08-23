namespace
{
    typedef unsigned int uint;
    const int MX = 1 << 24;
}

int pipeline1()
{
    for (int i = 0; i < MX; i++)
    {
#if !defined(__arm64) && !defined(__aarch64__)
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
#else
        asm("add x9, x8, x9\n\t"
            "add x10, x9, x10\n\t"
            "add x11, x10, x11\n\t"
            "add x12, x11, x12\n\t"
            "add x13, x12, x13\n\t"
            "add x14, x13, x14\n\t"
            "add x15, x14, x15\n\t"
            "add x8, x15, x8\n\t"
            :
            :
            : "x8", "x9", "x10", "x11", "x12", "x13", "x14", "x15");
#endif
    }
    return 0;
}

int pipeline2()
{
    for (int i = 0; i < MX; i++)
    {
#if !defined(__arm64) && !defined(__aarch64__)
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
#else
        asm("add x10, x8, x10\n\t"
            "add x11, x9, x11\n\t"
            "add x12, x10, x12\n\t"
            "add x13, x11, x13\n\t"
            "add x14, x12, x14\n\t"
            "add x15, x13, x15\n\t"
            "add x8, x14, x8\n\t"
            "add x9, x15, x9\n\t"
            :
            :
            : "x8", "x9", "x10", "x11", "x12", "x13", "x14", "x15");
#endif
    }
    return 0;
}

int pipeline3()
{
    for (int i = 0; i < MX; i++)
    {
#if !defined(__arm64) && !defined(__aarch64__)
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
#else
        asm("add x12, x8, x12\n\t"
            "add x13, x9, x13\n\t"
            "add x14, x10, x14\n\t"
            "add x15, x11, x15\n\t"
            "add x8, x12, x8\n\t"
            "add x9, x13, x9\n\t"
            "add x10, x14, x10\n\t"
            "add x11, x15, x11\n\t"
            :
            :
            : "x8", "x9", "x10", "x11", "x12", "x13", "x14", "x15");
#endif
    }
    return 0;
}

int pipeline4()
{
    for (int i = 0; i < MX; i++)
    {

#if !defined(__arm64) && !defined(__aarch64__)
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
#else
        asm("add x8, x8, x8\n\t"
            "add x9, x9, x9\n\t"
            "add x10, x10, x10\n\t"
            "add x11, x11, x11\n\t"
            "add x12, x12, x12\n\t"
            "add x13, x13, x13\n\t"
            "add x14, x14, x14\n\t"
            "add x15, x15, x15\n\t"
            :
            :
            : "x8", "x9", "x10", "x11", "x12", "x13", "x14", "x15");
#endif
    }
    return 0;
}
