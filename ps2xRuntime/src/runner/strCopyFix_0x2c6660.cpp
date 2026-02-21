#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"

// strCopyFix(dest, src): skip leading space/tab/newline in src, then copy
// word to dest with uppercase (a-z -> A-Z), null-terminate.
// a0 = param_1 = dest, a1 = param_2 = src (PS2 pointers).
void strCopyFix_0x2c6660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;

    const uint32_t destAddr = getRegU32(ctx, 4);
    const uint32_t srcAddr = getRegU32(ctx, 5);
    char* dest = reinterpret_cast<char*>(getMemPtr(rdram, destAddr));
    const char* src = reinterpret_cast<const char*>(getMemPtr(rdram, srcAddr));

    if (!dest || !src) {
        if (ctx->pc == __entryPc)
            ctx->pc = getRegU32(ctx, 31);
        return;
    }

    while (*src == ' ' || *src == '\t' || *src == '\n')
        ++src;

    if (*src != '\0' && *src != ' ' && *src != '\t' && *src != '\n') {
        while (*src != '\0' && *src != ' ' && *src != '\t' && *src != '\n') {
            char c = *src++;
            if (c >= 'a' && c <= 'z')
                c -= 0x20;
            *dest++ = c;
        }
    }
    *dest = '\0';

    if (ctx->pc == __entryPc)
        ctx->pc = getRegU32(ctx, 31);
}
