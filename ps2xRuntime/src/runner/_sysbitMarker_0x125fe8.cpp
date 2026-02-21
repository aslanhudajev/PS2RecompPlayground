#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitMarker
// Address: 0x125fe8 - 0x12602c
void _sysbitMarker_0x125fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125fe8u;

    // 0x125fe8: 0x27bdffd0
    ctx->pc = 0x125fe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125fec: 0x24050001
    ctx->pc = 0x125fecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x125ff0: 0xffb00000
    ctx->pc = 0x125ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125ff4: 0xffb10010
    ctx->pc = 0x125ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x125ff8: 0xffbf0020
    ctx->pc = 0x125ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x125ffc: 0xc0497b8
    ctx->pc = 0x125FFCu;
    SET_GPR_U32(ctx, 31, 0x126004u);
    ctx->pc = 0x126000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x125ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126004u; }
    }
    if (ctx->pc != 0x126004u) { return; }
    ctx->pc = 0x126004u;
    // 0x126004: 0x40882d
    ctx->pc = 0x126004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126008: 0x200202d
    ctx->pc = 0x126008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12600c: 0xc0497c0
    ctx->pc = 0x12600Cu;
    SET_GPR_U32(ctx, 31, 0x126014u);
    ctx->pc = 0x126010u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x125F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitFlush_0x125f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126014u; }
    }
    if (ctx->pc != 0x126014u) { return; }
    ctx->pc = 0x126014u;
    // 0x126014: 0x220102d
    ctx->pc = 0x126014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126018: 0xdfbf0020
    ctx->pc = 0x126018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12601c: 0xdfb10010
    ctx->pc = 0x12601cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126020: 0xdfb00000
    ctx->pc = 0x126020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126024: 0x3e00008
    ctx->pc = 0x126024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126028u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12602Cu;
}
