#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfpl2_Pause
// Address: 0x19a8b0 - 0x19a924
void sfpl2_Pause_0x19a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfpl2_Pause");


    ctx->pc = 0x19a8b0u;

    // 0x19a8b0: 0x27bdffd0
    ctx->pc = 0x19a8b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a8b4: 0x24020002
    ctx->pc = 0x19a8b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a8b8: 0xffb10010
    ctx->pc = 0x19a8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19a8bc: 0xffb00000
    ctx->pc = 0x19a8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a8c0: 0xa0882d
    ctx->pc = 0x19a8c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8c4: 0xffbf0020
    ctx->pc = 0x19a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a8c8: 0x80802d
    ctx->pc = 0x19a8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a8cc: 0x16220005
    ctx->pc = 0x19A8CCu;
    {
        const bool branch_taken_0x19a8cc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x19A8D0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        if (branch_taken_0x19a8cc) {
            ctx->pc = 0x19A8E4u;
            goto label_19a8e4;
        }
    }
    ctx->pc = 0x19A8D4u;
    // 0x19a8d4: 0x8e030040
    ctx->pc = 0x19a8d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19a8d8: 0x24020004
    ctx->pc = 0x19a8d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19a8dc: 0x1462000c
    ctx->pc = 0x19A8DCu;
    {
        const bool branch_taken_0x19a8dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x19A8E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a8dc) {
            ctx->pc = 0x19A910u;
            goto label_19a910;
        }
    }
    ctx->pc = 0x19A8E4u;
label_19a8e4:
    // 0x19a8e4: 0x2482fffd
    ctx->pc = 0x19a8e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x19a8e8: 0x2c420002
    ctx->pc = 0x19a8e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x19a8ec: 0x14400003
    ctx->pc = 0x19A8ECu;
    {
        const bool branch_taken_0x19a8ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A8F0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a8ec) {
            ctx->pc = 0x19A8FCu;
            goto label_19a8fc;
        }
    }
    ctx->pc = 0x19A8F4u;
    // 0x19a8f4: 0x10000006
    ctx->pc = 0x19A8F4u;
    {
        const bool branch_taken_0x19a8f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A8F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a8f4) {
            ctx->pc = 0x19A910u;
            goto label_19a910;
        }
    }
    ctx->pc = 0x19A8FCu;
label_19a8fc:
    // 0x19a8fc: 0xc06797e
    ctx->pc = 0x19A8FCu;
    SET_GPR_U32(ctx, 31, 0x19A904u);
    ctx->pc = 0x19A900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19E5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_Pause_0x19e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A904u; }
        else if (ctx->pc != 0x19A904u) { ctx->pc = 0x19A904u; }
    }
    if (ctx->pc != 0x19A904u) { return; }
    ctx->pc = 0x19A904u;
    // 0x19a904: 0x200202d
    ctx->pc = 0x19a904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a908: 0xc066a4a
    ctx->pc = 0x19A908u;
    SET_GPR_U32(ctx, 31, 0x19A910u);
    ctx->pc = 0x19A90Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfpl2_TrPause_0x19a928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A910u; }
        else if (ctx->pc != 0x19A910u) { ctx->pc = 0x19A910u; }
    }
    if (ctx->pc != 0x19A910u) { return; }
    ctx->pc = 0x19A910u;
label_19a910:
    // 0x19a910: 0xdfbf0020
    ctx->pc = 0x19a910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a914: 0xdfb10010
    ctx->pc = 0x19a914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a918: 0xdfb00000
    ctx->pc = 0x19a918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a91c: 0x3e00008
    ctx->pc = 0x19A91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A920u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A8E4u: goto label_19a8e4;
            case 0x19A8FCu: goto label_19a8fc;
            case 0x19A910u: goto label_19a910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A924u;
}
