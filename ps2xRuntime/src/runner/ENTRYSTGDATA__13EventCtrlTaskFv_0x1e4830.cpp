#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYSTGDATA__13EventCtrlTaskFv
// Address: 0x1e4830 - 0x1e491c
void ENTRYSTGDATA__13EventCtrlTaskFv_0x1e4830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYSTGDATA__13EventCtrlTaskFv");


    ctx->pc = 0x1e4830u;

    // 0x1e4830: 0x27bdffe0
    ctx->pc = 0x1e4830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4834: 0x7fbf0010
    ctx->pc = 0x1e4834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4838: 0x7fb00000
    ctx->pc = 0x1e4838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e483c: 0x3c010050
    ctx->pc = 0x1e483cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e4840: 0x8423e504
    ctx->pc = 0x1e4840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1e4844: 0x2402000a
    ctx->pc = 0x1e4844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e4848: 0x1062000c
    ctx->pc = 0x1E4848u;
    {
        const bool branch_taken_0x1e4848 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1E484Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e4848) {
            ctx->pc = 0x1E487Cu;
            goto label_1e487c;
        }
    }
    ctx->pc = 0x1E4850u;
    // 0x1e4850: 0xc073128
    ctx->pc = 0x1E4850u;
    SET_GPR_U32(ctx, 31, 0x1E4858u);
    ctx->pc = 0x1E4854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
    ctx->pc = 0x1CC4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryStage__15CamPathMgrClassFv_0x1cc4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4858u; }
        else if (ctx->pc != 0x1E4858u) { ctx->pc = 0x1E4858u; }
    }
    if (ctx->pc != 0x1E4858u) { return; }
    ctx->pc = 0x1E4858u;
    // 0x1e4858: 0xc07f224
    ctx->pc = 0x1E4858u;
    SET_GPR_U32(ctx, 31, 0x1E4860u);
    ctx->pc = 0x1E485Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC890u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryStage__11MotMgrClassFv_0x1fc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4860u; }
        else if (ctx->pc != 0x1E4860u) { ctx->pc = 0x1E4860u; }
    }
    if (ctx->pc != 0x1E4860u) { return; }
    ctx->pc = 0x1E4860u;
    // 0x1e4860: 0x83858ba8
    ctx->pc = 0x1e4860u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1e4864: 0x3c020051
    ctx->pc = 0x1e4864u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4868: 0x244434f0
    ctx->pc = 0x1e4868u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1e486c: 0xc086084
    ctx->pc = 0x1E486Cu;
    SET_GPR_U32(ctx, 31, 0x1E4874u);
    ctx->pc = 0x1E4870u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x218210u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryStageSE__13SoundMgrClassFii_0x218210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4874u; }
        else if (ctx->pc != 0x1E4874u) { ctx->pc = 0x1E4874u; }
    }
    if (ctx->pc != 0x1E4874u) { return; }
    ctx->pc = 0x1E4874u;
    // 0x1e4874: 0x10000023
    ctx->pc = 0x1E4874u;
    {
        const bool branch_taken_0x1e4874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4878u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x1e4874) {
            ctx->pc = 0x1E4904u;
            goto label_1e4904;
        }
    }
    ctx->pc = 0x1E487Cu;
label_1e487c:
    // 0x1e487c: 0x8f838bcc
    ctx->pc = 0x1e487cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1e4880: 0x24020002
    ctx->pc = 0x1e4880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e4884: 0x10620010
    ctx->pc = 0x1E4884u;
    {
        const bool branch_taken_0x1e4884 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e4884) {
            ctx->pc = 0x1E48C8u;
            goto label_1e48c8;
        }
    }
    ctx->pc = 0x1E488Cu;
    // 0x1e488c: 0x24020001
    ctx->pc = 0x1e488cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4890: 0x10620002
    ctx->pc = 0x1E4890u;
    {
        const bool branch_taken_0x1e4890 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1E4894u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
        if (branch_taken_0x1e4890) {
            ctx->pc = 0x1E489Cu;
            goto label_1e489c;
        }
    }
    ctx->pc = 0x1E4898u;
    // 0x1e4898: 0x27848c70
    ctx->pc = 0x1e4898u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
label_1e489c:
    // 0x1e489c: 0xc073128
    ctx->pc = 0x1E489Cu;
    SET_GPR_U32(ctx, 31, 0x1E48A4u);
    ctx->pc = 0x1CC4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryStage__15CamPathMgrClassFv_0x1cc4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48A4u; }
        else if (ctx->pc != 0x1E48A4u) { ctx->pc = 0x1E48A4u; }
    }
    if (ctx->pc != 0x1E48A4u) { return; }
    ctx->pc = 0x1E48A4u;
    // 0x1e48a4: 0xc07f224
    ctx->pc = 0x1E48A4u;
    SET_GPR_U32(ctx, 31, 0x1E48ACu);
    ctx->pc = 0x1E48A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC890u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryStage__11MotMgrClassFv_0x1fc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48ACu; }
        else if (ctx->pc != 0x1E48ACu) { ctx->pc = 0x1E48ACu; }
    }
    if (ctx->pc != 0x1E48ACu) { return; }
    ctx->pc = 0x1E48ACu;
    // 0x1e48ac: 0x83858ba8
    ctx->pc = 0x1e48acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1e48b0: 0x3c020051
    ctx->pc = 0x1e48b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e48b4: 0x244434f0
    ctx->pc = 0x1e48b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1e48b8: 0xc086084
    ctx->pc = 0x1E48B8u;
    SET_GPR_U32(ctx, 31, 0x1E48C0u);
    ctx->pc = 0x1E48BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x218210u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryStageSE__13SoundMgrClassFii_0x218210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48C0u; }
        else if (ctx->pc != 0x1E48C0u) { ctx->pc = 0x1E48C0u; }
    }
    if (ctx->pc != 0x1E48C0u) { return; }
    ctx->pc = 0x1E48C0u;
    // 0x1e48c0: 0x1000000f
    ctx->pc = 0x1E48C0u;
    {
        const bool branch_taken_0x1e48c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e48c0) {
            ctx->pc = 0x1E4900u;
            goto label_1e4900;
        }
    }
    ctx->pc = 0x1E48C8u;
label_1e48c8:
    // 0x1e48c8: 0x83828bac
    ctx->pc = 0x1e48c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937516)));
    // 0x1e48cc: 0x10400004
    ctx->pc = 0x1E48CCu;
    {
        const bool branch_taken_0x1e48cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E48D0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e48cc) {
            ctx->pc = 0x1E48E0u;
            goto label_1e48e0;
        }
    }
    ctx->pc = 0x1E48D4u;
    // 0x1e48d4: 0x10000005
    ctx->pc = 0x1E48D4u;
    {
        const bool branch_taken_0x1e48d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E48D8u;
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937788)));
        if (branch_taken_0x1e48d4) {
            ctx->pc = 0x1E48ECu;
            goto label_1e48ec;
        }
    }
    ctx->pc = 0x1E48DCu;
    // 0x1e48dc: 0x70002e28
    ctx->pc = 0x1e48dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e48e0:
    // 0x1e48e0: 0x10000003
    ctx->pc = 0x1E48E0u;
    {
        const bool branch_taken_0x1e48e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e48e0) {
            ctx->pc = 0x1E48F0u;
            goto label_1e48f0;
        }
    }
    ctx->pc = 0x1E48E8u;
    // 0x1e48e8: 0x83858cbc
    ctx->pc = 0x1e48e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937788)));
label_1e48ec:
    // 0x1e48ec: 0x0
    ctx->pc = 0x1e48ecu;
    // NOP
label_1e48f0:
    // 0x1e48f0: 0x3c020051
    ctx->pc = 0x1e48f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e48f4: 0x244434f0
    ctx->pc = 0x1e48f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1e48f8: 0xc086084
    ctx->pc = 0x1E48F8u;
    SET_GPR_U32(ctx, 31, 0x1E4900u);
    ctx->pc = 0x1E48FCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x218210u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryStageSE__13SoundMgrClassFii_0x218210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4900u; }
        else if (ctx->pc != 0x1E4900u) { ctx->pc = 0x1E4900u; }
    }
    if (ctx->pc != 0x1E4900u) { return; }
    ctx->pc = 0x1E4900u;
label_1e4900:
    // 0x1e4900: 0x8e03000c
    ctx->pc = 0x1e4900u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e4904:
    // 0x1e4904: 0x24630004
    ctx->pc = 0x1e4904u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e4908: 0xae03000c
    ctx->pc = 0x1e4908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e490c: 0x7bbf0010
    ctx->pc = 0x1e490cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4910: 0x7bb00000
    ctx->pc = 0x1e4910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4914: 0x3e00008
    ctx->pc = 0x1E4914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4918u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E487Cu: goto label_1e487c;
            case 0x1E489Cu: goto label_1e489c;
            case 0x1E48C8u: goto label_1e48c8;
            case 0x1E48E0u: goto label_1e48e0;
            case 0x1E48ECu: goto label_1e48ec;
            case 0x1E48F0u: goto label_1e48f0;
            case 0x1E4900u: goto label_1e4900;
            case 0x1E4904u: goto label_1e4904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E491Cu;
}
