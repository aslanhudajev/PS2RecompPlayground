#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetWorldSound
// Address: 0x25c4b0 - 0x25c4e8
void GetWorldSound_0x25c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25c4b0u;

    // 0x25c4b0: 0x4800009
    ctx->pc = 0x25C4B0u;
    {
        const bool branch_taken_0x25c4b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25C4B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25c4b0) {
            ctx->pc = 0x25C4D8u;
            goto label_25c4d8;
        }
    }
    ctx->pc = 0x25C4B8u;
    // 0x25c4b8: 0x8c42e7c0
    ctx->pc = 0x25c4b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x25c4bc: 0x8c43002c
    ctx->pc = 0x25c4bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25c4c0: 0x24020018
    ctx->pc = 0x25c4c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x25c4c4: 0x821018
    ctx->pc = 0x25c4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25c4c8: 0x432021
    ctx->pc = 0x25c4c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c4cc: 0x8c820010
    ctx->pc = 0x25c4ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25c4d0: 0x4410003
    ctx->pc = 0x25C4D0u;
    {
        const bool branch_taken_0x25c4d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25C4D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25c4d0) {
            ctx->pc = 0x25C4E0u;
            goto label_25c4e0;
        }
    }
    ctx->pc = 0x25C4D8u;
label_25c4d8:
    // 0x25c4d8: 0x3e00008
    ctx->pc = 0x25C4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C4DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C4D8u: goto label_25c4d8;
            case 0x25C4E0u: goto label_25c4e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25C4E0u;
label_25c4e0:
    // 0x25c4e0: 0x3e00008
    ctx->pc = 0x25C4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C4D8u: goto label_25c4d8;
            case 0x25C4E0u: goto label_25c4e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25C4E8u;
}
