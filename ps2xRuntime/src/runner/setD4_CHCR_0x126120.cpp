#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setD4_CHCR
// Address: 0x126120 - 0x126184
void setD4_CHCR_0x126120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126120u;

    // 0x126120: 0x27bdffe0
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126124: 0xffb00000
    ctx->pc = 0x126124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126128: 0xffbf0010
    ctx->pc = 0x126128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12612c: 0xc0453ee
    ctx->pc = 0x12612Cu;
    SET_GPR_U32(ctx, 31, 0x126134u);
    ctx->pc = 0x126130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126134u; }
    }
    if (ctx->pc != 0x126134u) { return; }
    ctx->pc = 0x126134u;
    // 0x126134: 0x3c051000
    ctx->pc = 0x126134u;
    SET_GPR_S32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x126138: 0x3c070001
    ctx->pc = 0x126138u;
    SET_GPR_S32(ctx, 7, ((uint32_t)1 << 16));
    // 0x12613c: 0x34a5f520
    ctx->pc = 0x12613cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)62752);
    // 0x126140: 0x3c061000
    ctx->pc = 0x126140u;
    SET_GPR_S32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x126144: 0x8ca20000
    ctx->pc = 0x126144u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x126148: 0x34c6f590
    ctx->pc = 0x126148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)62864);
    // 0x12614c: 0x3c031000
    ctx->pc = 0x12614cu;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x126150: 0x3c04fffe
    ctx->pc = 0x126150u;
    SET_GPR_S32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x126154: 0x471025
    ctx->pc = 0x126154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x126158: 0x3463b400
    ctx->pc = 0x126158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)46080);
    // 0x12615c: 0xacc20000
    ctx->pc = 0x12615cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x126160: 0x3484ffff
    ctx->pc = 0x126160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)65535);
    // 0x126164: 0xac700000
    ctx->pc = 0x126164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x126168: 0xdfbf0010
    ctx->pc = 0x126168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12616c: 0x8ca20000
    ctx->pc = 0x12616cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126170: 0xdfb00000
    ctx->pc = 0x126170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126174: 0x441024
    ctx->pc = 0x126174u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x126178: 0xacc20000
    ctx->pc = 0x126178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x12617c: 0x8045400
    ctx->pc = 0x12617Cu;
    ctx->pc = 0x126180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x115000u;
    EIntr_0x115000(rdram, ctx, runtime); return;
    ctx->pc = 0x126184u;
}
