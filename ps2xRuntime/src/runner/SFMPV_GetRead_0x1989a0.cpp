#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPV_GetRead
// Address: 0x1989a0 - 0x198a28
void SFMPV_GetRead_0x1989a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPV_GetRead");


    ctx->pc = 0x1989a0u;

    // 0x1989a0: 0x27bdffb0
    ctx->pc = 0x1989a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1989a4: 0xffb00010
    ctx->pc = 0x1989a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1989a8: 0xffb10020
    ctx->pc = 0x1989a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1989ac: 0x80802d
    ctx->pc = 0x1989acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989b0: 0xffb20030
    ctx->pc = 0x1989b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1989b4: 0xffbf0040
    ctx->pc = 0x1989b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1989b8: 0xc06639a
    ctx->pc = 0x1989B8u;
    SET_GPR_U32(ctx, 31, 0x1989C0u);
    ctx->pc = 0x1989BCu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_GetNumFrm_0x198e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989C0u; }
        else if (ctx->pc != 0x1989C0u) { ctx->pc = 0x1989C0u; }
    }
    if (ctx->pc != 0x1989C0u) { return; }
    ctx->pc = 0x1989C0u;
    // 0x1989c0: 0x2403ffff
    ctx->pc = 0x1989c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1989c4: 0x10430006
    ctx->pc = 0x1989C4u;
    {
        const bool branch_taken_0x1989c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1989C8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 2708));
        if (branch_taken_0x1989c4) {
            ctx->pc = 0x1989E0u;
            goto label_1989e0;
        }
    }
    ctx->pc = 0x1989CCu;
    // 0x1989cc: 0x200202d
    ctx->pc = 0x1989ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989d0: 0xc06640a
    ctx->pc = 0x1989D0u;
    SET_GPR_U32(ctx, 31, 0x1989D8u);
    ctx->pc = 0x1989D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199028u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_HoldFrm_0x199028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989D8u; }
        else if (ctx->pc != 0x1989D8u) { ctx->pc = 0x1989D8u; }
    }
    if (ctx->pc != 0x1989D8u) { return; }
    ctx->pc = 0x1989D8u;
    // 0x1989d8: 0x14400004
    ctx->pc = 0x1989D8u;
    {
        const bool branch_taken_0x1989d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1989DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1989d8) {
            ctx->pc = 0x1989ECu;
            goto label_1989ec;
        }
    }
    ctx->pc = 0x1989E0u;
label_1989e0:
    // 0x1989e0: 0xae200000
    ctx->pc = 0x1989e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1989e4: 0x1000000a
    ctx->pc = 0x1989E4u;
    {
        const bool branch_taken_0x1989e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1989E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1989e4) {
            ctx->pc = 0x198A10u;
            goto label_198a10;
        }
    }
    ctx->pc = 0x1989ECu;
label_1989ec:
    // 0x1989ec: 0x40282d
    ctx->pc = 0x1989ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989f0: 0xc06628a
    ctx->pc = 0x1989F0u;
    SET_GPR_U32(ctx, 31, 0x1989F8u);
    ctx->pc = 0x1989F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198A28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SetFrmInf_0x198a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989F8u; }
        else if (ctx->pc != 0x1989F8u) { ctx->pc = 0x1989F8u; }
    }
    if (ctx->pc != 0x1989F8u) { return; }
    ctx->pc = 0x1989F8u;
    // 0x1989f8: 0x8e230000
    ctx->pc = 0x1989f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1989fc: 0x102d
    ctx->pc = 0x1989fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a00: 0x8c640014
    ctx->pc = 0x198a00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x198a04: 0xae440230
    ctx->pc = 0x198a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 4));
    // 0x198a08: 0x8c650018
    ctx->pc = 0x198a08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x198a0c: 0xae450234
    ctx->pc = 0x198a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 5));
label_198a10:
    // 0x198a10: 0xdfbf0040
    ctx->pc = 0x198a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198a14: 0xdfb20030
    ctx->pc = 0x198a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198a18: 0xdfb10020
    ctx->pc = 0x198a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198a1c: 0xdfb00010
    ctx->pc = 0x198a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198a20: 0x3e00008
    ctx->pc = 0x198A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198A24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1989E0u: goto label_1989e0;
            case 0x1989ECu: goto label_1989ec;
            case 0x198A10u: goto label_198a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198A28u;
}
