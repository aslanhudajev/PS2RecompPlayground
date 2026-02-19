#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: active_player_edge
// Address: 0x207410 - 0x207474
void active_player_edge_0x207410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207410u;

    // 0x207410: 0x182d
    ctx->pc = 0x207410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207414: 0x3c020032
    ctx->pc = 0x207414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x207418: 0x24481bc0
    ctx->pc = 0x207418u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x20741c: 0x24062b00
    ctx->pc = 0x20741cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x207420: 0x2405003c
    ctx->pc = 0x207420u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    // 0x207424: 0x3c020031
    ctx->pc = 0x207424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x207428: 0x24491b98
    ctx->pc = 0x207428u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7064));
    // 0x20742c: 0x663818
    ctx->pc = 0x20742cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_207430:
    // 0x207430: 0xe81021
    ctx->pc = 0x207430u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x207434: 0x8c4200fc
    ctx->pc = 0x207434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x207438: 0x10400008
    ctx->pc = 0x207438u;
    {
        const bool branch_taken_0x207438 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20743Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x207438) {
            ctx->pc = 0x20745Cu;
            goto label_20745c;
        }
    }
    ctx->pc = 0x207440u;
    // 0x207440: 0xe91021
    ctx->pc = 0x207440u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x207444: 0x8c420000
    ctx->pc = 0x207444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207448: 0x821024
    ctx->pc = 0x207448u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20744c: 0x10400004
    ctx->pc = 0x20744Cu;
    {
        const bool branch_taken_0x20744c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x207450u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x20744c) {
            ctx->pc = 0x207460u;
            goto label_207460;
        }
    }
    ctx->pc = 0x207454u;
    // 0x207454: 0x3e00008
    ctx->pc = 0x207454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207458u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207430u: goto label_207430;
            case 0x20745Cu: goto label_20745c;
            case 0x207460u: goto label_207460;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20745Cu;
label_20745c:
    // 0x20745c: 0x24630001
    ctx->pc = 0x20745cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_207460:
    // 0x207460: 0x28620004
    ctx->pc = 0x207460u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x207464: 0x1440fff2
    ctx->pc = 0x207464u;
    {
        const bool branch_taken_0x207464 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x207468u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x207464) {
            ctx->pc = 0x207430u;
            goto label_207430;
        }
    }
    ctx->pc = 0x20746Cu;
    // 0x20746c: 0x3e00008
    ctx->pc = 0x20746Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207470u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207430u: goto label_207430;
            case 0x20745Cu: goto label_20745c;
            case 0x207460u: goto label_207460;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207474u;
}
