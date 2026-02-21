#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: all_plyr_new_right
// Address: 0x2073b0 - 0x2073f0
void all_plyr_new_right_0x2073b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2073b0u;

    // 0x2073b0: 0x27bdffe0
    ctx->pc = 0x2073b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2073b4: 0xffbf0010
    ctx->pc = 0x2073b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2073b8: 0xffb00000
    ctx->pc = 0x2073b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2073bc: 0x802d
    ctx->pc = 0x2073bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2073c0:
    // 0x2073c0: 0xc081bfe
    ctx->pc = 0x2073C0u;
    SET_GPR_U32(ctx, 31, 0x2073C8u);
    ctx->pc = 0x2073C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_right_0x206ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2073C8u; }
    }
    if (ctx->pc != 0x2073C8u) { return; }
    ctx->pc = 0x2073C8u;
    // 0x2073c8: 0x14400005
    ctx->pc = 0x2073C8u;
    {
        const bool branch_taken_0x2073c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2073CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2073c8) {
            ctx->pc = 0x2073E0u;
            goto label_2073e0;
        }
    }
    ctx->pc = 0x2073D0u;
    // 0x2073d0: 0x26100001
    ctx->pc = 0x2073d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2073d4: 0x2a020004
    ctx->pc = 0x2073d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2073d8: 0x1440fff9
    ctx->pc = 0x2073D8u;
    {
        const bool branch_taken_0x2073d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2073DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2073d8) {
            ctx->pc = 0x2073C0u;
            goto label_2073c0;
        }
    }
    ctx->pc = 0x2073E0u;
label_2073e0:
    // 0x2073e0: 0xdfbf0010
    ctx->pc = 0x2073e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2073e4: 0xdfb00000
    ctx->pc = 0x2073e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2073e8: 0x3e00008
    ctx->pc = 0x2073E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2073ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2073C0u: goto label_2073c0;
            case 0x2073E0u: goto label_2073e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2073F0u;
}
