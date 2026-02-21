#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// __CTOR_LIST__ at 0x3c0000 - 0x4e78 (from lui a3,0x3c; addiu -0x4e78)
static constexpr uint32_t kCtorListBase = 0x3bb188u;

// __do_global_ctors (libgcc2.c): call each entry in __CTOR_LIST__ in reverse order.
void ps2___do_global_ctors_0x2f7af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime)
{
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
    ctx->pc = GPR_U32(ctx, 31);
}
