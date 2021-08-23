#include <set>
using namespace std;

namespace
{
    const int MX = 1000000;
    int sed = 0;
    inline int rand1() { return sed = (sed * sed * 73 + sed * 233 + 19260817); }
}

int stdset()
{
    set<int> S;
    for (int i = 0; i < MX; i++)
        S.insert(rand1());
    int ans = 0;
    for (set<int>::iterator it = S.begin(); it != S.end(); it++)
        ans ^= *it;
    return ans;
    return 0;
}
