#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setD4_CHCR
// Address: 0x11c070 - 0x11c0d4
void setD4_CHCR_0x11c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c070u;

    // 0x11c070: 0x27bdffe0
    ctx->pc = 0x11c070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c074: 0xffb00000
    ctx->pc = 0x11c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c078: 0xffbf0010
    ctx->pc = 0x11c078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c07c: 0xc0453ee
    ctx->pc = 0x11C07Cu;
    SET_GPR_U32(ctx, 31, 0x11C084u);
    ctx->pc = 0x11C080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C084u; }
    }
    if (ctx->pc != 0x11C084u) { return; }
    ctx->pc = 0x11C084u;
    // 0x11c084: 0x3c051000
    ctx->pc = 0x11c084u;
    SET_GPR_S32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x11c088: 0x3c070001
    ctx->pc = 0x11c088u;
    SET_GPR_S32(ctx, 7, ((uint32_t)1 << 16));
    // 0x11c08c: 0x34a5f520
    ctx->pc = 0x11c08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)62752);
    // 0x11c090: 0x3c061000
    ctx->pc = 0x11c090u;
    SET_GPR_S32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x11c094: 0x8ca20000
    ctx->pc = 0x11c094u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x11c098: 0x34c6f590
    ctx->pc = 0x11c098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)62864);
    // 0x11c09c: 0x3c031000
    ctx->pc = 0x11c09cu;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11c0a0: 0x3c04fffe
    ctx->pc = 0x11c0a0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x11c0a4: 0x471025
    ctx->pc = 0x11c0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x11c0a8: 0x3463b400
    ctx->pc = 0x11c0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)46080);
    // 0x11c0ac: 0xacc20000
    ctx->pc = 0x11c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x11c0b0: 0x3484ffff
    ctx->pc = 0x11c0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)65535);
    // 0x11c0b4: 0xac700000
    ctx->pc = 0x11c0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x11c0b8: 0xdfbf0010
    ctx->pc = 0x11c0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c0bc: 0x8ca20000
    ctx->pc = 0x11c0bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11c0c0: 0xdfb00000
    ctx->pc = 0x11c0c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c0c4: 0x441024
    ctx->pc = 0x11c0c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11c0c8: 0xacc20000
    ctx->pc = 0x11c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x11c0cc: 0x8045400
    ctx->pc = 0x11C0CCu;
    ctx->pc = 0x11C0D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x115000u;
    EIntr_0x115000(rdram, ctx, runtime); return;
    ctx->pc = 0x11C0D4u;
}
