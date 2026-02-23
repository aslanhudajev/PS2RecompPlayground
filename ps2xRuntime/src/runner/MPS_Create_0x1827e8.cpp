#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_Create
// Address: 0x1827e8 - 0x18281c
void MPS_Create_0x1827e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_Create");


    ctx->pc = 0x1827e8u;

    // 0x1827e8: 0x27bdfff0
    ctx->pc = 0x1827e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1827ec: 0xffbf0000
    ctx->pc = 0x1827ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1827f0: 0xc060a08
    ctx->pc = 0x1827F0u;
    SET_GPR_U32(ctx, 31, 0x1827F8u);
    ctx->pc = 0x182820u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_SearchFreeHn_0x182820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1827F8u; }
        else if (ctx->pc != 0x1827F8u) { ctx->pc = 0x1827F8u; }
    }
    if (ctx->pc != 0x1827F8u) { return; }
    ctx->pc = 0x1827F8u;
    // 0x1827f8: 0x14400003
    ctx->pc = 0x1827F8u;
    {
        const bool branch_taken_0x1827f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1827f8) {
            ctx->pc = 0x182808u;
            goto label_182808;
        }
    }
    ctx->pc = 0x182800u;
    // 0x182800: 0x10000003
    ctx->pc = 0x182800u;
    {
        const bool branch_taken_0x182800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182804u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182800) {
            ctx->pc = 0x182810u;
            goto label_182810;
        }
    }
    ctx->pc = 0x182808u;
label_182808:
    // 0x182808: 0xc060a1a
    ctx->pc = 0x182808u;
    SET_GPR_U32(ctx, 31, 0x182810u);
    ctx->pc = 0x18280Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182868u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_InitHn_0x182868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182810u; }
        else if (ctx->pc != 0x182810u) { ctx->pc = 0x182810u; }
    }
    if (ctx->pc != 0x182810u) { return; }
    ctx->pc = 0x182810u;
label_182810:
    // 0x182810: 0xdfbf0000
    ctx->pc = 0x182810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182814: 0x3e00008
    ctx->pc = 0x182814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182818u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182808u: goto label_182808;
            case 0x182810u: goto label_182810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18281Cu;
}
