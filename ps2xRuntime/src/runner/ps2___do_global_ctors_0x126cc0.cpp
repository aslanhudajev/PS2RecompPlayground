#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// __CTOR_LIST__ at 0x3c0000 - 0x4e78 (from lui a3,0x3c; addiu -0x4e78)
static constexpr uint32_t kCtorListBase = 0x3bb188u;

void ps2___do_global_ctors_0x126cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;
    
    uint32_t count = READ32(kCtorListBase);
    if (count == 0xffffffffu)
    {
        count = 0u;
        if (READ32(kCtorListBase + 4u) != 0u)
        {
            uint32_t i = 1u;
            while (READ32(kCtorListBase + i * 4u) != 0u)
                i++;
            count = i - 1u;  // first zero at index i → ctors at indices 1..i-1
        }
    }
    for (uint32_t i = count; i != 0u; i--)
    {
        const uint32_t ctorAddr = READ32(kCtorListBase + i * 4u);
        if (ctorAddr == 0u)
            continue;
        auto *fn = runtime->lookupFunction(ctorAddr);
        if (fn)
            fn(rdram, ctx, runtime);
    }

    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}