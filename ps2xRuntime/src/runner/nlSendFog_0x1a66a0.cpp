#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSendFog
// Address: 0x1a66a0 - 0x1a6724
void nlSendFog_0x1a66a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSendFog");


    ctx->pc = 0x1a66a0u;

    // 0x1a66a0: 0x27bdffe0
    ctx->pc = 0x1a66a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a66a4: 0x7fbf0010
    ctx->pc = 0x1a66a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a66a8: 0xc069558
    ctx->pc = 0x1A66A8u;
    SET_GPR_U32(ctx, 31, 0x1A66B0u);
    ctx->pc = 0x1A66ACu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66B0u; }
        else if (ctx->pc != 0x1A66B0u) { ctx->pc = 0x1A66B0u; }
    }
    if (ctx->pc != 0x1A66B0u) { return; }
    ctx->pc = 0x1A66B0u;
    // 0x1a66b0: 0x70408628
    ctx->pc = 0x1a66b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a66b4: 0x16000003
    ctx->pc = 0x1A66B4u;
    {
        const bool branch_taken_0x1a66b4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a66b4) {
            ctx->pc = 0x1A66C4u;
            goto label_1a66c4;
        }
    }
    ctx->pc = 0x1A66BCu;
    // 0x1a66bc: 0xc0694bc
    ctx->pc = 0x1A66BCu;
    SET_GPR_U32(ctx, 31, 0x1A66C4u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66C4u; }
        else if (ctx->pc != 0x1A66C4u) { ctx->pc = 0x1A66C4u; }
    }
    if (ctx->pc != 0x1A66C4u) { return; }
    ctx->pc = 0x1A66C4u;
label_1a66c4:
    // 0x1a66c4: 0xc069528
    ctx->pc = 0x1A66C4u;
    SET_GPR_U32(ctx, 31, 0x1A66CCu);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66CCu; }
        else if (ctx->pc != 0x1A66CCu) { ctx->pc = 0x1A66CCu; }
    }
    if (ctx->pc != 0x1A66CCu) { return; }
    ctx->pc = 0x1A66CCu;
label_1a66cc:
    // 0x1a66cc: 0x3c011001
    ctx->pc = 0x1a66ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a66d0: 0x8c23d000
    ctx->pc = 0x1a66d0u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a66d4: 0x30630100
    ctx->pc = 0x1a66d4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1a66d8: 0x0
    ctx->pc = 0x1a66d8u;
    // NOP
    // 0x1a66dc: 0x0
    ctx->pc = 0x1a66dcu;
    // NOP
    // 0x1a66e0: 0x1460fffa
    ctx->pc = 0x1A66E0u;
    {
        const bool branch_taken_0x1a66e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a66e0) {
            ctx->pc = 0x1A66CCu;
            goto label_1a66cc;
        }
    }
    ctx->pc = 0x1A66E8u;
    // 0x1a66e8: 0x70402628
    ctx->pc = 0x1a66e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a66ec: 0x3c020030
    ctx->pc = 0x1a66ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a66f0: 0x24453a20
    ctx->pc = 0x1a66f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 14880));
    // 0x1a66f4: 0xc06ac36
    ctx->pc = 0x1A66F4u;
    SET_GPR_U32(ctx, 31, 0x1A66FCu);
    ctx->pc = 0x1A66F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66FCu; }
        else if (ctx->pc != 0x1A66FCu) { ctx->pc = 0x1A66FCu; }
    }
    if (ctx->pc != 0x1A66FCu) { return; }
    ctx->pc = 0x1A66FCu;
    // 0x1a66fc: 0xc06952c
    ctx->pc = 0x1A66FCu;
    SET_GPR_U32(ctx, 31, 0x1A6704u);
    ctx->pc = 0x1A6700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6704u; }
        else if (ctx->pc != 0x1A6704u) { ctx->pc = 0x1A6704u; }
    }
    if (ctx->pc != 0x1A6704u) { return; }
    ctx->pc = 0x1A6704u;
    // 0x1a6704: 0x16000003
    ctx->pc = 0x1A6704u;
    {
        const bool branch_taken_0x1a6704 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A6708u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a6704) {
            ctx->pc = 0x1A6714u;
            goto label_1a6714;
        }
    }
    ctx->pc = 0x1A670Cu;
    // 0x1a670c: 0xc0694e8
    ctx->pc = 0x1A670Cu;
    SET_GPR_U32(ctx, 31, 0x1A6714u);
    ctx->pc = 0x1A6710u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6714u; }
        else if (ctx->pc != 0x1A6714u) { ctx->pc = 0x1A6714u; }
    }
    if (ctx->pc != 0x1A6714u) { return; }
    ctx->pc = 0x1A6714u;
label_1a6714:
    // 0x1a6714: 0x7bbf0010
    ctx->pc = 0x1a6714u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6718: 0x7bb00000
    ctx->pc = 0x1a6718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a671c: 0x3e00008
    ctx->pc = 0x1A671Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6720u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A66C4u: goto label_1a66c4;
            case 0x1A66CCu: goto label_1a66cc;
            case 0x1A6714u: goto label_1a6714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6724u;
}
