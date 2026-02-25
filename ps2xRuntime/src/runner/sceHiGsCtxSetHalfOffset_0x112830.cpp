#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include <cstring>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra: ctx+0xe9=half_offset, base from ctx+0xcc; if ctx[0xef]>=0, RMW table at ctx[0x74]
void sceHiGsCtxSetHalfOffset_0x112830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetHalfOffset_0x112830");
#endif
    uint32_t ctxAddr = GPR_U32(ctx, 4);
    uint32_t halfOffset = GPR_U32(ctx, 5) & 0xffu;

    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (p) {
        p[0xe9] = static_cast<uint8_t>(halfOffset);
        uint16_t baseOffset;
        std::memcpy(&baseOffset, p + 0xcc, 2);
        uint64_t newVal = (halfOffset != 0) ? (baseOffset + 8u) : baseOffset;

        int8_t tableIdx;
        std::memcpy(&tableIdx, p + 0xef, 1);
        if (tableIdx >= 0) {
            uint32_t tableBase;
            std::memcpy(&tableBase, p + 0x74, 4);
            uint32_t entryAddr = tableBase + static_cast<uint32_t>(tableIdx) * 16u;
            uint8_t* ep = getMemPtr(rdram, entryAddr);
            if (ep) {
                uint64_t ent;
                std::memcpy(&ent, ep, 8);
                ent = (ent & 0xFFFFFFFF0000FFFFULL) | (newVal << 32);
                std::memcpy(ep, &ent, 8);
            }
        }
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
