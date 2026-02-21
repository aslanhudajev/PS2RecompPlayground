#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setD3_CHCR
// Address: 0x1260b8 - 0x12611c
void setD3_CHCR_0x1260b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1260b8u;

    // 0x1260b8: 0x27bdffe0
    ctx->pc = 0x1260b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1260bc: 0xffb00000
    ctx->pc = 0x1260bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1260c0: 0xffbf0010
    ctx->pc = 0x1260c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1260c4: 0xc0453ee
    ctx->pc = 0x1260C4u;
    SET_GPR_U32(ctx, 31, 0x1260CCu);
    ctx->pc = 0x1260C8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260CCu; }
    }
    if (ctx->pc != 0x1260CCu) { return; }
    ctx->pc = 0x1260CCu;
    // 0x1260cc: 0x3c051000
    ctx->pc = 0x1260ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1260d0: 0x3c070001
    ctx->pc = 0x1260d0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x1260d4: 0x34a5f520
    ctx->pc = 0x1260d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x1260d8: 0x3c061000
    ctx->pc = 0x1260d8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x1260dc: 0x8ca20000
    ctx->pc = 0x1260dcu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x1260e0: 0x34c6f590
    ctx->pc = 0x1260e0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x1260e4: 0x3c031000
    ctx->pc = 0x1260e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1260e8: 0x3c04fffe
    ctx->pc = 0x1260e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x1260ec: 0x471025
    ctx->pc = 0x1260ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1260f0: 0x3463b000
    ctx->pc = 0x1260f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x1260f4: 0xacc20000
    ctx->pc = 0x1260f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1260f8: 0x3484ffff
    ctx->pc = 0x1260f8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x1260fc: 0xac700000
    ctx->pc = 0x1260fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x126100: 0xdfbf0010
    ctx->pc = 0x126100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126104: 0x8ca20000
    ctx->pc = 0x126104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126108: 0xdfb00000
    ctx->pc = 0x126108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12610c: 0x441024
    ctx->pc = 0x12610cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x126110: 0xacc20000
    ctx->pc = 0x126110u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x126114: 0x8045400
    ctx->pc = 0x126114u;
    ctx->pc = 0x126118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x115000u;
    EIntr_0x115000(rdram, ctx, runtime); return;
    ctx->pc = 0x12611Cu;
}
