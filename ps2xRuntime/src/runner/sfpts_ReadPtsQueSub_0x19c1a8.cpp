#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfpts_ReadPtsQueSub
// Address: 0x19c1a8 - 0x19c248
void sfpts_ReadPtsQueSub_0x19c1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfpts_ReadPtsQueSub");


    ctx->pc = 0x19c1a8u;

    // 0x19c1a8: 0x27bdffd0
    ctx->pc = 0x19c1a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c1ac: 0xffb10010
    ctx->pc = 0x19c1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19c1b0: 0xffb00000
    ctx->pc = 0x19c1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c1b4: 0xc0882d
    ctx->pc = 0x19c1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1b8: 0xffbf0020
    ctx->pc = 0x19c1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19c1bc: 0x80802d
    ctx->pc = 0x19c1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1c0: 0xe0302d
    ctx->pc = 0x19c1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1c4: 0x8e020008
    ctx->pc = 0x19c1c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19c1c8: 0x1040001a
    ctx->pc = 0x19C1C8u;
    {
        const bool branch_taken_0x19c1c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C1CCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c1c8) {
            ctx->pc = 0x19C234u;
            goto label_19c234;
        }
    }
    ctx->pc = 0x19C1D0u;
    // 0x19c1d0: 0xc067092
    ctx->pc = 0x19C1D0u;
    SET_GPR_U32(ctx, 31, 0x19C1D8u);
    ctx->pc = 0x19C248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfpts_SearchPtsQue_0x19c248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1D8u; }
        else if (ctx->pc != 0x19C1D8u) { ctx->pc = 0x19C1D8u; }
    }
    if (ctx->pc != 0x19C1D8u) { return; }
    ctx->pc = 0x19C1D8u;
    // 0x19c1d8: 0x40402d
    ctx->pc = 0x19c1d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1dc: 0x2402ffff
    ctx->pc = 0x19c1dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c1e0: 0x11020014
    ctx->pc = 0x19C1E0u;
    {
        const bool branch_taken_0x19c1e0 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x19C1E4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x19c1e0) {
            ctx->pc = 0x19C234u;
            goto label_19c234;
        }
    }
    ctx->pc = 0x19C1E8u;
    // 0x19c1e8: 0x8e020010
    ctx->pc = 0x19c1e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19c1ec: 0x8e030004
    ctx->pc = 0x19c1ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c1f0: 0x481021
    ctx->pc = 0x19c1f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19c1f4: 0x8e040008
    ctx->pc = 0x19c1f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19c1f8: 0x43282a
    ctx->pc = 0x19c1f8u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x19c1fc: 0x8e070000
    ctx->pc = 0x19c1fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19c200: 0x431823
    ctx->pc = 0x19c200u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c204: 0x882023
    ctx->pc = 0x19c204u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x19c208: 0x65100a
    ctx->pc = 0x19c208u;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x19c20c: 0xae040008
    ctx->pc = 0x19c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x19c210: 0x463018
    ctx->pc = 0x19c210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x19c214: 0xae020010
    ctx->pc = 0x19c214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x19c218: 0xc73021
    ctx->pc = 0x19c218u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19c21c: 0x68c20007
    ctx->pc = 0x19c21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19c220: 0x6cc20000
    ctx->pc = 0x19c220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19c224: 0x8cc30008
    ctx->pc = 0x19c224u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x19c228: 0xb2220007
    ctx->pc = 0x19c228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19c22c: 0xb6220000
    ctx->pc = 0x19c22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19c230: 0xae230008
    ctx->pc = 0x19c230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_19c234:
    // 0x19c234: 0xdfbf0020
    ctx->pc = 0x19c234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c238: 0xdfb10010
    ctx->pc = 0x19c238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c23c: 0xdfb00000
    ctx->pc = 0x19c23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c240: 0x3e00008
    ctx->pc = 0x19C240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C244u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C234u: goto label_19c234;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C248u;
}
