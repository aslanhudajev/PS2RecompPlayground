#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrevPlayer
// Address: 0x26b1f0 - 0x26b280
void PrevPlayer_0x26b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b1f0u;

    // 0x26b1f0: 0x24060004
    ctx->pc = 0x26b1f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b1f4: 0x3c030034
    ctx->pc = 0x26b1f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26b1f8: 0x2463eb60
    ctx->pc = 0x26b1f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x26b1fc: 0x240201a0
    ctx->pc = 0x26b1fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b200: 0x821018
    ctx->pc = 0x26b200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b204: 0x431021
    ctx->pc = 0x26b204u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b208: 0x8c45010c
    ctx->pc = 0x26b208u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x26b20c: 0x240b2b00
    ctx->pc = 0x26b20cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x26b210: 0x3c020032
    ctx->pc = 0x26b210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26b214: 0x244c1bc0
    ctx->pc = 0x26b214u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x26b218: 0x240a0001
    ctx->pc = 0x26b218u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b21c: 0x24090004
    ctx->pc = 0x26b21cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4));
    // 0x26b220: 0x3c020034
    ctx->pc = 0x26b220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b224: 0x2442eb60
    ctx->pc = 0x26b224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26b228: 0x240301a0
    ctx->pc = 0x26b228u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b22c: 0x832018
    ctx->pc = 0x26b22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b230: 0x822021
    ctx->pc = 0x26b230u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26b234: 0x24080003
    ctx->pc = 0x26b234u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b238: 0x2407ffff
    ctx->pc = 0x26b238u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b23c: 0x0
    ctx->pc = 0x26b23cu;
    // NOP
label_26b240:
    // 0x26b240: 0xab1818
    ctx->pc = 0x26b240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b244: 0x6c1021
    ctx->pc = 0x26b244u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x26b248: 0x8c4300fc
    ctx->pc = 0x26b248u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x26b24c: 0x506a0004
    ctx->pc = 0x26B24Cu;
    {
        const bool branch_taken_0x26b24c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 10));
        if (branch_taken_0x26b24c) {
            ctx->pc = 0x26B250u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 5));
            ctx->pc = 0x26B260u;
            goto label_26b260;
        }
    }
    ctx->pc = 0x26B254u;
    // 0x26b254: 0x54690004
    ctx->pc = 0x26B254u;
    {
        const bool branch_taken_0x26b254 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 9));
        if (branch_taken_0x26b254) {
            ctx->pc = 0x26B258u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->pc = 0x26B268u;
            goto label_26b268;
        }
    }
    ctx->pc = 0x26B25Cu;
    // 0x26b25c: 0xac85010c
    ctx->pc = 0x26b25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 5));
label_26b260:
    // 0x26b260: 0x3e00008
    ctx->pc = 0x26B260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B264u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B240u: goto label_26b240;
            case 0x26B260u: goto label_26b260;
            case 0x26B268u: goto label_26b268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B268u;
label_26b268:
    // 0x26b268: 0xe5102a
    ctx->pc = 0x26b268u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 5)));
    // 0x26b26c: 0x24c6ffff
    ctx->pc = 0x26b26cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x26b270: 0x1cc0fff3
    ctx->pc = 0x26B270u;
    {
        const bool branch_taken_0x26b270 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x26B274u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 8));
        if (branch_taken_0x26b270) {
            ctx->pc = 0x26B240u;
            goto label_26b240;
        }
    }
    ctx->pc = 0x26B278u;
    // 0x26b278: 0x3e00008
    ctx->pc = 0x26B278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B27Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B240u: goto label_26b240;
            case 0x26B260u: goto label_26b260;
            case 0x26B268u: goto label_26b268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B280u;
}
