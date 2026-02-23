#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfvom_ChkPrepFlg
// Address: 0x19f8b0 - 0x19f928
void sfvom_ChkPrepFlg_0x19f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfvom_ChkPrepFlg");


    ctx->pc = 0x19f8b0u;

    // 0x19f8b0: 0x27bdffd0
    ctx->pc = 0x19f8b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f8b4: 0x24050006
    ctx->pc = 0x19f8b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19f8b8: 0xffb00000
    ctx->pc = 0x19f8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f8bc: 0x80802d
    ctx->pc = 0x19f8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8c0: 0xffb10010
    ctx->pc = 0x19f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f8c4: 0xffbf0020
    ctx->pc = 0x19f8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f8c8: 0xc067ce4
    ctx->pc = 0x19F8C8u;
    SET_GPR_U32(ctx, 31, 0x19F8D0u);
    ctx->pc = 0x19F8CCu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F390u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetPrepFlg_0x19f390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8D0u; }
        else if (ctx->pc != 0x19F8D0u) { ctx->pc = 0x19F8D0u; }
    }
    if (ctx->pc != 0x19F8D0u) { return; }
    ctx->pc = 0x19F8D0u;
    // 0x19f8d0: 0x10510011
    ctx->pc = 0x19F8D0u;
    {
        const bool branch_taken_0x19f8d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x19F8D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f8d0) {
            ctx->pc = 0x19F918u;
            goto label_19f918;
        }
    }
    ctx->pc = 0x19F8D8u;
    // 0x19f8d8: 0x8e055964
    ctx->pc = 0x19f8d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 22884)));
    // 0x19f8dc: 0xc064a54
    ctx->pc = 0x19F8DCu;
    SET_GPR_U32(ctx, 31, 0x19F8E4u);
    ctx->pc = 0x19F8E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetPrepFlg_0x192950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8E4u; }
        else if (ctx->pc != 0x19F8E4u) { ctx->pc = 0x19F8E4u; }
    }
    if (ctx->pc != 0x19F8E4u) { return; }
    ctx->pc = 0x19F8E4u;
    // 0x19f8e4: 0x1451000c
    ctx->pc = 0x19F8E4u;
    {
        const bool branch_taken_0x19f8e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x19F8E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f8e4) {
            ctx->pc = 0x19F918u;
            goto label_19f918;
        }
    }
    ctx->pc = 0x19F8ECu;
    // 0x19f8ec: 0xc067e4a
    ctx->pc = 0x19F8ECu;
    SET_GPR_U32(ctx, 31, 0x19F8F4u);
    ctx->pc = 0x19F8F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfvom_IsPrepEnd_0x19f928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8F4u; }
        else if (ctx->pc != 0x19F8F4u) { ctx->pc = 0x19F8F4u; }
    }
    if (ctx->pc != 0x19F8F4u) { return; }
    ctx->pc = 0x19F8F4u;
    // 0x19f8f4: 0x10400008
    ctx->pc = 0x19F8F4u;
    {
        const bool branch_taken_0x19f8f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F8F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f8f4) {
            ctx->pc = 0x19F918u;
            goto label_19f918;
        }
    }
    ctx->pc = 0x19F8FCu;
    // 0x19f8fc: 0x200202d
    ctx->pc = 0x19f8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f900: 0xdfb10010
    ctx->pc = 0x19f900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f904: 0x24050006
    ctx->pc = 0x19f904u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19f908: 0xdfb00000
    ctx->pc = 0x19f908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f90c: 0x24060001
    ctx->pc = 0x19f90cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f910: 0x8067cde
    ctx->pc = 0x19F910u;
    ctx->pc = 0x19F914u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19F378u;
    SFTRN_SetPrepFlg_0x19f378(rdram, ctx, runtime); return;
    ctx->pc = 0x19F918u;
label_19f918:
    // 0x19f918: 0xdfb10010
    ctx->pc = 0x19f918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f91c: 0xdfb00000
    ctx->pc = 0x19f91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f920: 0x3e00008
    ctx->pc = 0x19F920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F924u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F918u: goto label_19f918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F928u;
}
