#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DCT_IsrInitScaleTbl
// Address: 0x17ecb8 - 0x17ed68
void DCT_IsrInitScaleTbl_0x17ecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DCT_IsrInitScaleTbl");


    ctx->pc = 0x17ecb8u;

    // 0x17ecb8: 0x3c030024
    ctx->pc = 0x17ecb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17ecbc: 0x246314b8
    ctx->pc = 0x17ecbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5304));
    // 0x17ecc0: 0x831025
    ctx->pc = 0x17ecc0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17ecc4: 0x30420007
    ctx->pc = 0x17ecc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x17ecc8: 0x10400018
    ctx->pc = 0x17ECC8u;
    {
        const bool branch_taken_0x17ecc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17ECCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 128));
        if (branch_taken_0x17ecc8) {
            ctx->pc = 0x17ED2Cu;
            goto label_17ed2c;
        }
    }
    ctx->pc = 0x17ECD0u;
label_17ecd0:
    // 0x17ecd0: 0x68650007
    ctx->pc = 0x17ecd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17ecd4: 0x6c650000
    ctx->pc = 0x17ecd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17ecd8: 0x6866000f
    ctx->pc = 0x17ecd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17ecdc: 0x6c660008
    ctx->pc = 0x17ecdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17ece0: 0x68670017
    ctx->pc = 0x17ece0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17ece4: 0x6c670010
    ctx->pc = 0x17ece4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17ece8: 0x6868001f
    ctx->pc = 0x17ece8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17ecec: 0x6c680018
    ctx->pc = 0x17ececu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17ecf0: 0xb0850007
    ctx->pc = 0x17ecf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ecf4: 0xb4850000
    ctx->pc = 0x17ecf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ecf8: 0xb086000f
    ctx->pc = 0x17ecf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ecfc: 0xb4860008
    ctx->pc = 0x17ecfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ed00: 0xb0870017
    ctx->pc = 0x17ed00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ed04: 0xb4870010
    ctx->pc = 0x17ed04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ed08: 0xb088001f
    ctx->pc = 0x17ed08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ed0c: 0xb4880018
    ctx->pc = 0x17ed0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ed10: 0x24630020
    ctx->pc = 0x17ed10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x17ed14: 0x24840020
    ctx->pc = 0x17ed14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x17ed18: 0x0
    ctx->pc = 0x17ed18u;
    // NOP
    // 0x17ed1c: 0x1462ffec
    ctx->pc = 0x17ED1Cu;
    {
        const bool branch_taken_0x17ed1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x17ed1c) {
            ctx->pc = 0x17ECD0u;
            goto label_17ecd0;
        }
    }
    ctx->pc = 0x17ED24u;
    // 0x17ed24: 0x3e00008
    ctx->pc = 0x17ED24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ECD0u: goto label_17ecd0;
            case 0x17ED2Cu: goto label_17ed2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17ED2Cu;
label_17ed2c:
    // 0x17ed2c: 0xdc650000
    ctx->pc = 0x17ed2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ed30: 0xdc660008
    ctx->pc = 0x17ed30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17ed34: 0xdc670010
    ctx->pc = 0x17ed34u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17ed38: 0xdc680018
    ctx->pc = 0x17ed38u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x17ed3c: 0xfc850000
    ctx->pc = 0x17ed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x17ed40: 0xfc860008
    ctx->pc = 0x17ed40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x17ed44: 0xfc870010
    ctx->pc = 0x17ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x17ed48: 0xfc880018
    ctx->pc = 0x17ed48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x17ed4c: 0x24630020
    ctx->pc = 0x17ed4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x17ed50: 0x24840020
    ctx->pc = 0x17ed50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x17ed54: 0x0
    ctx->pc = 0x17ed54u;
    // NOP
    // 0x17ed58: 0x1462fff4
    ctx->pc = 0x17ED58u;
    {
        const bool branch_taken_0x17ed58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x17ed58) {
            ctx->pc = 0x17ED2Cu;
            goto label_17ed2c;
        }
    }
    ctx->pc = 0x17ED60u;
    // 0x17ed60: 0x3e00008
    ctx->pc = 0x17ED60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ECD0u: goto label_17ecd0;
            case 0x17ED2Cu: goto label_17ed2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17ED68u;
}
