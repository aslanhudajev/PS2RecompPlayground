#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu0SRegs
// Address: 0x2b3b20 - 0x2b3b98
void pbGetVu0SRegs_0x2b3b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3b20u;

    // 0x2b3b20: 0x24840240
    ctx->pc = 0x2b3b20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 576));
    // 0x2b3b24: 0x0
    ctx->pc = 0x2b3b24u;
    // NOP
    // 0x2b3b28: 0x0
    ctx->pc = 0x2b3b28u;
    // NOP
    // 0x2b3b2c: 0x0
    ctx->pc = 0x2b3b2cu;
    // NOP
    // 0x2b3b30: 0x0
    ctx->pc = 0x2b3b30u;
    // NOP
    // 0x2b3b34: 0x0
    ctx->pc = 0x2b3b34u;
    // NOP
    // 0x2b3b38: 0x0
    ctx->pc = 0x2b3b38u;
    // NOP
    // 0x2b3b3c: 0x48428000
    ctx->pc = 0x2b3b3cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat4);
    // 0x2b3b40: 0xac820000
    ctx->pc = 0x2b3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b3b44: 0x48428800
    ctx->pc = 0x2b3b44u;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar3);
    // 0x2b3b48: 0xac820004
    ctx->pc = 0x2b3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2b3b4c: 0x48429000
    ctx->pc = 0x2b3b4cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst4);
    // 0x2b3b50: 0xac820008
    ctx->pc = 0x2b3b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b3b54: 0x4842a000
    ctx->pc = 0x2b3b54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_acc));
    // 0x2b3b58: 0xac82000c
    ctx->pc = 0x2b3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2b3b5c: 0x4842a800
    ctx->pc = 0x2b3b5cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_info);
    // 0x2b3b60: 0xac820010
    ctx->pc = 0x2b3b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2b3b64: 0x4842b000
    ctx->pc = 0x2b3b64u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags2);
    // 0x2b3b68: 0xac820014
    ctx->pc = 0x2b3b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2b3b6c: 0x48420000
    ctx->pc = 0x2b3b6cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x2b3b70: 0xac820018
    ctx->pc = 0x2b3b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x2b3b74: 0x4842d000
    ctx->pc = 0x2b3b74u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->vu0_p);
    // 0x2b3b78: 0xac82001c
    ctx->pc = 0x2b3b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2b3b7c: 0x0
    ctx->pc = 0x2b3b7cu;
    // NOP
    // 0x2b3b80: 0x0
    ctx->pc = 0x2b3b80u;
    // NOP
    // 0x2b3b84: 0x0
    ctx->pc = 0x2b3b84u;
    // NOP
    // 0x2b3b88: 0x0
    ctx->pc = 0x2b3b88u;
    // NOP
    // 0x2b3b8c: 0x0
    ctx->pc = 0x2b3b8cu;
    // NOP
    // 0x2b3b90: 0x3e00008
    ctx->pc = 0x2B3B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3B98u;
}
