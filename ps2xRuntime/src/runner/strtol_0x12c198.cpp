#include "ps2_runtime.h"
#include "ps2_memory.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cctype>

// strtol(s, ptr, base): parse long at a0; endptr in a1 (can be 0); base in a2. Return in v0/v1 (64-bit in v0).
void strtol_0x12c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t sAddr   = getRegU32(ctx, 4);
    const uint32_t ptrAddr = getRegU32(ctx, 5);
    const int radix = static_cast<int>(getRegU32(ctx, 6));
    const char* s = reinterpret_cast<const char*>(getConstMemPtr(rdram, sAddr));
    if (!s) {
        setReturnU32(ctx, 0);
        if (ptrAddr) { uint32_t* p = reinterpret_cast<uint32_t*>(getMemPtr(rdram, ptrAddr)); if (p) *p = sAddr; }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    const char* basePtr = s;
    while (std::isspace(static_cast<unsigned char>(*s)))
        s++;
    int sign = 1;
    if (*s == '-') { sign = -1; s++; } else if (*s == '+') s++;
    int b = (radix == 0) ? 10 : radix;
    if (b == 16 && s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) s += 2;
    if (b == 0) { b = (*s == '0' && (s[1] == 'x' || s[1] == 'X')) ? 16 : 10; if (b == 16) s += 2; }
    unsigned long u = 0;
    for (;;) {
        int d;
        if (std::isdigit(static_cast<unsigned char>(*s))) d = *s - '0';
        else if (b >= 11 && *s >= 'a' && *s <= 'z') d = *s - 'a' + 10;
        else if (b >= 11 && *s >= 'A' && *s <= 'Z') d = *s - 'A' + 10;
        else break;
        if (d >= b) break;
        u = u * static_cast<unsigned long>(b) + static_cast<unsigned long>(d);
        s++;
    }
    if (ptrAddr) {
        const uint32_t endOff = static_cast<uint32_t>(s - basePtr);
        uint32_t* p = reinterpret_cast<uint32_t*>(getMemPtr(rdram, ptrAddr));
        if (p) *p = sAddr + endOff;
    }
    long result = (sign < 0) ? -static_cast<long>(u) : static_cast<long>(u);
    setReturnS32(ctx, static_cast<int32_t>(result));
    ctx->pc = getRegU32(ctx, 31);
}
