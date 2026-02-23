#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putTask__16ClearRankingTaskFv
// Address: 0x225360 - 0x225404
void putTask__16ClearRankingTaskFv_0x225360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putTask__16ClearRankingTaskFv");


    ctx->pc = 0x225360u;

    // 0x225360: 0x27bdffe0
    ctx->pc = 0x225360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225364: 0x7fbf0010
    ctx->pc = 0x225364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x225368: 0x7fb00000
    ctx->pc = 0x225368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22536c: 0x70808628
    ctx->pc = 0x22536cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x225370: 0x8c840040
    ctx->pc = 0x225370u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x225374: 0x2403003c
    ctx->pc = 0x225374u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x225378: 0x1483001e
    ctx->pc = 0x225378u;
    {
        const bool branch_taken_0x225378 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x22537Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x225378) {
            ctx->pc = 0x2253F4u;
            goto label_2253f4;
        }
    }
    ctx->pc = 0x225380u;
    // 0x225380: 0x8024fec5
    ctx->pc = 0x225380u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x225384: 0x3c02002c
    ctx->pc = 0x225384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x225388: 0x244322f0
    ctx->pc = 0x225388u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8944));
    // 0x22538c: 0x3c02425c
    ctx->pc = 0x22538cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16988 << 16));
    // 0x225390: 0x44826000
    ctx->pc = 0x225390u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x225394: 0x42080
    ctx->pc = 0x225394u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x225398: 0x641821
    ctx->pc = 0x225398u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22539c: 0x8c640000
    ctx->pc = 0x22539cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2253a0: 0x3c024188
    ctx->pc = 0x2253a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16776 << 16));
    // 0x2253a4: 0x44826800
    ctx->pc = 0x2253a4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2253a8: 0xc08967c
    ctx->pc = 0x2253A8u;
    SET_GPR_U32(ctx, 31, 0x2253B0u);
    ctx->pc = 0x2253ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 600));
    ctx->pc = 0x2259F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_RankSprPutTask__Fiffi_0x2259f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253B0u; }
        else if (ctx->pc != 0x2253B0u) { ctx->pc = 0x2253B0u; }
    }
    if (ctx->pc != 0x2253B0u) { return; }
    ctx->pc = 0x2253B0u;
    // 0x2253b0: 0x3c010050
    ctx->pc = 0x2253b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2253b4: 0x8c22dd28
    ctx->pc = 0x2253b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294958376)));
    // 0x2253b8: 0x10400004
    ctx->pc = 0x2253B8u;
    {
        const bool branch_taken_0x2253b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2253b8) {
            ctx->pc = 0x2253CCu;
            goto label_2253cc;
        }
    }
    ctx->pc = 0x2253C0u;
    // 0x2253c0: 0x72002628
    ctx->pc = 0x2253c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2253c4: 0xc089440
    ctx->pc = 0x2253C4u;
    SET_GPR_U32(ctx, 31, 0x2253CCu);
    ctx->pc = 0x2253C8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x225100u;
    {
        const uint32_t __entryPc = ctx->pc;
        putInfo__16ClearRankingTaskFi_0x225100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253CCu; }
        else if (ctx->pc != 0x2253CCu) { ctx->pc = 0x2253CCu; }
    }
    if (ctx->pc != 0x2253CCu) { return; }
    ctx->pc = 0x2253CCu;
label_2253cc:
    // 0x2253cc: 0x3c010050
    ctx->pc = 0x2253ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2253d0: 0x8c22e070
    ctx->pc = 0x2253d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294959216)));
    // 0x2253d4: 0x10400005
    ctx->pc = 0x2253D4u;
    {
        const bool branch_taken_0x2253d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2253D8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2253d4) {
            ctx->pc = 0x2253ECu;
            goto label_2253ec;
        }
    }
    ctx->pc = 0x2253DCu;
    // 0x2253dc: 0x72002628
    ctx->pc = 0x2253dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2253e0: 0xc089440
    ctx->pc = 0x2253E0u;
    SET_GPR_U32(ctx, 31, 0x2253E8u);
    ctx->pc = 0x2253E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x225100u;
    {
        const uint32_t __entryPc = ctx->pc;
        putInfo__16ClearRankingTaskFi_0x225100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253E8u; }
        else if (ctx->pc != 0x2253E8u) { ctx->pc = 0x2253E8u; }
    }
    if (ctx->pc != 0x2253E8u) { return; }
    ctx->pc = 0x2253E8u;
    // 0x2253e8: 0x72002628
    ctx->pc = 0x2253e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2253ec:
    // 0x2253ec: 0xc068fe0
    ctx->pc = 0x2253ECu;
    SET_GPR_U32(ctx, 31, 0x2253F4u);
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253F4u; }
        else if (ctx->pc != 0x2253F4u) { ctx->pc = 0x2253F4u; }
    }
    if (ctx->pc != 0x2253F4u) { return; }
    ctx->pc = 0x2253F4u;
label_2253f4:
    // 0x2253f4: 0x7bbf0010
    ctx->pc = 0x2253f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2253f8: 0x7bb00000
    ctx->pc = 0x2253f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2253fc: 0x3e00008
    ctx->pc = 0x2253FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225400u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2253CCu: goto label_2253cc;
            case 0x2253ECu: goto label_2253ec;
            case 0x2253F4u: goto label_2253f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225404u;
}
