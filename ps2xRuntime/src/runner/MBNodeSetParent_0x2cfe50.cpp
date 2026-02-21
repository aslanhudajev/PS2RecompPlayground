#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNodeSetParent
// Address: 0x2cfe50 - 0x2cfee4
void MBNodeSetParent_0x2cfe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cfe50u;

    // 0x2cfe50: 0x27bdffd0
    ctx->pc = 0x2cfe50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cfe54: 0xffbf0020
    ctx->pc = 0x2cfe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cfe58: 0xffb10010
    ctx->pc = 0x2cfe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cfe5c: 0xffb00000
    ctx->pc = 0x2cfe5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfe60: 0x80802d
    ctx->pc = 0x2cfe60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfe64: 0x8e030074
    ctx->pc = 0x2cfe64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2cfe68: 0x1060000b
    ctx->pc = 0x2CFE68u;
    {
        const bool branch_taken_0x2cfe68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFE6Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cfe68) {
            ctx->pc = 0x2CFE98u;
            goto label_2cfe98;
        }
    }
    ctx->pc = 0x2CFE70u;
    // 0x2cfe70: 0x10710018
    ctx->pc = 0x2CFE70u;
    {
        const bool branch_taken_0x2cfe70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 17));
        ctx->pc = 0x2CFE74u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2cfe70) {
            ctx->pc = 0x2CFED4u;
            goto label_2cfed4;
        }
    }
    ctx->pc = 0x2CFE78u;
    // 0x2cfe78: 0x10600007
    ctx->pc = 0x2CFE78u;
    {
        const bool branch_taken_0x2cfe78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cfe78) {
            ctx->pc = 0x2CFE98u;
            goto label_2cfe98;
        }
    }
    ctx->pc = 0x2CFE80u;
    // 0x2cfe80: 0x8c620078
    ctx->pc = 0x2cfe80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2cfe84: 0x14500004
    ctx->pc = 0x2CFE84u;
    {
        const bool branch_taken_0x2cfe84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x2cfe84) {
            ctx->pc = 0x2CFE98u;
            goto label_2cfe98;
        }
    }
    ctx->pc = 0x2CFE8Cu;
    // 0x2cfe8c: 0x8e02007c
    ctx->pc = 0x2cfe8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2cfe90: 0x10000008
    ctx->pc = 0x2CFE90u;
    {
        const bool branch_taken_0x2cfe90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFE94u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
        if (branch_taken_0x2cfe90) {
            ctx->pc = 0x2CFEB4u;
            goto label_2cfeb4;
        }
    }
    ctx->pc = 0x2CFE98u;
label_2cfe98:
    // 0x2cfe98: 0xc0b3e40
    ctx->pc = 0x2CFE98u;
    SET_GPR_U32(ctx, 31, 0x2CFEA0u);
    ctx->pc = 0x2CFE9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF900u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodePrevNode_0x2cf900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFEA0u; }
    }
    if (ctx->pc != 0x2CFEA0u) { return; }
    ctx->pc = 0x2CFEA0u;
    // 0x2cfea0: 0x40182d
    ctx->pc = 0x2cfea0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfea4: 0x50600004
    ctx->pc = 0x2CFEA4u;
    {
        const bool branch_taken_0x2cfea4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cfea4) {
            ctx->pc = 0x2CFEA8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
            ctx->pc = 0x2CFEB8u;
            goto label_2cfeb8;
        }
    }
    ctx->pc = 0x2CFEACu;
    // 0x2cfeac: 0x8e02007c
    ctx->pc = 0x2cfeacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2cfeb0: 0xac62007c
    ctx->pc = 0x2cfeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
label_2cfeb4:
    // 0x2cfeb4: 0xae00007c
    ctx->pc = 0x2cfeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_2cfeb8:
    // 0x2cfeb8: 0x200202d
    ctx->pc = 0x2cfeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfebc: 0x220282d
    ctx->pc = 0x2cfebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfec0: 0xdfbf0020
    ctx->pc = 0x2cfec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfec4: 0xdfb10010
    ctx->pc = 0x2cfec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfec8: 0xdfb00000
    ctx->pc = 0x2cfec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfecc: 0x80b3e64
    ctx->pc = 0x2CFECCu;
    ctx->pc = 0x2CFED0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2CF990u;
    MBNodeInsert_0x2cf990(rdram, ctx, runtime); return;
    ctx->pc = 0x2CFED4u;
label_2cfed4:
    // 0x2cfed4: 0xdfb10010
    ctx->pc = 0x2cfed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfed8: 0xdfb00000
    ctx->pc = 0x2cfed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfedc: 0x3e00008
    ctx->pc = 0x2CFEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFEE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CFE98u: goto label_2cfe98;
            case 0x2CFEB4u: goto label_2cfeb4;
            case 0x2CFEB8u: goto label_2cfeb8;
            case 0x2CFED4u: goto label_2cfed4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CFEE4u;
}
