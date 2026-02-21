#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setD3_CHCR
// Address: 0x11c008 - 0x11c06c
void setD3_CHCR_0x11c008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c008u;

    // 0x11c008: 0x27bdffe0
    ctx->pc = 0x11c008u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c00c: 0xffb00000
    ctx->pc = 0x11c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c010: 0xffbf0010
    ctx->pc = 0x11c010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c014: 0xc0453ee
    ctx->pc = 0x11C014u;
    SET_GPR_U32(ctx, 31, 0x11C01Cu);
    ctx->pc = 0x11C018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C01Cu; }
    }
    if (ctx->pc != 0x11C01Cu) { return; }
    ctx->pc = 0x11C01Cu;
    // 0x11c01c: 0x3c051000
    ctx->pc = 0x11c01cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x11c020: 0x3c070001
    ctx->pc = 0x11c020u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x11c024: 0x34a5f520
    ctx->pc = 0x11c024u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x11c028: 0x3c061000
    ctx->pc = 0x11c028u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x11c02c: 0x8ca20000
    ctx->pc = 0x11c02cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x11c030: 0x34c6f590
    ctx->pc = 0x11c030u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x11c034: 0x3c031000
    ctx->pc = 0x11c034u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11c038: 0x3c04fffe
    ctx->pc = 0x11c038u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65534 << 16));
    // 0x11c03c: 0x471025
    ctx->pc = 0x11c03cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11c040: 0x3463b000
    ctx->pc = 0x11c040u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x11c044: 0xacc20000
    ctx->pc = 0x11c044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x11c048: 0x3484ffff
    ctx->pc = 0x11c048u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x11c04c: 0xac700000
    ctx->pc = 0x11c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x11c050: 0xdfbf0010
    ctx->pc = 0x11c050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c054: 0x8ca20000
    ctx->pc = 0x11c054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11c058: 0xdfb00000
    ctx->pc = 0x11c058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c05c: 0x441024
    ctx->pc = 0x11c05cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11c060: 0xacc20000
    ctx->pc = 0x11c060u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x11c064: 0x8045400
    ctx->pc = 0x11C064u;
    ctx->pc = 0x11C068u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x115000u;
    EIntr_0x115000(rdram, ctx, runtime); return;
    ctx->pc = 0x11C06Cu;
}
