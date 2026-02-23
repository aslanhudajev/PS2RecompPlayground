#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXAMP_ExecServer
// Address: 0x1666e0 - 0x166740
void ADXAMP_ExecServer_0x1666e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXAMP_ExecServer");


    ctx->pc = 0x1666e0u;

    // 0x1666e0: 0x27bdffc0
    ctx->pc = 0x1666e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1666e4: 0x3c020023
    ctx->pc = 0x1666e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1666e8: 0xffb00000
    ctx->pc = 0x1666e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1666ec: 0xffb20020
    ctx->pc = 0x1666ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1666f0: 0x2450ab50
    ctx->pc = 0x1666f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294945616));
    // 0x1666f4: 0xffb10010
    ctx->pc = 0x1666f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1666f8: 0x24120001
    ctx->pc = 0x1666f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1666fc: 0xffbf0030
    ctx->pc = 0x1666fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x166700: 0x26110180
    ctx->pc = 0x166700u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 384));
    // 0x166704: 0x82020000
    ctx->pc = 0x166704u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_166708:
    // 0x166708: 0x54520004
    ctx->pc = 0x166708u;
    {
        const bool branch_taken_0x166708 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x166708) {
            ctx->pc = 0x16670Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 48));
            ctx->pc = 0x16671Cu;
            goto label_16671c;
        }
    }
    ctx->pc = 0x166710u;
    // 0x166710: 0xc0599b0
    ctx->pc = 0x166710u;
    SET_GPR_U32(ctx, 31, 0x166718u);
    ctx->pc = 0x166714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1666C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXAMP_ExecHndl_0x1666c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166718u; }
        else if (ctx->pc != 0x166718u) { ctx->pc = 0x166718u; }
    }
    if (ctx->pc != 0x166718u) { return; }
    ctx->pc = 0x166718u;
    // 0x166718: 0x26100030
    ctx->pc = 0x166718u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 48));
label_16671c:
    // 0x16671c: 0x211102a
    ctx->pc = 0x16671cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x166720: 0x5440fff9
    ctx->pc = 0x166720u;
    {
        const bool branch_taken_0x166720 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x166720) {
            ctx->pc = 0x166724u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x166708u;
            goto label_166708;
        }
    }
    ctx->pc = 0x166728u;
    // 0x166728: 0xdfbf0030
    ctx->pc = 0x166728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16672c: 0xdfb20020
    ctx->pc = 0x16672cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166730: 0xdfb10010
    ctx->pc = 0x166730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166734: 0xdfb00000
    ctx->pc = 0x166734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166738: 0x3e00008
    ctx->pc = 0x166738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16673Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166708u: goto label_166708;
            case 0x16671Cu: goto label_16671c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166740u;
}
