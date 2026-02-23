#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _copyRefImage
// Address: 0x15ff08 - 0x15ff68
void _copyRefImage_0x15ff08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_copyRefImage");


    ctx->pc = 0x15ff08u;

    // 0x15ff08: 0x240c0018
    ctx->pc = 0x15ff08u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 24));
    // 0x15ff0c: 0x3c0a0016
    ctx->pc = 0x15ff0cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)22 << 16));
    // 0x15ff10: 0x254aff50
    ctx->pc = 0x15ff10u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967120));
    // 0x15ff14: 0x794b0000
    ctx->pc = 0x15ff14u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_15ff18:
    // 0x15ff18: 0x78a80000
    ctx->pc = 0x15ff18u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15ff1c: 0x218cffff
    ctx->pc = 0x15ff1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x15ff20: 0x710b41e8
    ctx->pc = 0x15ff20u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x15ff24: 0x78a90010
    ctx->pc = 0x15ff24u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15ff28: 0x710041c8
    ctx->pc = 0x15ff28u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x15ff2c: 0x712b49e8
    ctx->pc = 0x15ff2cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x15ff30: 0x24a50020
    ctx->pc = 0x15ff30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x15ff34: 0x712049c8
    ctx->pc = 0x15ff34u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x15ff38: 0x24840010
    ctx->pc = 0x15ff38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x15ff3c: 0x712856c8
    ctx->pc = 0x15ff3cu;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15ff40: 0x1580fff5
    ctx->pc = 0x15FF40u;
    {
        const bool branch_taken_0x15ff40 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FF44u;
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        if (branch_taken_0x15ff40) {
            ctx->pc = 0x15FF18u;
            goto label_15ff18;
        }
    }
    ctx->pc = 0x15FF48u;
    // 0x15ff48: 0x0
    ctx->pc = 0x15ff48u;
    // NOP
    // 0x15ff4c: 0x0
    ctx->pc = 0x15ff4cu;
    // NOP
    // 0x15ff50: 0xff00ff
    ctx->pc = 0x15ff50u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x15ff54: 0xff00ff
    ctx->pc = 0x15ff54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x15ff58: 0xff00ff
    ctx->pc = 0x15ff58u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x15ff5c: 0xff00ff
    ctx->pc = 0x15ff5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x15ff60: 0x3e00008
    ctx->pc = 0x15FF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FF18u: goto label_15ff18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FF68u;
}
