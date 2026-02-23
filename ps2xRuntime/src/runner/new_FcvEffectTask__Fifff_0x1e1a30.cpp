#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_FcvEffectTask__Fifff
// Address: 0x1e1a30 - 0x1e1b54
void new_FcvEffectTask__Fifff_0x1e1a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_FcvEffectTask__Fifff");


    ctx->pc = 0x1e1a30u;

    // 0x1e1a30: 0x27bdffb0
    ctx->pc = 0x1e1a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e1a34: 0x7fbf0040
    ctx->pc = 0x1e1a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1e1a38: 0x7fb20030
    ctx->pc = 0x1e1a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e1a3c: 0x7fb10020
    ctx->pc = 0x1e1a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e1a40: 0x7fb00010
    ctx->pc = 0x1e1a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e1a44: 0xe7b60008
    ctx->pc = 0x1e1a44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e1a48: 0xe7b50004
    ctx->pc = 0x1e1a48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e1a4c: 0xe7b40000
    ctx->pc = 0x1e1a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e1a50: 0x3c010050
    ctx->pc = 0x1e1a50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e1a54: 0x8423e504
    ctx->pc = 0x1e1a54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1e1a58: 0x2402000a
    ctx->pc = 0x1e1a58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e1a5c: 0x70808628
    ctx->pc = 0x1e1a5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e1a60: 0x46006586
    ctx->pc = 0x1e1a60u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1e1a64: 0x46006d46
    ctx->pc = 0x1e1a64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1e1a68: 0x1462001e
    ctx->pc = 0x1E1A68u;
    {
        const bool branch_taken_0x1e1a68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1E1A6Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        if (branch_taken_0x1e1a68) {
            ctx->pc = 0x1E1AE4u;
            goto label_1e1ae4;
        }
    }
    ctx->pc = 0x1E1A70u;
    // 0x1e1a70: 0x8f838bcc
    ctx->pc = 0x1e1a70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1e1a74: 0x24020002
    ctx->pc = 0x1e1a74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1a78: 0x1462001a
    ctx->pc = 0x1E1A78u;
    {
        const bool branch_taken_0x1e1a78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e1a78) {
            ctx->pc = 0x1E1AE4u;
            goto label_1e1ae4;
        }
    }
    ctx->pc = 0x1E1A80u;
    // 0x1e1a80: 0x8f928ccc
    ctx->pc = 0x1e1a80u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x1e1a84: 0x12400003
    ctx->pc = 0x1E1A84u;
    {
        const bool branch_taken_0x1e1a84 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e1a84) {
            ctx->pc = 0x1E1A94u;
            goto label_1e1a94;
        }
    }
    ctx->pc = 0x1E1A8Cu;
    // 0x1e1a8c: 0x8e520000
    ctx->pc = 0x1e1a8cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e1a90: 0x0
    ctx->pc = 0x1e1a90u;
    // NOP
label_1e1a94:
    // 0x1e1a94: 0xc06903c
    ctx->pc = 0x1E1A94u;
    SET_GPR_U32(ctx, 31, 0x1E1A9Cu);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A9Cu; }
        else if (ctx->pc != 0x1E1A9Cu) { ctx->pc = 0x1E1A9Cu; }
    }
    if (ctx->pc != 0x1E1A9Cu) { return; }
    ctx->pc = 0x1E1A9Cu;
    // 0x1e1a9c: 0xc06903c
    ctx->pc = 0x1E1A9Cu;
    SET_GPR_U32(ctx, 31, 0x1E1AA4u);
    ctx->pc = 0x1E1AA0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AA4u; }
        else if (ctx->pc != 0x1E1AA4u) { ctx->pc = 0x1E1AA4u; }
    }
    if (ctx->pc != 0x1E1AA4u) { return; }
    ctx->pc = 0x1E1AA4u;
    // 0x1e1aa4: 0x8c420010
    ctx->pc = 0x1e1aa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e1aa8: 0x8e260010
    ctx->pc = 0x1e1aa8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e1aac: 0x72404628
    ctx->pc = 0x1e1aacu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e1ab0: 0x2404016c
    ctx->pc = 0x1e1ab0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 364));
    // 0x1e1ab4: 0x8c470014
    ctx->pc = 0x1e1ab4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e1ab8: 0xc069040
    ctx->pc = 0x1E1AB8u;
    SET_GPR_U32(ctx, 31, 0x1E1AC0u);
    ctx->pc = 0x1E1ABCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AC0u; }
        else if (ctx->pc != 0x1E1AC0u) { ctx->pc = 0x1E1AC0u; }
    }
    if (ctx->pc != 0x1E1AC0u) { return; }
    ctx->pc = 0x1E1AC0u;
    // 0x1e1ac0: 0x70402628
    ctx->pc = 0x1e1ac0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1ac4: 0x1080001a
    ctx->pc = 0x1E1AC4u;
    {
        const bool branch_taken_0x1e1ac4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1AC8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e1ac4) {
            ctx->pc = 0x1E1B30u;
            goto label_1e1b30;
        }
    }
    ctx->pc = 0x1E1ACCu;
    // 0x1e1acc: 0x4600b306
    ctx->pc = 0x1e1accu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1e1ad0: 0x4600ab46
    ctx->pc = 0x1e1ad0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1e1ad4: 0xc0783ec
    ctx->pc = 0x1E1AD4u;
    SET_GPR_U32(ctx, 31, 0x1E1ADCu);
    ctx->pc = 0x1E1AD8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1E0FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13FcvEffectTaskFifff_0x1e0fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1ADCu; }
        else if (ctx->pc != 0x1E1ADCu) { ctx->pc = 0x1E1ADCu; }
    }
    if (ctx->pc != 0x1E1ADCu) { return; }
    ctx->pc = 0x1E1ADCu;
    // 0x1e1adc: 0x10000015
    ctx->pc = 0x1E1ADCu;
    {
        const bool branch_taken_0x1e1adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1AE0u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1e1adc) {
            ctx->pc = 0x1E1B34u;
            goto label_1e1b34;
        }
    }
    ctx->pc = 0x1E1AE4u;
label_1e1ae4:
    // 0x1e1ae4: 0xc06903c
    ctx->pc = 0x1E1AE4u;
    SET_GPR_U32(ctx, 31, 0x1E1AECu);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AECu; }
        else if (ctx->pc != 0x1E1AECu) { ctx->pc = 0x1E1AECu; }
    }
    if (ctx->pc != 0x1E1AECu) { return; }
    ctx->pc = 0x1E1AECu;
    // 0x1e1aec: 0xc06903c
    ctx->pc = 0x1E1AECu;
    SET_GPR_U32(ctx, 31, 0x1E1AF4u);
    ctx->pc = 0x1E1AF0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AF4u; }
        else if (ctx->pc != 0x1E1AF4u) { ctx->pc = 0x1E1AF4u; }
    }
    if (ctx->pc != 0x1E1AF4u) { return; }
    ctx->pc = 0x1E1AF4u;
    // 0x1e1af4: 0xc06903c
    ctx->pc = 0x1E1AF4u;
    SET_GPR_U32(ctx, 31, 0x1E1AFCu);
    ctx->pc = 0x1E1AF8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AFCu; }
        else if (ctx->pc != 0x1E1AFCu) { ctx->pc = 0x1E1AFCu; }
    }
    if (ctx->pc != 0x1E1AFCu) { return; }
    ctx->pc = 0x1E1AFCu;
    // 0x1e1afc: 0x8e460010
    ctx->pc = 0x1e1afcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e1b00: 0x8e270014
    ctx->pc = 0x1e1b00u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e1b04: 0x2404016c
    ctx->pc = 0x1e1b04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 364));
    // 0x1e1b08: 0x70002e28
    ctx->pc = 0x1e1b08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e1b0c: 0xc069040
    ctx->pc = 0x1E1B0Cu;
    SET_GPR_U32(ctx, 31, 0x1E1B14u);
    ctx->pc = 0x1E1B10u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B14u; }
        else if (ctx->pc != 0x1E1B14u) { ctx->pc = 0x1E1B14u; }
    }
    if (ctx->pc != 0x1E1B14u) { return; }
    ctx->pc = 0x1E1B14u;
    // 0x1e1b14: 0x70402628
    ctx->pc = 0x1e1b14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1b18: 0x10800005
    ctx->pc = 0x1E1B18u;
    {
        const bool branch_taken_0x1e1b18 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1B1Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e1b18) {
            ctx->pc = 0x1E1B30u;
            goto label_1e1b30;
        }
    }
    ctx->pc = 0x1E1B20u;
    // 0x1e1b20: 0x4600b306
    ctx->pc = 0x1e1b20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1e1b24: 0x4600ab46
    ctx->pc = 0x1e1b24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1e1b28: 0xc0783ec
    ctx->pc = 0x1E1B28u;
    SET_GPR_U32(ctx, 31, 0x1E1B30u);
    ctx->pc = 0x1E1B2Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1E0FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13FcvEffectTaskFifff_0x1e0fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B30u; }
        else if (ctx->pc != 0x1E1B30u) { ctx->pc = 0x1E1B30u; }
    }
    if (ctx->pc != 0x1E1B30u) { return; }
    ctx->pc = 0x1E1B30u;
label_1e1b30:
    // 0x1e1b30: 0x7bbf0040
    ctx->pc = 0x1e1b30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e1b34:
    // 0x1e1b34: 0x7bb20030
    ctx->pc = 0x1e1b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1b38: 0x7bb10020
    ctx->pc = 0x1e1b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1b3c: 0x7bb00010
    ctx->pc = 0x1e1b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1b40: 0xc7b60008
    ctx->pc = 0x1e1b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e1b44: 0xc7b50004
    ctx->pc = 0x1e1b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e1b48: 0xc7b40000
    ctx->pc = 0x1e1b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e1b4c: 0x3e00008
    ctx->pc = 0x1E1B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1B50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1A94u: goto label_1e1a94;
            case 0x1E1AE4u: goto label_1e1ae4;
            case 0x1E1B30u: goto label_1e1b30;
            case 0x1E1B34u: goto label_1e1b34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1B54u;
}
