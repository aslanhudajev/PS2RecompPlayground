#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfpts_WritePtsQueSub
// Address: 0x19c0c8 - 0x19c140
void sfpts_WritePtsQueSub_0x19c0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfpts_WritePtsQueSub");


    ctx->pc = 0x19c0c8u;

    // 0x19c0c8: 0x8c830008
    ctx->pc = 0x19c0c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19c0cc: 0x8c820004
    ctx->pc = 0x19c0ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19c0d0: 0x54620004
    ctx->pc = 0x19C0D0u;
    {
        const bool branch_taken_0x19c0d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x19c0d0) {
            ctx->pc = 0x19C0D4u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->pc = 0x19C0E4u;
            goto label_19c0e4;
        }
    }
    ctx->pc = 0x19C0D8u;
    // 0x19c0d8: 0x3c02ffff
    ctx->pc = 0x19c0d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x19c0dc: 0x3e00008
    ctx->pc = 0x19C0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C0E0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C0E4u: goto label_19c0e4;
            case 0x19C128u: goto label_19c128;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C0E4u;
label_19c0e4:
    // 0x19c0e4: 0x2402000c
    ctx->pc = 0x19c0e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x19c0e8: 0x8c830000
    ctx->pc = 0x19c0e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c0ec: 0xc21018
    ctx->pc = 0x19c0ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19c0f0: 0x24c70001
    ctx->pc = 0x19c0f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 1));
    // 0x19c0f4: 0x431021
    ctx->pc = 0x19c0f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c0f8: 0x68a30007
    ctx->pc = 0x19c0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19c0fc: 0x6ca30000
    ctx->pc = 0x19c0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19c100: 0x8ca80008
    ctx->pc = 0x19c100u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19c104: 0xb0430007
    ctx->pc = 0x19c104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19c108: 0xb4430000
    ctx->pc = 0x19c108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19c10c: 0xac480008
    ctx->pc = 0x19c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x19c110: 0x8c830004
    ctx->pc = 0x19c110u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19c114: 0xe3102a
    ctx->pc = 0x19c114u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x19c118: 0x14400003
    ctx->pc = 0x19C118u;
    {
        const bool branch_taken_0x19c118 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C11Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c118) {
            ctx->pc = 0x19C128u;
            goto label_19c128;
        }
    }
    ctx->pc = 0x19C120u;
    // 0x19c120: 0x2462ffff
    ctx->pc = 0x19c120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c124: 0xc22823
    ctx->pc = 0x19c124u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_19c128:
    // 0x19c128: 0x8c830008
    ctx->pc = 0x19c128u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19c12c: 0x102d
    ctx->pc = 0x19c12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c130: 0xac85000c
    ctx->pc = 0x19c130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x19c134: 0x24630001
    ctx->pc = 0x19c134u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c138: 0x3e00008
    ctx->pc = 0x19C138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C13Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C0E4u: goto label_19c0e4;
            case 0x19C128u: goto label_19c128;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C140u;
}
