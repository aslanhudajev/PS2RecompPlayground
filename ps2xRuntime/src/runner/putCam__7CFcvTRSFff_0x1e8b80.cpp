#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putCam__7CFcvTRSFff
// Address: 0x1e8b80 - 0x1e90ac
void putCam__7CFcvTRSFff_0x1e8b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putCam__7CFcvTRSFff");


    ctx->pc = 0x1e8b80u;

    // 0x1e8b80: 0x27bdffa0
    ctx->pc = 0x1e8b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e8b84: 0x7fbf0040
    ctx->pc = 0x1e8b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1e8b88: 0x7fb20030
    ctx->pc = 0x1e8b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e8b8c: 0x7fb10020
    ctx->pc = 0x1e8b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e8b90: 0x7fb00010
    ctx->pc = 0x1e8b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e8b94: 0xe7b60008
    ctx->pc = 0x1e8b94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e8b98: 0xe7b50004
    ctx->pc = 0x1e8b98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e8b9c: 0xe7b40000
    ctx->pc = 0x1e8b9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e8ba0: 0x46006546
    ctx->pc = 0x1e8ba0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1e8ba4: 0x46006d06
    ctx->pc = 0x1e8ba4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1e8ba8: 0x70809628
    ctx->pc = 0x1e8ba8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e8bac: 0x4bede37d
    ctx->pc = 0x1e8bacu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e8bb0: 0x4bedeb7d
    ctx->pc = 0x1e8bb0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e8bb4: 0x4bedf37d
    ctx->pc = 0x1e8bb4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e8bb8: 0x4bedfb7d
    ctx->pc = 0x1e8bb8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e8bbc: 0x84820000
    ctx->pc = 0x1e8bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8bc0: 0x14400008
    ctx->pc = 0x1E8BC0u;
    {
        const bool branch_taken_0x1e8bc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E8BC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x1e8bc0) {
            ctx->pc = 0x1E8BE4u;
            goto label_1e8be4;
        }
    }
    ctx->pc = 0x1E8BC8u;
    // 0x1e8bc8: 0x86420002
    ctx->pc = 0x1e8bc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1e8bcc: 0x14400004
    ctx->pc = 0x1E8BCCu;
    {
        const bool branch_taken_0x1e8bcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8bcc) {
            ctx->pc = 0x1E8BE0u;
            goto label_1e8be0;
        }
    }
    ctx->pc = 0x1E8BD4u;
    // 0x1e8bd4: 0x86420004
    ctx->pc = 0x1e8bd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e8bd8: 0x10400017
    ctx->pc = 0x1E8BD8u;
    {
        const bool branch_taken_0x1e8bd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8bd8) {
            ctx->pc = 0x1E8C38u;
            goto label_1e8c38;
        }
    }
    ctx->pc = 0x1E8BE0u;
label_1e8be0:
    // 0x1e8be0: 0x26440020
    ctx->pc = 0x1e8be0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 32));
label_1e8be4:
    // 0x1e8be4: 0x4600ab06
    ctx->pc = 0x1e8be4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e8be8: 0xc079bd4
    ctx->pc = 0x1E8BE8u;
    SET_GPR_U32(ctx, 31, 0x1E8BF0u);
    ctx->pc = 0x1E8BECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8BF0u; }
        else if (ctx->pc != 0x1E8BF0u) { ctx->pc = 0x1E8BF0u; }
    }
    if (ctx->pc != 0x1E8BF0u) { return; }
    ctx->pc = 0x1E8BF0u;
    // 0x1e8bf0: 0x8e4200ec
    ctx->pc = 0x1e8bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e8bf4: 0x30420001
    ctx->pc = 0x1e8bf4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1e8bf8: 0x1040000b
    ctx->pc = 0x1E8BF8u;
    {
        const bool branch_taken_0x1e8bf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8bf8) {
            ctx->pc = 0x1E8C28u;
            goto label_1e8c28;
        }
    }
    ctx->pc = 0x1E8C00u;
    // 0x1e8c00: 0xc64300c8
    ctx->pc = 0x1e8c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8c04: 0xc7a20050
    ctx->pc = 0x1e8c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8c08: 0xc7a10054
    ctx->pc = 0x1e8c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8c0c: 0xc7a00058
    ctx->pc = 0x1e8c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8c10: 0x46031302
    ctx->pc = 0x1e8c10u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1e8c14: 0x46030b42
    ctx->pc = 0x1e8c14u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e8c18: 0xc06c202
    ctx->pc = 0x1E8C18u;
    SET_GPR_U32(ctx, 31, 0x1E8C20u);
    ctx->pc = 0x1E8C1Cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C20u; }
        else if (ctx->pc != 0x1E8C20u) { ctx->pc = 0x1E8C20u; }
    }
    if (ctx->pc != 0x1E8C20u) { return; }
    ctx->pc = 0x1E8C20u;
    // 0x1e8c20: 0x10000005
    ctx->pc = 0x1E8C20u;
    {
        const bool branch_taken_0x1e8c20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8c20) {
            ctx->pc = 0x1E8C38u;
            goto label_1e8c38;
        }
    }
    ctx->pc = 0x1E8C28u;
label_1e8c28:
    // 0x1e8c28: 0xc7ad0054
    ctx->pc = 0x1e8c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e8c2c: 0xc7ae0058
    ctx->pc = 0x1e8c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e8c30: 0xc06c202
    ctx->pc = 0x1E8C30u;
    SET_GPR_U32(ctx, 31, 0x1E8C38u);
    ctx->pc = 0x1E8C34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C38u; }
        else if (ctx->pc != 0x1E8C38u) { ctx->pc = 0x1E8C38u; }
    }
    if (ctx->pc != 0x1E8C38u) { return; }
    ctx->pc = 0x1E8C38u;
label_1e8c38:
    // 0x1e8c38: 0xc06c213
    ctx->pc = 0x1E8C38u;
    SET_GPR_U32(ctx, 31, 0x1E8C40u);
    ctx->pc = 0x1B084Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B084C_0x1b084c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C40u; }
        else if (ctx->pc != 0x1E8C40u) { ctx->pc = 0x1E8C40u; }
    }
    if (ctx->pc != 0x1E8C40u) { return; }
    ctx->pc = 0x1E8C40u;
    // 0x1e8c40: 0x8643000c
    ctx->pc = 0x1e8c40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e8c44: 0x14600008
    ctx->pc = 0x1E8C44u;
    {
        const bool branch_taken_0x1e8c44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E8C48u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 88));
        if (branch_taken_0x1e8c44) {
            ctx->pc = 0x1E8C68u;
            goto label_1e8c68;
        }
    }
    ctx->pc = 0x1E8C4Cu;
    // 0x1e8c4c: 0x8643000e
    ctx->pc = 0x1e8c4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1e8c50: 0x14600004
    ctx->pc = 0x1E8C50u;
    {
        const bool branch_taken_0x1e8c50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8c50) {
            ctx->pc = 0x1E8C64u;
            goto label_1e8c64;
        }
    }
    ctx->pc = 0x1E8C58u;
    // 0x1e8c58: 0x86430010
    ctx->pc = 0x1e8c58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e8c5c: 0x10600016
    ctx->pc = 0x1E8C5Cu;
    {
        const bool branch_taken_0x1e8c5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8c5c) {
            ctx->pc = 0x1E8CB8u;
            goto label_1e8cb8;
        }
    }
    ctx->pc = 0x1E8C64u;
label_1e8c64:
    // 0x1e8c64: 0x26440058
    ctx->pc = 0x1e8c64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 88));
label_1e8c68:
    // 0x1e8c68: 0x4600ab06
    ctx->pc = 0x1e8c68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e8c6c: 0xc079bd4
    ctx->pc = 0x1E8C6Cu;
    SET_GPR_U32(ctx, 31, 0x1E8C74u);
    ctx->pc = 0x1E8C70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8C74u; }
        else if (ctx->pc != 0x1E8C74u) { ctx->pc = 0x1E8C74u; }
    }
    if (ctx->pc != 0x1E8C74u) { return; }
    ctx->pc = 0x1E8C74u;
    // 0x1e8c74: 0xc7ac0050
    ctx->pc = 0x1e8c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e8c78: 0xc7ad0054
    ctx->pc = 0x1e8c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e8c7c: 0x460c6836
    ctx->pc = 0x1e8c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8c80: 0x0
    ctx->pc = 0x1e8c80u;
    // NOP
    // 0x1e8c84: 0x45010002
    ctx->pc = 0x1E8C84u;
    {
        const bool branch_taken_0x1e8c84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8C88u;
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1e8c84) {
            ctx->pc = 0x1E8C90u;
            goto label_1e8c90;
        }
    }
    ctx->pc = 0x1E8C8Cu;
    // 0x1e8c8c: 0x46006d86
    ctx->pc = 0x1e8c8cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_1e8c90:
    // 0x1e8c90: 0xc7ae0058
    ctx->pc = 0x1e8c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e8c94: 0x46167036
    ctx->pc = 0x1e8c94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8c98: 0x0
    ctx->pc = 0x1e8c98u;
    // NOP
    // 0x1e8c9c: 0x45010002
    ctx->pc = 0x1E8C9Cu;
    {
        const bool branch_taken_0x1e8c9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8c9c) {
            ctx->pc = 0x1E8CA8u;
            goto label_1e8ca8;
        }
    }
    ctx->pc = 0x1E8CA4u;
    // 0x1e8ca4: 0x46007586
    ctx->pc = 0x1e8ca4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_1e8ca8:
    // 0x1e8ca8: 0xc06c1b3
    ctx->pc = 0x1E8CA8u;
    SET_GPR_U32(ctx, 31, 0x1E8CB0u);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CB0u; }
        else if (ctx->pc != 0x1E8CB0u) { ctx->pc = 0x1E8CB0u; }
    }
    if (ctx->pc != 0x1E8CB0u) { return; }
    ctx->pc = 0x1E8CB0u;
    // 0x1e8cb0: 0xc06b218
    ctx->pc = 0x1E8CB0u;
    SET_GPR_U32(ctx, 31, 0x1E8CB8u);
    ctx->pc = 0x1E8CB4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CB8u; }
        else if (ctx->pc != 0x1E8CB8u) { ctx->pc = 0x1E8CB8u; }
    }
    if (ctx->pc != 0x1E8CB8u) { return; }
    ctx->pc = 0x1E8CB8u;
label_1e8cb8:
    // 0x1e8cb8: 0x8e4300ec
    ctx->pc = 0x1e8cb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e8cbc: 0x30630004
    ctx->pc = 0x1e8cbcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4));
    // 0x1e8cc0: 0x10600014
    ctx->pc = 0x1E8CC0u;
    {
        const bool branch_taken_0x1e8cc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8cc0) {
            ctx->pc = 0x1E8D14u;
            goto label_1e8d14;
        }
    }
    ctx->pc = 0x1E8CC8u;
    // 0x1e8cc8: 0xc64d00dc
    ctx->pc = 0x1e8cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e8ccc: 0xc64e00e0
    ctx->pc = 0x1e8cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e8cd0: 0xc06c1b3
    ctx->pc = 0x1E8CD0u;
    SET_GPR_U32(ctx, 31, 0x1E8CD8u);
    ctx->pc = 0x1E8CD4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8CD8u; }
        else if (ctx->pc != 0x1E8CD8u) { ctx->pc = 0x1E8CD8u; }
    }
    if (ctx->pc != 0x1E8CD8u) { return; }
    ctx->pc = 0x1E8CD8u;
    // 0x1e8cd8: 0xc64c00d8
    ctx->pc = 0x1e8cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e8cdc: 0xc64000dc
    ctx->pc = 0x1e8cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8ce0: 0x46006036
    ctx->pc = 0x1e8ce0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8ce4: 0x0
    ctx->pc = 0x1e8ce4u;
    // NOP
    // 0x1e8ce8: 0x45010002
    ctx->pc = 0x1E8CE8u;
    {
        const bool branch_taken_0x1e8ce8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8ce8) {
            ctx->pc = 0x1E8CF4u;
            goto label_1e8cf4;
        }
    }
    ctx->pc = 0x1E8CF0u;
    // 0x1e8cf0: 0x46000306
    ctx->pc = 0x1e8cf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e8cf4:
    // 0x1e8cf4: 0xc64000e0
    ctx->pc = 0x1e8cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8cf8: 0x46006036
    ctx->pc = 0x1e8cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8cfc: 0x0
    ctx->pc = 0x1e8cfcu;
    // NOP
    // 0x1e8d00: 0x45010002
    ctx->pc = 0x1E8D00u;
    {
        const bool branch_taken_0x1e8d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8d00) {
            ctx->pc = 0x1E8D0Cu;
            goto label_1e8d0c;
        }
    }
    ctx->pc = 0x1E8D08u;
    // 0x1e8d08: 0x46000306
    ctx->pc = 0x1e8d08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e8d0c:
    // 0x1e8d0c: 0xc06b218
    ctx->pc = 0x1E8D0Cu;
    SET_GPR_U32(ctx, 31, 0x1E8D14u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D14u; }
        else if (ctx->pc != 0x1E8D14u) { ctx->pc = 0x1E8D14u; }
    }
    if (ctx->pc != 0x1E8D14u) { return; }
    ctx->pc = 0x1E8D14u;
label_1e8d14:
    // 0x1e8d14: 0x8e4300ec
    ctx->pc = 0x1e8d14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e8d18: 0x30630008
    ctx->pc = 0x1e8d18u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8));
    // 0x1e8d1c: 0x10600010
    ctx->pc = 0x1E8D1Cu;
    {
        const bool branch_taken_0x1e8d1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8d1c) {
            ctx->pc = 0x1E8D60u;
            goto label_1e8d60;
        }
    }
    ctx->pc = 0x1E8D24u;
    // 0x1e8d24: 0x3c020050
    ctx->pc = 0x1e8d24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e8d28: 0xc07ce18
    ctx->pc = 0x1E8D28u;
    SET_GPR_U32(ctx, 31, 0x1E8D30u);
    ctx->pc = 0x1E8D2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8D30u; }
        else if (ctx->pc != 0x1E8D30u) { ctx->pc = 0x1E8D30u; }
    }
    if (ctx->pc != 0x1E8D30u) { return; }
    ctx->pc = 0x1E8D30u;
    // 0x1e8d30: 0x1c400004
    ctx->pc = 0x1E8D30u;
    {
        const bool branch_taken_0x1e8d30 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e8d30) {
            ctx->pc = 0x1E8D44u;
            goto label_1e8d44;
        }
    }
    ctx->pc = 0x1E8D38u;
    // 0x1e8d38: 0x8e4300ac
    ctx->pc = 0x1e8d38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x1e8d3c: 0x24630001
    ctx->pc = 0x1e8d3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e8d40: 0xae4300ac
    ctx->pc = 0x1e8d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
label_1e8d44:
    // 0x1e8d44: 0x8e4400ac
    ctx->pc = 0x1e8d44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x1e8d48: 0x8e4300e8
    ctx->pc = 0x1e8d48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x1e8d4c: 0x64082a
    ctx->pc = 0x1e8d4cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x1e8d50: 0x10200003
    ctx->pc = 0x1E8D50u;
    {
        const bool branch_taken_0x1e8d50 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8d50) {
            ctx->pc = 0x1E8D60u;
            goto label_1e8d60;
        }
    }
    ctx->pc = 0x1E8D58u;
    // 0x1e8d58: 0x8e4300e4
    ctx->pc = 0x1e8d58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x1e8d5c: 0xae4300ac
    ctx->pc = 0x1e8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
label_1e8d60:
    // 0x1e8d60: 0x8e4400ec
    ctx->pc = 0x1e8d60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e8d64: 0x30830002
    ctx->pc = 0x1e8d64u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 2));
    // 0x1e8d68: 0x1060003e
    ctx->pc = 0x1E8D68u;
    {
        const bool branch_taken_0x1e8d68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8D6Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 172)));
        if (branch_taken_0x1e8d68) {
            ctx->pc = 0x1E8E64u;
            goto label_1e8e64;
        }
    }
    ctx->pc = 0x1E8D70u;
    // 0x1e8d70: 0xc64000d4
    ctx->pc = 0x1e8d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8d74: 0x4600a834
    ctx->pc = 0x1e8d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8d78: 0x0
    ctx->pc = 0x1e8d78u;
    // NOP
    // 0x1e8d7c: 0x4503001b
    ctx->pc = 0x1E8D7Cu;
    {
        const bool branch_taken_0x1e8d7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8d7c) {
            ctx->pc = 0x1E8D80u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
            ctx->pc = 0x1E8DECu;
            goto label_1e8dec;
        }
    }
    ctx->pc = 0x1E8D84u;
    // 0x1e8d84: 0xc64c00d0
    ctx->pc = 0x1e8d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e8d88: 0x44800000
    ctx->pc = 0x1e8d88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1e8d8c: 0x0
    ctx->pc = 0x1e8d8cu;
    // NOP
    // 0x1e8d90: 0x46006036
    ctx->pc = 0x1e8d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8d94: 0x0
    ctx->pc = 0x1e8d94u;
    // NOP
    // 0x1e8d98: 0x4501000c
    ctx->pc = 0x1E8D98u;
    {
        const bool branch_taken_0x1e8d98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8d98) {
            ctx->pc = 0x1E8DCCu;
            goto label_1e8dcc;
        }
    }
    ctx->pc = 0x1E8DA0u;
    // 0x1e8da0: 0x30820040
    ctx->pc = 0x1e8da0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8da4: 0x10400007
    ctx->pc = 0x1E8DA4u;
    {
        const bool branch_taken_0x1e8da4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8DA8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8da4) {
            ctx->pc = 0x1E8DC4u;
            goto label_1e8dc4;
        }
    }
    ctx->pc = 0x1E8DACu;
    // 0x1e8dac: 0xc08541c
    ctx->pc = 0x1E8DACu;
    SET_GPR_U32(ctx, 31, 0x1E8DB4u);
    ctx->pc = 0x1E8DB0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DB4u; }
        else if (ctx->pc != 0x1E8DB4u) { ctx->pc = 0x1E8DB4u; }
    }
    if (ctx->pc != 0x1E8DB4u) { return; }
    ctx->pc = 0x1E8DB4u;
    // 0x1e8db4: 0xc0853c8
    ctx->pc = 0x1E8DB4u;
    SET_GPR_U32(ctx, 31, 0x1E8DBCu);
    ctx->pc = 0x1E8DB8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DBCu; }
        else if (ctx->pc != 0x1E8DBCu) { ctx->pc = 0x1E8DBCu; }
    }
    if (ctx->pc != 0x1E8DBCu) { return; }
    ctx->pc = 0x1E8DBCu;
    // 0x1e8dbc: 0x10000004
    ctx->pc = 0x1E8DBCu;
    {
        const bool branch_taken_0x1e8dbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8DC0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x1e8dbc) {
            ctx->pc = 0x1E8DD0u;
            goto label_1e8dd0;
        }
    }
    ctx->pc = 0x1E8DC4u;
label_1e8dc4:
    // 0x1e8dc4: 0xc0853e4
    ctx->pc = 0x1E8DC4u;
    SET_GPR_U32(ctx, 31, 0x1E8DCCu);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DCCu; }
        else if (ctx->pc != 0x1E8DCCu) { ctx->pc = 0x1E8DCCu; }
    }
    if (ctx->pc != 0x1E8DCCu) { return; }
    ctx->pc = 0x1E8DCCu;
label_1e8dcc:
    // 0x1e8dcc: 0xc64100d0
    ctx->pc = 0x1e8dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8dd0:
    // 0x1e8dd0: 0x3c033d75
    ctx->pc = 0x1e8dd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15733 << 16));
    // 0x1e8dd4: 0x3463c290
    ctx->pc = 0x1e8dd4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1e8dd8: 0x44830000
    ctx->pc = 0x1e8dd8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1e8ddc: 0x0
    ctx->pc = 0x1e8ddcu;
    // NOP
    // 0x1e8de0: 0x46000801
    ctx->pc = 0x1e8de0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e8de4: 0x1000003c
    ctx->pc = 0x1E8DE4u;
    {
        const bool branch_taken_0x1e8de4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8DE8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
        if (branch_taken_0x1e8de4) {
            ctx->pc = 0x1E8ED8u;
            goto label_1e8ed8;
        }
    }
    ctx->pc = 0x1E8DECu;
label_1e8dec:
    // 0x1e8dec: 0x44820000
    ctx->pc = 0x1e8decu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e8df0: 0x0
    ctx->pc = 0x1e8df0u;
    // NOP
    // 0x1e8df4: 0x46140032
    ctx->pc = 0x1e8df4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8df8: 0x0
    ctx->pc = 0x1e8df8u;
    // NOP
    // 0x1e8dfc: 0x4500000c
    ctx->pc = 0x1E8DFCu;
    {
        const bool branch_taken_0x1e8dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8E00u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e8dfc) {
            ctx->pc = 0x1E8E30u;
            goto label_1e8e30;
        }
    }
    ctx->pc = 0x1E8E04u;
    // 0x1e8e04: 0x30820040
    ctx->pc = 0x1e8e04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8e08: 0x10400005
    ctx->pc = 0x1E8E08u;
    {
        const bool branch_taken_0x1e8e08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8E0Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8e08) {
            ctx->pc = 0x1E8E20u;
            goto label_1e8e20;
        }
    }
    ctx->pc = 0x1E8E10u;
    // 0x1e8e10: 0xc0853c8
    ctx->pc = 0x1E8E10u;
    SET_GPR_U32(ctx, 31, 0x1E8E18u);
    ctx->pc = 0x1E8E14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E18u; }
        else if (ctx->pc != 0x1E8E18u) { ctx->pc = 0x1E8E18u; }
    }
    if (ctx->pc != 0x1E8E18u) { return; }
    ctx->pc = 0x1E8E18u;
    // 0x1e8e18: 0x10000030
    ctx->pc = 0x1E8E18u;
    {
        const bool branch_taken_0x1e8e18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8E1Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 176)));
        if (branch_taken_0x1e8e18) {
            ctx->pc = 0x1E8EDCu;
            goto label_1e8edc;
        }
    }
    ctx->pc = 0x1E8E20u;
label_1e8e20:
    // 0x1e8e20: 0xc0853ac
    ctx->pc = 0x1E8E20u;
    SET_GPR_U32(ctx, 31, 0x1E8E28u);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E28u; }
        else if (ctx->pc != 0x1E8E28u) { ctx->pc = 0x1E8E28u; }
    }
    if (ctx->pc != 0x1E8E28u) { return; }
    ctx->pc = 0x1E8E28u;
    // 0x1e8e28: 0x1000002b
    ctx->pc = 0x1E8E28u;
    {
        const bool branch_taken_0x1e8e28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8e28) {
            ctx->pc = 0x1E8ED8u;
            goto label_1e8ed8;
        }
    }
    ctx->pc = 0x1E8E30u;
label_1e8e30:
    // 0x1e8e30: 0x10400008
    ctx->pc = 0x1E8E30u;
    {
        const bool branch_taken_0x1e8e30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8E34u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8e30) {
            ctx->pc = 0x1E8E54u;
            goto label_1e8e54;
        }
    }
    ctx->pc = 0x1E8E38u;
    // 0x1e8e38: 0x72002628
    ctx->pc = 0x1e8e38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e8e3c: 0xc08541c
    ctx->pc = 0x1E8E3Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E44u);
    ctx->pc = 0x1E8E40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E44u; }
        else if (ctx->pc != 0x1E8E44u) { ctx->pc = 0x1E8E44u; }
    }
    if (ctx->pc != 0x1E8E44u) { return; }
    ctx->pc = 0x1E8E44u;
    // 0x1e8e44: 0xc0853c8
    ctx->pc = 0x1E8E44u;
    SET_GPR_U32(ctx, 31, 0x1E8E4Cu);
    ctx->pc = 0x1E8E48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E4Cu; }
        else if (ctx->pc != 0x1E8E4Cu) { ctx->pc = 0x1E8E4Cu; }
    }
    if (ctx->pc != 0x1E8E4Cu) { return; }
    ctx->pc = 0x1E8E4Cu;
    // 0x1e8e4c: 0x10000022
    ctx->pc = 0x1E8E4Cu;
    {
        const bool branch_taken_0x1e8e4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8e4c) {
            ctx->pc = 0x1E8ED8u;
            goto label_1e8ed8;
        }
    }
    ctx->pc = 0x1E8E54u;
label_1e8e54:
    // 0x1e8e54: 0xc0853e4
    ctx->pc = 0x1E8E54u;
    SET_GPR_U32(ctx, 31, 0x1E8E5Cu);
    ctx->pc = 0x1E8E58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E5Cu; }
        else if (ctx->pc != 0x1E8E5Cu) { ctx->pc = 0x1E8E5Cu; }
    }
    if (ctx->pc != 0x1E8E5Cu) { return; }
    ctx->pc = 0x1E8E5Cu;
    // 0x1e8e5c: 0x1000001e
    ctx->pc = 0x1E8E5Cu;
    {
        const bool branch_taken_0x1e8e5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8e5c) {
            ctx->pc = 0x1E8ED8u;
            goto label_1e8ed8;
        }
    }
    ctx->pc = 0x1E8E64u;
label_1e8e64:
    // 0x1e8e64: 0x3c023f80
    ctx->pc = 0x1e8e64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1e8e68: 0x44820000
    ctx->pc = 0x1e8e68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e8e6c: 0x0
    ctx->pc = 0x1e8e6cu;
    // NOP
    // 0x1e8e70: 0x46140032
    ctx->pc = 0x1e8e70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8e74: 0x0
    ctx->pc = 0x1e8e74u;
    // NOP
    // 0x1e8e78: 0x4500000c
    ctx->pc = 0x1E8E78u;
    {
        const bool branch_taken_0x1e8e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8E7Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e8e78) {
            ctx->pc = 0x1E8EACu;
            goto label_1e8eac;
        }
    }
    ctx->pc = 0x1E8E80u;
    // 0x1e8e80: 0x30820040
    ctx->pc = 0x1e8e80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8e84: 0x10400005
    ctx->pc = 0x1E8E84u;
    {
        const bool branch_taken_0x1e8e84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8E88u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8e84) {
            ctx->pc = 0x1E8E9Cu;
            goto label_1e8e9c;
        }
    }
    ctx->pc = 0x1E8E8Cu;
    // 0x1e8e8c: 0xc0853c8
    ctx->pc = 0x1E8E8Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E94u);
    ctx->pc = 0x1E8E90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8E94u; }
        else if (ctx->pc != 0x1E8E94u) { ctx->pc = 0x1E8E94u; }
    }
    if (ctx->pc != 0x1E8E94u) { return; }
    ctx->pc = 0x1E8E94u;
    // 0x1e8e94: 0x10000010
    ctx->pc = 0x1E8E94u;
    {
        const bool branch_taken_0x1e8e94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8e94) {
            ctx->pc = 0x1E8ED8u;
            goto label_1e8ed8;
        }
    }
    ctx->pc = 0x1E8E9Cu;
label_1e8e9c:
    // 0x1e8e9c: 0xc0853ac
    ctx->pc = 0x1E8E9Cu;
    SET_GPR_U32(ctx, 31, 0x1E8EA4u);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8EA4u; }
        else if (ctx->pc != 0x1E8EA4u) { ctx->pc = 0x1E8EA4u; }
    }
    if (ctx->pc != 0x1E8EA4u) { return; }
    ctx->pc = 0x1E8EA4u;
    // 0x1e8ea4: 0x1000000c
    ctx->pc = 0x1E8EA4u;
    {
        const bool branch_taken_0x1e8ea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8ea4) {
            ctx->pc = 0x1E8ED8u;
            goto label_1e8ed8;
        }
    }
    ctx->pc = 0x1E8EACu;
label_1e8eac:
    // 0x1e8eac: 0x10400008
    ctx->pc = 0x1E8EACu;
    {
        const bool branch_taken_0x1e8eac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8EB0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8eac) {
            ctx->pc = 0x1E8ED0u;
            goto label_1e8ed0;
        }
    }
    ctx->pc = 0x1E8EB4u;
    // 0x1e8eb4: 0x72002628
    ctx->pc = 0x1e8eb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e8eb8: 0xc08541c
    ctx->pc = 0x1E8EB8u;
    SET_GPR_U32(ctx, 31, 0x1E8EC0u);
    ctx->pc = 0x1E8EBCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8EC0u; }
        else if (ctx->pc != 0x1E8EC0u) { ctx->pc = 0x1E8EC0u; }
    }
    if (ctx->pc != 0x1E8EC0u) { return; }
    ctx->pc = 0x1E8EC0u;
    // 0x1e8ec0: 0xc0853c8
    ctx->pc = 0x1E8EC0u;
    SET_GPR_U32(ctx, 31, 0x1E8EC8u);
    ctx->pc = 0x1E8EC4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8EC8u; }
        else if (ctx->pc != 0x1E8EC8u) { ctx->pc = 0x1E8EC8u; }
    }
    if (ctx->pc != 0x1E8EC8u) { return; }
    ctx->pc = 0x1E8EC8u;
    // 0x1e8ec8: 0x10000003
    ctx->pc = 0x1E8EC8u;
    {
        const bool branch_taken_0x1e8ec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8ec8) {
            ctx->pc = 0x1E8ED8u;
            goto label_1e8ed8;
        }
    }
    ctx->pc = 0x1E8ED0u;
label_1e8ed0:
    // 0x1e8ed0: 0xc0853e4
    ctx->pc = 0x1E8ED0u;
    SET_GPR_U32(ctx, 31, 0x1E8ED8u);
    ctx->pc = 0x1E8ED4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8ED8u; }
        else if (ctx->pc != 0x1E8ED8u) { ctx->pc = 0x1E8ED8u; }
    }
    if (ctx->pc != 0x1E8ED8u) { return; }
    ctx->pc = 0x1E8ED8u;
label_1e8ed8:
    // 0x1e8ed8: 0x8e4300b0
    ctx->pc = 0x1e8ed8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_1e8edc:
    // 0x1e8edc: 0x10600066
    ctx->pc = 0x1E8EDCu;
    {
        const bool branch_taken_0x1e8edc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8EE0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8edc) {
            ctx->pc = 0x1E9078u;
            goto label_1e9078;
        }
    }
    ctx->pc = 0x1E8EE4u;
    // 0x1e8ee4: 0x10000060
    ctx->pc = 0x1E8EE4u;
    {
        const bool branch_taken_0x1e8ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8EE8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8ee4) {
            ctx->pc = 0x1E9068u;
            goto label_1e9068;
        }
    }
    ctx->pc = 0x1E8EECu;
label_1e8eec:
    // 0x1e8eec: 0x8e4400ec
    ctx->pc = 0x1e8eecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e8ef0: 0x30830002
    ctx->pc = 0x1e8ef0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 2));
    // 0x1e8ef4: 0x5060003c
    ctx->pc = 0x1E8EF4u;
    {
        const bool branch_taken_0x1e8ef4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8ef4) {
            ctx->pc = 0x1E8EF8u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
            ctx->pc = 0x1E8FE8u;
            goto label_1e8fe8;
        }
    }
    ctx->pc = 0x1E8EFCu;
    // 0x1e8efc: 0xc64000d4
    ctx->pc = 0x1e8efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8f00: 0x4600a834
    ctx->pc = 0x1e8f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8f04: 0x0
    ctx->pc = 0x1e8f04u;
    // NOP
    // 0x1e8f08: 0x45030016
    ctx->pc = 0x1E8F08u;
    {
        const bool branch_taken_0x1e8f08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8f08) {
            ctx->pc = 0x1E8F0Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
            ctx->pc = 0x1E8F64u;
            goto label_1e8f64;
        }
    }
    ctx->pc = 0x1E8F10u;
    // 0x1e8f10: 0xc64c00d0
    ctx->pc = 0x1e8f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e8f14: 0x44800000
    ctx->pc = 0x1e8f14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1e8f18: 0x0
    ctx->pc = 0x1e8f18u;
    // NOP
    // 0x1e8f1c: 0x46006036
    ctx->pc = 0x1e8f1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8f20: 0x0
    ctx->pc = 0x1e8f20u;
    // NOP
    // 0x1e8f24: 0x4503004f
    ctx->pc = 0x1E8F24u;
    {
        const bool branch_taken_0x1e8f24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8f24) {
            ctx->pc = 0x1E8F28u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
            ctx->pc = 0x1E9064u;
            goto label_1e9064;
        }
    }
    ctx->pc = 0x1E8F2Cu;
    // 0x1e8f2c: 0x30820040
    ctx->pc = 0x1e8f2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8f30: 0x10400007
    ctx->pc = 0x1E8F30u;
    {
        const bool branch_taken_0x1e8f30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8f30) {
            ctx->pc = 0x1E8F50u;
            goto label_1e8f50;
        }
    }
    ctx->pc = 0x1E8F38u;
    // 0x1e8f38: 0xc08541c
    ctx->pc = 0x1E8F38u;
    SET_GPR_U32(ctx, 31, 0x1E8F40u);
    ctx->pc = 0x1E8F3Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F40u; }
        else if (ctx->pc != 0x1E8F40u) { ctx->pc = 0x1E8F40u; }
    }
    if (ctx->pc != 0x1E8F40u) { return; }
    ctx->pc = 0x1E8F40u;
    // 0x1e8f40: 0xc0853c8
    ctx->pc = 0x1E8F40u;
    SET_GPR_U32(ctx, 31, 0x1E8F48u);
    ctx->pc = 0x1E8F44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F48u; }
        else if (ctx->pc != 0x1E8F48u) { ctx->pc = 0x1E8F48u; }
    }
    if (ctx->pc != 0x1E8F48u) { return; }
    ctx->pc = 0x1E8F48u;
    // 0x1e8f48: 0x10000045
    ctx->pc = 0x1E8F48u;
    {
        const bool branch_taken_0x1e8f48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8f48) {
            ctx->pc = 0x1E9060u;
            goto label_1e9060;
        }
    }
    ctx->pc = 0x1E8F50u;
label_1e8f50:
    // 0x1e8f50: 0xc0853e4
    ctx->pc = 0x1E8F50u;
    SET_GPR_U32(ctx, 31, 0x1E8F58u);
    ctx->pc = 0x1E8F54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F58u; }
        else if (ctx->pc != 0x1E8F58u) { ctx->pc = 0x1E8F58u; }
    }
    if (ctx->pc != 0x1E8F58u) { return; }
    ctx->pc = 0x1E8F58u;
    // 0x1e8f58: 0x10000041
    ctx->pc = 0x1E8F58u;
    {
        const bool branch_taken_0x1e8f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8f58) {
            ctx->pc = 0x1E9060u;
            goto label_1e9060;
        }
    }
    ctx->pc = 0x1E8F60u;
    // 0x1e8f60: 0x3c023f80
    ctx->pc = 0x1e8f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1e8f64:
    // 0x1e8f64: 0x44820000
    ctx->pc = 0x1e8f64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e8f68: 0x0
    ctx->pc = 0x1e8f68u;
    // NOP
    // 0x1e8f6c: 0x46140032
    ctx->pc = 0x1e8f6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8f70: 0x0
    ctx->pc = 0x1e8f70u;
    // NOP
    // 0x1e8f74: 0x4500000d
    ctx->pc = 0x1E8F74u;
    {
        const bool branch_taken_0x1e8f74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8F78u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e8f74) {
            ctx->pc = 0x1E8FACu;
            goto label_1e8fac;
        }
    }
    ctx->pc = 0x1E8F7Cu;
    // 0x1e8f7c: 0x30820040
    ctx->pc = 0x1e8f7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8f80: 0x10400005
    ctx->pc = 0x1E8F80u;
    {
        const bool branch_taken_0x1e8f80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8f80) {
            ctx->pc = 0x1E8F98u;
            goto label_1e8f98;
        }
    }
    ctx->pc = 0x1E8F88u;
    // 0x1e8f88: 0xc0853c8
    ctx->pc = 0x1E8F88u;
    SET_GPR_U32(ctx, 31, 0x1E8F90u);
    ctx->pc = 0x1E8F8Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8F90u; }
        else if (ctx->pc != 0x1E8F90u) { ctx->pc = 0x1E8F90u; }
    }
    if (ctx->pc != 0x1E8F90u) { return; }
    ctx->pc = 0x1E8F90u;
    // 0x1e8f90: 0x10000033
    ctx->pc = 0x1E8F90u;
    {
        const bool branch_taken_0x1e8f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8f90) {
            ctx->pc = 0x1E9060u;
            goto label_1e9060;
        }
    }
    ctx->pc = 0x1E8F98u;
label_1e8f98:
    // 0x1e8f98: 0xc0853ac
    ctx->pc = 0x1E8F98u;
    SET_GPR_U32(ctx, 31, 0x1E8FA0u);
    ctx->pc = 0x1E8F9Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8FA0u; }
        else if (ctx->pc != 0x1E8FA0u) { ctx->pc = 0x1E8FA0u; }
    }
    if (ctx->pc != 0x1E8FA0u) { return; }
    ctx->pc = 0x1E8FA0u;
    // 0x1e8fa0: 0x1000002f
    ctx->pc = 0x1E8FA0u;
    {
        const bool branch_taken_0x1e8fa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8fa0) {
            ctx->pc = 0x1E9060u;
            goto label_1e9060;
        }
    }
    ctx->pc = 0x1E8FA8u;
    // 0x1e8fa8: 0x30820040
    ctx->pc = 0x1e8fa8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
label_1e8fac:
    // 0x1e8fac: 0x10400008
    ctx->pc = 0x1E8FACu;
    {
        const bool branch_taken_0x1e8fac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8fac) {
            ctx->pc = 0x1E8FD0u;
            goto label_1e8fd0;
        }
    }
    ctx->pc = 0x1E8FB4u;
    // 0x1e8fb4: 0x8e2400b4
    ctx->pc = 0x1e8fb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e8fb8: 0xc08541c
    ctx->pc = 0x1E8FB8u;
    SET_GPR_U32(ctx, 31, 0x1E8FC0u);
    ctx->pc = 0x1E8FBCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8FC0u; }
        else if (ctx->pc != 0x1E8FC0u) { ctx->pc = 0x1E8FC0u; }
    }
    if (ctx->pc != 0x1E8FC0u) { return; }
    ctx->pc = 0x1E8FC0u;
    // 0x1e8fc0: 0xc0853c8
    ctx->pc = 0x1E8FC0u;
    SET_GPR_U32(ctx, 31, 0x1E8FC8u);
    ctx->pc = 0x1E8FC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8FC8u; }
        else if (ctx->pc != 0x1E8FC8u) { ctx->pc = 0x1E8FC8u; }
    }
    if (ctx->pc != 0x1E8FC8u) { return; }
    ctx->pc = 0x1E8FC8u;
    // 0x1e8fc8: 0x10000025
    ctx->pc = 0x1E8FC8u;
    {
        const bool branch_taken_0x1e8fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8fc8) {
            ctx->pc = 0x1E9060u;
            goto label_1e9060;
        }
    }
    ctx->pc = 0x1E8FD0u;
label_1e8fd0:
    // 0x1e8fd0: 0x8e2400b4
    ctx->pc = 0x1e8fd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e8fd4: 0xc0853e4
    ctx->pc = 0x1E8FD4u;
    SET_GPR_U32(ctx, 31, 0x1E8FDCu);
    ctx->pc = 0x1E8FD8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8FDCu; }
        else if (ctx->pc != 0x1E8FDCu) { ctx->pc = 0x1E8FDCu; }
    }
    if (ctx->pc != 0x1E8FDCu) { return; }
    ctx->pc = 0x1E8FDCu;
    // 0x1e8fdc: 0x10000020
    ctx->pc = 0x1E8FDCu;
    {
        const bool branch_taken_0x1e8fdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8fdc) {
            ctx->pc = 0x1E9060u;
            goto label_1e9060;
        }
    }
    ctx->pc = 0x1E8FE4u;
    // 0x1e8fe4: 0x3c023f80
    ctx->pc = 0x1e8fe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1e8fe8:
    // 0x1e8fe8: 0x44820000
    ctx->pc = 0x1e8fe8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e8fec: 0x0
    ctx->pc = 0x1e8fecu;
    // NOP
    // 0x1e8ff0: 0x46140032
    ctx->pc = 0x1e8ff0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8ff4: 0x0
    ctx->pc = 0x1e8ff4u;
    // NOP
    // 0x1e8ff8: 0x4500000d
    ctx->pc = 0x1E8FF8u;
    {
        const bool branch_taken_0x1e8ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8FFCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e8ff8) {
            ctx->pc = 0x1E9030u;
            goto label_1e9030;
        }
    }
    ctx->pc = 0x1E9000u;
    // 0x1e9000: 0x30820040
    ctx->pc = 0x1e9000u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e9004: 0x10400005
    ctx->pc = 0x1E9004u;
    {
        const bool branch_taken_0x1e9004 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9004) {
            ctx->pc = 0x1E901Cu;
            goto label_1e901c;
        }
    }
    ctx->pc = 0x1E900Cu;
    // 0x1e900c: 0xc0853c8
    ctx->pc = 0x1E900Cu;
    SET_GPR_U32(ctx, 31, 0x1E9014u);
    ctx->pc = 0x1E9010u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9014u; }
        else if (ctx->pc != 0x1E9014u) { ctx->pc = 0x1E9014u; }
    }
    if (ctx->pc != 0x1E9014u) { return; }
    ctx->pc = 0x1E9014u;
    // 0x1e9014: 0x10000012
    ctx->pc = 0x1E9014u;
    {
        const bool branch_taken_0x1e9014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9014) {
            ctx->pc = 0x1E9060u;
            goto label_1e9060;
        }
    }
    ctx->pc = 0x1E901Cu;
label_1e901c:
    // 0x1e901c: 0xc0853ac
    ctx->pc = 0x1E901Cu;
    SET_GPR_U32(ctx, 31, 0x1E9024u);
    ctx->pc = 0x1E9020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9024u; }
        else if (ctx->pc != 0x1E9024u) { ctx->pc = 0x1E9024u; }
    }
    if (ctx->pc != 0x1E9024u) { return; }
    ctx->pc = 0x1E9024u;
    // 0x1e9024: 0x1000000e
    ctx->pc = 0x1E9024u;
    {
        const bool branch_taken_0x1e9024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9024) {
            ctx->pc = 0x1E9060u;
            goto label_1e9060;
        }
    }
    ctx->pc = 0x1E902Cu;
    // 0x1e902c: 0x30820040
    ctx->pc = 0x1e902cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
label_1e9030:
    // 0x1e9030: 0x10400008
    ctx->pc = 0x1E9030u;
    {
        const bool branch_taken_0x1e9030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9030) {
            ctx->pc = 0x1E9054u;
            goto label_1e9054;
        }
    }
    ctx->pc = 0x1E9038u;
    // 0x1e9038: 0x8e2400b4
    ctx->pc = 0x1e9038u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e903c: 0xc08541c
    ctx->pc = 0x1E903Cu;
    SET_GPR_U32(ctx, 31, 0x1E9044u);
    ctx->pc = 0x1E9040u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9044u; }
        else if (ctx->pc != 0x1E9044u) { ctx->pc = 0x1E9044u; }
    }
    if (ctx->pc != 0x1E9044u) { return; }
    ctx->pc = 0x1E9044u;
    // 0x1e9044: 0xc0853c8
    ctx->pc = 0x1E9044u;
    SET_GPR_U32(ctx, 31, 0x1E904Cu);
    ctx->pc = 0x1E9048u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E904Cu; }
        else if (ctx->pc != 0x1E904Cu) { ctx->pc = 0x1E904Cu; }
    }
    if (ctx->pc != 0x1E904Cu) { return; }
    ctx->pc = 0x1E904Cu;
    // 0x1e904c: 0x10000004
    ctx->pc = 0x1E904Cu;
    {
        const bool branch_taken_0x1e904c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e904c) {
            ctx->pc = 0x1E9060u;
            goto label_1e9060;
        }
    }
    ctx->pc = 0x1E9054u;
label_1e9054:
    // 0x1e9054: 0x8e2400b4
    ctx->pc = 0x1e9054u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e9058: 0xc0853e4
    ctx->pc = 0x1E9058u;
    SET_GPR_U32(ctx, 31, 0x1E9060u);
    ctx->pc = 0x1E905Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9060u; }
        else if (ctx->pc != 0x1E9060u) { ctx->pc = 0x1E9060u; }
    }
    if (ctx->pc != 0x1E9060u) { return; }
    ctx->pc = 0x1E9060u;
label_1e9060:
    // 0x1e9060: 0x26310004
    ctx->pc = 0x1e9060u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
label_1e9064:
    // 0x1e9064: 0x26100001
    ctx->pc = 0x1e9064u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1e9068:
    // 0x1e9068: 0x8e4300b0
    ctx->pc = 0x1e9068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x1e906c: 0x203182a
    ctx->pc = 0x1e906cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1e9070: 0x1460ff9e
    ctx->pc = 0x1E9070u;
    {
        const bool branch_taken_0x1e9070 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e9070) {
            ctx->pc = 0x1E8EECu;
            goto label_1e8eec;
        }
    }
    ctx->pc = 0x1E9078u;
label_1e9078:
    // 0x1e9078: 0x4bff6b7e
    ctx->pc = 0x1e9078u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e907c: 0x4bfe6b7e
    ctx->pc = 0x1e907cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e9080: 0x4bfd6b7e
    ctx->pc = 0x1e9080u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e9084: 0x4bfc6b7e
    ctx->pc = 0x1e9084u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e9088: 0x7bbf0040
    ctx->pc = 0x1e9088u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e908c: 0x7bb20030
    ctx->pc = 0x1e908cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9090: 0x7bb10020
    ctx->pc = 0x1e9090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9094: 0x7bb00010
    ctx->pc = 0x1e9094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9098: 0xc7b60008
    ctx->pc = 0x1e9098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e909c: 0xc7b50004
    ctx->pc = 0x1e909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e90a0: 0xc7b40000
    ctx->pc = 0x1e90a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e90a4: 0x3e00008
    ctx->pc = 0x1E90A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E90A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E8BE0u: goto label_1e8be0;
            case 0x1E8BE4u: goto label_1e8be4;
            case 0x1E8C28u: goto label_1e8c28;
            case 0x1E8C38u: goto label_1e8c38;
            case 0x1E8C64u: goto label_1e8c64;
            case 0x1E8C68u: goto label_1e8c68;
            case 0x1E8C90u: goto label_1e8c90;
            case 0x1E8CA8u: goto label_1e8ca8;
            case 0x1E8CB8u: goto label_1e8cb8;
            case 0x1E8CF4u: goto label_1e8cf4;
            case 0x1E8D0Cu: goto label_1e8d0c;
            case 0x1E8D14u: goto label_1e8d14;
            case 0x1E8D44u: goto label_1e8d44;
            case 0x1E8D60u: goto label_1e8d60;
            case 0x1E8DC4u: goto label_1e8dc4;
            case 0x1E8DCCu: goto label_1e8dcc;
            case 0x1E8DD0u: goto label_1e8dd0;
            case 0x1E8DECu: goto label_1e8dec;
            case 0x1E8E20u: goto label_1e8e20;
            case 0x1E8E30u: goto label_1e8e30;
            case 0x1E8E54u: goto label_1e8e54;
            case 0x1E8E64u: goto label_1e8e64;
            case 0x1E8E9Cu: goto label_1e8e9c;
            case 0x1E8EACu: goto label_1e8eac;
            case 0x1E8ED0u: goto label_1e8ed0;
            case 0x1E8ED8u: goto label_1e8ed8;
            case 0x1E8EDCu: goto label_1e8edc;
            case 0x1E8EECu: goto label_1e8eec;
            case 0x1E8F50u: goto label_1e8f50;
            case 0x1E8F64u: goto label_1e8f64;
            case 0x1E8F98u: goto label_1e8f98;
            case 0x1E8FACu: goto label_1e8fac;
            case 0x1E8FD0u: goto label_1e8fd0;
            case 0x1E8FE8u: goto label_1e8fe8;
            case 0x1E901Cu: goto label_1e901c;
            case 0x1E9030u: goto label_1e9030;
            case 0x1E9054u: goto label_1e9054;
            case 0x1E9060u: goto label_1e9060;
            case 0x1E9064u: goto label_1e9064;
            case 0x1E9068u: goto label_1e9068;
            case 0x1E9078u: goto label_1e9078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E90ACu;
}
