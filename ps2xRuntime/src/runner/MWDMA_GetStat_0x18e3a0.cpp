#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWDMA_GetStat
// Address: 0x18e3a0 - 0x18e3d8
void MWDMA_GetStat_0x18e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWDMA_GetStat");


    ctx->pc = 0x18e3a0u;

    // 0x18e3a0: 0x27bdffe0
    ctx->pc = 0x18e3a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e3a4: 0xffb00000
    ctx->pc = 0x18e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e3a8: 0xffbf0010
    ctx->pc = 0x18e3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e3ac: 0xc0547e4
    ctx->pc = 0x18E3ACu;
    SET_GPR_U32(ctx, 31, 0x18E3B4u);
    ctx->pc = 0x18E3B0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x151F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x151f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3B4u; }
        else if (ctx->pc != 0x18E3B4u) { ctx->pc = 0x18E3B4u; }
    }
    if (ctx->pc != 0x18E3B4u) { return; }
    ctx->pc = 0x18E3B4u;
    // 0x18e3b4: 0x40202d
    ctx->pc = 0x18e3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3b8: 0x24050001
    ctx->pc = 0x18e3b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e3bc: 0xc054a0c
    ctx->pc = 0x18E3BCu;
    SET_GPR_U32(ctx, 31, 0x18E3C4u);
    ctx->pc = 0x18E3C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x152830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x152830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3C4u; }
        else if (ctx->pc != 0x18E3C4u) { ctx->pc = 0x18E3C4u; }
    }
    if (ctx->pc != 0x18E3C4u) { return; }
    ctx->pc = 0x18E3C4u;
    // 0x18e3c4: 0xae020000
    ctx->pc = 0x18e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18e3c8: 0xdfbf0010
    ctx->pc = 0x18e3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e3cc: 0xdfb00000
    ctx->pc = 0x18e3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e3d0: 0x3e00008
    ctx->pc = 0x18E3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E3D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E3D8u;
}
