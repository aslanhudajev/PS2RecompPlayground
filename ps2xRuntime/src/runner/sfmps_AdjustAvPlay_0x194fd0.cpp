#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_AdjustAvPlay
// Address: 0x194fd0 - 0x195080
void sfmps_AdjustAvPlay_0x194fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_AdjustAvPlay");


    ctx->pc = 0x194fd0u;

    // 0x194fd0: 0x27bdffd0
    ctx->pc = 0x194fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194fd4: 0xffb00010
    ctx->pc = 0x194fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x194fd8: 0x3a0282d
    ctx->pc = 0x194fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fdc: 0x80802d
    ctx->pc = 0x194fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fe0: 0xffbf0020
    ctx->pc = 0x194fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194fe4: 0xc065420
    ctx->pc = 0x194FE4u;
    SET_GPR_U32(ctx, 31, 0x194FECu);
    ctx->pc = 0x194FE8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x195080u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_GetStmNum_0x195080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194FECu; }
        else if (ctx->pc != 0x194FECu) { ctx->pc = 0x194FECu; }
    }
    if (ctx->pc != 0x194FECu) { return; }
    ctx->pc = 0x194FECu;
    // 0x194fec: 0x200202d
    ctx->pc = 0x194fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ff0: 0xc0674c2
    ctx->pc = 0x194FF0u;
    SET_GPR_U32(ctx, 31, 0x194FF8u);
    ctx->pc = 0x194FF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194FF8u; }
        else if (ctx->pc != 0x194FF8u) { ctx->pc = 0x194FF8u; }
    }
    if (ctx->pc != 0x194FF8u) { return; }
    ctx->pc = 0x194FF8u;
    // 0x194ff8: 0x24030001
    ctx->pc = 0x194ff8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x194ffc: 0x1443000c
    ctx->pc = 0x194FFCu;
    {
        const bool branch_taken_0x194ffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x195000u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194ffc) {
            ctx->pc = 0x195030u;
            goto label_195030;
        }
    }
    ctx->pc = 0x195004u;
    // 0x195004: 0x8fa20000
    ctx->pc = 0x195004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195008: 0x14400009
    ctx->pc = 0x195008u;
    {
        const bool branch_taken_0x195008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x195008) {
            ctx->pc = 0x195030u;
            goto label_195030;
        }
    }
    ctx->pc = 0x195010u;
    // 0x195010: 0xc067ce4
    ctx->pc = 0x195010u;
    SET_GPR_U32(ctx, 31, 0x195018u);
    ctx->pc = 0x195014u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19F390u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetPrepFlg_0x19f390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195018u; }
        else if (ctx->pc != 0x195018u) { ctx->pc = 0x195018u; }
    }
    if (ctx->pc != 0x195018u) { return; }
    ctx->pc = 0x195018u;
    // 0x195018: 0x10400004
    ctx->pc = 0x195018u;
    {
        const bool branch_taken_0x195018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19501Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195018) {
            ctx->pc = 0x19502Cu;
            goto label_19502c;
        }
    }
    ctx->pc = 0x195020u;
    // 0x195020: 0x24050006
    ctx->pc = 0x195020u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x195024: 0xc067464
    ctx->pc = 0x195024u;
    SET_GPR_U32(ctx, 31, 0x19502Cu);
    ctx->pc = 0x195028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19502Cu; }
        else if (ctx->pc != 0x19502Cu) { ctx->pc = 0x19502Cu; }
    }
    if (ctx->pc != 0x19502Cu) { return; }
    ctx->pc = 0x19502Cu;
label_19502c:
    // 0x19502c: 0x200202d
    ctx->pc = 0x19502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195030:
    // 0x195030: 0xc0674c2
    ctx->pc = 0x195030u;
    SET_GPR_U32(ctx, 31, 0x195038u);
    ctx->pc = 0x195034u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195038u; }
        else if (ctx->pc != 0x195038u) { ctx->pc = 0x195038u; }
    }
    if (ctx->pc != 0x195038u) { return; }
    ctx->pc = 0x195038u;
    // 0x195038: 0x24030001
    ctx->pc = 0x195038u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19503c: 0x1443000d
    ctx->pc = 0x19503Cu;
    {
        const bool branch_taken_0x19503c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x195040u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19503c) {
            ctx->pc = 0x195074u;
            goto label_195074;
        }
    }
    ctx->pc = 0x195044u;
    // 0x195044: 0x8fa20004
    ctx->pc = 0x195044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x195048: 0x5440000b
    ctx->pc = 0x195048u;
    {
        const bool branch_taken_0x195048 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x195048) {
            ctx->pc = 0x19504Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x195078u;
            goto label_195078;
        }
    }
    ctx->pc = 0x195050u;
    // 0x195050: 0x200202d
    ctx->pc = 0x195050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195054: 0xc067ce4
    ctx->pc = 0x195054u;
    SET_GPR_U32(ctx, 31, 0x19505Cu);
    ctx->pc = 0x195058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x19F390u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetPrepFlg_0x19f390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19505Cu; }
        else if (ctx->pc != 0x19505Cu) { ctx->pc = 0x19505Cu; }
    }
    if (ctx->pc != 0x19505Cu) { return; }
    ctx->pc = 0x19505Cu;
    // 0x19505c: 0x10400004
    ctx->pc = 0x19505Cu;
    {
        const bool branch_taken_0x19505c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x195060u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19505c) {
            ctx->pc = 0x195070u;
            goto label_195070;
        }
    }
    ctx->pc = 0x195064u;
    // 0x195064: 0x24050005
    ctx->pc = 0x195064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x195068: 0xc067464
    ctx->pc = 0x195068u;
    SET_GPR_U32(ctx, 31, 0x195070u);
    ctx->pc = 0x19506Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195070u; }
        else if (ctx->pc != 0x195070u) { ctx->pc = 0x195070u; }
    }
    if (ctx->pc != 0x195070u) { return; }
    ctx->pc = 0x195070u;
label_195070:
    // 0x195070: 0xdfbf0020
    ctx->pc = 0x195070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195074:
    // 0x195074: 0xdfb00010
    ctx->pc = 0x195074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195078:
    // 0x195078: 0x3e00008
    ctx->pc = 0x195078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19507Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19502Cu: goto label_19502c;
            case 0x195030u: goto label_195030;
            case 0x195070u: goto label_195070;
            case 0x195074u: goto label_195074;
            case 0x195078u: goto label_195078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195080u;
}
