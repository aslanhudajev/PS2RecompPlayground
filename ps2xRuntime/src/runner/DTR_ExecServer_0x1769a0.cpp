#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTR_ExecServer
// Address: 0x1769a0 - 0x176a00
void DTR_ExecServer_0x1769a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTR_ExecServer");


    ctx->pc = 0x1769a0u;

    // 0x1769a0: 0x27bdffc0
    ctx->pc = 0x1769a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1769a4: 0x3c020024
    ctx->pc = 0x1769a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1769a8: 0xffb20020
    ctx->pc = 0x1769a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1769ac: 0xffb10010
    ctx->pc = 0x1769acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1769b0: 0x24120001
    ctx->pc = 0x1769b0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1769b4: 0xffb00000
    ctx->pc = 0x1769b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1769b8: 0x2411000f
    ctx->pc = 0x1769b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1769bc: 0xffbf0030
    ctx->pc = 0x1769bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1769c0: 0x245087b0
    ctx->pc = 0x1769c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294936496));
    // 0x1769c4: 0x0
    ctx->pc = 0x1769c4u;
    // NOP
label_1769c8:
    // 0x1769c8: 0x82020000
    ctx->pc = 0x1769c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1769cc: 0x54520004
    ctx->pc = 0x1769CCu;
    {
        const bool branch_taken_0x1769cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x1769cc) {
            ctx->pc = 0x1769D0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x1769E0u;
            goto label_1769e0;
        }
    }
    ctx->pc = 0x1769D4u;
    // 0x1769d4: 0xc05d990
    ctx->pc = 0x1769D4u;
    SET_GPR_U32(ctx, 31, 0x1769DCu);
    ctx->pc = 0x1769D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176640u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTR_ExecHndl_0x176640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1769DCu; }
        else if (ctx->pc != 0x1769DCu) { ctx->pc = 0x1769DCu; }
    }
    if (ctx->pc != 0x1769DCu) { return; }
    ctx->pc = 0x1769DCu;
    // 0x1769dc: 0x2631ffff
    ctx->pc = 0x1769dcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_1769e0:
    // 0x1769e0: 0x621fff9
    ctx->pc = 0x1769E0u;
    {
        const bool branch_taken_0x1769e0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1769E4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x1769e0) {
            ctx->pc = 0x1769C8u;
            goto label_1769c8;
        }
    }
    ctx->pc = 0x1769E8u;
    // 0x1769e8: 0xdfbf0030
    ctx->pc = 0x1769e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1769ec: 0xdfb20020
    ctx->pc = 0x1769ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1769f0: 0xdfb10010
    ctx->pc = 0x1769f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1769f4: 0xdfb00000
    ctx->pc = 0x1769f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1769f8: 0x805dd14
    ctx->pc = 0x1769F8u;
    ctx->pc = 0x1769FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x177450u;
    DTX_ExecServer_0x177450(rdram, ctx, runtime); return;
    ctx->pc = 0x176A00u;
}
