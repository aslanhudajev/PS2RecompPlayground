#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kRegsAddr = 0x0020F89Cu;
static constexpr uint32_t kDmaBufNum = 0x00217790u;
static constexpr uint32_t kDmaBuf = 0x00217794u;
static constexpr uint32_t VIF1_CHANNEL = 0x10009000u;
static constexpr uint32_t DMAC_STAT = 0x1000E010u;

// Ghidra decomp: _buf_set_end, FlushCache, VIF1 DMA chain start
void sceHiDMASend_0x10ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiDMASend_0x10ddd0");
#endif
    uint32_t regs = FAST_READ32(kRegsAddr);
    if (regs == 0u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    if (runtime && runtime->hasFunction(0x10ea50u)) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, regs);
        SET_GPR_U32(&tmp, 31, 0x10ddd0u);
        tmp.pc = 0x10ea50u;
        auto fn = runtime->lookupFunction(0x10ea50u);
        fn(rdram, &tmp, runtime);
        if (getRegU32(&tmp, 2) != 0u) {
            setReturnU32(ctx, getRegU32(&tmp, 2));
            ctx->pc = getRegU32(ctx, 31);
            return;
        }
    }
    if (runtime && runtime->hasFunction(0x12eee0u)) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, 0u);
        SET_GPR_U32(&tmp, 31, 0x10ddd0u);
        tmp.pc = 0x12eee0u;
        runtime->lookupFunction(0x12eee0u)(rdram, &tmp, runtime);
    }
    if (!runtime) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }
    uint32_t ptrAt1c = FAST_READ32(regs + 0x1Cu);
    uint32_t tadr = ptrAt1c ? FAST_READ32(ptrAt1c) : 0u;
    if (tadr != 0u && (tadr & 0x80000000u))
        tadr = (tadr & 0x0FFFFFFFu) | 0x10000000u;
    PS2Memory &mem = runtime->memory();
    mem.writeIORegister(VIF1_CHANNEL + 0x20u, 0u);
    mem.writeIORegister(VIF1_CHANNEL + 0x30u, tadr);
    mem.writeIORegister(DMAC_STAT, 2u);
    mem.writeIORegister(VIF1_CHANNEL + 0x00u, 0x145u);
    uint32_t cur = FAST_READ32(regs + 0x18u);
    while (cur != 0u) {
        uint32_t fl = FAST_READ32(cur + 0x10u);
        FAST_WRITE32(cur + 0x10u, fl | 4u);
        cur = FAST_READ32(cur + 0x18u);
    }
    FAST_WRITE32(kRegsAddr, 0u);
    uint32_t bufNum = FAST_READ32(kDmaBufNum);
    uint32_t bufBase = FAST_READ32(kDmaBuf);
    for (uint32_t i = 0u; i < bufNum && bufBase != 0u; ++i) {
        uint32_t ent = bufBase + i * 0x24u;
        if (FAST_READ32(ent + 0x20u) == 0x8FFFFFFFu) {
            uint32_t v = FAST_READ32(ent + 0x10u);
            FAST_WRITE32(ent + 0x10u, v | 4u);
        }
    }
    mem.processPendingTransfers();
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
