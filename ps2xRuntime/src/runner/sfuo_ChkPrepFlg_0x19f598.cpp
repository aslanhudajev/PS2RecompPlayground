#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfuo_ChkPrepFlg
// Address: 0x19f598 - 0x19f610
void sfuo_ChkPrepFlg_0x19f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfuo_ChkPrepFlg");


    ctx->pc = 0x19f598u;

    // 0x19f598: 0x27bdffd0
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f59c: 0x24050008
    ctx->pc = 0x19f59cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19f5a0: 0xffb00000
    ctx->pc = 0x19f5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f5a4: 0x80802d
    ctx->pc = 0x19f5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5a8: 0xffb10010
    ctx->pc = 0x19f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f5ac: 0xffbf0020
    ctx->pc = 0x19f5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f5b0: 0xc067ce4
    ctx->pc = 0x19F5B0u;
    SET_GPR_U32(ctx, 31, 0x19F5B8u);
    ctx->pc = 0x19F5B4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F390u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetPrepFlg_0x19f390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5B8u; }
        else if (ctx->pc != 0x19F5B8u) { ctx->pc = 0x19F5B8u; }
    }
    if (ctx->pc != 0x19F5B8u) { return; }
    ctx->pc = 0x19F5B8u;
    // 0x19f5b8: 0x10510011
    ctx->pc = 0x19F5B8u;
    {
        const bool branch_taken_0x19f5b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x19F5BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f5b8) {
            ctx->pc = 0x19F600u;
            goto label_19f600;
        }
    }
    ctx->pc = 0x19F5C0u;
    // 0x19f5c0: 0x8e056724
    ctx->pc = 0x19f5c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 26404)));
    // 0x19f5c4: 0xc064a54
    ctx->pc = 0x19F5C4u;
    SET_GPR_U32(ctx, 31, 0x19F5CCu);
    ctx->pc = 0x19F5C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetPrepFlg_0x192950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5CCu; }
        else if (ctx->pc != 0x19F5CCu) { ctx->pc = 0x19F5CCu; }
    }
    if (ctx->pc != 0x19F5CCu) { return; }
    ctx->pc = 0x19F5CCu;
    // 0x19f5cc: 0x1451000c
    ctx->pc = 0x19F5CCu;
    {
        const bool branch_taken_0x19f5cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x19F5D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f5cc) {
            ctx->pc = 0x19F600u;
            goto label_19f600;
        }
    }
    ctx->pc = 0x19F5D4u;
    // 0x19f5d4: 0xc067d84
    ctx->pc = 0x19F5D4u;
    SET_GPR_U32(ctx, 31, 0x19F5DCu);
    ctx->pc = 0x19F5D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfuo_IsPrepEnd_0x19f610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5DCu; }
        else if (ctx->pc != 0x19F5DCu) { ctx->pc = 0x19F5DCu; }
    }
    if (ctx->pc != 0x19F5DCu) { return; }
    ctx->pc = 0x19F5DCu;
    // 0x19f5dc: 0x10400008
    ctx->pc = 0x19F5DCu;
    {
        const bool branch_taken_0x19f5dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F5E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f5dc) {
            ctx->pc = 0x19F600u;
            goto label_19f600;
        }
    }
    ctx->pc = 0x19F5E4u;
    // 0x19f5e4: 0x200202d
    ctx->pc = 0x19f5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5e8: 0xdfb10010
    ctx->pc = 0x19f5e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f5ec: 0x24050008
    ctx->pc = 0x19f5ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19f5f0: 0xdfb00000
    ctx->pc = 0x19f5f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f5f4: 0x24060001
    ctx->pc = 0x19f5f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f5f8: 0x8067cde
    ctx->pc = 0x19F5F8u;
    ctx->pc = 0x19F5FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19F378u;
    SFTRN_SetPrepFlg_0x19f378(rdram, ctx, runtime); return;
    ctx->pc = 0x19F600u;
label_19f600:
    // 0x19f600: 0xdfb10010
    ctx->pc = 0x19f600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f604: 0xdfb00000
    ctx->pc = 0x19f604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f608: 0x3e00008
    ctx->pc = 0x19F608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F60Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F600u: goto label_19f600;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F610u;
}
