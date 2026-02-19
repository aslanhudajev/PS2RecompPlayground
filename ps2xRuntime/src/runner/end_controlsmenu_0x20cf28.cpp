#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: end_controlsmenu
// Address: 0x20cf28 - 0x20cf9c
void end_controlsmenu_0x20cf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20cf28u;

    // 0x20cf28: 0x27bdffb0
    ctx->pc = 0x20cf28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20cf2c: 0xffbf0040
    ctx->pc = 0x20cf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20cf30: 0xffb30030
    ctx->pc = 0x20cf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20cf34: 0xffb20020
    ctx->pc = 0x20cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20cf38: 0xffb10010
    ctx->pc = 0x20cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20cf3c: 0xffb00000
    ctx->pc = 0x20cf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20cf40: 0x882d
    ctx->pc = 0x20cf40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cf44: 0x24130018
    ctx->pc = 0x20cf44u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 24));
    // 0x20cf48: 0x3c020032
    ctx->pc = 0x20cf48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20cf4c: 0x2452f404
    ctx->pc = 0x20cf4cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294964228));
    // 0x20cf50: 0x2331018
    ctx->pc = 0x20cf50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20cf54: 0x0
    ctx->pc = 0x20cf54u;
    // NOP
label_20cf58:
    // 0x20cf58: 0x528021
    ctx->pc = 0x20cf58u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20cf5c: 0x8e040000
    ctx->pc = 0x20cf5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20cf60: 0x10800004
    ctx->pc = 0x20CF60u;
    {
        const bool branch_taken_0x20cf60 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CF64u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x20cf60) {
            ctx->pc = 0x20CF74u;
            goto label_20cf74;
        }
    }
    ctx->pc = 0x20CF68u;
    // 0x20cf68: 0xc0b0b38
    ctx->pc = 0x20CF68u;
    SET_GPR_U32(ctx, 31, 0x20CF70u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CF70u; }
    }
    if (ctx->pc != 0x20CF70u) { return; }
    ctx->pc = 0x20CF70u;
    // 0x20cf70: 0xae020000
    ctx->pc = 0x20cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20cf74:
    // 0x20cf74: 0x2a220003
    ctx->pc = 0x20cf74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x20cf78: 0x5440fff7
    ctx->pc = 0x20CF78u;
    {
        const bool branch_taken_0x20cf78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20cf78) {
            ctx->pc = 0x20CF7Cu;
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x20CF58u;
            goto label_20cf58;
        }
    }
    ctx->pc = 0x20CF80u;
    // 0x20cf80: 0xdfbf0040
    ctx->pc = 0x20cf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20cf84: 0xdfb30030
    ctx->pc = 0x20cf84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20cf88: 0xdfb20020
    ctx->pc = 0x20cf88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cf8c: 0xdfb10010
    ctx->pc = 0x20cf8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cf90: 0xdfb00000
    ctx->pc = 0x20cf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cf94: 0x3e00008
    ctx->pc = 0x20CF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CF98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CF58u: goto label_20cf58;
            case 0x20CF74u: goto label_20cf74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20CF9Cu;
}
