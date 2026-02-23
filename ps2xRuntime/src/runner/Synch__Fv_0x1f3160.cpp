#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Synch__Fv
// Address: 0x1f3160 - 0x1f3274
void Synch__Fv_0x1f3160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Synch__Fv");


    ctx->pc = 0x1f3160u;

    // 0x1f3160: 0x27bdffe0
    ctx->pc = 0x1f3160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3164: 0x3c020050
    ctx->pc = 0x1f3164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1f3168: 0x7fbf0010
    ctx->pc = 0x1f3168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f316c: 0x2444fe80
    ctx->pc = 0x1f316cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    // 0x1f3170: 0xc074dac
    ctx->pc = 0x1F3170u;
    SET_GPR_U32(ctx, 31, 0x1F3178u);
    ctx->pc = 0x1F3174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D36B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__14SysCfgMgrClassFv_0x1d36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3178u; }
        else if (ctx->pc != 0x1F3178u) { ctx->pc = 0x1F3178u; }
    }
    if (ctx->pc != 0x1F3178u) { return; }
    ctx->pc = 0x1F3178u;
    // 0x1f3178: 0x3c020051
    ctx->pc = 0x1f3178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f317c: 0xc085bbc
    ctx->pc = 0x1F317Cu;
    SET_GPR_U32(ctx, 31, 0x1F3184u);
    ctx->pc = 0x1F3180u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13536));
    ctx->pc = 0x216EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__14SofdecMgrClassFv_0x216ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3184u; }
        else if (ctx->pc != 0x1F3184u) { ctx->pc = 0x1F3184u; }
    }
    if (ctx->pc != 0x1F3184u) { return; }
    ctx->pc = 0x1F3184u;
    // 0x1f3184: 0xc06b5a4
    ctx->pc = 0x1F3184u;
    SET_GPR_U32(ctx, 31, 0x1F318Cu);
    ctx->pc = 0x1AD690u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndExecServer_0x1ad690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F318Cu; }
        else if (ctx->pc != 0x1F318Cu) { ctx->pc = 0x1F318Cu; }
    }
    if (ctx->pc != 0x1F318Cu) { return; }
    ctx->pc = 0x1F318Cu;
    // 0x1f318c: 0x70002628
    ctx->pc = 0x1f318cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f3190: 0xc054de4
    ctx->pc = 0x1F3190u;
    SET_GPR_U32(ctx, 31, 0x1F3198u);
    ctx->pc = 0x1F3194u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x153790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x153790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3198u; }
        else if (ctx->pc != 0x1F3198u) { ctx->pc = 0x1F3198u; }
    }
    if (ctx->pc != 0x1F3198u) { return; }
    ctx->pc = 0x1F3198u;
    // 0x1f3198: 0xc05725c
    ctx->pc = 0x1F3198u;
    SET_GPR_U32(ctx, 31, 0x1F31A0u);
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F31A0u; }
        else if (ctx->pc != 0x1F31A0u) { ctx->pc = 0x1F31A0u; }
    }
    if (ctx->pc != 0x1F31A0u) { return; }
    ctx->pc = 0x1F31A0u;
    // 0x1f31a0: 0xc06bdf0
    ctx->pc = 0x1F31A0u;
    SET_GPR_U32(ctx, 31, 0x1F31A8u);
    ctx->pc = 0x1F31A4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlIncFrameCnt_0x1af7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F31A8u; }
        else if (ctx->pc != 0x1F31A8u) { ctx->pc = 0x1F31A8u; }
    }
    if (ctx->pc != 0x1F31A8u) { return; }
    ctx->pc = 0x1F31A8u;
    // 0x1f31a8: 0x24020001
    ctx->pc = 0x1f31a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f31ac: 0x12000003
    ctx->pc = 0x1F31ACu;
    {
        const bool branch_taken_0x1f31ac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F31B0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937576), GPR_U32(ctx, 2));
        if (branch_taken_0x1f31ac) {
            ctx->pc = 0x1F31BCu;
            goto label_1f31bc;
        }
    }
    ctx->pc = 0x1F31B4u;
    // 0x1f31b4: 0xc05726e
    ctx->pc = 0x1F31B4u;
    SET_GPR_U32(ctx, 31, 0x1F31BCu);
    ctx->pc = 0x15C9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x15c9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F31BCu; }
        else if (ctx->pc != 0x1F31BCu) { ctx->pc = 0x1F31BCu; }
    }
    if (ctx->pc != 0x1F31BCu) { return; }
    ctx->pc = 0x1F31BCu;
label_1f31bc:
    // 0x1f31bc: 0xc0638f6
    ctx->pc = 0x1F31BCu;
    SET_GPR_U32(ctx, 31, 0x1F31C4u);
    ctx->pc = 0x18E3D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySwitchToIdle_0x18e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F31C4u; }
        else if (ctx->pc != 0x1F31C4u) { ctx->pc = 0x1F31C4u; }
    }
    if (ctx->pc != 0x1F31C4u) { return; }
    ctx->pc = 0x1F31C4u;
    // 0x1f31c4: 0x8f828be8
    ctx->pc = 0x1f31c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937576)));
    // 0x1f31c8: 0x10400016
    ctx->pc = 0x1F31C8u;
    {
        const bool branch_taken_0x1f31c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F31CCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
        if (branch_taken_0x1f31c8) {
            ctx->pc = 0x1F3224u;
            goto label_1f3224;
        }
    }
    ctx->pc = 0x1F31D0u;
    // 0x1f31d0: 0xaf808be8
    ctx->pc = 0x1f31d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937576), GPR_U32(ctx, 0));
    // 0x1f31d4: 0x3c021000
    ctx->pc = 0x1f31d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1f31d8: 0x3443a000
    ctx->pc = 0x1f31d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 40960));
label_1f31dc:
    // 0x1f31dc: 0x8c620000
    ctx->pc = 0x1f31dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f31e0: 0x30420100
    ctx->pc = 0x1f31e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1f31e4: 0x0
    ctx->pc = 0x1f31e4u;
    // NOP
    // 0x1f31e8: 0x0
    ctx->pc = 0x1f31e8u;
    // NOP
    // 0x1f31ec: 0x0
    ctx->pc = 0x1f31ecu;
    // NOP
    // 0x1f31f0: 0x1440fffa
    ctx->pc = 0x1F31F0u;
    {
        const bool branch_taken_0x1f31f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f31f0) {
            ctx->pc = 0x1F31DCu;
            goto label_1f31dc;
        }
    }
    ctx->pc = 0x1F31F8u;
    // 0x1f31f8: 0xc06bdc4
    ctx->pc = 0x1F31F8u;
    SET_GPR_U32(ctx, 31, 0x1F3200u);
    ctx->pc = 0x1F31FCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlExecVint_0x1af710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3200u; }
        else if (ctx->pc != 0x1F3200u) { ctx->pc = 0x1F3200u; }
    }
    if (ctx->pc != 0x1F3200u) { return; }
    ctx->pc = 0x1F3200u;
label_1f3200:
    // 0x1f3200: 0x3c011001
    ctx->pc = 0x1f3200u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1f3204: 0x8c22a000
    ctx->pc = 0x1f3204u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294942720))); // MMIO: 0x1000a000
    // 0x1f3208: 0x30420100
    ctx->pc = 0x1f3208u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1f320c: 0x0
    ctx->pc = 0x1f320cu;
    // NOP
    // 0x1f3210: 0x0
    ctx->pc = 0x1f3210u;
    // NOP
    // 0x1f3214: 0x1440fffa
    ctx->pc = 0x1F3214u;
    {
        const bool branch_taken_0x1f3214 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3214) {
            ctx->pc = 0x1F3200u;
            goto label_1f3200;
        }
    }
    ctx->pc = 0x1F321Cu;
    // 0x1f321c: 0x0
    ctx->pc = 0x1f321cu;
    // NOP
    // 0x1f3220: 0x3c011000
    ctx->pc = 0x1f3220u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
label_1f3224:
    // 0x1f3224: 0x94220800
    ctx->pc = 0x1f3224u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 2048)));
    // 0x1f3228: 0x27848b5c
    ctx->pc = 0x1f3228u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937436));
    // 0x1f322c: 0xc07bc44
    ctx->pc = 0x1F322Cu;
    SET_GPR_U32(ctx, 31, 0x1F3234u);
    ctx->pc = 0x1F3230u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937584), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1EF110u;
    {
        const uint32_t __entryPc = ctx->pc;
        read_SYNCH__14SwitchMgrClassFv_0x1ef110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3234u; }
        else if (ctx->pc != 0x1F3234u) { ctx->pc = 0x1F3234u; }
    }
    if (ctx->pc != 0x1F3234u) { return; }
    ctx->pc = 0x1F3234u;
    // 0x1f3234: 0xc07bca4
    ctx->pc = 0x1F3234u;
    SET_GPR_U32(ctx, 31, 0x1F323Cu);
    ctx->pc = 0x1F3238u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937436));
    ctx->pc = 0x1EF290u;
    {
        const uint32_t __entryPc = ctx->pc;
        read_SYNCH_gun1__14SwitchMgrClassFv_0x1ef290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F323Cu; }
        else if (ctx->pc != 0x1F323Cu) { ctx->pc = 0x1F323Cu; }
    }
    if (ctx->pc != 0x1F323Cu) { return; }
    ctx->pc = 0x1F323Cu;
    // 0x1f323c: 0x3c020050
    ctx->pc = 0x1f323cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1f3240: 0xc07b8ac
    ctx->pc = 0x1F3240u;
    SET_GPR_U32(ctx, 31, 0x1F3248u);
    ctx->pc = 0x1F3244u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957936));
    ctx->pc = 0x1EE2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        read_SYNCH__11GunMgrClassFv_0x1ee2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3248u; }
        else if (ctx->pc != 0x1F3248u) { ctx->pc = 0x1F3248u; }
    }
    if (ctx->pc != 0x1F3248u) { return; }
    ctx->pc = 0x1F3248u;
label_1f3248:
    // 0x1f3248: 0x3c011001
    ctx->pc = 0x1f3248u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1f324c: 0x8c23a000
    ctx->pc = 0x1f324cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294942720))); // MMIO: 0x1000a000
    // 0x1f3250: 0x30630100
    ctx->pc = 0x1f3250u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1f3254: 0x0
    ctx->pc = 0x1f3254u;
    // NOP
    // 0x1f3258: 0x0
    ctx->pc = 0x1f3258u;
    // NOP
    // 0x1f325c: 0x1460fffa
    ctx->pc = 0x1F325Cu;
    {
        const bool branch_taken_0x1f325c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f325c) {
            ctx->pc = 0x1F3248u;
            goto label_1f3248;
        }
    }
    ctx->pc = 0x1F3264u;
    // 0x1f3264: 0x7bbf0010
    ctx->pc = 0x1f3264u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3268: 0x7bb00000
    ctx->pc = 0x1f3268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f326c: 0x3e00008
    ctx->pc = 0x1F326Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3270u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F31BCu: goto label_1f31bc;
            case 0x1F31DCu: goto label_1f31dc;
            case 0x1F3200u: goto label_1f3200;
            case 0x1F3224u: goto label_1f3224;
            case 0x1F3248u: goto label_1f3248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3274u;
}
