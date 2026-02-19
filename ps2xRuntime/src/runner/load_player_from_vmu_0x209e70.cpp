#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: load_player_from_vmu
// Address: 0x209e70 - 0x209ea4
void load_player_from_vmu_0x209e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x209e70u;

    // 0x209e70: 0x27bdffe0
    ctx->pc = 0x209e70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209e74: 0xffbe0010
    ctx->pc = 0x209e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x209e78: 0x3a0f02d
    ctx->pc = 0x209e78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e7c: 0xafc40000
    ctx->pc = 0x209e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x209e80: 0xafc50004
    ctx->pc = 0x209e80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x209e84: 0x102d
    ctx->pc = 0x209e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e88: 0x10000001
    ctx->pc = 0x209E88u;
    {
        const bool branch_taken_0x209e88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209e88) {
            ctx->pc = 0x209E90u;
            goto label_209e90;
        }
    }
    ctx->pc = 0x209E90u;
label_209e90:
    // 0x209e90: 0x3c0e82d
    ctx->pc = 0x209e90u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e94: 0xdfbe0010
    ctx->pc = 0x209e94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209e98: 0x27bd0020
    ctx->pc = 0x209e98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x209e9c: 0x3e00008
    ctx->pc = 0x209E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209E90u: goto label_209e90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209EA4u;
}
