#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitGet
// Address: 0x125f98 - 0x125fe4
void _sysbitGet_0x125f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125f98u;

    // 0x125f98: 0x27bdffc0
    ctx->pc = 0x125f98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125f9c: 0xffb10010
    ctx->pc = 0x125f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x125fa0: 0xffb00000
    ctx->pc = 0x125fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125fa4: 0xa0882d
    ctx->pc = 0x125fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fa8: 0xffb20020
    ctx->pc = 0x125fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x125fac: 0xffbf0030
    ctx->pc = 0x125facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x125fb0: 0xc0497b8
    ctx->pc = 0x125FB0u;
    SET_GPR_U32(ctx, 31, 0x125FB8u);
    ctx->pc = 0x125FB4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x125ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FB8u; }
    }
    if (ctx->pc != 0x125FB8u) { return; }
    ctx->pc = 0x125FB8u;
    // 0x125fb8: 0x40902d
    ctx->pc = 0x125fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fbc: 0x200202d
    ctx->pc = 0x125fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fc0: 0xc0497c0
    ctx->pc = 0x125FC0u;
    SET_GPR_U32(ctx, 31, 0x125FC8u);
    ctx->pc = 0x125FC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitFlush_0x125f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FC8u; }
    }
    if (ctx->pc != 0x125FC8u) { return; }
    ctx->pc = 0x125FC8u;
    // 0x125fc8: 0x240102d
    ctx->pc = 0x125fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125fcc: 0xdfbf0030
    ctx->pc = 0x125fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125fd0: 0xdfb20020
    ctx->pc = 0x125fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125fd4: 0xdfb10010
    ctx->pc = 0x125fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125fd8: 0xdfb00000
    ctx->pc = 0x125fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125fdc: 0x3e00008
    ctx->pc = 0x125FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125FE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125FE4u;
}
