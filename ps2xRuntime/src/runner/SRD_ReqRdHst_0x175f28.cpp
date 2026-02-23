#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_ReqRdHst
// Address: 0x175f28 - 0x175fbc
void SRD_ReqRdHst_0x175f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_ReqRdHst");


    ctx->pc = 0x175f28u;

    // 0x175f28: 0x27bdffb0
    ctx->pc = 0x175f28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x175f2c: 0xffb00000
    ctx->pc = 0x175f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175f30: 0xffb30030
    ctx->pc = 0x175f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x175f34: 0x3c100024
    ctx->pc = 0x175f34u;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x175f38: 0xffb20020
    ctx->pc = 0x175f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x175f3c: 0x26028770
    ctx->pc = 0x175f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294936432));
    // 0x175f40: 0xffb10010
    ctx->pc = 0x175f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x175f44: 0x80982d
    ctx->pc = 0x175f44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f48: 0xffbf0040
    ctx->pc = 0x175f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x175f4c: 0xa0902d
    ctx->pc = 0x175f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f50: 0x8c430004
    ctx->pc = 0x175f50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x175f54: 0x10600006
    ctx->pc = 0x175F54u;
    {
        const bool branch_taken_0x175f54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x175F58u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175f54) {
            ctx->pc = 0x175F70u;
            goto label_175f70;
        }
    }
    ctx->pc = 0x175F5Cu;
    // 0x175f5c: 0x24020003
    ctx->pc = 0x175f5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x175f60: 0x10620003
    ctx->pc = 0x175F60u;
    {
        const bool branch_taken_0x175f60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x175F64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x175f60) {
            ctx->pc = 0x175F70u;
            goto label_175f70;
        }
    }
    ctx->pc = 0x175F68u;
    // 0x175f68: 0x1462000c
    ctx->pc = 0x175F68u;
    {
        const bool branch_taken_0x175f68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x175F6Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175f68) {
            ctx->pc = 0x175F9Cu;
            goto label_175f9c;
        }
    }
    ctx->pc = 0x175F70u;
label_175f70:
    // 0x175f70: 0xc05d796
    ctx->pc = 0x175F70u;
    SET_GPR_U32(ctx, 31, 0x175F78u);
    ctx->pc = 0x175E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        srd_reset_obj_0x175e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F78u; }
        else if (ctx->pc != 0x175F78u) { ctx->pc = 0x175F78u; }
    }
    if (ctx->pc != 0x175F78u) { return; }
    ctx->pc = 0x175F78u;
    // 0x175f78: 0x24030002
    ctx->pc = 0x175f78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x175f7c: 0x26028770
    ctx->pc = 0x175f7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294936432));
    // 0x175f80: 0xae038770
    ctx->pc = 0x175f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936432), GPR_U32(ctx, 3));
    // 0x175f84: 0x24040001
    ctx->pc = 0x175f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x175f88: 0xac510020
    ctx->pc = 0x175f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    // 0x175f8c: 0x24030001
    ctx->pc = 0x175f8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x175f90: 0xac440004
    ctx->pc = 0x175f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x175f94: 0xac530018
    ctx->pc = 0x175f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
    // 0x175f98: 0xac52001c
    ctx->pc = 0x175f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 18));
label_175f9c:
    // 0x175f9c: 0xdfbf0040
    ctx->pc = 0x175f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175fa0: 0x60102d
    ctx->pc = 0x175fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fa4: 0xdfb30030
    ctx->pc = 0x175fa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175fa8: 0xdfb20020
    ctx->pc = 0x175fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175fac: 0xdfb10010
    ctx->pc = 0x175facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175fb0: 0xdfb00000
    ctx->pc = 0x175fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175fb4: 0x3e00008
    ctx->pc = 0x175FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175FB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175F70u: goto label_175f70;
            case 0x175F9Cu: goto label_175f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175FBCu;
}
