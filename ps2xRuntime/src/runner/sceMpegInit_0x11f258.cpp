#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// EE DMAC registers (from assembly)
static constexpr uint32_t kREG_DMAC_ENABLER     = 0x1000f520u;
static constexpr uint32_t kREG_DMAC_ENABLEW    = 0x1000f590u;
static constexpr uint32_t kREG_DMAC_3_IPU_FROM_CHCR = 0x1000b000u;
static constexpr uint32_t kREG_DMAC_4_IPU_TO_CHCR   = 0x1000b400u;
static constexpr uint32_t kREG_DMAC_3_IPU_FROM_QWC  = 0x1000b020u;
static constexpr uint32_t kREG_DMAC_4_IPU_TO_QWC   = 0x1000b420u;

void sceMpegInit_0x11f258(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    DIntr_0x114fb8(rdram, ctx, runtime);

    uint32_t v = READ32(kREG_DMAC_ENABLER);
    WRITE32(kREG_DMAC_ENABLEW, v | 0x10000u);

    v = READ32(kREG_DMAC_3_IPU_FROM_CHCR);
    WRITE32(kREG_DMAC_3_IPU_FROM_CHCR, v & 0xfffffeffu);

    v = READ32(kREG_DMAC_4_IPU_TO_CHCR);
    WRITE32(kREG_DMAC_4_IPU_TO_CHCR, v & 0xfffffeffu);

    v = READ32(kREG_DMAC_ENABLER);
    WRITE32(kREG_DMAC_ENABLEW, v & 0xfffeffffu);

    EIntr_0x115000(rdram, ctx, runtime);

    WRITE32(kREG_DMAC_3_IPU_FROM_QWC, 0u);
    WRITE32(kREG_DMAC_4_IPU_TO_QWC, 0u);

    sceIpuInit_0x126490(rdram, ctx, runtime);
    ctx->pc = getRegU32(ctx, 31);
}
