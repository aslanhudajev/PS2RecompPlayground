#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_FcvEffectTask__Fi11tagNLpoint3f
// Address: 0x1e1b60 - 0x1e1ca4
void new_FcvEffectTask__Fi11tagNLpoint3f_0x1e1b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_FcvEffectTask__Fi11tagNLpoint3f");


    ctx->pc = 0x1e1b60u;

    // 0x1e1b60: 0x27bdff80
    ctx->pc = 0x1e1b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e1b64: 0x7fbf0040
    ctx->pc = 0x1e1b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1e1b68: 0x7fb20030
    ctx->pc = 0x1e1b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e1b6c: 0x7fb10020
    ctx->pc = 0x1e1b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e1b70: 0x7fb00010
    ctx->pc = 0x1e1b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e1b74: 0xe7b40000
    ctx->pc = 0x1e1b74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e1b78: 0xc4a20000
    ctx->pc = 0x1e1b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1b7c: 0xc4a10004
    ctx->pc = 0x1e1b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1b80: 0xc4a00008
    ctx->pc = 0x1e1b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1b84: 0x27a30070
    ctx->pc = 0x1e1b84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e1b88: 0x3c010050
    ctx->pc = 0x1e1b88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e1b8c: 0x2402000a
    ctx->pc = 0x1e1b8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e1b90: 0x70808628
    ctx->pc = 0x1e1b90u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e1b94: 0x46006506
    ctx->pc = 0x1e1b94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e1b98: 0xe4620000
    ctx->pc = 0x1e1b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e1b9c: 0xe4610004
    ctx->pc = 0x1e1b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1e1ba0: 0xe4600008
    ctx->pc = 0x1e1ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1e1ba4: 0xc7a20070
    ctx->pc = 0x1e1ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1ba8: 0xc7a10074
    ctx->pc = 0x1e1ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1bac: 0xc7a00078
    ctx->pc = 0x1e1bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1bb0: 0x8423e504
    ctx->pc = 0x1e1bb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1e1bb4: 0xe7a20050
    ctx->pc = 0x1e1bb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e1bb8: 0xe7a10054
    ctx->pc = 0x1e1bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e1bbc: 0xe7a00058
    ctx->pc = 0x1e1bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e1bc0: 0xafa00064
    ctx->pc = 0x1e1bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1e1bc4: 0xafa00060
    ctx->pc = 0x1e1bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1e1bc8: 0x1462001d
    ctx->pc = 0x1E1BC8u;
    {
        const bool branch_taken_0x1e1bc8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1E1BCCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        if (branch_taken_0x1e1bc8) {
            ctx->pc = 0x1E1C40u;
            goto label_1e1c40;
        }
    }
    ctx->pc = 0x1E1BD0u;
    // 0x1e1bd0: 0x8f838bcc
    ctx->pc = 0x1e1bd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1e1bd4: 0x24020002
    ctx->pc = 0x1e1bd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1bd8: 0x14620019
    ctx->pc = 0x1E1BD8u;
    {
        const bool branch_taken_0x1e1bd8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e1bd8) {
            ctx->pc = 0x1E1C40u;
            goto label_1e1c40;
        }
    }
    ctx->pc = 0x1E1BE0u;
    // 0x1e1be0: 0x8f928ccc
    ctx->pc = 0x1e1be0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x1e1be4: 0x12400003
    ctx->pc = 0x1E1BE4u;
    {
        const bool branch_taken_0x1e1be4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e1be4) {
            ctx->pc = 0x1E1BF4u;
            goto label_1e1bf4;
        }
    }
    ctx->pc = 0x1E1BECu;
    // 0x1e1bec: 0x8e520000
    ctx->pc = 0x1e1becu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e1bf0: 0x0
    ctx->pc = 0x1e1bf0u;
    // NOP
label_1e1bf4:
    // 0x1e1bf4: 0xc06903c
    ctx->pc = 0x1E1BF4u;
    SET_GPR_U32(ctx, 31, 0x1E1BFCu);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1BFCu; }
        else if (ctx->pc != 0x1E1BFCu) { ctx->pc = 0x1E1BFCu; }
    }
    if (ctx->pc != 0x1E1BFCu) { return; }
    ctx->pc = 0x1E1BFCu;
    // 0x1e1bfc: 0xc06903c
    ctx->pc = 0x1E1BFCu;
    SET_GPR_U32(ctx, 31, 0x1E1C04u);
    ctx->pc = 0x1E1C00u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C04u; }
        else if (ctx->pc != 0x1E1C04u) { ctx->pc = 0x1E1C04u; }
    }
    if (ctx->pc != 0x1E1C04u) { return; }
    ctx->pc = 0x1E1C04u;
    // 0x1e1c04: 0x8c420010
    ctx->pc = 0x1e1c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e1c08: 0x8e260010
    ctx->pc = 0x1e1c08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e1c0c: 0x72404628
    ctx->pc = 0x1e1c0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e1c10: 0x2404016c
    ctx->pc = 0x1e1c10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 364));
    // 0x1e1c14: 0x8c470014
    ctx->pc = 0x1e1c14u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e1c18: 0xc069040
    ctx->pc = 0x1E1C18u;
    SET_GPR_U32(ctx, 31, 0x1E1C20u);
    ctx->pc = 0x1E1C1Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C20u; }
        else if (ctx->pc != 0x1E1C20u) { ctx->pc = 0x1E1C20u; }
    }
    if (ctx->pc != 0x1E1C20u) { return; }
    ctx->pc = 0x1E1C20u;
    // 0x1e1c20: 0x70402628
    ctx->pc = 0x1e1c20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1c24: 0x10800018
    ctx->pc = 0x1E1C24u;
    {
        const bool branch_taken_0x1e1c24 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1C28u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e1c24) {
            ctx->pc = 0x1E1C88u;
            goto label_1e1c88;
        }
    }
    ctx->pc = 0x1E1C2Cu;
    // 0x1e1c2c: 0x4600a306
    ctx->pc = 0x1e1c2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e1c30: 0xc078428
    ctx->pc = 0x1E1C30u;
    SET_GPR_U32(ctx, 31, 0x1E1C38u);
    ctx->pc = 0x1E1C34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1E10A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13FcvEffectTaskFi4ANPOf_0x1e10a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C38u; }
        else if (ctx->pc != 0x1E1C38u) { ctx->pc = 0x1E1C38u; }
    }
    if (ctx->pc != 0x1E1C38u) { return; }
    ctx->pc = 0x1E1C38u;
    // 0x1e1c38: 0x10000014
    ctx->pc = 0x1E1C38u;
    {
        const bool branch_taken_0x1e1c38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1C3Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1e1c38) {
            ctx->pc = 0x1E1C8Cu;
            goto label_1e1c8c;
        }
    }
    ctx->pc = 0x1E1C40u;
label_1e1c40:
    // 0x1e1c40: 0xc06903c
    ctx->pc = 0x1E1C40u;
    SET_GPR_U32(ctx, 31, 0x1E1C48u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C48u; }
        else if (ctx->pc != 0x1E1C48u) { ctx->pc = 0x1E1C48u; }
    }
    if (ctx->pc != 0x1E1C48u) { return; }
    ctx->pc = 0x1E1C48u;
    // 0x1e1c48: 0xc06903c
    ctx->pc = 0x1E1C48u;
    SET_GPR_U32(ctx, 31, 0x1E1C50u);
    ctx->pc = 0x1E1C4Cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C50u; }
        else if (ctx->pc != 0x1E1C50u) { ctx->pc = 0x1E1C50u; }
    }
    if (ctx->pc != 0x1E1C50u) { return; }
    ctx->pc = 0x1E1C50u;
    // 0x1e1c50: 0xc06903c
    ctx->pc = 0x1E1C50u;
    SET_GPR_U32(ctx, 31, 0x1E1C58u);
    ctx->pc = 0x1E1C54u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C58u; }
        else if (ctx->pc != 0x1E1C58u) { ctx->pc = 0x1E1C58u; }
    }
    if (ctx->pc != 0x1E1C58u) { return; }
    ctx->pc = 0x1E1C58u;
    // 0x1e1c58: 0x8e460010
    ctx->pc = 0x1e1c58u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e1c5c: 0x8e270014
    ctx->pc = 0x1e1c5cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e1c60: 0x2404016c
    ctx->pc = 0x1e1c60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 364));
    // 0x1e1c64: 0x70002e28
    ctx->pc = 0x1e1c64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e1c68: 0xc069040
    ctx->pc = 0x1E1C68u;
    SET_GPR_U32(ctx, 31, 0x1E1C70u);
    ctx->pc = 0x1E1C6Cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C70u; }
        else if (ctx->pc != 0x1E1C70u) { ctx->pc = 0x1E1C70u; }
    }
    if (ctx->pc != 0x1E1C70u) { return; }
    ctx->pc = 0x1E1C70u;
    // 0x1e1c70: 0x70402628
    ctx->pc = 0x1e1c70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1c74: 0x10800004
    ctx->pc = 0x1E1C74u;
    {
        const bool branch_taken_0x1e1c74 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1C78u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e1c74) {
            ctx->pc = 0x1E1C88u;
            goto label_1e1c88;
        }
    }
    ctx->pc = 0x1E1C7Cu;
    // 0x1e1c7c: 0x4600a306
    ctx->pc = 0x1e1c7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e1c80: 0xc078428
    ctx->pc = 0x1E1C80u;
    SET_GPR_U32(ctx, 31, 0x1E1C88u);
    ctx->pc = 0x1E1C84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1E10A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13FcvEffectTaskFi4ANPOf_0x1e10a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C88u; }
        else if (ctx->pc != 0x1E1C88u) { ctx->pc = 0x1E1C88u; }
    }
    if (ctx->pc != 0x1E1C88u) { return; }
    ctx->pc = 0x1E1C88u;
label_1e1c88:
    // 0x1e1c88: 0x7bbf0040
    ctx->pc = 0x1e1c88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e1c8c:
    // 0x1e1c8c: 0x7bb20030
    ctx->pc = 0x1e1c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1c90: 0x7bb10020
    ctx->pc = 0x1e1c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1c94: 0x7bb00010
    ctx->pc = 0x1e1c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1c98: 0xc7b40000
    ctx->pc = 0x1e1c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e1c9c: 0x3e00008
    ctx->pc = 0x1E1C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1CA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1BF4u: goto label_1e1bf4;
            case 0x1E1C40u: goto label_1e1c40;
            case 0x1E1C88u: goto label_1e1c88;
            case 0x1E1C8Cu: goto label_1e1c8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1CA4u;
}
