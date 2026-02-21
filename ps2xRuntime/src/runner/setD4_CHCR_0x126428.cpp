#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setD4_CHCR
// Address: 0x126428 - 0x12648c
void setD4_CHCR_0x126428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126428u;

    // 0x126428: 0x27bdffe0
    ctx->pc = 0x126428u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12642c: 0xffb00000
    ctx->pc = 0x12642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126430: 0xffbf0010
    ctx->pc = 0x126430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126434: 0xc0453ee
    ctx->pc = 0x126434u;
    SET_GPR_U32(ctx, 31, 0x12643Cu);
    ctx->pc = 0x126438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12643Cu; }
    }
    if (ctx->pc != 0x12643Cu) { return; }
    ctx->pc = 0x12643Cu;
    // 0x12643c: 0x3c051000
    ctx->pc = 0x12643cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x126440: 0x3c070001
    ctx->pc = 0x126440u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x126444: 0x34a5f520
    ctx->pc = 0x126444u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x126448: 0x3c061000
    ctx->pc = 0x126448u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x12644c: 0x8ca20000
    ctx->pc = 0x12644cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x126450: 0x34c6f590
    ctx->pc = 0x126450u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x126454: 0x3c031000
    ctx->pc = 0x126454u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x126458: 0x3c04fffe
    ctx->pc = 0x126458u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x12645c: 0x471025
    ctx->pc = 0x12645cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x126460: 0x3463b400
    ctx->pc = 0x126460u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46080));
    // 0x126464: 0xacc20000
    ctx->pc = 0x126464u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x126468: 0x3484ffff
    ctx->pc = 0x126468u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x12646c: 0xac700000
    ctx->pc = 0x12646cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x126470: 0xdfbf0010
    ctx->pc = 0x126470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126474: 0x8ca20000
    ctx->pc = 0x126474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126478: 0xdfb00000
    ctx->pc = 0x126478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12647c: 0x441024
    ctx->pc = 0x12647cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x126480: 0xacc20000
    ctx->pc = 0x126480u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x126484: 0x8045400
    ctx->pc = 0x126484u;
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x115000u;
    EIntr_0x115000(rdram, ctx, runtime); return;
    ctx->pc = 0x12648Cu;
}
