#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: all_plyr_new_left
// Address: 0x207370 - 0x2073b0
void all_plyr_new_left_0x207370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207370u;

    // 0x207370: 0x27bdffe0
    ctx->pc = 0x207370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207374: 0xffbf0010
    ctx->pc = 0x207374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207378: 0xffb00000
    ctx->pc = 0x207378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20737c: 0x802d
    ctx->pc = 0x20737cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207380:
    // 0x207380: 0xc081bf6
    ctx->pc = 0x207380u;
    SET_GPR_U32(ctx, 31, 0x207388u);
    ctx->pc = 0x207384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206FD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_left_0x206fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207388u; }
    }
    if (ctx->pc != 0x207388u) { return; }
    ctx->pc = 0x207388u;
    // 0x207388: 0x14400005
    ctx->pc = 0x207388u;
    {
        const bool branch_taken_0x207388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20738Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x207388) {
            ctx->pc = 0x2073A0u;
            goto label_2073a0;
        }
    }
    ctx->pc = 0x207390u;
    // 0x207390: 0x26100001
    ctx->pc = 0x207390u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x207394: 0x2a020004
    ctx->pc = 0x207394u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x207398: 0x1440fff9
    ctx->pc = 0x207398u;
    {
        const bool branch_taken_0x207398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20739Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x207398) {
            ctx->pc = 0x207380u;
            goto label_207380;
        }
    }
    ctx->pc = 0x2073A0u;
label_2073a0:
    // 0x2073a0: 0xdfbf0010
    ctx->pc = 0x2073a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2073a4: 0xdfb00000
    ctx->pc = 0x2073a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2073a8: 0x3e00008
    ctx->pc = 0x2073A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2073ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207380u: goto label_207380;
            case 0x2073A0u: goto label_2073a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2073B0u;
}
