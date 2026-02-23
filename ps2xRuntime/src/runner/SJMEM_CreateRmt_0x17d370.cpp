#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_CreateRmt
// Address: 0x17d370 - 0x17d3bc
void SJMEM_CreateRmt_0x17d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_CreateRmt");


    ctx->pc = 0x17d370u;

    // 0x17d370: 0x27bdffe0
    ctx->pc = 0x17d370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d374: 0x3c02002e
    ctx->pc = 0x17d374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17d378: 0x244318c0
    ctx->pc = 0x17d378u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 6336));
    // 0x17d37c: 0xac4418c0
    ctx->pc = 0x17d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6336), GPR_U32(ctx, 4));
    // 0x17d380: 0xffb00000
    ctx->pc = 0x17d380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d384: 0x24040021
    ctx->pc = 0x17d384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 33));
    // 0x17d388: 0x3c10002e
    ctx->pc = 0x17d388u;
    SET_GPR_U32(ctx, 16, ((uint32_t)46 << 16));
    // 0x17d38c: 0xac650004
    ctx->pc = 0x17d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x17d390: 0x260719c0
    ctx->pc = 0x17d390u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 6592));
    // 0x17d394: 0xffbf0010
    ctx->pc = 0x17d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d398: 0x60282d
    ctx->pc = 0x17d398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d39c: 0x24060002
    ctx->pc = 0x17d39cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d3a0: 0xc05dcd2
    ctx->pc = 0x17D3A0u;
    SET_GPR_U32(ctx, 31, 0x17D3A8u);
    ctx->pc = 0x17D3A4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3A8u; }
        else if (ctx->pc != 0x17D3A8u) { ctx->pc = 0x17D3A8u; }
    }
    if (ctx->pc != 0x17D3A8u) { return; }
    ctx->pc = 0x17D3A8u;
    // 0x17d3a8: 0x8e0219c0
    ctx->pc = 0x17d3a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6592)));
    // 0x17d3ac: 0xdfbf0010
    ctx->pc = 0x17d3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d3b0: 0xdfb00000
    ctx->pc = 0x17d3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d3b4: 0x3e00008
    ctx->pc = 0x17D3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D3B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D3BCu;
}
