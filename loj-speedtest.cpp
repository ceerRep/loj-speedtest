#include <tuple>
#include <chrono>
#include <iostream>

int eular();
int floattest();
int floyd();
int integer1();
int integer2();
int loop();
int memory_cache1();
int memory_cache2();
int memory_cache3();
int pipeline1();
int pipeline2();
int pipeline3();
int pipeline4();
int stdnew();
int stdset();

using TestFunc_t = int (*)();

std::tuple<const char *, TestFunc_t> tests[] = {
    {"loop", &loop},
    {"eular", &eular},
    {"stdset", &stdset},
    {"stdnew", &stdnew},
    {"memory_cache1", &memory_cache1},
    {"memory_cache2", &memory_cache2},
    {"memory_cache3", &memory_cache3},
    {"integer1", &integer1},
    {"integer2", &integer2},
    {"floattest", &floattest},
    {"pipeline1", &pipeline1},
    {"pipeline2", &pipeline2},
    {"pipeline3", &pipeline3},
    {"pipeline4", &pipeline4},
};

int main(void)
{
    for (auto [name, test]: tests) {
        std::cout << name << ' ';
        std::cout.flush();

        for (int i = 0; i < 3; i++) {
            auto begin_time = std::chrono::high_resolution_clock::now();
            test();
            auto end_time = std::chrono::high_resolution_clock::now();
            auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - begin_time).count();
            std::cout << diff << ' ';
            std::cout.flush();
        }
        std::cout << std::endl;
    }
}
