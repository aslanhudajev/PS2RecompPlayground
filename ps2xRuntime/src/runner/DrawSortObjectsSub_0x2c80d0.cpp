#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawSortObjectsSub
// Address: 0x2c80d0 - 0x2c811c
void DrawSortObjectsSub_0x2c80d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c80d0u;

    // 0x2c80d0: 0x27bdffd0
    ctx->pc = 0x2c80d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c80d4: 0xffbf0020
    ctx->pc = 0x2c80d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c80d8: 0xffb10010
    ctx->pc = 0x2c80d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c80dc: 0xffb00000
    ctx->pc = 0x2c80dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c80e0: 0x80802d
    ctx->pc = 0x2c80e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c80e4: 0x10c00005
    ctx->pc = 0x2C80E4u;
    {
        const bool branch_taken_0x2c80e4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C80E8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c80e4) {
            ctx->pc = 0x2C80FCu;
            goto label_2c80fc;
        }
    }
    ctx->pc = 0x2C80ECu;
    // 0x2c80ec: 0x24060050
    ctx->pc = 0x2c80ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c80f0: 0x3c07002c
    ctx->pc = 0x2c80f0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)44 << 16));
    // 0x2c80f4: 0xc0bed1e
    ctx->pc = 0x2C80F4u;
    SET_GPR_U32(ctx, 31, 0x2C80FCu);
    ctx->pc = 0x2C80F8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 31576));
    ctx->pc = 0x2FB478u;
    {
        const uint32_t __entryPc = ctx->pc;
        qsort_0x2fb478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C80FCu; }
    }
    if (ctx->pc != 0x2C80FCu) { return; }
    ctx->pc = 0x2C80FCu;
label_2c80fc:
    // 0x2c80fc: 0x202d
    ctx->pc = 0x2c80fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8100: 0x200282d
    ctx->pc = 0x2c8100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8104: 0x220302d
    ctx->pc = 0x2c8104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8108: 0xdfbf0020
    ctx->pc = 0x2c8108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c810c: 0xdfb10010
    ctx->pc = 0x2c810cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8110: 0xdfb00000
    ctx->pc = 0x2c8110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8114: 0x80b1fe6
    ctx->pc = 0x2C8114u;
    ctx->pc = 0x2C8118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2C7F98u;
    drawSortObjSub2_0x2c7f98(rdram, ctx, runtime); return;
    ctx->pc = 0x2C811Cu;
}
