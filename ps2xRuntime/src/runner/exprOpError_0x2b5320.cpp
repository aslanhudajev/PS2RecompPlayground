#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpError
// Address: 0x2b5320 - 0x2b5390
void exprOpError_0x2b5320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5320u;

    // 0x2b5320: 0x27bdffe0
    ctx->pc = 0x2b5320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5324: 0xffbf0010
    ctx->pc = 0x2b5324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b5328: 0xffb00000
    ctx->pc = 0x2b5328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b532c: 0x80802d
    ctx->pc = 0x2b532cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5330: 0x3c04003b
    ctx->pc = 0x2b5330u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b5334: 0x24844650
    ctx->pc = 0x2b5334u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b5338: 0x24050020
    ctx->pc = 0x2b5338u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b533c: 0x3c06003b
    ctx->pc = 0x2b533cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b5340: 0x24c60d80
    ctx->pc = 0x2b5340u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b5344: 0xc0ad0d6
    ctx->pc = 0x2B5344u;
    SET_GPR_U32(ctx, 31, 0x2B534Cu);
    ctx->pc = 0x2B5348u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B534Cu; }
    }
    if (ctx->pc != 0x2B534Cu) { return; }
    ctx->pc = 0x2B534Cu;
    // 0x2b534c: 0x3c04003b
    ctx->pc = 0x2b534cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b5350: 0xc0b4a34
    ctx->pc = 0x2B5350u;
    SET_GPR_U32(ctx, 31, 0x2B5358u);
    ctx->pc = 0x2B5354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18872));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5358u; }
    }
    if (ctx->pc != 0x2B5358u) { return; }
    ctx->pc = 0x2B5358u;
    // 0x2b5358: 0x3c04003b
    ctx->pc = 0x2b5358u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b535c: 0xc0b4a34
    ctx->pc = 0x2B535Cu;
    SET_GPR_U32(ctx, 31, 0x2B5364u);
    ctx->pc = 0x2B5360u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5364u; }
    }
    if (ctx->pc != 0x2B5364u) { return; }
    ctx->pc = 0x2B5364u;
    // 0x2b5364: 0x3c020037
    ctx->pc = 0x2b5364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b5368: 0x8c4320ac
    ctx->pc = 0x2b5368u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b536c: 0x8c620048
    ctx->pc = 0x2b536cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b5370: 0x34420001
    ctx->pc = 0x2b5370u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b5374: 0xac620048
    ctx->pc = 0x2b5374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2b5378: 0x24020020
    ctx->pc = 0x2b5378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b537c: 0xae020000
    ctx->pc = 0x2b537cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b5380: 0xdfbf0010
    ctx->pc = 0x2b5380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5384: 0xdfb00000
    ctx->pc = 0x2b5384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5388: 0x3e00008
    ctx->pc = 0x2B5388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B538Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5390u;
}
