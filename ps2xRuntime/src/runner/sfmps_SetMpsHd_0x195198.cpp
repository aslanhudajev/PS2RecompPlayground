#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_SetMpsHd
// Address: 0x195198 - 0x195240
void sfmps_SetMpsHd_0x195198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_SetMpsHd");


    ctx->pc = 0x195198u;

    // 0x195198: 0x27bdffe0
    ctx->pc = 0x195198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19519c: 0xffb00000
    ctx->pc = 0x19519cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1951a0: 0xffbf0010
    ctx->pc = 0x1951a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1951a4: 0xc065590
    ctx->pc = 0x1951A4u;
    SET_GPR_U32(ctx, 31, 0x1951ACu);
    ctx->pc = 0x1951A8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_GetHd_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951ACu; }
        else if (ctx->pc != 0x1951ACu) { ctx->pc = 0x1951ACu; }
    }
    if (ctx->pc != 0x1951ACu) { return; }
    ctx->pc = 0x1951ACu;
    // 0x1951ac: 0x40282d
    ctx->pc = 0x1951acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951b0: 0x10a0001f
    ctx->pc = 0x1951B0u;
    {
        const bool branch_taken_0x1951b0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1951B4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 12384));
        if (branch_taken_0x1951b0) {
            ctx->pc = 0x195230u;
            goto label_195230;
        }
    }
    ctx->pc = 0x1951B8u;
    // 0x1951b8: 0x3c027fff
    ctx->pc = 0x1951b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1951bc: 0x8cc30010
    ctx->pc = 0x1951bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1951c0: 0x26070a94
    ctx->pc = 0x1951c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 2708));
    // 0x1951c4: 0x3442ffff
    ctx->pc = 0x1951c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1951c8: 0x10620019
    ctx->pc = 0x1951C8u;
    {
        const bool branch_taken_0x1951c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1951CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2304));
        if (branch_taken_0x1951c8) {
            ctx->pc = 0x195230u;
            goto label_195230;
        }
    }
    ctx->pc = 0x1951D0u;
    // 0x1951d0: 0x8ca20018
    ctx->pc = 0x1951d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1951d4: 0x621023
    ctx->pc = 0x1951d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1951d8: 0xace20114
    ctx->pc = 0x1951d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 276), GPR_U32(ctx, 2));
    // 0x1951dc: 0x8ca30000
    ctx->pc = 0x1951dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1951e0: 0x14600014
    ctx->pc = 0x1951E0u;
    {
        const bool branch_taken_0x1951e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1951E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1951e0) {
            ctx->pc = 0x195234u;
            goto label_195234;
        }
    }
    ctx->pc = 0x1951E8u;
    // 0x1951e8: 0x8c820018
    ctx->pc = 0x1951e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1951ec: 0x24030032
    ctx->pc = 0x1951ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 50));
    // 0x1951f0: 0x431018
    ctx->pc = 0x1951f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1951f4: 0xaca20004
    ctx->pc = 0x1951f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1951f8: 0x8c83001c
    ctx->pc = 0x1951f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1951fc: 0xaca30008
    ctx->pc = 0x1951fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x195200: 0x8cc20004
    ctx->pc = 0x195200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x195204: 0xaca2000c
    ctx->pc = 0x195204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x195208: 0x8cc30008
    ctx->pc = 0x195208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x19520c: 0xaca30010
    ctx->pc = 0x19520cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x195210: 0x8ce20110
    ctx->pc = 0x195210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 272)));
    // 0x195214: 0xaca20014
    ctx->pc = 0x195214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x195218: 0x8cc3000c
    ctx->pc = 0x195218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19521c: 0xaca30018
    ctx->pc = 0x19521cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x195220: 0x8cc20020
    ctx->pc = 0x195220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x195224: 0xaca2001c
    ctx->pc = 0x195224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x195228: 0x8cc30024
    ctx->pc = 0x195228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x19522c: 0xaca30020
    ctx->pc = 0x19522cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_195230:
    // 0x195230: 0xdfbf0010
    ctx->pc = 0x195230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195234:
    // 0x195234: 0xdfb00000
    ctx->pc = 0x195234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195238: 0x3e00008
    ctx->pc = 0x195238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19523Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195230u: goto label_195230;
            case 0x195234u: goto label_195234;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195240u;
}
