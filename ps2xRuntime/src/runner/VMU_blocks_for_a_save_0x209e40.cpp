#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: VMU_blocks_for_a_save
// Address: 0x209e40 - 0x209e6c
void VMU_blocks_for_a_save_0x209e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x209e40u;

    // 0x209e40: 0x27bdfff0
    ctx->pc = 0x209e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209e44: 0xffbe0000
    ctx->pc = 0x209e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x209e48: 0x3a0f02d
    ctx->pc = 0x209e48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e4c: 0x24020003
    ctx->pc = 0x209e4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x209e50: 0x10000001
    ctx->pc = 0x209E50u;
    {
        const bool branch_taken_0x209e50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209e50) {
            ctx->pc = 0x209E58u;
            goto label_209e58;
        }
    }
    ctx->pc = 0x209E58u;
label_209e58:
    // 0x209e58: 0x3c0e82d
    ctx->pc = 0x209e58u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e5c: 0xdfbe0000
    ctx->pc = 0x209e5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209e60: 0x27bd0010
    ctx->pc = 0x209e60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x209e64: 0x3e00008
    ctx->pc = 0x209E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209E58u: goto label_209e58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209E6Cu;
}
