#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: valChg__13LightCtrlTaskFv
// Address: 0x1f0970 - 0x1f0b10
void valChg__13LightCtrlTaskFv_0x1f0970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("valChg__13LightCtrlTaskFv");


    ctx->pc = 0x1f0970u;

    // 0x1f0970: 0x27bdffd0
    ctx->pc = 0x1f0970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0974: 0x7fbf0020
    ctx->pc = 0x1f0974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1f0978: 0x7fb10010
    ctx->pc = 0x1f0978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f097c: 0x7fb00000
    ctx->pc = 0x1f097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f0980: 0x8c83000c
    ctx->pc = 0x1f0980u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f0984: 0x70808628
    ctx->pc = 0x1f0984u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f0988: 0x31040
    ctx->pc = 0x1f0988u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f098c: 0x431021
    ctx->pc = 0x1f098cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0990: 0x210c0
    ctx->pc = 0x1f0990u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f0994: 0x431023
    ctx->pc = 0x1f0994u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0998: 0x21080
    ctx->pc = 0x1f0998u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f099c: 0x821021
    ctx->pc = 0x1f099cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f09a0: 0x24510010
    ctx->pc = 0x1f09a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f09a4: 0xc07aa5c
    ctx->pc = 0x1F09A4u;
    SET_GPR_U32(ctx, 31, 0x1F09ACu);
    ctx->pc = 0x1F09A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 916));
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F09ACu; }
        else if (ctx->pc != 0x1F09ACu) { ctx->pc = 0x1F09ACu; }
    }
    if (ctx->pc != 0x1F09ACu) { return; }
    ctx->pc = 0x1F09ACu;
    // 0x1f09ac: 0x10400005
    ctx->pc = 0x1F09ACu;
    {
        const bool branch_taken_0x1f09ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F09B0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 932));
        if (branch_taken_0x1f09ac) {
            ctx->pc = 0x1F09C4u;
            goto label_1f09c4;
        }
    }
    ctx->pc = 0x1F09B4u;
    // 0x1f09b4: 0xc6000398
    ctx->pc = 0x1f09b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f09b8: 0xe6200004
    ctx->pc = 0x1f09b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1f09bc: 0xc6000398
    ctx->pc = 0x1f09bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f09c0: 0xe6200010
    ctx->pc = 0x1f09c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1f09c4:
    // 0x1f09c4: 0xc07aa5c
    ctx->pc = 0x1F09C4u;
    SET_GPR_U32(ctx, 31, 0x1F09CCu);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F09CCu; }
        else if (ctx->pc != 0x1F09CCu) { ctx->pc = 0x1F09CCu; }
    }
    if (ctx->pc != 0x1F09CCu) { return; }
    ctx->pc = 0x1F09CCu;
    // 0x1f09cc: 0x10400005
    ctx->pc = 0x1F09CCu;
    {
        const bool branch_taken_0x1f09cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F09D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 948));
        if (branch_taken_0x1f09cc) {
            ctx->pc = 0x1F09E4u;
            goto label_1f09e4;
        }
    }
    ctx->pc = 0x1F09D4u;
    // 0x1f09d4: 0xc60003a8
    ctx->pc = 0x1f09d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f09d8: 0xe6200008
    ctx->pc = 0x1f09d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1f09dc: 0xc60003a8
    ctx->pc = 0x1f09dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f09e0: 0xe6200014
    ctx->pc = 0x1f09e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1f09e4:
    // 0x1f09e4: 0xc07aa5c
    ctx->pc = 0x1F09E4u;
    SET_GPR_U32(ctx, 31, 0x1F09ECu);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F09ECu; }
        else if (ctx->pc != 0x1F09ECu) { ctx->pc = 0x1F09ECu; }
    }
    if (ctx->pc != 0x1F09ECu) { return; }
    ctx->pc = 0x1F09ECu;
    // 0x1f09ec: 0x10400005
    ctx->pc = 0x1F09ECu;
    {
        const bool branch_taken_0x1f09ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F09F0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1060));
        if (branch_taken_0x1f09ec) {
            ctx->pc = 0x1F0A04u;
            goto label_1f0a04;
        }
    }
    ctx->pc = 0x1F09F4u;
    // 0x1f09f4: 0xc60003b8
    ctx->pc = 0x1f09f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f09f8: 0xe620000c
    ctx->pc = 0x1f09f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1f09fc: 0xc60003b8
    ctx->pc = 0x1f09fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0a00: 0xe6200018
    ctx->pc = 0x1f0a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1f0a04:
    // 0x1f0a04: 0xc07aa5c
    ctx->pc = 0x1F0A04u;
    SET_GPR_U32(ctx, 31, 0x1F0A0Cu);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A0Cu; }
        else if (ctx->pc != 0x1F0A0Cu) { ctx->pc = 0x1F0A0Cu; }
    }
    if (ctx->pc != 0x1F0A0Cu) { return; }
    ctx->pc = 0x1F0A0Cu;
    // 0x1f0a0c: 0x10400003
    ctx->pc = 0x1F0A0Cu;
    {
        const bool branch_taken_0x1f0a0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F0A10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1076));
        if (branch_taken_0x1f0a0c) {
            ctx->pc = 0x1F0A1Cu;
            goto label_1f0a1c;
        }
    }
    ctx->pc = 0x1F0A14u;
    // 0x1f0a14: 0xc6000428
    ctx->pc = 0x1f0a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0a18: 0xe6200034
    ctx->pc = 0x1f0a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_1f0a1c:
    // 0x1f0a1c: 0xc07aa5c
    ctx->pc = 0x1F0A1Cu;
    SET_GPR_U32(ctx, 31, 0x1F0A24u);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A24u; }
        else if (ctx->pc != 0x1F0A24u) { ctx->pc = 0x1F0A24u; }
    }
    if (ctx->pc != 0x1F0A24u) { return; }
    ctx->pc = 0x1F0A24u;
    // 0x1f0a24: 0x10400003
    ctx->pc = 0x1F0A24u;
    {
        const bool branch_taken_0x1f0a24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F0A28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1092));
        if (branch_taken_0x1f0a24) {
            ctx->pc = 0x1F0A34u;
            goto label_1f0a34;
        }
    }
    ctx->pc = 0x1F0A2Cu;
    // 0x1f0a2c: 0xc6000438
    ctx->pc = 0x1f0a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0a30: 0xe6200038
    ctx->pc = 0x1f0a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_1f0a34:
    // 0x1f0a34: 0xc07aa5c
    ctx->pc = 0x1F0A34u;
    SET_GPR_U32(ctx, 31, 0x1F0A3Cu);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A3Cu; }
        else if (ctx->pc != 0x1F0A3Cu) { ctx->pc = 0x1F0A3Cu; }
    }
    if (ctx->pc != 0x1F0A3Cu) { return; }
    ctx->pc = 0x1F0A3Cu;
    // 0x1f0a3c: 0x10400003
    ctx->pc = 0x1F0A3Cu;
    {
        const bool branch_taken_0x1f0a3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F0A40u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 964));
        if (branch_taken_0x1f0a3c) {
            ctx->pc = 0x1F0A4Cu;
            goto label_1f0a4c;
        }
    }
    ctx->pc = 0x1F0A44u;
    // 0x1f0a44: 0xc6000448
    ctx->pc = 0x1f0a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0a48: 0xe620003c
    ctx->pc = 0x1f0a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_1f0a4c:
    // 0x1f0a4c: 0xc07aa5c
    ctx->pc = 0x1F0A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F0A54u);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A54u; }
        else if (ctx->pc != 0x1F0A54u) { ctx->pc = 0x1F0A54u; }
    }
    if (ctx->pc != 0x1F0A54u) { return; }
    ctx->pc = 0x1F0A54u;
    // 0x1f0a54: 0x10400003
    ctx->pc = 0x1F0A54u;
    {
        const bool branch_taken_0x1f0a54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F0A58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 980));
        if (branch_taken_0x1f0a54) {
            ctx->pc = 0x1F0A64u;
            goto label_1f0a64;
        }
    }
    ctx->pc = 0x1F0A5Cu;
    // 0x1f0a5c: 0xc60003c8
    ctx->pc = 0x1f0a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0a60: 0xe620001c
    ctx->pc = 0x1f0a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1f0a64:
    // 0x1f0a64: 0xc07aa5c
    ctx->pc = 0x1F0A64u;
    SET_GPR_U32(ctx, 31, 0x1F0A6Cu);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A6Cu; }
        else if (ctx->pc != 0x1F0A6Cu) { ctx->pc = 0x1F0A6Cu; }
    }
    if (ctx->pc != 0x1F0A6Cu) { return; }
    ctx->pc = 0x1F0A6Cu;
    // 0x1f0a6c: 0x10400003
    ctx->pc = 0x1F0A6Cu;
    {
        const bool branch_taken_0x1f0a6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F0A70u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 996));
        if (branch_taken_0x1f0a6c) {
            ctx->pc = 0x1F0A7Cu;
            goto label_1f0a7c;
        }
    }
    ctx->pc = 0x1F0A74u;
    // 0x1f0a74: 0xc60003d8
    ctx->pc = 0x1f0a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0a78: 0xe6200020
    ctx->pc = 0x1f0a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_1f0a7c:
    // 0x1f0a7c: 0xc07aa5c
    ctx->pc = 0x1F0A7Cu;
    SET_GPR_U32(ctx, 31, 0x1F0A84u);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A84u; }
        else if (ctx->pc != 0x1F0A84u) { ctx->pc = 0x1F0A84u; }
    }
    if (ctx->pc != 0x1F0A84u) { return; }
    ctx->pc = 0x1F0A84u;
    // 0x1f0a84: 0x10400003
    ctx->pc = 0x1F0A84u;
    {
        const bool branch_taken_0x1f0a84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F0A88u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1108));
        if (branch_taken_0x1f0a84) {
            ctx->pc = 0x1F0A94u;
            goto label_1f0a94;
        }
    }
    ctx->pc = 0x1F0A8Cu;
    // 0x1f0a8c: 0xc60003e8
    ctx->pc = 0x1f0a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0a90: 0xe6200024
    ctx->pc = 0x1f0a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_1f0a94:
    // 0x1f0a94: 0xc07aa5c
    ctx->pc = 0x1F0A94u;
    SET_GPR_U32(ctx, 31, 0x1F0A9Cu);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0A9Cu; }
        else if (ctx->pc != 0x1F0A9Cu) { ctx->pc = 0x1F0A9Cu; }
    }
    if (ctx->pc != 0x1F0A9Cu) { return; }
    ctx->pc = 0x1F0A9Cu;
    // 0x1f0a9c: 0x10400003
    ctx->pc = 0x1F0A9Cu;
    {
        const bool branch_taken_0x1f0a9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f0a9c) {
            ctx->pc = 0x1F0AACu;
            goto label_1f0aac;
        }
    }
    ctx->pc = 0x1F0AA4u;
    // 0x1f0aa4: 0xc6000458
    ctx->pc = 0x1f0aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0aa8: 0xe6200000
    ctx->pc = 0x1f0aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1f0aac:
    // 0x1f0aac: 0x8e03046c
    ctx->pc = 0x1f0aacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1f0ab0: 0x10600012
    ctx->pc = 0x1F0AB0u;
    {
        const bool branch_taken_0x1f0ab0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f0ab0) {
            ctx->pc = 0x1F0AFCu;
            goto label_1f0afc;
        }
    }
    ctx->pc = 0x1F0AB8u;
    // 0x1f0ab8: 0x44830000
    ctx->pc = 0x1f0ab8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1f0abc: 0x3c023f80
    ctx->pc = 0x1f0abcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1f0ac0: 0x46800020
    ctx->pc = 0x1f0ac0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1f0ac4: 0x72002628
    ctx->pc = 0x1f0ac4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f0ac8: 0x26250048
    ctx->pc = 0x1f0ac8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 72));
    // 0x1f0acc: 0x2626004c
    ctx->pc = 0x1f0accu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 76));
    // 0x1f0ad0: 0x44820800
    ctx->pc = 0x1f0ad0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1f0ad4: 0x0
    ctx->pc = 0x1f0ad4u;
    // NOP
    // 0x1f0ad8: 0x46000b03
    ctx->pc = 0x1f0ad8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1f0adc: 0x2462ffff
    ctx->pc = 0x1f0adcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f0ae0: 0xae02046c
    ctx->pc = 0x1f0ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1132), GPR_U32(ctx, 2));
    // 0x1f0ae4: 0x8e070464
    ctx->pc = 0x1f0ae4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 1124)));
    // 0x1f0ae8: 0x8e080468
    ctx->pc = 0x1f0ae8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x1f0aec: 0x0
    ctx->pc = 0x1f0aecu;
    // NOP
    // 0x1f0af0: 0x0
    ctx->pc = 0x1f0af0u;
    // NOP
    // 0x1f0af4: 0xc07ca28
    ctx->pc = 0x1F0AF4u;
    SET_GPR_U32(ctx, 31, 0x1F0AFCu);
    ctx->pc = 0x1F28A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sunChgCtrl__13LightCtrlTaskFPiPiiif_0x1f28a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0AFCu; }
        else if (ctx->pc != 0x1F0AFCu) { ctx->pc = 0x1F0AFCu; }
    }
    if (ctx->pc != 0x1F0AFCu) { return; }
    ctx->pc = 0x1F0AFCu;
label_1f0afc:
    // 0x1f0afc: 0x7bbf0020
    ctx->pc = 0x1f0afcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0b00: 0x7bb10010
    ctx->pc = 0x1f0b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0b04: 0x7bb00000
    ctx->pc = 0x1f0b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0b08: 0x3e00008
    ctx->pc = 0x1F0B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0B0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F09C4u: goto label_1f09c4;
            case 0x1F09E4u: goto label_1f09e4;
            case 0x1F0A04u: goto label_1f0a04;
            case 0x1F0A1Cu: goto label_1f0a1c;
            case 0x1F0A34u: goto label_1f0a34;
            case 0x1F0A4Cu: goto label_1f0a4c;
            case 0x1F0A64u: goto label_1f0a64;
            case 0x1F0A7Cu: goto label_1f0a7c;
            case 0x1F0A94u: goto label_1f0a94;
            case 0x1F0AACu: goto label_1f0aac;
            case 0x1F0AFCu: goto label_1f0afc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0B10u;
}
