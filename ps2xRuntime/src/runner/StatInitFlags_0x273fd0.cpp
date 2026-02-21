#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StatInitFlags
// Address: 0x273fd0 - 0x27400c
void StatInitFlags_0x273fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x273fd0u;

    // 0x273fd0: 0x3c02003c
    ctx->pc = 0x273fd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x273fd4: 0xa04039f0
    ctx->pc = 0x273fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14832), (uint8_t)GPR_U32(ctx, 0));
    // 0x273fd8: 0x182d
    ctx->pc = 0x273fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fdc: 0x3c02003c
    ctx->pc = 0x273fdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x273fe0: 0x244439f8
    ctx->pc = 0x273fe0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14840));
    // 0x273fe4: 0x0
    ctx->pc = 0x273fe4u;
    // NOP
label_273fe8:
    // 0x273fe8: 0x641021
    ctx->pc = 0x273fe8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273fec: 0xa0400000
    ctx->pc = 0x273fecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x273ff0: 0x24630001
    ctx->pc = 0x273ff0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x273ff4: 0x28620004
    ctx->pc = 0x273ff4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x273ff8: 0x0
    ctx->pc = 0x273ff8u;
    // NOP
    // 0x273ffc: 0x1440fffa
    ctx->pc = 0x273FFCu;
    {
        const bool branch_taken_0x273ffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x273ffc) {
            ctx->pc = 0x273FE8u;
            goto label_273fe8;
        }
    }
    ctx->pc = 0x274004u;
    // 0x274004: 0x3e00008
    ctx->pc = 0x274004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273FE8u: goto label_273fe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27400Cu;
}
