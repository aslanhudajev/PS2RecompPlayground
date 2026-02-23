#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_CloseAll
// Address: 0x16b8e0 - 0x16b940
void ADXF_CloseAll_0x16b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_CloseAll");


    ctx->pc = 0x16b8e0u;

    // 0x16b8e0: 0x27bdffc0
    ctx->pc = 0x16b8e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b8e4: 0x3c020023
    ctx->pc = 0x16b8e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16b8e8: 0xffb00000
    ctx->pc = 0x16b8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b8ec: 0xffb20020
    ctx->pc = 0x16b8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16b8f0: 0x2450b598
    ctx->pc = 0x16b8f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294948248));
    // 0x16b8f4: 0xffb10010
    ctx->pc = 0x16b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16b8f8: 0x24120001
    ctx->pc = 0x16b8f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b8fc: 0xffbf0030
    ctx->pc = 0x16b8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16b900: 0x26111380
    ctx->pc = 0x16b900u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4992));
    // 0x16b904: 0x82020000
    ctx->pc = 0x16b904u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_16b908:
    // 0x16b908: 0x54520004
    ctx->pc = 0x16B908u;
    {
        const bool branch_taken_0x16b908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x16b908) {
            ctx->pc = 0x16B90Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 312));
            ctx->pc = 0x16B91Cu;
            goto label_16b91c;
        }
    }
    ctx->pc = 0x16B910u;
    // 0x16b910: 0xc05ae0c
    ctx->pc = 0x16B910u;
    SET_GPR_U32(ctx, 31, 0x16B918u);
    ctx->pc = 0x16B914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B918u; }
        else if (ctx->pc != 0x16B918u) { ctx->pc = 0x16B918u; }
    }
    if (ctx->pc != 0x16B918u) { return; }
    ctx->pc = 0x16B918u;
    // 0x16b918: 0x26100138
    ctx->pc = 0x16b918u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 312));
label_16b91c:
    // 0x16b91c: 0x211102a
    ctx->pc = 0x16b91cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x16b920: 0x5440fff9
    ctx->pc = 0x16B920u;
    {
        const bool branch_taken_0x16b920 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16b920) {
            ctx->pc = 0x16B924u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x16B908u;
            goto label_16b908;
        }
    }
    ctx->pc = 0x16B928u;
    // 0x16b928: 0xdfbf0030
    ctx->pc = 0x16b928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b92c: 0xdfb20020
    ctx->pc = 0x16b92cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b930: 0xdfb10010
    ctx->pc = 0x16b930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b934: 0xdfb00000
    ctx->pc = 0x16b934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b938: 0x3e00008
    ctx->pc = 0x16B938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B93Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B908u: goto label_16b908;
            case 0x16B91Cu: goto label_16b91c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B940u;
}
