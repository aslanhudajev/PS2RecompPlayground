#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySetSupplySj
// Address: 0x18eb90 - 0x18ec5c
void mwPlySetSupplySj_0x18eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySetSupplySj");


    ctx->pc = 0x18eb90u;

    // 0x18eb90: 0x27bdffd0
    ctx->pc = 0x18eb90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18eb94: 0xffbf0020
    ctx->pc = 0x18eb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18eb98: 0x8c860038
    ctx->pc = 0x18eb98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x18eb9c: 0x10c0002c
    ctx->pc = 0x18EB9Cu;
    {
        const bool branch_taken_0x18eb9c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EBA0u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        if (branch_taken_0x18eb9c) {
            ctx->pc = 0x18EC50u;
            goto label_18ec50;
        }
    }
    ctx->pc = 0x18EBA4u;
    // 0x18eba4: 0x8c82003c
    ctx->pc = 0x18eba4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x18eba8: 0x54c2000b
    ctx->pc = 0x18EBA8u;
    {
        const bool branch_taken_0x18eba8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x18eba8) {
            ctx->pc = 0x18EBACu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
            ctx->pc = 0x18EBD8u;
            goto label_18ebd8;
        }
    }
    ctx->pc = 0x18EBB0u;
    // 0x18ebb0: 0x8c820048
    ctx->pc = 0x18ebb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x18ebb4: 0x24030001
    ctx->pc = 0x18ebb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ebb8: 0x8c840044
    ctx->pc = 0x18ebb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x18ebbc: 0xafa30000
    ctx->pc = 0x18ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x18ebc0: 0xafa60004
    ctx->pc = 0x18ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x18ebc4: 0xafa40008
    ctx->pc = 0x18ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x18ebc8: 0xafa2000c
    ctx->pc = 0x18ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x18ebcc: 0xafa00010
    ctx->pc = 0x18ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x18ebd0: 0x10000015
    ctx->pc = 0x18EBD0u;
    {
        const bool branch_taken_0x18ebd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EBD4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        if (branch_taken_0x18ebd0) {
            ctx->pc = 0x18EC28u;
            goto label_18ec28;
        }
    }
    ctx->pc = 0x18EBD8u;
label_18ebd8:
    // 0x18ebd8: 0x54c2000a
    ctx->pc = 0x18EBD8u;
    {
        const bool branch_taken_0x18ebd8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x18ebd8) {
            ctx->pc = 0x18EBDCu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 100)));
            ctx->pc = 0x18EC04u;
            goto label_18ec04;
        }
    }
    ctx->pc = 0x18EBE0u;
    // 0x18ebe0: 0x8c820054
    ctx->pc = 0x18ebe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x18ebe4: 0x8c83004c
    ctx->pc = 0x18ebe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x18ebe8: 0x8c840050
    ctx->pc = 0x18ebe8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x18ebec: 0xafa60004
    ctx->pc = 0x18ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x18ebf0: 0xafa30008
    ctx->pc = 0x18ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x18ebf4: 0xafa4000c
    ctx->pc = 0x18ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x18ebf8: 0xafa20014
    ctx->pc = 0x18ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x18ebfc: 0x10000009
    ctx->pc = 0x18EBFCu;
    {
        const bool branch_taken_0x18ebfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EC00u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x18ebfc) {
            ctx->pc = 0x18EC24u;
            goto label_18ec24;
        }
    }
    ctx->pc = 0x18EC04u;
label_18ec04:
    // 0x18ec04: 0x8c820058
    ctx->pc = 0x18ec04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x18ec08: 0x8c83005c
    ctx->pc = 0x18ec08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x18ec0c: 0x8c840060
    ctx->pc = 0x18ec0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x18ec10: 0xafa20000
    ctx->pc = 0x18ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x18ec14: 0xafa60004
    ctx->pc = 0x18ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x18ec18: 0xafa30008
    ctx->pc = 0x18ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x18ec1c: 0xafa4000c
    ctx->pc = 0x18ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x18ec20: 0xafa50014
    ctx->pc = 0x18ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
label_18ec24:
    // 0x18ec24: 0xafa00010
    ctx->pc = 0x18ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_18ec28:
    // 0x18ec28: 0xe0202d
    ctx->pc = 0x18ec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec2c: 0xc066fba
    ctx->pc = 0x18EC2Cu;
    SET_GPR_U32(ctx, 31, 0x18EC34u);
    ctx->pc = 0x18EC30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BEE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetSupplySj_0x19bee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC34u; }
        else if (ctx->pc != 0x18EC34u) { ctx->pc = 0x18EC34u; }
    }
    if (ctx->pc != 0x18EC34u) { return; }
    ctx->pc = 0x18EC34u;
    // 0x18ec34: 0x10400007
    ctx->pc = 0x18EC34u;
    {
        const bool branch_taken_0x18ec34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EC38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18ec34) {
            ctx->pc = 0x18EC54u;
            goto label_18ec54;
        }
    }
    ctx->pc = 0x18EC3Cu;
    // 0x18ec3c: 0xc0633b4
    ctx->pc = 0x18EC3Cu;
    SET_GPR_U32(ctx, 31, 0x18EC44u);
    ctx->pc = 0x18EC40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966984));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC44u; }
        else if (ctx->pc != 0x18EC44u) { ctx->pc = 0x18EC44u; }
    }
    if (ctx->pc != 0x18EC44u) { return; }
    ctx->pc = 0x18EC44u;
    // 0x18ec44: 0x3c04002c
    ctx->pc = 0x18ec44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18ec48: 0xc063dda
    ctx->pc = 0x18EC48u;
    SET_GPR_U32(ctx, 31, 0x18EC50u);
    ctx->pc = 0x18EC4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955232));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC50u; }
        else if (ctx->pc != 0x18EC50u) { ctx->pc = 0x18EC50u; }
    }
    if (ctx->pc != 0x18EC50u) { return; }
    ctx->pc = 0x18EC50u;
label_18ec50:
    // 0x18ec50: 0xdfbf0020
    ctx->pc = 0x18ec50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18ec54:
    // 0x18ec54: 0x3e00008
    ctx->pc = 0x18EC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EC58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EBD8u: goto label_18ebd8;
            case 0x18EC04u: goto label_18ec04;
            case 0x18EC24u: goto label_18ec24;
            case 0x18EC28u: goto label_18ec28;
            case 0x18EC50u: goto label_18ec50;
            case 0x18EC54u: goto label_18ec54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18EC5Cu;
}
