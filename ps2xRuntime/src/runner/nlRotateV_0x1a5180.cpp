#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlRotateV
// Address: 0x1a5180 - 0x1a523c
void nlRotateV_0x1a5180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlRotateV");


    ctx->pc = 0x1a5180u;

    // 0x1a5180: 0x27bdffb0
    ctx->pc = 0x1a5180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a5184: 0x7fbf0030
    ctx->pc = 0x1a5184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1a5188: 0x7fb10020
    ctx->pc = 0x1a5188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a518c: 0x7fb00010
    ctx->pc = 0x1a518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a5190: 0x70808e28
    ctx->pc = 0x1a5190u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a5194: 0x70a08628
    ctx->pc = 0x1a5194u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a5198: 0x27a60040
    ctx->pc = 0x1a5198u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a519c: 0xc06be5a
    ctx->pc = 0x1A519Cu;
    SET_GPR_U32(ctx, 31, 0x1A51A4u);
    ctx->pc = 0x1A51A0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x1AF968u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF968_0x1af968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51A4u; }
        else if (ctx->pc != 0x1A51A4u) { ctx->pc = 0x1A51A4u; }
    }
    if (ctx->pc != 0x1A51A4u) { return; }
    ctx->pc = 0x1A51A4u;
    // 0x1a51a4: 0xc06be7f
    ctx->pc = 0x1A51A4u;
    SET_GPR_U32(ctx, 31, 0x1A51ACu);
    ctx->pc = 0x1A51A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51ACu; }
        else if (ctx->pc != 0x1A51ACu) { ctx->pc = 0x1A51ACu; }
    }
    if (ctx->pc != 0x1A51ACu) { return; }
    ctx->pc = 0x1A51ACu;
    // 0x1a51ac: 0x72002e28
    ctx->pc = 0x1a51acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a51b0: 0x46000506
    ctx->pc = 0x1a51b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1a51b4: 0xc06be50
    ctx->pc = 0x1A51B4u;
    SET_GPR_U32(ctx, 31, 0x1A51BCu);
    ctx->pc = 0x1A51B8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF940_0x1af940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51BCu; }
        else if (ctx->pc != 0x1A51BCu) { ctx->pc = 0x1A51BCu; }
    }
    if (ctx->pc != 0x1A51BCu) { return; }
    ctx->pc = 0x1A51BCu;
    // 0x1a51bc: 0x44806000
    ctx->pc = 0x1a51bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1a51c0: 0x0
    ctx->pc = 0x1a51c0u;
    // NOP
    // 0x1a51c4: 0x46146032
    ctx->pc = 0x1a51c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a51c8: 0x0
    ctx->pc = 0x1a51c8u;
    // NOP
    // 0x1a51cc: 0x45010007
    ctx->pc = 0x1A51CCu;
    {
        const bool branch_taken_0x1a51cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a51cc) {
            ctx->pc = 0x1A51ECu;
            goto label_1a51ec;
        }
    }
    ctx->pc = 0x1A51D4u;
    // 0x1a51d4: 0x4600a306
    ctx->pc = 0x1a51d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a51d8: 0x46000346
    ctx->pc = 0x1a51d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1a51dc: 0xc069424
    ctx->pc = 0x1A51DCu;
    SET_GPR_U32(ctx, 31, 0x1A51E4u);
    ctx->pc = 0x1A51E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1A5090u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRotateAxeSC_0x1a5090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51E4u; }
        else if (ctx->pc != 0x1A51E4u) { ctx->pc = 0x1A51E4u; }
    }
    if (ctx->pc != 0x1A51E4u) { return; }
    ctx->pc = 0x1A51E4u;
    // 0x1a51e4: 0x10000010
    ctx->pc = 0x1A51E4u;
    {
        const bool branch_taken_0x1a51e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A51E8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1a51e4) {
            ctx->pc = 0x1A5228u;
            goto label_1a5228;
        }
    }
    ctx->pc = 0x1A51ECu;
label_1a51ec:
    // 0x1a51ec: 0x460c0034
    ctx->pc = 0x1a51ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a51f0: 0x0
    ctx->pc = 0x1a51f0u;
    // NOP
    // 0x1a51f4: 0x4500000b
    ctx->pc = 0x1A51F4u;
    {
        const bool branch_taken_0x1a51f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a51f4) {
            ctx->pc = 0x1A5224u;
            goto label_1a5224;
        }
    }
    ctx->pc = 0x1A51FCu;
    // 0x1a51fc: 0xc6200004
    ctx->pc = 0x1a51fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5200: 0x3c02bf80
    ctx->pc = 0x1a5200u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
    // 0x1a5204: 0x44826800
    ctx->pc = 0x1a5204u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1a5208: 0x27a40040
    ctx->pc = 0x1a5208u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a520c: 0xe7a00040
    ctx->pc = 0x1a520cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a5210: 0xc6200008
    ctx->pc = 0x1a5210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5214: 0xe7a00044
    ctx->pc = 0x1a5214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a5218: 0xc6200000
    ctx->pc = 0x1a5218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a521c: 0xc069424
    ctx->pc = 0x1A521Cu;
    SET_GPR_U32(ctx, 31, 0x1A5224u);
    ctx->pc = 0x1A5220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->pc = 0x1A5090u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRotateAxeSC_0x1a5090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5224u; }
        else if (ctx->pc != 0x1A5224u) { ctx->pc = 0x1A5224u; }
    }
    if (ctx->pc != 0x1A5224u) { return; }
    ctx->pc = 0x1A5224u;
label_1a5224:
    // 0x1a5224: 0x7bbf0030
    ctx->pc = 0x1a5224u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5228:
    // 0x1a5228: 0x7bb10020
    ctx->pc = 0x1a5228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a522c: 0x7bb00010
    ctx->pc = 0x1a522cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5230: 0xc7b40000
    ctx->pc = 0x1a5230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a5234: 0x3e00008
    ctx->pc = 0x1A5234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5238u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A51ECu: goto label_1a51ec;
            case 0x1A5224u: goto label_1a5224;
            case 0x1A5228u: goto label_1a5228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A523Cu;
}
