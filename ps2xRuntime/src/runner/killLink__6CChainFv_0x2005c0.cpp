#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: killLink__6CChainFv
// Address: 0x2005c0 - 0x2005f8
void killLink__6CChainFv_0x2005c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("killLink__6CChainFv");


    ctx->pc = 0x2005c0u;

    // 0x2005c0: 0x70002e28
    ctx->pc = 0x2005c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2005c4: 0x10000006
    ctx->pc = 0x2005C4u;
    {
        const bool branch_taken_0x2005c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2005C8u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2005c4) {
            ctx->pc = 0x2005E0u;
            goto label_2005e0;
        }
    }
    ctx->pc = 0x2005CCu;
label_2005cc:
    // 0x2005cc: 0xacc00048
    ctx->pc = 0x2005ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
    // 0x2005d0: 0xacc00028
    ctx->pc = 0x2005d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x2005d4: 0x24c60004
    ctx->pc = 0x2005d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x2005d8: 0x24a50001
    ctx->pc = 0x2005d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2005dc: 0x0
    ctx->pc = 0x2005dcu;
    // NOP
label_2005e0:
    // 0x2005e0: 0x84830024
    ctx->pc = 0x2005e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2005e4: 0xa3182a
    ctx->pc = 0x2005e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x2005e8: 0x1460fff8
    ctx->pc = 0x2005E8u;
    {
        const bool branch_taken_0x2005e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2005e8) {
            ctx->pc = 0x2005CCu;
            goto label_2005cc;
        }
    }
    ctx->pc = 0x2005F0u;
    // 0x2005f0: 0x3e00008
    ctx->pc = 0x2005F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2005F4u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2005CCu: goto label_2005cc;
            case 0x2005E0u: goto label_2005e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2005F8u;
}
