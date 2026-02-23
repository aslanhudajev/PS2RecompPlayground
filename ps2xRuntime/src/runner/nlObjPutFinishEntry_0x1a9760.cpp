#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutFinishEntry
// Address: 0x1a9760 - 0x1a97e4
void nlObjPutFinishEntry_0x1a9760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutFinishEntry");


    ctx->pc = 0x1a9760u;

    // 0x1a9760: 0x27bdffe0
    ctx->pc = 0x1a9760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9764: 0x7fbf0010
    ctx->pc = 0x1a9764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a9768: 0x7fb00000
    ctx->pc = 0x1a9768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a976c: 0x8f848a40
    ctx->pc = 0x1a976cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937152)));
    // 0x1a9770: 0x24030002
    ctx->pc = 0x1a9770u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9774: 0x14830017
    ctx->pc = 0x1A9774u;
    {
        const bool branch_taken_0x1a9774 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a9774) {
            ctx->pc = 0x1A97D4u;
            goto label_1a97d4;
        }
    }
    ctx->pc = 0x1A977Cu;
    // 0x1a977c: 0x8f838a3c
    ctx->pc = 0x1a977cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
    // 0x1a9780: 0x18600014
    ctx->pc = 0x1A9780u;
    {
        const bool branch_taken_0x1a9780 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a9780) {
            ctx->pc = 0x1A97D4u;
            goto label_1a97d4;
        }
    }
    ctx->pc = 0x1A9788u;
    // 0x1a9788: 0x8f908a34
    ctx->pc = 0x1a9788u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294937140)));
    // 0x1a978c: 0x70002628
    ctx->pc = 0x1a978cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9790: 0xc0694e8
    ctx->pc = 0x1A9790u;
    SET_GPR_U32(ctx, 31, 0x1A9798u);
    ctx->pc = 0x1A9794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9798u; }
        else if (ctx->pc != 0x1A9798u) { ctx->pc = 0x1A9798u; }
    }
    if (ctx->pc != 0x1A9798u) { return; }
    ctx->pc = 0x1A9798u;
    // 0x1a9798: 0x1000000a
    ctx->pc = 0x1A9798u;
    {
        const bool branch_taken_0x1a9798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A979Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
        if (branch_taken_0x1a9798) {
            ctx->pc = 0x1A97C4u;
            goto label_1a97c4;
        }
    }
    ctx->pc = 0x1A97A0u;
label_1a97a0:
    // 0x1a97a0: 0x8e030004
    ctx->pc = 0x1a97a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a97a4: 0x8e020000
    ctx->pc = 0x1a97a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a97a8: 0xac430000
    ctx->pc = 0x1a97a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a97ac: 0x8f828a3c
    ctx->pc = 0x1a97acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
    // 0x1a97b0: 0x26100008
    ctx->pc = 0x1a97b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a97b4: 0x2442ffff
    ctx->pc = 0x1a97b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a97b8: 0xaf828a3c
    ctx->pc = 0x1a97b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937148), GPR_U32(ctx, 2));
    // 0x1a97bc: 0x0
    ctx->pc = 0x1a97bcu;
    // NOP
    // 0x1a97c0: 0x8f828a3c
    ctx->pc = 0x1a97c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
label_1a97c4:
    // 0x1a97c4: 0x1440fff6
    ctx->pc = 0x1A97C4u;
    {
        const bool branch_taken_0x1a97c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a97c4) {
            ctx->pc = 0x1A97A0u;
            goto label_1a97a0;
        }
    }
    ctx->pc = 0x1A97CCu;
    // 0x1a97cc: 0xc0694bc
    ctx->pc = 0x1A97CCu;
    SET_GPR_U32(ctx, 31, 0x1A97D4u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A97D4u; }
        else if (ctx->pc != 0x1A97D4u) { ctx->pc = 0x1A97D4u; }
    }
    if (ctx->pc != 0x1A97D4u) { return; }
    ctx->pc = 0x1A97D4u;
label_1a97d4:
    // 0x1a97d4: 0x7bbf0010
    ctx->pc = 0x1a97d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a97d8: 0x7bb00000
    ctx->pc = 0x1a97d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a97dc: 0x3e00008
    ctx->pc = 0x1A97DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A97E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A97A0u: goto label_1a97a0;
            case 0x1A97C4u: goto label_1a97c4;
            case 0x1A97D4u: goto label_1a97d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A97E4u;
}
