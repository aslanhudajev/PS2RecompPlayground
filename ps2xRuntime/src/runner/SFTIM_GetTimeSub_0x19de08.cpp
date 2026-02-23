#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_GetTimeSub
// Address: 0x19de08 - 0x19deb8
void SFTIM_GetTimeSub_0x19de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_GetTimeSub");


    ctx->pc = 0x19de08u;

    // 0x19de08: 0x27bdff90
    ctx->pc = 0x19de08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19de0c: 0xffb20020
    ctx->pc = 0x19de0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19de10: 0xffb10010
    ctx->pc = 0x19de10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19de14: 0xa0902d
    ctx->pc = 0x19de14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de18: 0xffb00000
    ctx->pc = 0x19de18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19de1c: 0x80882d
    ctx->pc = 0x19de1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de20: 0xffb50050
    ctx->pc = 0x19de20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x19de24: 0xffb40040
    ctx->pc = 0x19de24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19de28: 0xffb30030
    ctx->pc = 0x19de28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19de2c: 0xffbf0060
    ctx->pc = 0x19de2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19de30: 0xc0677c8
    ctx->pc = 0x19DE30u;
    SET_GPR_U32(ctx, 31, 0x19DE38u);
    ctx->pc = 0x19DE34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DF20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfdtim_GetTimeAfterSeek_0x19df20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE38u; }
        else if (ctx->pc != 0x19DE38u) { ctx->pc = 0x19DE38u; }
    }
    if (ctx->pc != 0x19DE38u) { return; }
    ctx->pc = 0x19DE38u;
    // 0x19de38: 0x26330a94
    ctx->pc = 0x19de38u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 2708));
    // 0x19de3c: 0x40a82d
    ctx->pc = 0x19de3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de40: 0x8e050000
    ctx->pc = 0x19de40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19de44: 0x24020001
    ctx->pc = 0x19de44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19de48: 0x10a20011
    ctx->pc = 0x19DE48u;
    {
        const bool branch_taken_0x19de48 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x19DE4Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 2932));
        if (branch_taken_0x19de48) {
            ctx->pc = 0x19DE90u;
            goto label_19de90;
        }
    }
    ctx->pc = 0x19DE50u;
    // 0x19de50: 0x8e62010c
    ctx->pc = 0x19de50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x19de54: 0x54a20006
    ctx->pc = 0x19DE54u;
    {
        const bool branch_taken_0x19de54 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x19de54) {
            ctx->pc = 0x19DE58u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2932)));
            ctx->pc = 0x19DE70u;
            goto label_19de70;
        }
    }
    ctx->pc = 0x19DE5Cu;
    // 0x19de5c: 0x8e630108
    ctx->pc = 0x19de5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 264)));
    // 0x19de60: 0x8e420000
    ctx->pc = 0x19de60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19de64: 0x431021
    ctx->pc = 0x19de64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19de68: 0x10000009
    ctx->pc = 0x19DE68u;
    {
        const bool branch_taken_0x19de68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DE6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x19de68) {
            ctx->pc = 0x19DE90u;
            goto label_19de90;
        }
    }
    ctx->pc = 0x19DE70u;
label_19de70:
    // 0x19de70: 0x10400008
    ctx->pc = 0x19DE70u;
    {
        const bool branch_taken_0x19de70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DE74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19de70) {
            ctx->pc = 0x19DE94u;
            goto label_19de94;
        }
    }
    ctx->pc = 0x19DE78u;
    // 0x19de78: 0x8e860024
    ctx->pc = 0x19de78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x19de7c: 0xc063132
    ctx->pc = 0x19DE7Cu;
    SET_GPR_U32(ctx, 31, 0x19DE84u);
    ctx->pc = 0x19DE80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DE84u; }
        else if (ctx->pc != 0x19DE84u) { ctx->pc = 0x19DE84u; }
    }
    if (ctx->pc != 0x19DE84u) { return; }
    ctx->pc = 0x19DE84u;
    // 0x19de84: 0x8e430000
    ctx->pc = 0x19de84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19de88: 0x621821
    ctx->pc = 0x19de88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19de8c: 0xae430000
    ctx->pc = 0x19de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_19de90:
    // 0x19de90: 0x2a0102d
    ctx->pc = 0x19de90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19de94:
    // 0x19de94: 0xdfbf0060
    ctx->pc = 0x19de94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19de98: 0xdfb50050
    ctx->pc = 0x19de98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19de9c: 0xdfb40040
    ctx->pc = 0x19de9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19dea0: 0xdfb30030
    ctx->pc = 0x19dea0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dea4: 0xdfb20020
    ctx->pc = 0x19dea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dea8: 0xdfb10010
    ctx->pc = 0x19dea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19deac: 0xdfb00000
    ctx->pc = 0x19deacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19deb0: 0x3e00008
    ctx->pc = 0x19DEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DEB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DE70u: goto label_19de70;
            case 0x19DE90u: goto label_19de90;
            case 0x19DE94u: goto label_19de94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DEB8u;
}
