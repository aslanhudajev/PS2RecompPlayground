#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecServer
// Address: 0x1686d0 - 0x168730
void ADXB_ExecServer_0x1686d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecServer");


    ctx->pc = 0x1686d0u;

    // 0x1686d0: 0x27bdffc0
    ctx->pc = 0x1686d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1686d4: 0x3c020023
    ctx->pc = 0x1686d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1686d8: 0xffb00000
    ctx->pc = 0x1686d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1686dc: 0xffb20020
    ctx->pc = 0x1686dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1686e0: 0x2450aed0
    ctx->pc = 0x1686e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294946512));
    // 0x1686e4: 0xffb10010
    ctx->pc = 0x1686e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1686e8: 0x24120001
    ctx->pc = 0x1686e8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1686ec: 0xffbf0030
    ctx->pc = 0x1686ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1686f0: 0x261105c0
    ctx->pc = 0x1686f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 1472));
    // 0x1686f4: 0x86020000
    ctx->pc = 0x1686f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1686f8:
    // 0x1686f8: 0x54520004
    ctx->pc = 0x1686F8u;
    {
        const bool branch_taken_0x1686f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x1686f8) {
            ctx->pc = 0x1686FCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 184));
            ctx->pc = 0x16870Cu;
            goto label_16870c;
        }
    }
    ctx->pc = 0x168700u;
    // 0x168700: 0xc05a198
    ctx->pc = 0x168700u;
    SET_GPR_U32(ctx, 31, 0x168708u);
    ctx->pc = 0x168704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168660u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_ExecHndl_0x168660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168708u; }
        else if (ctx->pc != 0x168708u) { ctx->pc = 0x168708u; }
    }
    if (ctx->pc != 0x168708u) { return; }
    ctx->pc = 0x168708u;
    // 0x168708: 0x261000b8
    ctx->pc = 0x168708u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 184));
label_16870c:
    // 0x16870c: 0x211102a
    ctx->pc = 0x16870cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x168710: 0x5440fff9
    ctx->pc = 0x168710u;
    {
        const bool branch_taken_0x168710 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x168710) {
            ctx->pc = 0x168714u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x1686F8u;
            goto label_1686f8;
        }
    }
    ctx->pc = 0x168718u;
    // 0x168718: 0xdfbf0030
    ctx->pc = 0x168718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16871c: 0xdfb20020
    ctx->pc = 0x16871cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168720: 0xdfb10010
    ctx->pc = 0x168720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168724: 0xdfb00000
    ctx->pc = 0x168724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168728: 0x3e00008
    ctx->pc = 0x168728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16872Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1686F8u: goto label_1686f8;
            case 0x16870Cu: goto label_16870c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168730u;
}
