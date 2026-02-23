#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: VolumeAD__Fsi
// Address: 0x1ef440 - 0x1ef48c
void VolumeAD__Fsi_0x1ef440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("VolumeAD__Fsi");


    ctx->pc = 0x1ef440u;

    // 0x1ef440: 0x41c3c
    ctx->pc = 0x1ef440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ef444: 0x31c3f
    ctx->pc = 0x1ef444u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef448: 0x28610040
    ctx->pc = 0x1ef448u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 64));
    // 0x1ef44c: 0x10200007
    ctx->pc = 0x1EF44Cu;
    {
        const bool branch_taken_0x1ef44c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF450u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ef44c) {
            ctx->pc = 0x1EF46Cu;
            goto label_1ef46c;
        }
    }
    ctx->pc = 0x1EF454u;
    // 0x1ef454: 0x10a00003
    ctx->pc = 0x1EF454u;
    {
        const bool branch_taken_0x1ef454 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF458u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ef454) {
            ctx->pc = 0x1EF464u;
            goto label_1ef464;
        }
    }
    ctx->pc = 0x1EF45Cu;
    // 0x1ef45c: 0x10000009
    ctx->pc = 0x1EF45Cu;
    {
        const bool branch_taken_0x1ef45c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF460u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1ef45c) {
            ctx->pc = 0x1EF484u;
            goto label_1ef484;
        }
    }
    ctx->pc = 0x1EF464u;
label_1ef464:
    // 0x1ef464: 0x10000007
    ctx->pc = 0x1EF464u;
    {
        const bool branch_taken_0x1ef464 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ef464) {
            ctx->pc = 0x1EF484u;
            goto label_1ef484;
        }
    }
    ctx->pc = 0x1EF46Cu;
label_1ef46c:
    // 0x1ef46c: 0x286100c1
    ctx->pc = 0x1ef46cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 193));
    // 0x1ef470: 0x14200004
    ctx->pc = 0x1EF470u;
    {
        const bool branch_taken_0x1ef470 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ef470) {
            ctx->pc = 0x1EF484u;
            goto label_1ef484;
        }
    }
    ctx->pc = 0x1EF478u;
    // 0x1ef478: 0x10a00002
    ctx->pc = 0x1EF478u;
    {
        const bool branch_taken_0x1ef478 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF47Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1ef478) {
            ctx->pc = 0x1EF484u;
            goto label_1ef484;
        }
    }
    ctx->pc = 0x1EF480u;
    // 0x1ef480: 0x24020001
    ctx->pc = 0x1ef480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1ef484:
    // 0x1ef484: 0x3e00008
    ctx->pc = 0x1EF484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF464u: goto label_1ef464;
            case 0x1EF46Cu: goto label_1ef46c;
            case 0x1EF484u: goto label_1ef484;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF48Cu;
}
