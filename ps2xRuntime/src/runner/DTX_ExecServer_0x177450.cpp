#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTX_ExecServer
// Address: 0x177450 - 0x1774b8
void DTX_ExecServer_0x177450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTX_ExecServer");


    ctx->pc = 0x177450u;

    // 0x177450: 0x27bdffc0
    ctx->pc = 0x177450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177454: 0xffb20020
    ctx->pc = 0x177454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x177458: 0xffb10010
    ctx->pc = 0x177458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17745c: 0xffb00000
    ctx->pc = 0x17745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177460: 0xffbf0030
    ctx->pc = 0x177460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x177464: 0xc05efbc
    ctx->pc = 0x177464u;
    SET_GPR_U32(ctx, 31, 0x17746Cu);
    ctx->pc = 0x177468u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17746Cu; }
        else if (ctx->pc != 0x17746Cu) { ctx->pc = 0x17746Cu; }
    }
    if (ctx->pc != 0x17746Cu) { return; }
    ctx->pc = 0x17746Cu;
    // 0x17746c: 0x3c020024
    ctx->pc = 0x17746cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x177470: 0x24508bb0
    ctx->pc = 0x177470u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294937520));
    // 0x177474: 0x26110220
    ctx->pc = 0x177474u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 544));
    // 0x177478: 0x82020000
    ctx->pc = 0x177478u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17747c: 0x0
    ctx->pc = 0x17747cu;
    // NOP
label_177480:
    // 0x177480: 0x54520004
    ctx->pc = 0x177480u;
    {
        const bool branch_taken_0x177480 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x177480) {
            ctx->pc = 0x177484u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 68));
            ctx->pc = 0x177494u;
            goto label_177494;
        }
    }
    ctx->pc = 0x177488u;
    // 0x177488: 0xc05dc34
    ctx->pc = 0x177488u;
    SET_GPR_U32(ctx, 31, 0x177490u);
    ctx->pc = 0x17748Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1770D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_ExecHndl_0x1770d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177490u; }
        else if (ctx->pc != 0x177490u) { ctx->pc = 0x177490u; }
    }
    if (ctx->pc != 0x177490u) { return; }
    ctx->pc = 0x177490u;
    // 0x177490: 0x26100044
    ctx->pc = 0x177490u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 68));
label_177494:
    // 0x177494: 0x211102a
    ctx->pc = 0x177494u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x177498: 0x5440fff9
    ctx->pc = 0x177498u;
    {
        const bool branch_taken_0x177498 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x177498) {
            ctx->pc = 0x17749Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x177480u;
            goto label_177480;
        }
    }
    ctx->pc = 0x1774A0u;
    // 0x1774a0: 0xdfbf0030
    ctx->pc = 0x1774a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1774a4: 0xdfb20020
    ctx->pc = 0x1774a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1774a8: 0xdfb10010
    ctx->pc = 0x1774a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1774ac: 0xdfb00000
    ctx->pc = 0x1774acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1774b0: 0x805efc2
    ctx->pc = 0x1774B0u;
    ctx->pc = 0x1774B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
    ctx->pc = 0x1774B8u;
}
