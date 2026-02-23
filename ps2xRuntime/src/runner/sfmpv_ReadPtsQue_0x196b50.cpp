#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_ReadPtsQue
// Address: 0x196b50 - 0x196bf8
void sfmpv_ReadPtsQue_0x196b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_ReadPtsQue");


    ctx->pc = 0x196b50u;

    // 0x196b50: 0x27bdff90
    ctx->pc = 0x196b50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x196b54: 0x2402ffff
    ctx->pc = 0x196b54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196b58: 0xffb40050
    ctx->pc = 0x196b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x196b5c: 0xc0182d
    ctx->pc = 0x196b5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b60: 0xffb30040
    ctx->pc = 0x196b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x196b64: 0xe0a02d
    ctx->pc = 0x196b64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b68: 0xffb20030
    ctx->pc = 0x196b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x196b6c: 0xa0982d
    ctx->pc = 0x196b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b70: 0xffb00010
    ctx->pc = 0x196b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x196b74: 0x100902d
    ctx->pc = 0x196b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b78: 0xffbf0060
    ctx->pc = 0x196b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x196b7c: 0x80802d
    ctx->pc = 0x196b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b80: 0xffb10020
    ctx->pc = 0x196b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x196b84: 0x24060004
    ctx->pc = 0x196b84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x196b88: 0xae820000
    ctx->pc = 0x196b88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x196b8c: 0x8c640000
    ctx->pc = 0x196b8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196b90: 0x8c650004
    ctx->pc = 0x196b90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x196b94: 0xc061676
    ctx->pc = 0x196B94u;
    SET_GPR_U32(ctx, 31, 0x196B9Cu);
    ctx->pc = 0x196B98u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 15844)));
    ctx->pc = 0x1859D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SearchDelim_0x1859d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B9Cu; }
        else if (ctx->pc != 0x196B9Cu) { ctx->pc = 0x196B9Cu; }
    }
    if (ctx->pc != 0x196B9Cu) { return; }
    ctx->pc = 0x196B9Cu;
    // 0x196b9c: 0x1040000e
    ctx->pc = 0x196B9Cu;
    {
        const bool branch_taken_0x196b9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196BA0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196b9c) {
            ctx->pc = 0x196BD8u;
            goto label_196bd8;
        }
    }
    ctx->pc = 0x196BA4u;
    // 0x196ba4: 0x40302d
    ctx->pc = 0x196ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ba8: 0x200202d
    ctx->pc = 0x196ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bac: 0xc067050
    ctx->pc = 0x196BACu;
    SET_GPR_U32(ctx, 31, 0x196BB4u);
    ctx->pc = 0x196BB0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19C140u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPTS_ReadPtsQue_0x19c140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BB4u; }
        else if (ctx->pc != 0x196BB4u) { ctx->pc = 0x196BB4u; }
    }
    if (ctx->pc != 0x196BB4u) { return; }
    ctx->pc = 0x196BB4u;
    // 0x196bb4: 0x8fa30000
    ctx->pc = 0x196bb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196bb8: 0x4600007
    ctx->pc = 0x196BB8u;
    {
        const bool branch_taken_0x196bb8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x196BBCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 14276));
        if (branch_taken_0x196bb8) {
            ctx->pc = 0x196BD8u;
            goto label_196bd8;
        }
    }
    ctx->pc = 0x196BC0u;
    // 0x196bc0: 0x260302d
    ctx->pc = 0x196bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bc4: 0x240402d
    ctx->pc = 0x196bc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bc8: 0x26040a94
    ctx->pc = 0x196bc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2708));
    // 0x196bcc: 0xc065b08
    ctx->pc = 0x196BCCu;
    SET_GPR_U32(ctx, 31, 0x196BD4u);
    ctx->pc = 0x196BD0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ComplementPts_0x196c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BD4u; }
        else if (ctx->pc != 0x196BD4u) { ctx->pc = 0x196BD4u; }
    }
    if (ctx->pc != 0x196BD4u) { return; }
    ctx->pc = 0x196BD4u;
    // 0x196bd4: 0xae820000
    ctx->pc = 0x196bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_196bd8:
    // 0x196bd8: 0xdfbf0060
    ctx->pc = 0x196bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196bdc: 0xdfb40050
    ctx->pc = 0x196bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196be0: 0xdfb30040
    ctx->pc = 0x196be0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196be4: 0xdfb20030
    ctx->pc = 0x196be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196be8: 0xdfb10020
    ctx->pc = 0x196be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196bec: 0xdfb00010
    ctx->pc = 0x196becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196bf0: 0x3e00008
    ctx->pc = 0x196BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196BF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196BD8u: goto label_196bd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196BF8u;
}
