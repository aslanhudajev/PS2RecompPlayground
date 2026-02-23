#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrtclPutEntry
// Address: 0x1a8b80 - 0x1a8d7c
void nlPrtclPutEntry_0x1a8b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrtclPutEntry");


    ctx->pc = 0x1a8b80u;

    // 0x1a8b80: 0x27bdff40
    ctx->pc = 0x1a8b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a8b84: 0x7fbf0020
    ctx->pc = 0x1a8b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a8b88: 0x7fb10010
    ctx->pc = 0x1a8b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a8b8c: 0x7fb00000
    ctx->pc = 0x1a8b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a8b90: 0x8f828a44
    ctx->pc = 0x1a8b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937156)));
    // 0x1a8b94: 0x8f858a28
    ctx->pc = 0x1a8b94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937128)));
    // 0x1a8b98: 0x1445000c
    ctx->pc = 0x1A8B98u;
    {
        const bool branch_taken_0x1a8b98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x1a8b98) {
            ctx->pc = 0x1A8BCCu;
            goto label_1a8bcc;
        }
    }
    ctx->pc = 0x1A8BA0u;
    // 0x1a8ba0: 0x8f828a30
    ctx->pc = 0x1a8ba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x1a8ba4: 0x14400005
    ctx->pc = 0x1A8BA4u;
    {
        const bool branch_taken_0x1a8ba4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8BA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
        if (branch_taken_0x1a8ba4) {
            ctx->pc = 0x1A8BBCu;
            goto label_1a8bbc;
        }
    }
    ctx->pc = 0x1A8BACu;
    // 0x1a8bac: 0xc05114a
    ctx->pc = 0x1A8BACu;
    SET_GPR_U32(ctx, 31, 0x1A8BB4u);
    ctx->pc = 0x1A8BB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964320));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BB4u; }
        else if (ctx->pc != 0x1A8BB4u) { ctx->pc = 0x1A8BB4u; }
    }
    if (ctx->pc != 0x1A8BB4u) { return; }
    ctx->pc = 0x1A8BB4u;
label_1a8bb4:
    // 0x1a8bb4: 0x1000ffff
    ctx->pc = 0x1A8BB4u;
    {
        const bool branch_taken_0x1a8bb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8bb4) {
            ctx->pc = 0x1A8BB4u;
            goto label_1a8bb4;
        }
    }
    ctx->pc = 0x1A8BBCu;
label_1a8bbc:
    // 0x1a8bbc: 0xc0718d4
    ctx->pc = 0x1A8BBCu;
    SET_GPR_U32(ctx, 31, 0x1A8BC4u);
    ctx->pc = 0x1C6350u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrtclPut_0x1c6350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BC4u; }
        else if (ctx->pc != 0x1A8BC4u) { ctx->pc = 0x1A8BC4u; }
    }
    if (ctx->pc != 0x1A8BC4u) { return; }
    ctx->pc = 0x1A8BC4u;
    // 0x1a8bc4: 0x10000069
    ctx->pc = 0x1A8BC4u;
    {
        const bool branch_taken_0x1a8bc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8BC8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1a8bc4) {
            ctx->pc = 0x1A8D6Cu;
            goto label_1a8d6c;
        }
    }
    ctx->pc = 0x1A8BCCu;
label_1a8bcc:
    // 0x1a8bcc: 0x8f858a2c
    ctx->pc = 0x1a8bccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x1a8bd0: 0x23200
    ctx->pc = 0x1a8bd0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a8bd4: 0x24420001
    ctx->pc = 0x1a8bd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8bd8: 0xaf828a44
    ctx->pc = 0x1a8bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937156), GPR_U32(ctx, 2));
    // 0x1a8bdc: 0x24070012
    ctx->pc = 0x1a8bdcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1a8be0: 0x70e01628
    ctx->pc = 0x1a8be0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1a8be4: 0xa68021
    ctx->pc = 0x1a8be4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a8be8: 0x24030002
    ctx->pc = 0x1a8be8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8bec: 0xae030004
    ctx->pc = 0x1a8becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a8bf0: 0x26110010
    ctx->pc = 0x1a8bf0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a8bf4: 0x70804628
    ctx->pc = 0x1a8bf4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a8bf8: 0x24e7ffff
    ctx->pc = 0x1a8bf8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a8bfc: 0xa60000f4
    ctx->pc = 0x1a8bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a8c00: 0x10400009
    ctx->pc = 0x1A8C00u;
    {
        const bool branch_taken_0x1a8c00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8C04u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a8c00) {
            ctx->pc = 0x1A8C28u;
            goto label_1a8c28;
        }
    }
    ctx->pc = 0x1A8C08u;
label_1a8c08:
    // 0x1a8c08: 0x8d030000
    ctx->pc = 0x1a8c08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a8c0c: 0x70e01628
    ctx->pc = 0x1a8c0cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1a8c10: 0x24e7ffff
    ctx->pc = 0x1a8c10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a8c14: 0xaca30000
    ctx->pc = 0x1a8c14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a8c18: 0x25080004
    ctx->pc = 0x1a8c18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x1a8c1c: 0x1440fffa
    ctx->pc = 0x1A8C1Cu;
    {
        const bool branch_taken_0x1a8c1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8C20u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x1a8c1c) {
            ctx->pc = 0x1A8C08u;
            goto label_1a8c08;
        }
    }
    ctx->pc = 0x1A8C24u;
    // 0x1a8c24: 0x0
    ctx->pc = 0x1a8c24u;
    // NOP
label_1a8c28:
    // 0x1a8c28: 0x8c82000c
    ctx->pc = 0x1a8c28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a8c2c: 0x30420020
    ctx->pc = 0x1a8c2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x1a8c30: 0x50400004
    ctx->pc = 0x1A8C30u;
    {
        const bool branch_taken_0x1a8c30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8c30) {
            ctx->pc = 0x1A8C34u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
            ctx->pc = 0x1A8C44u;
            goto label_1a8c44;
        }
    }
    ctx->pc = 0x1A8C38u;
    // 0x1a8c38: 0x2402ffff
    ctx->pc = 0x1a8c38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8c3c: 0x10000024
    ctx->pc = 0x1A8C3Cu;
    {
        const bool branch_taken_0x1a8c3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8C40u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1a8c3c) {
            ctx->pc = 0x1A8CD0u;
            goto label_1a8cd0;
        }
    }
    ctx->pc = 0x1A8C44u;
label_1a8c44:
    // 0x1a8c44: 0xc06bf00
    ctx->pc = 0x1A8C44u;
    SET_GPR_U32(ctx, 31, 0x1A8C4Cu);
    ctx->pc = 0x1A8C48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C4Cu; }
        else if (ctx->pc != 0x1A8C4Cu) { ctx->pc = 0x1A8C4Cu; }
    }
    if (ctx->pc != 0x1A8C4Cu) { return; }
    ctx->pc = 0x1A8C4Cu;
    // 0x1a8c4c: 0x3c010030
    ctx->pc = 0x1a8c4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a8c50: 0xc7a300b8
    ctx->pc = 0x1a8c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a8c54: 0xc4203d00
    ctx->pc = 0x1a8c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8c58: 0x46001836
    ctx->pc = 0x1a8c58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8c5c: 0x0
    ctx->pc = 0x1a8c5cu;
    // NOP
    // 0x1a8c60: 0x4500001b
    ctx->pc = 0x1A8C60u;
    {
        const bool branch_taken_0x1a8c60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8c60) {
            ctx->pc = 0x1A8CD0u;
            goto label_1a8cd0;
        }
    }
    ctx->pc = 0x1A8C68u;
    // 0x1a8c68: 0xc7818a14
    ctx->pc = 0x1a8c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8c6c: 0xc7828a18
    ctx->pc = 0x1a8c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a8c70: 0x44800000
    ctx->pc = 0x1a8c70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a8c74: 0x0
    ctx->pc = 0x1a8c74u;
    // NOP
    // 0x1a8c78: 0x46030843
    ctx->pc = 0x1a8c78u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x1a8c7c: 0x46001087
    ctx->pc = 0x1a8c7cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1a8c80: 0x0
    ctx->pc = 0x1a8c80u;
    // NOP
    // 0x1a8c84: 0x46011041
    ctx->pc = 0x1a8c84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1a8c88: 0x46000834
    ctx->pc = 0x1a8c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8c8c: 0x0
    ctx->pc = 0x1a8c8cu;
    // NOP
    // 0x1a8c90: 0x45000003
    ctx->pc = 0x1A8C90u;
    {
        const bool branch_taken_0x1a8c90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8C94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)20352 << 16));
        if (branch_taken_0x1a8c90) {
            ctx->pc = 0x1A8CA0u;
            goto label_1a8ca0;
        }
    }
    ctx->pc = 0x1A8C98u;
    // 0x1a8c98: 0x1000000d
    ctx->pc = 0x1A8C98u;
    {
        const bool branch_taken_0x1a8c98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8C9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1a8c98) {
            ctx->pc = 0x1A8CD0u;
            goto label_1a8cd0;
        }
    }
    ctx->pc = 0x1A8CA0u;
label_1a8ca0:
    // 0x1a8ca0: 0x44820000
    ctx->pc = 0x1a8ca0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a8ca4: 0x0
    ctx->pc = 0x1a8ca4u;
    // NOP
    // 0x1a8ca8: 0x46000834
    ctx->pc = 0x1a8ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a8cac: 0x0
    ctx->pc = 0x1a8cacu;
    // NOP
    // 0x1a8cb0: 0x45010004
    ctx->pc = 0x1A8CB0u;
    {
        const bool branch_taken_0x1a8cb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8CB4u;
        *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
        if (branch_taken_0x1a8cb0) {
            ctx->pc = 0x1A8CC4u;
            goto label_1a8cc4;
        }
    }
    ctx->pc = 0x1A8CB8u;
    // 0x1a8cb8: 0x2402ffff
    ctx->pc = 0x1a8cb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a8cbc: 0x10000004
    ctx->pc = 0x1A8CBCu;
    {
        const bool branch_taken_0x1a8cbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8CC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1a8cbc) {
            ctx->pc = 0x1A8CD0u;
            goto label_1a8cd0;
        }
    }
    ctx->pc = 0x1A8CC4u;
label_1a8cc4:
    // 0x1a8cc4: 0x44020000
    ctx->pc = 0x1a8cc4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a8cc8: 0x0
    ctx->pc = 0x1a8cc8u;
    // NOP
    // 0x1a8ccc: 0xae020000
    ctx->pc = 0x1a8cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a8cd0:
    // 0x1a8cd0: 0x92030000
    ctx->pc = 0x1a8cd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a8cd4: 0x3c020030
    ctx->pc = 0x1a8cd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a8cd8: 0x24424090
    ctx->pc = 0x1a8cd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16528));
    // 0x1a8cdc: 0x318c0
    ctx->pc = 0x1a8cdcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a8ce0: 0x431021
    ctx->pc = 0x1a8ce0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8ce4: 0x8c430004
    ctx->pc = 0x1a8ce4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a8ce8: 0x14600004
    ctx->pc = 0x1A8CE8u;
    {
        const bool branch_taken_0x1a8ce8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8ce8) {
            ctx->pc = 0x1A8CFCu;
            goto label_1a8cfc;
        }
    }
    ctx->pc = 0x1A8CF0u;
    // 0x1a8cf0: 0xac500004
    ctx->pc = 0x1a8cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1a8cf4: 0x10000003
    ctx->pc = 0x1A8CF4u;
    {
        const bool branch_taken_0x1a8cf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8CF8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        if (branch_taken_0x1a8cf4) {
            ctx->pc = 0x1A8D04u;
            goto label_1a8d04;
        }
    }
    ctx->pc = 0x1A8CFCu;
label_1a8cfc:
    // 0x1a8cfc: 0xac7000f0
    ctx->pc = 0x1a8cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 16));
    // 0x1a8d00: 0xac500004
    ctx->pc = 0x1a8d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1a8d04:
    // 0x1a8d04: 0xae0000f0
    ctx->pc = 0x1a8d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x1a8d08: 0x27b00070
    ctx->pc = 0x1a8d08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1a8d0c: 0x27a40030
    ctx->pc = 0x1a8d0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a8d10: 0xc07175c
    ctx->pc = 0x1A8D10u;
    SET_GPR_U32(ctx, 31, 0x1A8D18u);
    ctx->pc = 0x1A8D14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C5D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrtclGetMatrix_0x1c5d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D18u; }
        else if (ctx->pc != 0x1A8D18u) { ctx->pc = 0x1A8D18u; }
    }
    if (ctx->pc != 0x1A8D18u) { return; }
    ctx->pc = 0x1A8D18u;
    // 0x1a8d18: 0xc071730
    ctx->pc = 0x1A8D18u;
    SET_GPR_U32(ctx, 31, 0x1A8D20u);
    ctx->pc = 0x1C5CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrtclCalcMatrix_0x1c5cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D20u; }
        else if (ctx->pc != 0x1A8D20u) { ctx->pc = 0x1A8D20u; }
    }
    if (ctx->pc != 0x1A8D20u) { return; }
    ctx->pc = 0x1A8D20u;
    // 0x1a8d20: 0x26240050
    ctx->pc = 0x1a8d20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
    // 0x1a8d24: 0xc07175c
    ctx->pc = 0x1A8D24u;
    SET_GPR_U32(ctx, 31, 0x1A8D2Cu);
    ctx->pc = 0x1A8D28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 144));
    ctx->pc = 0x1C5D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrtclGetMatrix_0x1c5d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D2Cu; }
        else if (ctx->pc != 0x1A8D2Cu) { ctx->pc = 0x1A8D2Cu; }
    }
    if (ctx->pc != 0x1A8D2Cu) { return; }
    ctx->pc = 0x1A8D2Cu;
    // 0x1a8d2c: 0x72002e28
    ctx->pc = 0x1a8d2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a8d30: 0xc071768
    ctx->pc = 0x1A8D30u;
    SET_GPR_U32(ctx, 31, 0x1A8D38u);
    ctx->pc = 0x1A8D34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1C5DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrtclLoadMatrix_0x1c5da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D38u; }
        else if (ctx->pc != 0x1A8D38u) { ctx->pc = 0x1A8D38u; }
    }
    if (ctx->pc != 0x1A8D38u) { return; }
    ctx->pc = 0x1A8D38u;
    // 0x1a8d38: 0x3c010026
    ctx->pc = 0x1a8d38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1a8d3c: 0xc420fbd0
    ctx->pc = 0x1a8d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8d40: 0xe62000d0
    ctx->pc = 0x1a8d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x1a8d44: 0x3c010026
    ctx->pc = 0x1a8d44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1a8d48: 0xc420fbd4
    ctx->pc = 0x1a8d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8d4c: 0xe62000d4
    ctx->pc = 0x1a8d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x1a8d50: 0x3c010026
    ctx->pc = 0x1a8d50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1a8d54: 0xc420fbe0
    ctx->pc = 0x1a8d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8d58: 0xe62000d8
    ctx->pc = 0x1a8d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x1a8d5c: 0x3c010026
    ctx->pc = 0x1a8d5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1a8d60: 0xc420fbe4
    ctx->pc = 0x1a8d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294966244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8d64: 0xe62000dc
    ctx->pc = 0x1a8d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
    // 0x1a8d68: 0x7bbf0020
    ctx->pc = 0x1a8d68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8d6c:
    // 0x1a8d6c: 0x7bb10010
    ctx->pc = 0x1a8d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8d70: 0x7bb00000
    ctx->pc = 0x1a8d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8d74: 0x3e00008
    ctx->pc = 0x1A8D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8D78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8BB4u: goto label_1a8bb4;
            case 0x1A8BBCu: goto label_1a8bbc;
            case 0x1A8BCCu: goto label_1a8bcc;
            case 0x1A8C08u: goto label_1a8c08;
            case 0x1A8C28u: goto label_1a8c28;
            case 0x1A8C44u: goto label_1a8c44;
            case 0x1A8CA0u: goto label_1a8ca0;
            case 0x1A8CC4u: goto label_1a8cc4;
            case 0x1A8CD0u: goto label_1a8cd0;
            case 0x1A8CFCu: goto label_1a8cfc;
            case 0x1A8D04u: goto label_1a8d04;
            case 0x1A8D6Cu: goto label_1a8d6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8D7Cu;
}
