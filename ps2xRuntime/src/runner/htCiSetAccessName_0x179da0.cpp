#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiSetAccessName
// Address: 0x179da0 - 0x179dec
void htCiSetAccessName_0x179da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiSetAccessName");


    ctx->pc = 0x179da0u;

    // 0x179da0: 0x80282d
    ctx->pc = 0x179da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179da4: 0x10a00004
    ctx->pc = 0x179DA4u;
    {
        const bool branch_taken_0x179da4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x179DA8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
        if (branch_taken_0x179da4) {
            ctx->pc = 0x179DB8u;
            goto label_179db8;
        }
    }
    ctx->pc = 0x179DACu;
    // 0x179dac: 0x3c040024
    ctx->pc = 0x179dacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x179db0: 0x805150e
    ctx->pc = 0x179DB0u;
    ctx->pc = 0x179DB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944072));
    ctx->pc = 0x145438u;
    strcpy_0x145438(rdram, ctx, runtime); return;
    ctx->pc = 0x179DB8u;
label_179db8:
    // 0x179db8: 0x3c02002c
    ctx->pc = 0x179db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x179dbc: 0x2447b9e8
    ctx->pc = 0x179dbcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294949352));
    // 0x179dc0: 0x2466a548
    ctx->pc = 0x179dc0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294944072));
    // 0x179dc4: 0x88e40003
    ctx->pc = 0x179dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x179dc8: 0x98e40000
    ctx->pc = 0x179dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x179dcc: 0x80e50004
    ctx->pc = 0x179dccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x179dd0: 0xa8c40003
    ctx->pc = 0x179dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x179dd4: 0xb8c40000
    ctx->pc = 0x179dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x179dd8: 0xa0c50004
    ctx->pc = 0x179dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x179ddc: 0x80e40005
    ctx->pc = 0x179ddcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x179de0: 0xa0c40005
    ctx->pc = 0x179de0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x179de4: 0x3e00008
    ctx->pc = 0x179DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179DB8u: goto label_179db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179DECu;
}
