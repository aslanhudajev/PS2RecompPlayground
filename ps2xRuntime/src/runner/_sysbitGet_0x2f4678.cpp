#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitGet
// Address: 0x2f4678 - 0x2f46c4
void _sysbitGet_0x2f4678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f4678u;

    // 0x2f4678: 0x27bdffc0
    ctx->pc = 0x2f4678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f467c: 0xffb10010
    ctx->pc = 0x2f467cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f4680: 0xffb00000
    ctx->pc = 0x2f4680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f4684: 0xa0882d
    ctx->pc = 0x2f4684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4688: 0xffb20020
    ctx->pc = 0x2f4688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f468c: 0xffbf0030
    ctx->pc = 0x2f468cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f4690: 0xc0bd170
    ctx->pc = 0x2F4690u;
    SET_GPR_U32(ctx, 31, 0x2F4698u);
    ctx->pc = 0x2F4694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F45C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x2f45c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4698u; }
    }
    if (ctx->pc != 0x2F4698u) { return; }
    ctx->pc = 0x2F4698u;
    // 0x2f4698: 0x40902d
    ctx->pc = 0x2f4698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f469c: 0x200202d
    ctx->pc = 0x2f469cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f46a0: 0xc0bd178
    ctx->pc = 0x2F46A0u;
    SET_GPR_U32(ctx, 31, 0x2F46A8u);
    ctx->pc = 0x2F46A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F45E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitFlush_0x2f45e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F46A8u; }
    }
    if (ctx->pc != 0x2F46A8u) { return; }
    ctx->pc = 0x2F46A8u;
    // 0x2f46a8: 0x240102d
    ctx->pc = 0x2f46a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f46ac: 0xdfbf0030
    ctx->pc = 0x2f46acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f46b0: 0xdfb20020
    ctx->pc = 0x2f46b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f46b4: 0xdfb10010
    ctx->pc = 0x2f46b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f46b8: 0xdfb00000
    ctx->pc = 0x2f46b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f46bc: 0x3e00008
    ctx->pc = 0x2F46BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F46C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F46C4u;
}
