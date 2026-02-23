#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_ChkPrepFlg
// Address: 0x194e28 - 0x194eac
void sfmps_ChkPrepFlg_0x194e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_ChkPrepFlg");


    ctx->pc = 0x194e28u;

    // 0x194e28: 0x27bdffc0
    ctx->pc = 0x194e28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194e2c: 0xffb00000
    ctx->pc = 0x194e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194e30: 0x80802d
    ctx->pc = 0x194e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e34: 0xffb20020
    ctx->pc = 0x194e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x194e38: 0x24120001
    ctx->pc = 0x194e38u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x194e3c: 0xffbf0030
    ctx->pc = 0x194e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194e40: 0xc0653ac
    ctx->pc = 0x194E40u;
    SET_GPR_U32(ctx, 31, 0x194E48u);
    ctx->pc = 0x194E44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x194EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_GetPrepDst_0x194eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E48u; }
        else if (ctx->pc != 0x194E48u) { ctx->pc = 0x194E48u; }
    }
    if (ctx->pc != 0x194E48u) { return; }
    ctx->pc = 0x194E48u;
    // 0x194e48: 0x10520012
    ctx->pc = 0x194E48u;
    {
        const bool branch_taken_0x194e48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x194E4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194e48) {
            ctx->pc = 0x194E94u;
            goto label_194e94;
        }
    }
    ctx->pc = 0x194E50u;
    // 0x194e50: 0x8e113704
    ctx->pc = 0x194e50u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 14084)));
    // 0x194e54: 0xc064a54
    ctx->pc = 0x194E54u;
    SET_GPR_U32(ctx, 31, 0x194E5Cu);
    ctx->pc = 0x194E58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetPrepFlg_0x192950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E5Cu; }
        else if (ctx->pc != 0x194E5Cu) { ctx->pc = 0x194E5Cu; }
    }
    if (ctx->pc != 0x194E5Cu) { return; }
    ctx->pc = 0x194E5Cu;
    // 0x194e5c: 0x1452000e
    ctx->pc = 0x194E5Cu;
    {
        const bool branch_taken_0x194e5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x194E60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x194e5c) {
            ctx->pc = 0x194E98u;
            goto label_194e98;
        }
    }
    ctx->pc = 0x194E64u;
    // 0x194e64: 0x220282d
    ctx->pc = 0x194e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e68: 0xc0653e0
    ctx->pc = 0x194E68u;
    SET_GPR_U32(ctx, 31, 0x194E70u);
    ctx->pc = 0x194E6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_IsPrepEnd_0x194f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E70u; }
        else if (ctx->pc != 0x194E70u) { ctx->pc = 0x194E70u; }
    }
    if (ctx->pc != 0x194E70u) { return; }
    ctx->pc = 0x194E70u;
    // 0x194e70: 0x10400009
    ctx->pc = 0x194E70u;
    {
        const bool branch_taken_0x194e70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x194E74u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x194e70) {
            ctx->pc = 0x194E98u;
            goto label_194e98;
        }
    }
    ctx->pc = 0x194E78u;
    // 0x194e78: 0x200202d
    ctx->pc = 0x194e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e7c: 0xdfb20020
    ctx->pc = 0x194e7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194e80: 0x24050001
    ctx->pc = 0x194e80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x194e84: 0xdfb10010
    ctx->pc = 0x194e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e88: 0xdfb00000
    ctx->pc = 0x194e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194e8c: 0x80653c8
    ctx->pc = 0x194E8Cu;
    ctx->pc = 0x194E90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x194F20u;
    sfmps_SetPrepDst_0x194f20(rdram, ctx, runtime); return;
    ctx->pc = 0x194E94u;
label_194e94:
    // 0x194e94: 0xdfbf0030
    ctx->pc = 0x194e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_194e98:
    // 0x194e98: 0xdfb20020
    ctx->pc = 0x194e98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194e9c: 0xdfb10010
    ctx->pc = 0x194e9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194ea0: 0xdfb00000
    ctx->pc = 0x194ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194ea4: 0x3e00008
    ctx->pc = 0x194EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194EA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194E94u: goto label_194e94;
            case 0x194E98u: goto label_194e98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194EACu;
}
