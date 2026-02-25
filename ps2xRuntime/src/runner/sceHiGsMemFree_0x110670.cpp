#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kTopTbl = 0x0020f898u;
static constexpr uint32_t kEndTbl = 0x0020f8b0u;

void sceHiGsMemFree_0x110670(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsMemFree_0x110670");
#endif
    uint32_t param = getRegU32(ctx, 4);
    if (param == 0u) {
        if (runtime && runtime->hasFunction(0x1103e0u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 2u);
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

    uint32_t puVar1 = 0u;
    uint8_t* p0 = getMemPtr(rdram, kTopTbl + 12u);
    if (p0) std::memcpy(&puVar1, p0, 4);
    uint32_t puVar3 = kTopTbl;

    while (puVar1 != 0u && puVar1 != param) {
        uint8_t* pn = getMemPtr(rdram, puVar1 + 12u);
        if (!pn) break;
        puVar3 = puVar1;
        std::memcpy(&puVar1, pn, 4);
    }

    if (puVar1 == 0u) {
        if (runtime && runtime->hasFunction(0x1103e0u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 2u);
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

    if (FAST_READ32(kEndTbl) == puVar1)
        FAST_WRITE32(kEndTbl, puVar3);

    uint32_t next = 0u;
    uint8_t* pnext = getMemPtr(rdram, puVar1 + 12u);
    if (pnext) std::memcpy(&next, pnext, 4);
    if (uint8_t* p3 = getMemPtr(rdram, puVar3 + 12u))
        std::memcpy(p3, &next, 4);

    SET_GPR_U32(ctx, 4, puVar1);
    sceHiMemFree_0x10d5d0(rdram, ctx, runtime);

    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
