#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSPR_SaveSprMem
// Address: 0x18e288 - 0x18e2f0
void MWSPR_SaveSprMem_0x18e288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSPR_SaveSprMem");


    ctx->pc = 0x18e288u;

    // 0x18e288: 0x27bdffc0
    ctx->pc = 0x18e288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e28c: 0xffb10010
    ctx->pc = 0x18e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18e290: 0x80882d
    ctx->pc = 0x18e290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e294: 0xffb20020
    ctx->pc = 0x18e294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18e298: 0xffb00000
    ctx->pc = 0x18e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e29c: 0xc0902d
    ctx->pc = 0x18e29cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e2a0: 0xa0802d
    ctx->pc = 0x18e2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e2a4: 0xffbf0030
    ctx->pc = 0x18e2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18e2a8: 0xc0547e4
    ctx->pc = 0x18E2A8u;
    SET_GPR_U32(ctx, 31, 0x18E2B0u);
    ctx->pc = 0x18E2ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x151F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x151f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2B0u; }
        else if (ctx->pc != 0x18E2B0u) { ctx->pc = 0x18E2B0u; }
    }
    if (ctx->pc != 0x18E2B0u) { return; }
    ctx->pc = 0x18E2B0u;
    // 0x18e2b0: 0x2403ffff
    ctx->pc = 0x18e2b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e2b4: 0x2606000f
    ctx->pc = 0x18e2b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 15));
    // 0x18e2b8: 0x70182a
    ctx->pc = 0x18e2b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x18e2bc: 0xac510080
    ctx->pc = 0x18e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 17));
    // 0x18e2c0: 0x203300b
    ctx->pc = 0x18e2c0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 16));
    // 0x18e2c4: 0x240282d
    ctx->pc = 0x18e2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e2c8: 0x40202d
    ctx->pc = 0x18e2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e2cc: 0xc054994
    ctx->pc = 0x18E2CCu;
    SET_GPR_U32(ctx, 31, 0x18E2D4u);
    ctx->pc = 0x18E2D0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    ctx->pc = 0x152650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaRecvN_0x152650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E2D4u; }
        else if (ctx->pc != 0x18E2D4u) { ctx->pc = 0x18E2D4u; }
    }
    if (ctx->pc != 0x18E2D4u) { return; }
    ctx->pc = 0x18E2D4u;
    // 0x18e2d4: 0xdfbf0030
    ctx->pc = 0x18e2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e2d8: 0x102d
    ctx->pc = 0x18e2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e2dc: 0xdfb20020
    ctx->pc = 0x18e2dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e2e0: 0xdfb10010
    ctx->pc = 0x18e2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e2e4: 0xdfb00000
    ctx->pc = 0x18e2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e2e8: 0x3e00008
    ctx->pc = 0x18E2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E2ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E2F0u;
}
