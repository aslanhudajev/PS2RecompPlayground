#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyElemBitRate
// Address: 0x1a09a0 - 0x1a0a10
void SFH_AnlyElemBitRate_0x1a09a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyElemBitRate");


    ctx->pc = 0x1a09a0u;

    // 0x1a09a0: 0x27bdffc0
    ctx->pc = 0x1a09a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a09a4: 0xffb10010
    ctx->pc = 0x1a09a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a09a8: 0xffb20020
    ctx->pc = 0x1a09a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a09ac: 0x30b100ff
    ctx->pc = 0x1a09acu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a09b0: 0xffb00000
    ctx->pc = 0x1a09b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a09b4: 0xc0902d
    ctx->pc = 0x1a09b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09b8: 0xffbf0030
    ctx->pc = 0x1a09b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a09bc: 0xc0681d0
    ctx->pc = 0x1A09BCu;
    SET_GPR_U32(ctx, 31, 0x1A09C4u);
    ctx->pc = 0x1A09C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09C4u; }
        else if (ctx->pc != 0x1A09C4u) { ctx->pc = 0x1A09C4u; }
    }
    if (ctx->pc != 0x1A09C4u) { return; }
    ctx->pc = 0x1A09C4u;
    // 0x1a09c4: 0x40802d
    ctx->pc = 0x1a09c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09c8: 0x1200000b
    ctx->pc = 0x1A09C8u;
    {
        const bool branch_taken_0x1a09c8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A09CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a09c8) {
            ctx->pc = 0x1A09F8u;
            goto label_1a09f8;
        }
    }
    ctx->pc = 0x1A09D0u;
    // 0x1a09d0: 0xc0683c8
    ctx->pc = 0x1A09D0u;
    SET_GPR_U32(ctx, 31, 0x1A09D8u);
    ctx->pc = 0x1A09D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkStmId_0x1a0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A09D8u; }
        else if (ctx->pc != 0x1A09D8u) { ctx->pc = 0x1A09D8u; }
    }
    if (ctx->pc != 0x1A09D8u) { return; }
    ctx->pc = 0x1A09D8u;
    // 0x1a09d8: 0x240300e0
    ctx->pc = 0x1a09d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a09dc: 0x14430006
    ctx->pc = 0x1A09DCu;
    {
        const bool branch_taken_0x1a09dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A09E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a09dc) {
            ctx->pc = 0x1A09F8u;
            goto label_1a09f8;
        }
    }
    ctx->pc = 0x1A09E4u;
    // 0x1a09e4: 0x9603001a
    ctx->pc = 0x1a09e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x1a09e8: 0x24040190
    ctx->pc = 0x1a09e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 400));
    // 0x1a09ec: 0x24020001
    ctx->pc = 0x1a09ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a09f0: 0x641818
    ctx->pc = 0x1a09f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1a09f4: 0xae430000
    ctx->pc = 0x1a09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a09f8:
    // 0x1a09f8: 0xdfbf0030
    ctx->pc = 0x1a09f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a09fc: 0xdfb20020
    ctx->pc = 0x1a09fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0a00: 0xdfb10010
    ctx->pc = 0x1a0a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0a04: 0xdfb00000
    ctx->pc = 0x1a0a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0a08: 0x3e00008
    ctx->pc = 0x1A0A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0A0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A09F8u: goto label_1a09f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0A10u;
}
