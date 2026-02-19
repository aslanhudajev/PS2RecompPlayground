#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetTex
// Address: 0x2c3b58 - 0x2c3cf8
void MBBlitSetTex_0x2c3b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3b58u;

    // 0x2c3b58: 0x27bdffa0
    ctx->pc = 0x2c3b58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c3b5c: 0xffbf0050
    ctx->pc = 0x2c3b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c3b60: 0xffb40040
    ctx->pc = 0x2c3b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c3b64: 0xffb30030
    ctx->pc = 0x2c3b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c3b68: 0xffb20020
    ctx->pc = 0x2c3b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c3b6c: 0xffb10010
    ctx->pc = 0x2c3b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c3b70: 0xffb00000
    ctx->pc = 0x2c3b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3b74: 0x80902d
    ctx->pc = 0x2c3b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b78: 0xc0102d
    ctx->pc = 0x2c3b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b7c: 0x382d
    ctx->pc = 0x2c3b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b80: 0x302d
    ctx->pc = 0x2c3b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b84: 0xa0802d
    ctx->pc = 0x2c3b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b88: 0x6010002
    ctx->pc = 0x2C3B88u;
    {
        const bool branch_taken_0x2c3b88 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2C3B8Cu;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        if (branch_taken_0x2c3b88) {
            ctx->pc = 0x2C3B94u;
            goto label_2c3b94;
        }
    }
    ctx->pc = 0x2C3B90u;
    // 0x2c3b90: 0x280802d
    ctx->pc = 0x2c3b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b94:
    // 0x2c3b94: 0x2028021
    ctx->pc = 0x2c3b94u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c3b98: 0x1214004e
    ctx->pc = 0x2C3B98u;
    {
        const bool branch_taken_0x2c3b98 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 20));
        ctx->pc = 0x2C3B9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x2c3b98) {
            ctx->pc = 0x2C3CD4u;
            goto label_2c3cd4;
        }
    }
    ctx->pc = 0x2C3BA0u;
    // 0x2c3ba0: 0x8e420000
    ctx->pc = 0x2c3ba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c3ba4: 0x30430400
    ctx->pc = 0x2c3ba4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1024));
    // 0x2c3ba8: 0x2404ffff
    ctx->pc = 0x2c3ba8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c3bac: 0x83380b
    ctx->pc = 0x2c3bacu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 4));
    // 0x2c3bb0: 0x30420800
    ctx->pc = 0x2c3bb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x2c3bb4: 0x10e40003
    ctx->pc = 0x2C3BB4u;
    {
        const bool branch_taken_0x2c3bb4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 4));
        ctx->pc = 0x2C3BB8u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 4));
        if (branch_taken_0x2c3bb4) {
            ctx->pc = 0x2C3BC4u;
            goto label_2c3bc4;
        }
    }
    ctx->pc = 0x2C3BBCu;
    // 0x2c3bbc: 0x14c40004
    ctx->pc = 0x2C3BBCu;
    {
        const bool branch_taken_0x2c3bbc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        if (branch_taken_0x2c3bbc) {
            ctx->pc = 0x2C3BD0u;
            goto label_2c3bd0;
        }
    }
    ctx->pc = 0x2C3BC4u;
label_2c3bc4:
    // 0x2c3bc4: 0x240202d
    ctx->pc = 0x2c3bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3bc8: 0xc0b0cf6
    ctx->pc = 0x2C3BC8u;
    SET_GPR_U32(ctx, 31, 0x2C3BD0u);
    ctx->pc = 0x2C3BCCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BD0u; }
    }
    if (ctx->pc != 0x2C3BD0u) { return; }
    ctx->pc = 0x2C3BD0u;
label_2c3bd0:
    // 0x2c3bd0: 0x6800006
    ctx->pc = 0x2C3BD0u;
    {
        const bool branch_taken_0x2c3bd0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2C3BD4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c3bd0) {
            ctx->pc = 0x2C3BECu;
            goto label_2c3bec;
        }
    }
    ctx->pc = 0x2C3BD8u;
    // 0x2c3bd8: 0xc0b3da0
    ctx->pc = 0x2C3BD8u;
    SET_GPR_U32(ctx, 31, 0x2C3BE0u);
    ctx->pc = 0x2C3BDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BE0u; }
    }
    if (ctx->pc != 0x2C3BE0u) { return; }
    ctx->pc = 0x2C3BE0u;
    // 0x2c3be0: 0x94510016
    ctx->pc = 0x2c3be0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x2c3be4: 0x10000002
    ctx->pc = 0x2C3BE4u;
    {
        const bool branch_taken_0x2c3be4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3BE8u;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
        if (branch_taken_0x2c3be4) {
            ctx->pc = 0x2C3BF0u;
            goto label_2c3bf0;
        }
    }
    ctx->pc = 0x2C3BECu;
label_2c3bec:
    // 0x2c3bec: 0x24130001
    ctx->pc = 0x2c3becu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_2c3bf0:
    // 0x2c3bf0: 0xc0b3da0
    ctx->pc = 0x2C3BF0u;
    SET_GPR_U32(ctx, 31, 0x2C3BF8u);
    ctx->pc = 0x2C3BF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3BF8u; }
    }
    if (ctx->pc != 0x2C3BF8u) { return; }
    ctx->pc = 0x2C3BF8u;
    // 0x2c3bf8: 0x94470016
    ctx->pc = 0x2c3bf8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x2c3bfc: 0x1227001a
    ctx->pc = 0x2C3BFCu;
    {
        const bool branch_taken_0x2c3bfc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 7));
        ctx->pc = 0x2C3C00u;
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
        if (branch_taken_0x2c3bfc) {
            ctx->pc = 0x2C3C68u;
            goto label_2c3c68;
        }
    }
    ctx->pc = 0x2C3C04u;
    // 0x2c3c04: 0x44870800
    ctx->pc = 0x2c3c04u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 7);
    // 0x2c3c08: 0x46800860
    ctx->pc = 0x2c3c08u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2c3c0c: 0x44910000
    ctx->pc = 0x2c3c0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x2c3c10: 0x46800020
    ctx->pc = 0x2c3c10u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3c14: 0x0
    ctx->pc = 0x2c3c14u;
    // NOP
    // 0x2c3c18: 0x0
    ctx->pc = 0x2c3c18u;
    // NOP
    // 0x2c3c1c: 0x46000843
    ctx->pc = 0x2c3c1cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2c3c20: 0x96420014
    ctx->pc = 0x2c3c20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2c3c24: 0x44820000
    ctx->pc = 0x2c3c24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c3c28: 0x46800020
    ctx->pc = 0x2c3c28u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3c2c: 0x46010002
    ctx->pc = 0x2c3c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3c30: 0x3c013f00
    ctx->pc = 0x2c3c30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c3c34: 0x44811000
    ctx->pc = 0x2c3c34u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2c3c38: 0x46020000
    ctx->pc = 0x2c3c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c3c3c: 0x460000e4
    ctx->pc = 0x2c3c3cu;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3c40: 0x44021800
    ctx->pc = 0x2c3c40u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x2c3c44: 0xa6420014
    ctx->pc = 0x2c3c44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c3c48: 0x96420016
    ctx->pc = 0x2c3c48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x2c3c4c: 0x44820000
    ctx->pc = 0x2c3c4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c3c50: 0x46800020
    ctx->pc = 0x2c3c50u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3c54: 0x46010002
    ctx->pc = 0x2c3c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3c58: 0x46020000
    ctx->pc = 0x2c3c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c3c5c: 0x46000064
    ctx->pc = 0x2c3c5cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3c60: 0x44020800
    ctx->pc = 0x2c3c60u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c3c64: 0xa6420016
    ctx->pc = 0x2c3c64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 2));
label_2c3c68:
    // 0x2c3c68: 0x1266001b
    ctx->pc = 0x2C3C68u;
    {
        const bool branch_taken_0x2c3c68 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 6));
        ctx->pc = 0x2C3C6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c68) {
            ctx->pc = 0x2C3CD8u;
            goto label_2c3cd8;
        }
    }
    ctx->pc = 0x2C3C70u;
    // 0x2c3c70: 0x44860800
    ctx->pc = 0x2c3c70u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 6);
    // 0x2c3c74: 0x46800860
    ctx->pc = 0x2c3c74u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2c3c78: 0x44930000
    ctx->pc = 0x2c3c78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 19);
    // 0x2c3c7c: 0x46800020
    ctx->pc = 0x2c3c7cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3c80: 0x0
    ctx->pc = 0x2c3c80u;
    // NOP
    // 0x2c3c84: 0x0
    ctx->pc = 0x2c3c84u;
    // NOP
    // 0x2c3c88: 0x46000843
    ctx->pc = 0x2c3c88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2c3c8c: 0x96420018
    ctx->pc = 0x2c3c8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2c3c90: 0x44820000
    ctx->pc = 0x2c3c90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c3c94: 0x46800020
    ctx->pc = 0x2c3c94u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3c98: 0x46010002
    ctx->pc = 0x2c3c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3c9c: 0x3c013f00
    ctx->pc = 0x2c3c9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c3ca0: 0x44811000
    ctx->pc = 0x2c3ca0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2c3ca4: 0x46020000
    ctx->pc = 0x2c3ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c3ca8: 0x460000e4
    ctx->pc = 0x2c3ca8u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3cac: 0x44021800
    ctx->pc = 0x2c3cacu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[3]);
    // 0x2c3cb0: 0xa6420018
    ctx->pc = 0x2c3cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c3cb4: 0x9642001a
    ctx->pc = 0x2c3cb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x2c3cb8: 0x44820000
    ctx->pc = 0x2c3cb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c3cbc: 0x46800020
    ctx->pc = 0x2c3cbcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3cc0: 0x46010002
    ctx->pc = 0x2c3cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3cc4: 0x46020000
    ctx->pc = 0x2c3cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c3cc8: 0x46000064
    ctx->pc = 0x2c3cc8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3ccc: 0x44020800
    ctx->pc = 0x2c3cccu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c3cd0: 0xa642001a
    ctx->pc = 0x2c3cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 2));
label_2c3cd4:
    // 0x2c3cd4: 0x280102d
    ctx->pc = 0x2c3cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c3cd8:
    // 0x2c3cd8: 0xdfbf0050
    ctx->pc = 0x2c3cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3cdc: 0xdfb40040
    ctx->pc = 0x2c3cdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3ce0: 0xdfb30030
    ctx->pc = 0x2c3ce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3ce4: 0xdfb20020
    ctx->pc = 0x2c3ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3ce8: 0xdfb10010
    ctx->pc = 0x2c3ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3cec: 0xdfb00000
    ctx->pc = 0x2c3cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3cf0: 0x3e00008
    ctx->pc = 0x2C3CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3CF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C3B94u: goto label_2c3b94;
            case 0x2C3BC4u: goto label_2c3bc4;
            case 0x2C3BD0u: goto label_2c3bd0;
            case 0x2C3BECu: goto label_2c3bec;
            case 0x2C3BF0u: goto label_2c3bf0;
            case 0x2C3C68u: goto label_2c3c68;
            case 0x2C3CD4u: goto label_2c3cd4;
            case 0x2C3CD8u: goto label_2c3cd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C3CF8u;
}
