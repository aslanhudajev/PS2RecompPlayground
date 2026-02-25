#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// GS mem globals (from sceHiGsMemInit)
static constexpr uint32_t kEndAddr = 0x0020f89cu;
static constexpr uint32_t kTopTbl = 0x0020f898u;
static constexpr uint32_t kEndTbl = 0x0020f8b0u;
static constexpr uint32_t kTopAddr = 0x0020f8a4u;
static constexpr uint32_t kDat20F8A8 = 0x0020f8a8u;
static constexpr uint32_t kDat20F8AC = 0x0020f8acu;

void sceHiGsMemAlloc_0x1104a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsMemAlloc_0x1104a0");
#endif
    uint32_t align = getRegU32(ctx, 4);
    uint32_t size = getRegU32(ctx, 5);
    if (size == 0u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    if (align != 0x800u && align != 0x40u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint32_t endAddr = FAST_READ32(kEndAddr);
    uint32_t endTbl = FAST_READ32(kEndTbl);
    uint32_t topAddr = FAST_READ32(kTopAddr);
    uint32_t datA8 = FAST_READ32(kDat20F8A8);
    uint32_t datAC = FAST_READ32(kDat20F8AC);

    uint32_t iVar5 = topAddr;
    uint32_t iVar7 = size;

    bool insertedInHole = false;
    uint32_t puVar6 = endTbl;
    uint32_t puVar4 = datAC;

    if (datAC != 0u) {
        while (true) {
            uint32_t next = 0u;
            uint8_t* pnext = getMemPtr(rdram, puVar4 + 12u);
            if (pnext) std::memcpy(&next, pnext, 4);
            if (next == 0u) break;

            uint32_t p1 = 0u, p2 = 0u;
            uint8_t* pp = getMemPtr(rdram, next);
            if (pp) {
                std::memcpy(&p1, pp + 4, 4);
                std::memcpy(&p2, pp + 8, 4);
            }
            uint32_t required = ((iVar5 + datA8 + align - 1u) / align) * align + iVar7;
            if (p1 >= required) {
                insertedInHole = true;
                break;
            }
            puVar6 = puVar4;
            puVar4 = next;
            iVar5 = p1;
            datA8 = p2;
        }
        if (!insertedInHole) {
            uint8_t* pp4 = getMemPtr(rdram, puVar4);
            if (pp4) {
                std::memcpy(&iVar5, pp4 + 4, 4);
                std::memcpy(&datA8, pp4 + 8, 4);
            }
        }
    }

    iVar5 = ((iVar5 + datA8 + align - 1u) / align) * align;
    if (iVar5 + iVar7 > endAddr) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    SET_GPR_U32(ctx, 4, 1u);
    SET_GPR_U32(ctx, 5, 16u);
    sceHiMemCalloc_0x10d848(rdram, ctx, runtime);
    uint32_t bloc = getRegU32(ctx, 2);
    if (bloc == 0u) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint8_t* blocPtr = getMemPtr(rdram, bloc);
    if (blocPtr) {
        std::memcpy(blocPtr, &align, 4);
        std::memcpy(blocPtr + 4, &iVar5, 4);
        std::memcpy(blocPtr + 8, &iVar7, 4);
    }

    uint32_t zero = 0u;
    if (insertedInHole) {
        if (uint8_t* p6 = getMemPtr(rdram, puVar6 + 12u))
            std::memcpy(p6, &bloc, 4);
        if (uint8_t* pb = getMemPtr(rdram, bloc + 12u))
            std::memcpy(pb, &puVar4, 4);
    } else {
        if (uint8_t* prevNext = getMemPtr(rdram, puVar6 + 12u))
            std::memcpy(prevNext, &bloc, 4);
        if (blocPtr)
            std::memcpy(blocPtr + 12u, &zero, 4);
        FAST_WRITE32(kEndTbl, bloc);
    }

    FAST_WRITE32(kDat20F8A8, 0u);
    FAST_WRITE32(kDat20F8AC, bloc);
    setReturnU32(ctx, bloc);
    ctx->pc = getRegU32(ctx, 31);
}
