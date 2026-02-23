#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyStartSeamless
// Address: 0x18e478 - 0x18e4b0
void mwPlyStartSeamless_0x18e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyStartSeamless");


    ctx->pc = 0x18e478u;

    // 0x18e478: 0x27bdffe0
    ctx->pc = 0x18e478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e47c: 0x24050001
    ctx->pc = 0x18e47cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e480: 0xffb00000
    ctx->pc = 0x18e480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e484: 0xffbf0010
    ctx->pc = 0x18e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e488: 0xc0633de
    ctx->pc = 0x18E488u;
    SET_GPR_U32(ctx, 31, 0x18E490u);
    ctx->pc = 0x18E48Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18CF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyLinkStm_0x18cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E490u; }
        else if (ctx->pc != 0x18E490u) { ctx->pc = 0x18E490u; }
    }
    if (ctx->pc != 0x18E490u) { return; }
    ctx->pc = 0x18E490u;
    // 0x18e490: 0x8e050040
    ctx->pc = 0x18e490u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18e494: 0xc063346
    ctx->pc = 0x18E494u;
    SET_GPR_U32(ctx, 31, 0x18E49Cu);
    ctx->pc = 0x18E498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18CD18u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdStartSj_0x18cd18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E49Cu; }
        else if (ctx->pc != 0x18E49Cu) { ctx->pc = 0x18E49Cu; }
    }
    if (ctx->pc != 0x18E49Cu) { return; }
    ctx->pc = 0x18E49Cu;
    // 0x18e49c: 0x8e040080
    ctx->pc = 0x18e49cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x18e4a0: 0xdfbf0010
    ctx->pc = 0x18e4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e4a4: 0xdfb00000
    ctx->pc = 0x18e4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e4a8: 0x805e872
    ctx->pc = 0x18E4A8u;
    ctx->pc = 0x18E4ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17A1C8u;
    LSC_Start_0x17a1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x18E4B0u;
}
