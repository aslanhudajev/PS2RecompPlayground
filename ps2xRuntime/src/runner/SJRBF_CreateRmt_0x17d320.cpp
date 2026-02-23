#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_CreateRmt
// Address: 0x17d320 - 0x17d370
void SJRBF_CreateRmt_0x17d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_CreateRmt");


    ctx->pc = 0x17d320u;

    // 0x17d320: 0x27bdffe0
    ctx->pc = 0x17d320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d324: 0x3c02002e
    ctx->pc = 0x17d324u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17d328: 0x244318c0
    ctx->pc = 0x17d328u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 6336));
    // 0x17d32c: 0xac4418c0
    ctx->pc = 0x17d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6336), GPR_U32(ctx, 4));
    // 0x17d330: 0xffb00000
    ctx->pc = 0x17d330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d334: 0x24040020
    ctx->pc = 0x17d334u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x17d338: 0x3c10002e
    ctx->pc = 0x17d338u;
    SET_GPR_U32(ctx, 16, ((uint32_t)46 << 16));
    // 0x17d33c: 0xac650004
    ctx->pc = 0x17d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x17d340: 0xac660008
    ctx->pc = 0x17d340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x17d344: 0x260719c0
    ctx->pc = 0x17d344u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 6592));
    // 0x17d348: 0xffbf0010
    ctx->pc = 0x17d348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d34c: 0x60282d
    ctx->pc = 0x17d34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d350: 0x24060003
    ctx->pc = 0x17d350u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d354: 0xc05dcd2
    ctx->pc = 0x17D354u;
    SET_GPR_U32(ctx, 31, 0x17D35Cu);
    ctx->pc = 0x17D358u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D35Cu; }
        else if (ctx->pc != 0x17D35Cu) { ctx->pc = 0x17D35Cu; }
    }
    if (ctx->pc != 0x17D35Cu) { return; }
    ctx->pc = 0x17D35Cu;
    // 0x17d35c: 0x8e0219c0
    ctx->pc = 0x17d35cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6592)));
    // 0x17d360: 0xdfbf0010
    ctx->pc = 0x17d360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d364: 0xdfb00000
    ctx->pc = 0x17d364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d368: 0x3e00008
    ctx->pc = 0x17D368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D36Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D370u;
}
