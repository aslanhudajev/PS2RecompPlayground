#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_Init
// Address: 0x17e480 - 0x17e508
void SVM_Init_0x17e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_Init");
    ctx->pc = 0x17e480u;

    // 0x17e480: 0x27bdfff0
    ctx->pc = 0x17e480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e484: 0x8f84832c
    ctx->pc = 0x17e484u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935340)));
    // 0x17e488: 0x1480001a
    ctx->pc = 0x17E488u;
    {
        const bool branch_taken_0x17e488 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E48Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17e488) {
            ctx->pc = 0x17E4F4u;
            goto label_17e4f4;
        }
    }
    ctx->pc = 0x17E490u;
    // 0x17e490: 0x3c040024
    ctx->pc = 0x17e490u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x17e494: 0x282d
    ctx->pc = 0x17e494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e498: 0x24841398
    ctx->pc = 0x17e498u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 5016));
    // 0x17e49c: 0xc050cfe
    ctx->pc = 0x17E49Cu;
    SET_GPR_U32(ctx, 31, 0x17E4A4u);
    ctx->pc = 0x17E4A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4A4u; }
        else if (ctx->pc != 0x17E4A4u) { ctx->pc = 0x17E4A4u; }
    }
    if (ctx->pc != 0x17E4A4u) { return; }
    ctx->pc = 0x17E4A4u;
    // 0x17e4a4: 0x27848910
    ctx->pc = 0x17e4a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294936848));
    // 0x17e4a8: 0x282d
    ctx->pc = 0x17e4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4ac: 0xc050cfe
    ctx->pc = 0x17E4ACu;
    SET_GPR_U32(ctx, 31, 0x17E4B4u);
    ctx->pc = 0x17E4B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4B4u; }
        else if (ctx->pc != 0x17E4B4u) { ctx->pc = 0x17E4B4u; }
    }
    if (ctx->pc != 0x17E4B4u) { return; }
    ctx->pc = 0x17E4B4u;
    // 0x17e4b4: 0x27848918
    ctx->pc = 0x17e4b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294936856));
    // 0x17e4b8: 0x282d
    ctx->pc = 0x17e4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4bc: 0xc050cfe
    ctx->pc = 0x17E4BCu;
    SET_GPR_U32(ctx, 31, 0x17E4C4u);
    ctx->pc = 0x17E4C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4C4u; }
        else if (ctx->pc != 0x17E4C4u) { ctx->pc = 0x17E4C4u; }
    }
    if (ctx->pc != 0x17E4C4u) { return; }
    ctx->pc = 0x17E4C4u;
    // 0x17e4c4: 0x3c030024
    ctx->pc = 0x17e4c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17e4c8: 0x8f84832c
    ctx->pc = 0x17e4c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935340)));
    // 0x17e4cc: 0x24631378
    ctx->pc = 0x17e4ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4984));
    // 0x17e4d0: 0x24020003
    ctx->pc = 0x17e4d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17e4d4: 0x0
    ctx->pc = 0x17e4d4u;
    // NOP
label_17e4d8:
    // 0x17e4d8: 0xac600000
    ctx->pc = 0x17e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17e4dc: 0x2442ffff
    ctx->pc = 0x17e4dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17e4e0: 0x24630004
    ctx->pc = 0x17e4e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x17e4e4: 0x0
    ctx->pc = 0x17e4e4u;
    // NOP
    // 0x17e4e8: 0x0
    ctx->pc = 0x17e4e8u;
    // NOP
    // 0x17e4ec: 0x441fffa
    ctx->pc = 0x17E4ECu;
    {
        const bool branch_taken_0x17e4ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17e4ec) {
            ctx->pc = 0x17E4D8u;
            goto label_17e4d8;
        }
    }
    ctx->pc = 0x17E4F4u;
label_17e4f4:
    // 0x17e4f4: 0x24840001
    ctx->pc = 0x17e4f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x17e4f8: 0xdfbf0000
    ctx->pc = 0x17e4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e4fc: 0xaf84832c
    ctx->pc = 0x17e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935340), GPR_U32(ctx, 4));
    // 0x17e500: 0x3e00008
    ctx->pc = 0x17E500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E504u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E4D8u: goto label_17e4d8;
            case 0x17E4F4u: goto label_17e4f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E508u;
}
