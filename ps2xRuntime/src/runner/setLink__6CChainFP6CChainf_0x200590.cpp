#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setLink__6CChainFP6CChainf
// Address: 0x200590 - 0x2005c0
void setLink__6CChainFP6CChainf_0x200590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setLink__6CChainFP6CChainf");


    ctx->pc = 0x200590u;

    // 0x200590: 0x84830024
    ctx->pc = 0x200590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x200594: 0x31880
    ctx->pc = 0x200594u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x200598: 0x641821
    ctx->pc = 0x200598u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20059c: 0xac650048
    ctx->pc = 0x20059cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
    // 0x2005a0: 0x84830024
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2005a4: 0x31880
    ctx->pc = 0x2005a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2005a8: 0x641821
    ctx->pc = 0x2005a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2005ac: 0xe46c0028
    ctx->pc = 0x2005acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2005b0: 0x84830024
    ctx->pc = 0x2005b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2005b4: 0x24630001
    ctx->pc = 0x2005b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2005b8: 0x3e00008
    ctx->pc = 0x2005B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2005BCu;
        WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2005C0u;
}
