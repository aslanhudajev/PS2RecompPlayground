#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_SetSj
// Address: 0x1711c8 - 0x171208
void ADXSTM_SetSj_0x1711c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_SetSj");


    ctx->pc = 0x1711c8u;

label_1711c8:
    // 0x1711c8: 0x27bdffe0
    ctx->pc = 0x1711c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1711cc:
    // 0x1711cc: 0xffb00000
    ctx->pc = 0x1711ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1711d0:
    // 0x1711d0: 0xffbf0010
    ctx->pc = 0x1711d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1711d4:
    // 0x1711d4: 0x80802d
    ctx->pc = 0x1711d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1711d8:
    // 0x1711d8: 0xae050004
    ctx->pc = 0x1711d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_1711dc:
    // 0x1711dc: 0xa0202d
    ctx->pc = 0x1711dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1711e0:
    // 0x1711e0: 0x8ca30000
    ctx->pc = 0x1711e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1711e4:
    // 0x1711e4: 0x8c620024
    ctx->pc = 0x1711e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1711e8:
    // 0x1711e8: 0x40f809
label_1711ec:
    if (ctx->pc == 0x1711ECu) {
        ctx->pc = 0x1711ECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1711F0u;
        goto label_1711f0;
    }
    ctx->pc = 0x1711E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1711F0u);
        ctx->pc = 0x1711ECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1711C8u: goto label_1711c8;
            case 0x1711CCu: goto label_1711cc;
            case 0x1711D0u: goto label_1711d0;
            case 0x1711D4u: goto label_1711d4;
            case 0x1711D8u: goto label_1711d8;
            case 0x1711DCu: goto label_1711dc;
            case 0x1711E0u: goto label_1711e0;
            case 0x1711E4u: goto label_1711e4;
            case 0x1711E8u: goto label_1711e8;
            case 0x1711ECu: goto label_1711ec;
            case 0x1711F0u: goto label_1711f0;
            case 0x1711F4u: goto label_1711f4;
            case 0x1711F8u: goto label_1711f8;
            case 0x1711FCu: goto label_1711fc;
            case 0x171200u: goto label_171200;
            case 0x171204u: goto label_171204;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1711F0u; }
            if (ctx->pc != 0x1711F0u) { return; }
        }
    }
    ctx->pc = 0x1711F0u;
label_1711f0:
    // 0x1711f0: 0xae02001c
    ctx->pc = 0x1711f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1711f4:
    // 0x1711f4: 0xae020018
    ctx->pc = 0x1711f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1711f8:
    // 0x1711f8: 0xdfbf0010
    ctx->pc = 0x1711f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1711fc:
    // 0x1711fc: 0xdfb00000
    ctx->pc = 0x1711fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171200:
    // 0x171200: 0x3e00008
label_171204:
    if (ctx->pc == 0x171204u) {
        ctx->pc = 0x171204u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x171208u;
        goto label_fallthrough_0x171200;
    }
    ctx->pc = 0x171200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171204u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1711C8u: goto label_1711c8;
            case 0x1711CCu: goto label_1711cc;
            case 0x1711D0u: goto label_1711d0;
            case 0x1711D4u: goto label_1711d4;
            case 0x1711D8u: goto label_1711d8;
            case 0x1711DCu: goto label_1711dc;
            case 0x1711E0u: goto label_1711e0;
            case 0x1711E4u: goto label_1711e4;
            case 0x1711E8u: goto label_1711e8;
            case 0x1711ECu: goto label_1711ec;
            case 0x1711F0u: goto label_1711f0;
            case 0x1711F4u: goto label_1711f4;
            case 0x1711F8u: goto label_1711f8;
            case 0x1711FCu: goto label_1711fc;
            case 0x171200u: goto label_171200;
            case 0x171204u: goto label_171204;
            default: break;
        }
        return;
    }
label_fallthrough_0x171200:
    ctx->pc = 0x171208u;
}
