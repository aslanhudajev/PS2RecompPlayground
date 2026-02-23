#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_Init
// Address: 0x17bf40 - 0x17bf7c
void SJMEM_Init_0x17bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_Init");
    ctx->pc = 0x17bf40u;

    // 0x17bf40: 0x27bdfff0
    ctx->pc = 0x17bf40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bf44: 0x8f8282f8
    ctx->pc = 0x17bf44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935288)));
    // 0x17bf48: 0x14400007
    ctx->pc = 0x17BF48u;
    {
        const bool branch_taken_0x17bf48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17BF4Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17bf48) {
            ctx->pc = 0x17BF68u;
            goto label_17bf68;
        }
    }
    ctx->pc = 0x17BF50u;
    // 0x17bf50: 0x3c040024
    ctx->pc = 0x17bf50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x17bf54: 0x282d
    ctx->pc = 0x17bf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf58: 0x2484ec80
    ctx->pc = 0x17bf58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962304));
    // 0x17bf5c: 0xc050cfe
    ctx->pc = 0x17BF5Cu;
    SET_GPR_U32(ctx, 31, 0x17BF64u);
    ctx->pc = 0x17BF60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1152));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BF64u; }
        else if (ctx->pc != 0x17BF64u) { ctx->pc = 0x17BF64u; }
    }
    if (ctx->pc != 0x17BF64u) { return; }
    ctx->pc = 0x17BF64u;
    // 0x17bf64: 0x8f8282f8
    ctx->pc = 0x17bf64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935288)));
label_17bf68:
    // 0x17bf68: 0x24420001
    ctx->pc = 0x17bf68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17bf6c: 0xdfbf0000
    ctx->pc = 0x17bf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bf70: 0xaf8282f8
    ctx->pc = 0x17bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935288), GPR_U32(ctx, 2));
    // 0x17bf74: 0x3e00008
    ctx->pc = 0x17BF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BF78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BF68u: goto label_17bf68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17BF7Cu;
}
