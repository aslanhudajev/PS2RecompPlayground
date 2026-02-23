#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_00__13ClVtxMgrClassFv
// Address: 0x1d2ec0 - 0x1d2fe4
void entryExec_STAT_00__13ClVtxMgrClassFv_0x1d2ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_00__13ClVtxMgrClassFv");


    ctx->pc = 0x1d2ec0u;

    // 0x1d2ec0: 0x27bdffd0
    ctx->pc = 0x1d2ec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d2ec4: 0x7fbf0020
    ctx->pc = 0x1d2ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d2ec8: 0x7fb10010
    ctx->pc = 0x1d2ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2ecc: 0x7fb00000
    ctx->pc = 0x1d2eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2ed0: 0x70808e28
    ctx->pc = 0x1d2ed0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d2ed4: 0x8c840000
    ctx->pc = 0x1d2ed4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2ed8: 0x3c020050
    ctx->pc = 0x1d2ed8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d2edc: 0x2443fb10
    ctx->pc = 0x1d2edcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966032));
    // 0x1d2ee0: 0x24020003
    ctx->pc = 0x1d2ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2ee4: 0x8c850008
    ctx->pc = 0x1d2ee4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d2ee8: 0x52040
    ctx->pc = 0x1d2ee8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d2eec: 0x852021
    ctx->pc = 0x1d2eecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d2ef0: 0x42080
    ctx->pc = 0x1d2ef0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d2ef4: 0x648021
    ctx->pc = 0x1d2ef4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2ef8: 0x8e030000
    ctx->pc = 0x1d2ef8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d2efc: 0x10620034
    ctx->pc = 0x1D2EFCu;
    {
        const bool branch_taken_0x1d2efc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D2F00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d2efc) {
            ctx->pc = 0x1D2FD0u;
            goto label_1d2fd0;
        }
    }
    ctx->pc = 0x1D2F04u;
    // 0x1d2f04: 0x24020002
    ctx->pc = 0x1d2f04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2f08: 0x1062002e
    ctx->pc = 0x1D2F08u;
    {
        const bool branch_taken_0x1d2f08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D2F0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d2f08) {
            ctx->pc = 0x1D2FC4u;
            goto label_1d2fc4;
        }
    }
    ctx->pc = 0x1D2F10u;
    // 0x1d2f10: 0x24020001
    ctx->pc = 0x1d2f10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2f14: 0x1062002a
    ctx->pc = 0x1D2F14u;
    {
        const bool branch_taken_0x1d2f14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d2f14) {
            ctx->pc = 0x1D2FC0u;
            goto label_1d2fc0;
        }
    }
    ctx->pc = 0x1D2F1Cu;
    // 0x1d2f1c: 0x10600003
    ctx->pc = 0x1D2F1Cu;
    {
        const bool branch_taken_0x1d2f1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d2f1c) {
            ctx->pc = 0x1D2F2Cu;
            goto label_1d2f2c;
        }
    }
    ctx->pc = 0x1D2F24u;
    // 0x1d2f24: 0x10000029
    ctx->pc = 0x1D2F24u;
    {
        const bool branch_taken_0x1d2f24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d2f24) {
            ctx->pc = 0x1D2FCCu;
            goto label_1d2fcc;
        }
    }
    ctx->pc = 0x1D2F2Cu;
label_1d2f2c:
    // 0x1d2f2c: 0xae020000
    ctx->pc = 0x1d2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d2f30: 0xae000004
    ctx->pc = 0x1d2f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d2f34: 0x3c020026
    ctx->pc = 0x1d2f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1d2f38: 0x24425164
    ctx->pc = 0x1d2f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20836));
    // 0x1d2f3c: 0xae000008
    ctx->pc = 0x1d2f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d2f40: 0x3c010030
    ctx->pc = 0x1d2f40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d2f44: 0xac257c7c
    ctx->pc = 0x1d2f44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31868), GPR_U32(ctx, 5));
    // 0x1d2f48: 0x441021
    ctx->pc = 0x1d2f48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d2f4c: 0x8c430000
    ctx->pc = 0x1d2f4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2f50: 0x3c010050
    ctx->pc = 0x1d2f50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d2f54: 0x3c020026
    ctx->pc = 0x1d2f54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1d2f58: 0x24425160
    ctx->pc = 0x1d2f58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20832));
    // 0x1d2f5c: 0x441021
    ctx->pc = 0x1d2f5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d2f60: 0x8c240c88
    ctx->pc = 0x1d2f60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3208)));
    // 0x1d2f64: 0x3c010030
    ctx->pc = 0x1d2f64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d2f68: 0xac237c80
    ctx->pc = 0x1d2f68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31872), GPR_U32(ctx, 3));
    // 0x1d2f6c: 0x8c450000
    ctx->pc = 0x1d2f6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2f70: 0xc05af94
    ctx->pc = 0x1D2F70u;
    SET_GPR_U32(ctx, 31, 0x1D2F78u);
    ctx->pc = 0x1D2F74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Seek_0x16be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F78u; }
        else if (ctx->pc != 0x1D2F78u) { ctx->pc = 0x1D2F78u; }
    }
    if (ctx->pc != 0x1D2F78u) { return; }
    ctx->pc = 0x1D2F78u;
    // 0x1d2f78: 0x3c010030
    ctx->pc = 0x1d2f78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d2f7c: 0x8c227c80
    ctx->pc = 0x1d2f7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31872)));
    // 0x1d2f80: 0x212c0
    ctx->pc = 0x1d2f80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1d2f84: 0xc06878c
    ctx->pc = 0x1D2F84u;
    SET_GPR_U32(ctx, 31, 0x1D2F8Cu);
    ctx->pc = 0x1D2F88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2F8Cu; }
        else if (ctx->pc != 0x1D2F8Cu) { ctx->pc = 0x1D2F8Cu; }
    }
    if (ctx->pc != 0x1D2F8Cu) { return; }
    ctx->pc = 0x1D2F8Cu;
    // 0x1d2f8c: 0xae020004
    ctx->pc = 0x1d2f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1d2f90: 0x8e040004
    ctx->pc = 0x1d2f90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d2f94: 0x2403ffc0
    ctx->pc = 0x1d2f94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1d2f98: 0x3c010030
    ctx->pc = 0x1d2f98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d2f9c: 0x24020001
    ctx->pc = 0x1d2f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2fa0: 0x2484003f
    ctx->pc = 0x1d2fa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 63));
    // 0x1d2fa4: 0x831824
    ctx->pc = 0x1d2fa4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d2fa8: 0xae030008
    ctx->pc = 0x1d2fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1d2fac: 0x8e030008
    ctx->pc = 0x1d2facu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d2fb0: 0xac237c78
    ctx->pc = 0x1d2fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31864), GPR_U32(ctx, 3));
    // 0x1d2fb4: 0x8e230000
    ctx->pc = 0x1d2fb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2fb8: 0x10000005
    ctx->pc = 0x1D2FB8u;
    {
        const bool branch_taken_0x1d2fb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2FBCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1d2fb8) {
            ctx->pc = 0x1D2FD0u;
            goto label_1d2fd0;
        }
    }
    ctx->pc = 0x1D2FC0u;
label_1d2fc0:
    // 0x1d2fc0: 0x2402ffff
    ctx->pc = 0x1d2fc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d2fc4:
    // 0x1d2fc4: 0x10000003
    ctx->pc = 0x1D2FC4u;
    {
        const bool branch_taken_0x1d2fc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2FC8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1d2fc4) {
            ctx->pc = 0x1D2FD4u;
            goto label_1d2fd4;
        }
    }
    ctx->pc = 0x1D2FCCu;
label_1d2fcc:
    // 0x1d2fcc: 0x2402ffff
    ctx->pc = 0x1d2fccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d2fd0:
    // 0x1d2fd0: 0x7bbf0020
    ctx->pc = 0x1d2fd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2fd4:
    // 0x1d2fd4: 0x7bb10010
    ctx->pc = 0x1d2fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2fd8: 0x7bb00000
    ctx->pc = 0x1d2fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2fdc: 0x3e00008
    ctx->pc = 0x1D2FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2FE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2F2Cu: goto label_1d2f2c;
            case 0x1D2FC0u: goto label_1d2fc0;
            case 0x1D2FC4u: goto label_1d2fc4;
            case 0x1D2FCCu: goto label_1d2fcc;
            case 0x1D2FD0u: goto label_1d2fd0;
            case 0x1D2FD4u: goto label_1d2fd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2FE4u;
}
