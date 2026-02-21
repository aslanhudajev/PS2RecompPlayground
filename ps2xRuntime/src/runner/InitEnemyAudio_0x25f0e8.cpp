#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitEnemyAudio
// Address: 0x25f0e8 - 0x25f134
void InitEnemyAudio_0x25f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25f0e8u;

    // 0x25f0e8: 0x182d
    ctx->pc = 0x25f0e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0ec: 0x3c02003c
    ctx->pc = 0x25f0ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25f0f0: 0x24452f88
    ctx->pc = 0x25f0f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12168));
    // 0x25f0f4: 0x2404ffff
    ctx->pc = 0x25f0f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_25f0f8:
    // 0x25f0f8: 0x31080
    ctx->pc = 0x25f0f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f0fc: 0x451021
    ctx->pc = 0x25f0fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25f100: 0xac440000
    ctx->pc = 0x25f100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x25f104: 0x24630001
    ctx->pc = 0x25f104u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x25f108: 0x2862002d
    ctx->pc = 0x25f108u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 45));
    // 0x25f10c: 0x1440fffa
    ctx->pc = 0x25F10Cu;
    {
        const bool branch_taken_0x25f10c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25f10c) {
            ctx->pc = 0x25F0F8u;
            goto label_25f0f8;
        }
    }
    ctx->pc = 0x25F114u;
    // 0x25f114: 0x3c020034
    ctx->pc = 0x25f114u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25f118: 0x2403ffff
    ctx->pc = 0x25f118u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f11c: 0xac43dab0
    ctx->pc = 0x25f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957744), GPR_U32(ctx, 3));
    // 0x25f120: 0x3c020034
    ctx->pc = 0x25f120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25f124: 0xac43dab4
    ctx->pc = 0x25f124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957748), GPR_U32(ctx, 3));
    // 0x25f128: 0x3c020034
    ctx->pc = 0x25f128u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25f12c: 0x3e00008
    ctx->pc = 0x25F12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F130u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957752), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25F0F8u: goto label_25f0f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25F134u;
}
