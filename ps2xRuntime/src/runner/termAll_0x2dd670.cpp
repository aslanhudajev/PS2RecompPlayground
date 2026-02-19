#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: termAll
// Address: 0x2dd670 - 0x2dd730
void termAll_0x2dd670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dd670u;

    // 0x2dd670: 0x27bdffd0
    ctx->pc = 0x2dd670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd674: 0xffbf0020
    ctx->pc = 0x2dd674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dd678: 0xffb10010
    ctx->pc = 0x2dd678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dd67c: 0xffb00000
    ctx->pc = 0x2dd67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd680: 0x3c11003a
    ctx->pc = 0x2dd680u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2dd684: 0x24020384
    ctx->pc = 0x2dd684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 900));
    // 0x2dd688: 0xae2229b0
    ctx->pc = 0x2dd688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10672), GPR_U32(ctx, 2));
    // 0x2dd68c: 0x3c02003a
    ctx->pc = 0x2dd68cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dd690: 0xc0b76b8
    ctx->pc = 0x2DD690u;
    SET_GPR_U32(ctx, 31, 0x2DD698u);
    ctx->pc = 0x2DD694u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 10756)));
    ctx->pc = 0x2DDAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        readBufDelete_0x2ddae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD698u; }
    }
    if (ctx->pc != 0x2DD698u) { return; }
    ctx->pc = 0x2DD698u;
    // 0x2dd698: 0x3c04003a
    ctx->pc = 0x2dd698u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd69c: 0xc0b7a16
    ctx->pc = 0x2DD69Cu;
    SET_GPR_U32(ctx, 31, 0x2DD6A4u);
    ctx->pc = 0x2DD6A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10736));
    ctx->pc = 0x2DE858u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufDelete_0x2de858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6A4u; }
    }
    if (ctx->pc != 0x2DD6A4u) { return; }
    ctx->pc = 0x2DD6A4u;
    // 0x2dd6a4: 0x24020385
    ctx->pc = 0x2dd6a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 901));
    // 0x2dd6a8: 0xae2229b0
    ctx->pc = 0x2dd6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10672), GPR_U32(ctx, 2));
    // 0x2dd6ac: 0x3c10003a
    ctx->pc = 0x2dd6acu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dd6b0: 0xc0c0d0c
    ctx->pc = 0x2DD6B0u;
    SET_GPR_U32(ctx, 31, 0x2DD6B8u);
    ctx->pc = 0x2DD6B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10760)));
    ctx->pc = 0x303430u;
    {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x303430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6B8u; }
    }
    if (ctx->pc != 0x2DD6B8u) { return; }
    ctx->pc = 0x2DD6B8u;
    // 0x2dd6b8: 0xc0c0cfc
    ctx->pc = 0x2DD6B8u;
    SET_GPR_U32(ctx, 31, 0x2DD6C0u);
    ctx->pc = 0x2DD6BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10760)));
    ctx->pc = 0x3033F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x3033f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6C0u; }
    }
    if (ctx->pc != 0x2DD6C0u) { return; }
    ctx->pc = 0x2DD6C0u;
    // 0x2dd6c0: 0x24020386
    ctx->pc = 0x2dd6c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 902));
    // 0x2dd6c4: 0xae2229b0
    ctx->pc = 0x2dd6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10672), GPR_U32(ctx, 2));
    // 0x2dd6c8: 0xc0c1048
    ctx->pc = 0x2DD6C8u;
    SET_GPR_U32(ctx, 31, 0x2DD6D0u);
    ctx->pc = 0x2DD6CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x304120u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x304120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6D0u; }
    }
    if (ctx->pc != 0x2DD6D0u) { return; }
    ctx->pc = 0x2DD6D0u;
    // 0x2dd6d0: 0x3c10003a
    ctx->pc = 0x2dd6d0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dd6d4: 0x26102a40
    ctx->pc = 0x2dd6d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 10816));
    // 0x2dd6d8: 0x24040002
    ctx->pc = 0x2dd6d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dd6dc: 0xc0c0cc4
    ctx->pc = 0x2DD6DCu;
    SET_GPR_U32(ctx, 31, 0x2DD6E4u);
    ctx->pc = 0x2DD6E0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->pc = 0x303310u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x303310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6E4u; }
    }
    if (ctx->pc != 0x2DD6E4u) { return; }
    ctx->pc = 0x2DD6E4u;
    // 0x2dd6e4: 0x24020387
    ctx->pc = 0x2dd6e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 903));
    // 0x2dd6e8: 0xae2229b0
    ctx->pc = 0x2dd6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10672), GPR_U32(ctx, 2));
    // 0x2dd6ec: 0xc0b783e
    ctx->pc = 0x2DD6ECu;
    SET_GPR_U32(ctx, 31, 0x2DD6F4u);
    ctx->pc = 0x2DD6F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE0F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecDelete_0x2de0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD6F4u; }
    }
    if (ctx->pc != 0x2DD6F4u) { return; }
    ctx->pc = 0x2DD6F4u;
    // 0x2dd6f4: 0x3c04003a
    ctx->pc = 0x2dd6f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd6f8: 0xc0b7aa0
    ctx->pc = 0x2DD6F8u;
    SET_GPR_U32(ctx, 31, 0x2DD700u);
    ctx->pc = 0x2DD6FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11000));
    ctx->pc = 0x2DEA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecDelete_0x2dea80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD700u; }
    }
    if (ctx->pc != 0x2DD700u) { return; }
    ctx->pc = 0x2DD700u;
    // 0x2dd700: 0x24020388
    ctx->pc = 0x2dd700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x2dd704: 0xae2229b0
    ctx->pc = 0x2dd704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10672), GPR_U32(ctx, 2));
    // 0x2dd708: 0x3c04003a
    ctx->pc = 0x2dd708u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd70c: 0xc0b77a8
    ctx->pc = 0x2DD70Cu;
    SET_GPR_U32(ctx, 31, 0x2DD714u);
    ctx->pc = 0x2DD710u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10768));
    ctx->pc = 0x2DDEA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strFileClose_0x2ddea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD714u; }
    }
    if (ctx->pc != 0x2DD714u) { return; }
    ctx->pc = 0x2DD714u;
    // 0x2dd714: 0x240203e7
    ctx->pc = 0x2dd714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 999));
    // 0x2dd718: 0xae2229b0
    ctx->pc = 0x2dd718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10672), GPR_U32(ctx, 2));
    // 0x2dd71c: 0xdfbf0020
    ctx->pc = 0x2dd71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd720: 0xdfb10010
    ctx->pc = 0x2dd720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd724: 0xdfb00000
    ctx->pc = 0x2dd724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd728: 0x3e00008
    ctx->pc = 0x2DD728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD72Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD730u;
}
