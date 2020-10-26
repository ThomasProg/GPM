// Compilation
// - MSVC developer command prompt: cl /Wall /EHsc /o main.exe main.cpp
// - clang++ or g++: [clang++|g++] -Wall -o main.exe main.cpp

#include "types.h"
#include <iostream>

int main()
{
    s8  test1   = 100;
    s16 test2   = 6500;
    s32 test3   = 100000;
    s64 test4   = 100000000000;

    // Unsigned integers
    u8  test5   = 200u;
    u16 test6   = 130000u;
    u32 test7   = 200000u;
    u64 test8   = 200000000000u;

    // Faster integers
    s32f test9  = 7894615;
    u32f test10 = 415640u;

    // Floating-points types
    f32 test11  = 2569.2131f;
    f64 test12  = 2564.45757547f;

    f32u test13{.0021684f};
    f32u test14{5};

    std::cerr << "test1 = " << (s16)test1 << '\n';
    std::cerr << "test2 = " << test2 << '\n';
    std::cerr << "test3 = " << test3 << '\n';
    std::cerr << "test4 = " << test4 << '\n';
    std::cerr << "test5 = " << (u16)test5 << '\n';
    std::cerr << "test6 = " << test6 << '\n';
    std::cerr << "test7 = " << test7 << '\n';
    std::cerr << "test8 = " << test8 << '\n';
    std::cerr << "test9 = " << test9 << '\n';
    std::cerr << "test10 = " << test10 << '\n';
    std::cerr << "test11 = " << test11 << '\n';
    std::cerr << "test12 = " << test12 << '\n';
    std::cerr << "test13.val = " << test13.val << '\n';
    std::cerr << "test13.bits = " << test13.bits << '\n';
    std::cerr << "test14.val = " << test14.val << '\n';
    std::cerr << "test14.bits = " << test14.bits << '\n';

    return 0;
}