#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_Create
// Address: 0x1882a0 - 0x1882e8
void MPV_Create_0x1882a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_Create");


    ctx->pc = 0x1882a0u;

    // 0x1882a0: 0x27bdffe0
    ctx->pc = 0x1882a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1882a4: 0xffb00000
    ctx->pc = 0x1882a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1882a8: 0xffbf0010
    ctx->pc = 0x1882a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1882ac: 0xc0620ba
    ctx->pc = 0x1882ACu;
    SET_GPR_U32(ctx, 31, 0x1882B4u);
    ctx->pc = 0x1882E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_SearchFreeHn_0x1882e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882B4u; }
        else if (ctx->pc != 0x1882B4u) { ctx->pc = 0x1882B4u; }
    }
    if (ctx->pc != 0x1882B4u) { return; }
    ctx->pc = 0x1882B4u;
    // 0x1882b4: 0x40802d
    ctx->pc = 0x1882b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882b8: 0x16000003
    ctx->pc = 0x1882B8u;
    {
        const bool branch_taken_0x1882b8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1882BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1882b8) {
            ctx->pc = 0x1882C8u;
            goto label_1882c8;
        }
    }
    ctx->pc = 0x1882C0u;
    // 0x1882c0: 0x10000005
    ctx->pc = 0x1882C0u;
    {
        const bool branch_taken_0x1882c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1882C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1882c0) {
            ctx->pc = 0x1882D8u;
            goto label_1882d8;
        }
    }
    ctx->pc = 0x1882C8u;
label_1882c8:
    // 0x1882c8: 0xc062106
    ctx->pc = 0x1882C8u;
    SET_GPR_U32(ctx, 31, 0x1882D0u);
    ctx->pc = 0x1882CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6416));
    ctx->pc = 0x188418u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_AllocLc_0x188418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882D0u; }
        else if (ctx->pc != 0x1882D0u) { ctx->pc = 0x1882D0u; }
    }
    if (ctx->pc != 0x1882D0u) { return; }
    ctx->pc = 0x1882D0u;
    // 0x1882d0: 0xc0620cc
    ctx->pc = 0x1882D0u;
    SET_GPR_U32(ctx, 31, 0x1882D8u);
    ctx->pc = 0x1882D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188330u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_InitHn_0x188330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882D8u; }
        else if (ctx->pc != 0x1882D8u) { ctx->pc = 0x1882D8u; }
    }
    if (ctx->pc != 0x1882D8u) { return; }
    ctx->pc = 0x1882D8u;
label_1882d8:
    // 0x1882d8: 0xdfbf0010
    ctx->pc = 0x1882d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1882dc: 0xdfb00000
    ctx->pc = 0x1882dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1882e0: 0x3e00008
    ctx->pc = 0x1882E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1882E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1882C8u: goto label_1882c8;
            case 0x1882D8u: goto label_1882d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1882E8u;
}
