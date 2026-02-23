#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_Tc2TimeN
// Address: 0x19e3a8 - 0x19e3fc
void sftim_Tc2TimeN_0x19e3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_Tc2TimeN");


    ctx->pc = 0x19e3a8u;

    // 0x19e3a8: 0x24030e10
    ctx->pc = 0x19e3a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3600));
    // 0x19e3ac: 0x240a003c
    ctx->pc = 0x19e3acu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 60));
    // 0x19e3b0: 0x831818
    ctx->pc = 0x19e3b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19e3b4: 0x8ca20008
    ctx->pc = 0x19e3b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19e3b8: 0x708a5018
    ctx->pc = 0x19e3b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x19e3bc: 0x8ca9000c
    ctx->pc = 0x19e3bcu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19e3c0: 0x8cab0018
    ctx->pc = 0x19e3c0u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x19e3c4: 0x240c03e8
    ctx->pc = 0x19e3c4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19e3c8: 0x8ca80010
    ctx->pc = 0x19e3c8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19e3cc: 0x431018
    ctx->pc = 0x19e3ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19e3d0: 0x8ca30014
    ctx->pc = 0x19e3d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x19e3d4: 0x12a4818
    ctx->pc = 0x19e3d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)(uint32_t)result); }
    // 0x19e3d8: 0x1044018
    ctx->pc = 0x19e3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x19e3dc: 0x6b1821
    ctx->pc = 0x19e3dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x19e3e0: 0x6c1818
    ctx->pc = 0x19e3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19e3e4: 0x491021
    ctx->pc = 0x19e3e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x19e3e8: 0x481021
    ctx->pc = 0x19e3e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19e3ec: 0x431021
    ctx->pc = 0x19e3ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e3f0: 0xacc20000
    ctx->pc = 0x19e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x19e3f4: 0x3e00008
    ctx->pc = 0x19E3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E3F8u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E3FCu;
}
