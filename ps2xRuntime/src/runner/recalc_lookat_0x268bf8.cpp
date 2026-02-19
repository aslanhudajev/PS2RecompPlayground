#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: recalc_lookat
// Address: 0x268bf8 - 0x268d08
void recalc_lookat_0x268bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x268bf8u;

    // 0x268bf8: 0x27bdffb0
    ctx->pc = 0x268bf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x268bfc: 0xffbf0040
    ctx->pc = 0x268bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x268c00: 0xffb10030
    ctx->pc = 0x268c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x268c04: 0xffb00020
    ctx->pc = 0x268c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x268c08: 0x240301a0
    ctx->pc = 0x268c08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x268c0c: 0x831818
    ctx->pc = 0x268c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x268c10: 0x3c020034
    ctx->pc = 0x268c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268c14: 0x2442eb60
    ctx->pc = 0x268c14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x268c18: 0x628021
    ctx->pc = 0x268c18u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x268c1c: 0x8e030104
    ctx->pc = 0x268c1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x268c20: 0x2c620002
    ctx->pc = 0x268c20u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x268c24: 0x14400033
    ctx->pc = 0x268C24u;
    {
        const bool branch_taken_0x268c24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x268C28u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x268c24) {
            ctx->pc = 0x268CF4u;
            goto label_268cf4;
        }
    }
    ctx->pc = 0x268C2Cu;
    // 0x268c2c: 0x24020004
    ctx->pc = 0x268c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x268c30: 0x10620031
    ctx->pc = 0x268C30u;
    {
        const bool branch_taken_0x268c30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x268C34u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x268c30) {
            ctx->pc = 0x268CF8u;
            goto label_268cf8;
        }
    }
    ctx->pc = 0x268C38u;
    // 0x268c38: 0xc09a106
    ctx->pc = 0x268C38u;
    SET_GPR_U32(ctx, 31, 0x268C40u);
    ctx->pc = 0x268C3Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x268418u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_attn_pos_0x268418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C40u; }
    }
    if (ctx->pc != 0x268C40u) { return; }
    ctx->pc = 0x268C40u;
    // 0x268c40: 0x1220000e
    ctx->pc = 0x268C40u;
    {
        const bool branch_taken_0x268c40 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x268C44u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x268c40) {
            ctx->pc = 0x268C7Cu;
            goto label_268c7c;
        }
    }
    ctx->pc = 0x268C48u;
    // 0x268c48: 0xe6000140
    ctx->pc = 0x268c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x268c4c: 0xc7a00014
    ctx->pc = 0x268c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268c50: 0xe6000144
    ctx->pc = 0x268c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x268c54: 0xc7a00018
    ctx->pc = 0x268c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268c58: 0xe6000148
    ctx->pc = 0x268c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x268c5c: 0xae000160
    ctx->pc = 0x268c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x268c60: 0xae000164
    ctx->pc = 0x268c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x268c64: 0xae000168
    ctx->pc = 0x268c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x268c68: 0xc09aba6
    ctx->pc = 0x268C68u;
    SET_GPR_U32(ctx, 31, 0x268C70u);
    ctx->pc = 0x268C6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x26AE98u;
    {
        const uint32_t __entryPc = ctx->pc;
        CameraNewPos_0x26ae98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268C70u; }
    }
    if (ctx->pc != 0x268C70u) { return; }
    ctx->pc = 0x268C70u;
    // 0x268c70: 0x3c030034
    ctx->pc = 0x268c70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x268c74: 0x2402ffff
    ctx->pc = 0x268c74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x268c78: 0xac62f930
    ctx->pc = 0x268c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965552), GPR_U32(ctx, 2));
label_268c7c:
    // 0x268c7c: 0xc6010070
    ctx->pc = 0x268c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268c80: 0xc7a00010
    ctx->pc = 0x268c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268c84: 0x46000b01
    ctx->pc = 0x268c84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x268c88: 0xe7ac0000
    ctx->pc = 0x268c88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x268c8c: 0xc6010074
    ctx->pc = 0x268c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268c90: 0xc7a00014
    ctx->pc = 0x268c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268c94: 0x46000881
    ctx->pc = 0x268c94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x268c98: 0xe7a20004
    ctx->pc = 0x268c98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x268c9c: 0xc6010078
    ctx->pc = 0x268c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268ca0: 0xc7a00018
    ctx->pc = 0x268ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ca4: 0x46000841
    ctx->pc = 0x268ca4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x268ca8: 0x12200012
    ctx->pc = 0x268CA8u;
    {
        const bool branch_taken_0x268ca8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x268CACu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x268ca8) {
            ctx->pc = 0x268CF4u;
            goto label_268cf4;
        }
    }
    ctx->pc = 0x268CB0u;
    // 0x268cb0: 0x460c6002
    ctx->pc = 0x268cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x268cb4: 0x46021082
    ctx->pc = 0x268cb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x268cb8: 0x46020000
    ctx->pc = 0x268cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x268cbc: 0x46010842
    ctx->pc = 0x268cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x268cc0: 0x46010000
    ctx->pc = 0x268cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x268cc4: 0x0
    ctx->pc = 0x268cc4u;
    // NOP
    // 0x268cc8: 0x0
    ctx->pc = 0x268cc8u;
    // NOP
    // 0x268ccc: 0x46000004
    ctx->pc = 0x268cccu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x268cd0: 0x46000032
    ctx->pc = 0x268cd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268cd4: 0x0
    ctx->pc = 0x268cd4u;
    // NOP
    // 0x268cd8: 0x45030006
    ctx->pc = 0x268CD8u;
    {
        const bool branch_taken_0x268cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268cd8) {
            ctx->pc = 0x268CDCu;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
            ctx->pc = 0x268CF4u;
            goto label_268cf4;
        }
    }
    ctx->pc = 0x268CE0u;
    // 0x268ce0: 0x460c6302
    ctx->pc = 0x268ce0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x268ce4: 0x46026300
    ctx->pc = 0x268ce4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x268ce8: 0xc0ba284
    ctx->pc = 0x268CE8u;
    SET_GPR_U32(ctx, 31, 0x268CF0u);
    ctx->pc = 0x268CECu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268CF0u; }
    }
    if (ctx->pc != 0x268CF0u) { return; }
    ctx->pc = 0x268CF0u;
    // 0x268cf0: 0xe60000d0
    ctx->pc = 0x268cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_268cf4:
    // 0x268cf4: 0xdfbf0040
    ctx->pc = 0x268cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_268cf8:
    // 0x268cf8: 0xdfb10030
    ctx->pc = 0x268cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268cfc: 0xdfb00020
    ctx->pc = 0x268cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268d00: 0x3e00008
    ctx->pc = 0x268D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268D04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268C7Cu: goto label_268c7c;
            case 0x268CF4u: goto label_268cf4;
            case 0x268CF8u: goto label_268cf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268D08u;
}
