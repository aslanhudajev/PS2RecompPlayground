#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddSortObject
// Address: 0x2c7bb8 - 0x2c7cfc
void AddSortObject_0x2c7bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7bb8u;

    // 0x2c7bb8: 0x27bdffc0
    ctx->pc = 0x2c7bb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c7bbc: 0xffbf0020
    ctx->pc = 0x2c7bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c7bc0: 0xffb10010
    ctx->pc = 0x2c7bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c7bc4: 0xffb00000
    ctx->pc = 0x2c7bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7bc8: 0xe7b40030
    ctx->pc = 0x2c7bc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c7bcc: 0x80302d
    ctx->pc = 0x2c7bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7bd0: 0xa0882d
    ctx->pc = 0x2c7bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7bd4: 0x3c020039
    ctx->pc = 0x2c7bd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x2c7bd8: 0x8c4509c0
    ctx->pc = 0x2c7bd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 2496)));
    // 0x2c7bdc: 0x28a203ff
    ctx->pc = 0x2c7bdcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1023));
    // 0x2c7be0: 0x14400006
    ctx->pc = 0x2C7BE0u;
    {
        const bool branch_taken_0x2c7be0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C7BE4u;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x2c7be0) {
            ctx->pc = 0x2C7BFCu;
            goto label_2c7bfc;
        }
    }
    ctx->pc = 0x2C7BE8u;
    // 0x2c7be8: 0x3c04003b
    ctx->pc = 0x2c7be8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c7bec: 0xc0b492e
    ctx->pc = 0x2C7BECu;
    SET_GPR_U32(ctx, 31, 0x2C7BF4u);
    ctx->pc = 0x2C7BF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29352));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7BF4u; }
    }
    if (ctx->pc != 0x2C7BF4u) { return; }
    ctx->pc = 0x2C7BF4u;
    // 0x2c7bf4: 0x1000003b
    ctx->pc = 0x2C7BF4u;
    {
        const bool branch_taken_0x2c7bf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7BF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bf4) {
            ctx->pc = 0x2C7CE4u;
            goto label_2c7ce4;
        }
    }
    ctx->pc = 0x2C7BFCu;
label_2c7bfc:
    // 0x2c7bfc: 0x3c014e00
    ctx->pc = 0x2c7bfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)19968 << 16));
    // 0x2c7c00: 0x44810000
    ctx->pc = 0x2c7c00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c7c04: 0x46140034
    ctx->pc = 0x2c7c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7c08: 0x0
    ctx->pc = 0x2c7c08u;
    // NOP
    // 0x2c7c0c: 0x45030001
    ctx->pc = 0x2C7C0Cu;
    {
        const bool branch_taken_0x2c7c0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7c0c) {
            ctx->pc = 0x2C7C10u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2C7C14u;
            goto label_2c7c14;
        }
    }
    ctx->pc = 0x2C7C14u;
label_2c7c14:
    // 0x2c7c14: 0x3c050039
    ctx->pc = 0x2c7c14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)57 << 16));
    // 0x2c7c18: 0x8ca409c0
    ctx->pc = 0x2c7c18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 2496)));
    // 0x2c7c1c: 0x24030050
    ctx->pc = 0x2c7c1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c7c20: 0x831818
    ctx->pc = 0x2c7c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c7c24: 0x3c020038
    ctx->pc = 0x2c7c24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c7c28: 0x2442c9c0
    ctx->pc = 0x2c7c28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953408));
    // 0x2c7c2c: 0x628021
    ctx->pc = 0x2c7c2cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7c30: 0x24840001
    ctx->pc = 0x2c7c30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c7c34: 0xaca409c0
    ctx->pc = 0x2c7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2496), GPR_U32(ctx, 4));
    // 0x2c7c38: 0xc0202d
    ctx->pc = 0x2c7c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7c3c: 0xc0b5494
    ctx->pc = 0x2C7C3Cu;
    SET_GPR_U32(ctx, 31, 0x2C7C44u);
    ctx->pc = 0x2C7C40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7C44u; }
    }
    if (ctx->pc != 0x2C7C44u) { return; }
    ctx->pc = 0x2C7C44u;
    // 0x2c7c44: 0xc6200054
    ctx->pc = 0x2c7c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c48: 0x4600a300
    ctx->pc = 0x2c7c48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2c7c4c: 0xe60c0040
    ctx->pc = 0x2c7c4cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2c7c50: 0xae110044
    ctx->pc = 0x2c7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
    // 0x2c7c54: 0x3c020038
    ctx->pc = 0x2c7c54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c7c58: 0x8c42b1ac
    ctx->pc = 0x2c7c58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947244)));
    // 0x2c7c5c: 0xae020048
    ctx->pc = 0x2c7c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2c7c60: 0x8e220060
    ctx->pc = 0x2c7c60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2c7c64: 0x3c030010
    ctx->pc = 0x2c7c64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x2c7c68: 0x34630400
    ctx->pc = 0x2c7c68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1024));
    // 0x2c7c6c: 0x431024
    ctx->pc = 0x2c7c6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7c70: 0x50400006
    ctx->pc = 0x2C7C70u;
    {
        const bool branch_taken_0x2c7c70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c7c70) {
            ctx->pc = 0x2C7C74u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x2C7C8Cu;
            goto label_2c7c8c;
        }
    }
    ctx->pc = 0x2C7C78u;
    // 0x2c7c78: 0x3c0146ea
    ctx->pc = 0x2c7c78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18154 << 16));
    // 0x2c7c7c: 0x34216000
    ctx->pc = 0x2c7c7cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 24576));
    // 0x2c7c80: 0x44810000
    ctx->pc = 0x2c7c80u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c7c84: 0x10000015
    ctx->pc = 0x2C7C84u;
    {
        const bool branch_taken_0x2c7c84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7C88u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2c7c84) {
            ctx->pc = 0x2C7CDCu;
            goto label_2c7cdc;
        }
    }
    ctx->pc = 0x2C7C8Cu;
label_2c7c8c:
    // 0x2c7c8c: 0x8c420060
    ctx->pc = 0x2c7c8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c7c90: 0x3c030040
    ctx->pc = 0x2c7c90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
    // 0x2c7c94: 0x431024
    ctx->pc = 0x2c7c94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7c98: 0x50400006
    ctx->pc = 0x2C7C98u;
    {
        const bool branch_taken_0x2c7c98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c7c98) {
            ctx->pc = 0x2C7C9Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x2C7CB4u;
            goto label_2c7cb4;
        }
    }
    ctx->pc = 0x2C7CA0u;
    // 0x2c7ca0: 0x3c01469c
    ctx->pc = 0x2c7ca0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18076 << 16));
    // 0x2c7ca4: 0x34214000
    ctx->pc = 0x2c7ca4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x2c7ca8: 0x44810800
    ctx->pc = 0x2c7ca8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c7cac: 0x1000000a
    ctx->pc = 0x2C7CACu;
    {
        const bool branch_taken_0x2c7cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7CB0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2c7cac) {
            ctx->pc = 0x2C7CD8u;
            goto label_2c7cd8;
        }
    }
    ctx->pc = 0x2C7CB4u;
label_2c7cb4:
    // 0x2c7cb4: 0x8c420060
    ctx->pc = 0x2c7cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c7cb8: 0x3c030008
    ctx->pc = 0x2c7cb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x2c7cbc: 0x431024
    ctx->pc = 0x2c7cbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7cc0: 0x10400008
    ctx->pc = 0x2C7CC0u;
    {
        const bool branch_taken_0x2c7cc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7CC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c7cc0) {
            ctx->pc = 0x2C7CE4u;
            goto label_2c7ce4;
        }
    }
    ctx->pc = 0x2C7CC8u;
    // 0x2c7cc8: 0xc6000040
    ctx->pc = 0x2c7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7ccc: 0x3c01461c
    ctx->pc = 0x2c7cccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x2c7cd0: 0x34214000
    ctx->pc = 0x2c7cd0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x2c7cd4: 0x44810800
    ctx->pc = 0x2c7cd4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2c7cd8:
    // 0x2c7cd8: 0x46010001
    ctx->pc = 0x2c7cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c7cdc:
    // 0x2c7cdc: 0xe6000040
    ctx->pc = 0x2c7cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2c7ce0: 0x24020001
    ctx->pc = 0x2c7ce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2c7ce4:
    // 0x2c7ce4: 0xdfbf0020
    ctx->pc = 0x2c7ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7ce8: 0xdfb10010
    ctx->pc = 0x2c7ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7cec: 0xdfb00000
    ctx->pc = 0x2c7cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7cf0: 0xc7b40030
    ctx->pc = 0x2c7cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c7cf4: 0x3e00008
    ctx->pc = 0x2C7CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7CF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7BFCu: goto label_2c7bfc;
            case 0x2C7C14u: goto label_2c7c14;
            case 0x2C7C8Cu: goto label_2c7c8c;
            case 0x2C7CB4u: goto label_2c7cb4;
            case 0x2C7CD8u: goto label_2c7cd8;
            case 0x2C7CDCu: goto label_2c7cdc;
            case 0x2C7CE4u: goto label_2c7ce4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C7CFCu;
}
