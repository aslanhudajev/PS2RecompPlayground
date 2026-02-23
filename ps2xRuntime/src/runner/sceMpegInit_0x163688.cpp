#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_init_log.h"

// sceMpegInit: Initialize MPEG decoder. Per Ghidra decomp @ 0x163688:
// DIntr; enable DMA bit 16; stop D3/D4 CHCR; disable DMA bit 16; EIntr;
// zero D3/D4 QWC; sceIpuInit().
void sceMpegInit_0x163688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sceMpegInit");

    if (!runtime)
    {
        ctx->pc = GPR_U32(ctx, 31);
        return;
    }

    static constexpr uint32_t REG_DMAC_ENABLER = 0x1000E020u;
    static constexpr uint32_t REG_DMAC_ENABLEW = 0x1000E022u;
    static constexpr uint32_t REG_DMAC_3_IPU_FROM_CHCR = 0x1000A010u;
    static constexpr uint32_t REG_DMAC_4_IPU_TO_CHCR = 0x1000B010u;
    static constexpr uint32_t REG_DMAC_3_IPU_FROM_QWC = 0x1000A000u;
    static constexpr uint32_t REG_DMAC_4_IPU_TO_QWC = 0x1000B000u;

    PS2Memory &mem = runtime->memory();

    DIntr_0x15c970(rdram, ctx, runtime);

    uint32_t u = mem.read32(REG_DMAC_ENABLER);
    mem.write16(REG_DMAC_ENABLEW, (uint16_t)((u | 0x10000u) >> 16));

    u = mem.read32(REG_DMAC_3_IPU_FROM_CHCR);
    mem.write32(REG_DMAC_3_IPU_FROM_CHCR, u & 0xfffffeffu);

    u = mem.read32(REG_DMAC_4_IPU_TO_CHCR);
    mem.write32(REG_DMAC_4_IPU_TO_CHCR, u & 0xfffffeffu);

    u = mem.read32(REG_DMAC_ENABLER);
    mem.write16(REG_DMAC_ENABLEW, (uint16_t)((u & 0xfffeffffu) >> 16));

    EIntr_0x15c9b8(rdram, ctx, runtime);

    mem.write32(REG_DMAC_3_IPU_FROM_QWC, 0u);
    mem.write32(REG_DMAC_4_IPU_TO_QWC, 0u);

    sceIpuInit_0x154270(rdram, ctx, runtime);

    ctx->pc = GPR_U32(ctx, 31);
}
