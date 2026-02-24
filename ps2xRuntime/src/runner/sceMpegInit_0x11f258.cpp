#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceMpegInit - MPEG decoder setup (DIntr, DMAC config, sceIpuInit)
// Ghidra decomp from mpeg.c. Inlines DIntr/EIntr to avoid mid-function returns.
void sceMpegInit_0x11f258(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
#ifdef _DEBUG
    PS_LOG_ENTRY("sceMpegInit_0x11f258");
#endif

    ctx->cop0_status &= ~0x10000u;

    constexpr uint32_t REG_DMAC_ENABLER = 0x1000f520;
    constexpr uint32_t REG_DMAC_ENABLEW = 0x1000f590;
    constexpr uint32_t REG_DMAC_3_CHCR = 0x1000b000;
    constexpr uint32_t REG_DMAC_4_CHCR = 0x1000b400;
    constexpr uint32_t REG_DMAC_3_QWC = 0x1000b020;
    constexpr uint32_t REG_DMAC_4_QWC = 0x1000b420;

    uint32_t val = runtime->Load32(rdram, ctx, REG_DMAC_ENABLER);
    runtime->Store32(rdram, ctx, REG_DMAC_ENABLEW, val | 0x10000);

    val = runtime->Load32(rdram, ctx, REG_DMAC_3_CHCR);
    runtime->Store32(rdram, ctx, REG_DMAC_3_CHCR, val & 0xfffffeffu);

    val = runtime->Load32(rdram, ctx, REG_DMAC_4_CHCR);
    runtime->Store32(rdram, ctx, REG_DMAC_4_CHCR, val & 0xfffffeffu);

    val = runtime->Load32(rdram, ctx, REG_DMAC_ENABLER);
    runtime->Store32(rdram, ctx, REG_DMAC_ENABLEW, val & 0xfffeffffu);

    ctx->cop0_status |= 0x10000u;

    runtime->Store32(rdram, ctx, REG_DMAC_3_QWC, 0);
    runtime->Store32(rdram, ctx, REG_DMAC_4_QWC, 0);

    ctx->pc = 0x126490u;
    sceIpuInit_0x126490(rdram, ctx, runtime);
}
