#include <cstdint>

// Signed integers
using s8    = std::int8_t;
using s16   = std::int16_t;
using s32   = std::int32_t;
using s64   = std::int64_t;

// Unsigned integers
using u8    = std::uint8_t;
using u16   = std::uint16_t;
using u32   = std::uint32_t;
using u64   = std::uint64_t;

// Faster integers
using s32f  = std::int_fast32_t;
using u32f  = std::uint_fast32_t;

// Floating-points types
using f32   = float;
using f64   = double;

union f32u
{
    f32 val;
    s32 bits;
};