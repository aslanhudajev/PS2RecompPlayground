#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetFrm
// Address: 0x19be18 - 0x19be80
void SFD_GetFrm_0x19be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetFrm");


    ctx->pc = 0x19be18u;

    // 0x19be18: 0x27bdffd0
    ctx->pc = 0x19be18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19be1c: 0xffb10010
    ctx->pc = 0x19be1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19be20: 0xffb00000
    ctx->pc = 0x19be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19be24: 0xa0882d
    ctx->pc = 0x19be24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be28: 0xffbf0020
    ctx->pc = 0x19be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19be2c: 0x80802d
    ctx->pc = 0x19be2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be30: 0xc064f1e
    ctx->pc = 0x19BE30u;
    SET_GPR_U32(ctx, 31, 0x19BE38u);
    ctx->pc = 0x19BE34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE38u; }
        else if (ctx->pc != 0x19BE38u) { ctx->pc = 0x19BE38u; }
    }
    if (ctx->pc != 0x19BE38u) { return; }
    ctx->pc = 0x19BE38u;
    // 0x19be38: 0x10400006
    ctx->pc = 0x19BE38u;
    {
        const bool branch_taken_0x19be38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BE3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19be38) {
            ctx->pc = 0x19BE54u;
            goto label_19be54;
        }
    }
    ctx->pc = 0x19BE40u;
    // 0x19be40: 0x3c05ff00
    ctx->pc = 0x19be40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19be44: 0xc064ea0
    ctx->pc = 0x19BE44u;
    SET_GPR_U32(ctx, 31, 0x19BE4Cu);
    ctx->pc = 0x19BE48u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 310));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE4Cu; }
        else if (ctx->pc != 0x19BE4Cu) { ctx->pc = 0x19BE4Cu; }
    }
    if (ctx->pc != 0x19BE4Cu) { return; }
    ctx->pc = 0x19BE4Cu;
    // 0x19be4c: 0x10000008
    ctx->pc = 0x19BE4Cu;
    {
        const bool branch_taken_0x19be4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BE50u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19be4c) {
            ctx->pc = 0x19BE70u;
            goto label_19be70;
        }
    }
    ctx->pc = 0x19BE54u;
label_19be54:
    // 0x19be54: 0x200202d
    ctx->pc = 0x19be54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be58: 0x220382d
    ctx->pc = 0x19be58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be5c: 0x24050006
    ctx->pc = 0x19be5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19be60: 0x2406000b
    ctx->pc = 0x19be60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    // 0x19be64: 0xc067cca
    ctx->pc = 0x19BE64u;
    SET_GPR_U32(ctx, 31, 0x19BE6Cu);
    ctx->pc = 0x19BE68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE6Cu; }
        else if (ctx->pc != 0x19BE6Cu) { ctx->pc = 0x19BE6Cu; }
    }
    if (ctx->pc != 0x19BE6Cu) { return; }
    ctx->pc = 0x19BE6Cu;
    // 0x19be6c: 0xdfbf0020
    ctx->pc = 0x19be6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19be70:
    // 0x19be70: 0xdfb10010
    ctx->pc = 0x19be70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19be74: 0xdfb00000
    ctx->pc = 0x19be74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19be78: 0x3e00008
    ctx->pc = 0x19BE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BE7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE54u: goto label_19be54;
            case 0x19BE70u: goto label_19be70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BE80u;
}
