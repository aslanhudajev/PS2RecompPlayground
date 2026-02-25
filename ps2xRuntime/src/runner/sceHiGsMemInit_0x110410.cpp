#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Globals from xrefs: 0x11043c->0x20f89c, 0x110474->0x20f898, 0x110478->0x20f8a0,
// 0x11047c->0x20f8b0, 0x110480->0x20f8a4, 0x110488->0x20f8a8, 0x11048c->0x20f8ac
static constexpr uint32_t kEndAddr = 0x0020f89cu;
static constexpr uint32_t kTopTbl = 0x0020f898u;
static constexpr uint32_t kEndTbl = 0x0020f8b0u;       // stores &_top_tbl
static constexpr uint32_t kTopAddr = 0x0020f8a4u;
static constexpr uint32_t kDat20F8A8 = 0x0020f8a8u;
static constexpr uint32_t kDat20F8AC = 0x0020f8acu;

void sceHiGsMemInit_0x110410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsMemInit_0x110410");
#endif
    uint32_t param1 = GPR_U32(ctx, 4);   // a0 = base
    uint32_t param2 = GPR_U32(ctx, 5);  // a1 = size

    uint32_t uVar2 = (param1 + 0x3fu) & 0xFFFFFFC0u;
    uint32_t endAddr = uVar2 + param2;
    FAST_WRITE32(kEndAddr, endAddr);

    if (endAddr >= 0x100001u) {
        // _hig_gsmem_err(0)
        if (runtime && runtime->hasFunction(0x1103e0u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 0u);
            tmp.pc = 0x1103e0u;
            auto fn = runtime->lookupFunction(0x1103e0u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnU32(ctx, 0xFFFFFFFFu);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    if (param2 == 0u) {
        // _hig_gsmem_err(1)
        if (runtime && runtime->hasFunction(0x1103e0u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 1u);
            tmp.pc = 0x1103e0u;
            auto fn = runtime->lookupFunction(0x1103e0u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnU32(ctx, 0xFFFFFFFFu);
        }
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    // Success path (redundant kEndAddr write - already done above)
    FAST_WRITE32(kTopTbl, 0u);
    FAST_WRITE32(kEndTbl, kTopTbl);  // _end_tbl = &_top_tbl
    FAST_WRITE32(kDat20F8A8, 0u);
    FAST_WRITE32(kDat20F8AC, 0u);
    FAST_WRITE32(kTopAddr, uVar2);

    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
