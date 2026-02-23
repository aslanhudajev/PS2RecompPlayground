#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetPadActTwin__Fii
// Address: 0x21b1b0 - 0x21b26c
void SetPadActTwin__Fii_0x21b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetPadActTwin__Fii");


    ctx->pc = 0x21b1b0u;

    // 0x21b1b0: 0x27bdffb0
    ctx->pc = 0x21b1b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21b1b4: 0x7fbf0040
    ctx->pc = 0x21b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x21b1b8: 0x7fb30030
    ctx->pc = 0x21b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21b1bc: 0x7fb20020
    ctx->pc = 0x21b1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21b1c0: 0x7fb10010
    ctx->pc = 0x21b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21b1c4: 0x70008e28
    ctx->pc = 0x21b1c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b1c8: 0x24030001
    ctx->pc = 0x21b1c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b1cc: 0x64880b
    ctx->pc = 0x21b1ccu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
    // 0x21b1d0: 0x7fb00000
    ctx->pc = 0x21b1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21b1d4: 0x3c010050
    ctx->pc = 0x21b1d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21b1d8: 0x8424e504
    ctx->pc = 0x21b1d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x21b1dc: 0x2403000a
    ctx->pc = 0x21b1dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x21b1e0: 0x1483001b
    ctx->pc = 0x21B1E0u;
    {
        const bool branch_taken_0x21b1e0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x21B1E4u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21b1e0) {
            ctx->pc = 0x21B250u;
            goto label_21b250;
        }
    }
    ctx->pc = 0x21B1E8u;
    // 0x21b1e8: 0x3c030050
    ctx->pc = 0x21b1e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x21b1ec: 0x70008628
    ctx->pc = 0x21b1ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b1f0: 0x2472dd20
    ctx->pc = 0x21b1f0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 4294958368));
label_21b1f4:
    // 0x21b1f4: 0x8e440004
    ctx->pc = 0x21b1f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21b1f8: 0x24030005
    ctx->pc = 0x21b1f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x21b1fc: 0x50830009
    ctx->pc = 0x21B1FCu;
    {
        const bool branch_taken_0x21b1fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x21b1fc) {
            ctx->pc = 0x21B200u;
            SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
            ctx->pc = 0x21B224u;
            goto label_21b224;
        }
    }
    ctx->pc = 0x21B204u;
    // 0x21b204: 0x24030003
    ctx->pc = 0x21b204u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x21b208: 0x10830005
    ctx->pc = 0x21B208u;
    {
        const bool branch_taken_0x21b208 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x21b208) {
            ctx->pc = 0x21B220u;
            goto label_21b220;
        }
    }
    ctx->pc = 0x21B210u;
    // 0x21b210: 0x10800003
    ctx->pc = 0x21B210u;
    {
        const bool branch_taken_0x21b210 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x21b210) {
            ctx->pc = 0x21B220u;
            goto label_21b220;
        }
    }
    ctx->pc = 0x21B218u;
    // 0x21b218: 0x1000000a
    ctx->pc = 0x21B218u;
    {
        const bool branch_taken_0x21b218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B21Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x21b218) {
            ctx->pc = 0x21B244u;
            goto label_21b244;
        }
    }
    ctx->pc = 0x21B220u;
label_21b220:
    // 0x21b220: 0x72002628
    ctx->pc = 0x21b220u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_21b224:
    // 0x21b224: 0x70002e28
    ctx->pc = 0x21b224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b228: 0xc07bdcc
    ctx->pc = 0x21B228u;
    SET_GPR_U32(ctx, 31, 0x21B230u);
    ctx->pc = 0x21B22Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EF730u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPadAct__Fiii_0x1ef730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B230u; }
        else if (ctx->pc != 0x21B230u) { ctx->pc = 0x21B230u; }
    }
    if (ctx->pc != 0x21B230u) { return; }
    ctx->pc = 0x21B230u;
    // 0x21b230: 0x72002628
    ctx->pc = 0x21b230u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21b234: 0x24050001
    ctx->pc = 0x21b234u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b238: 0xc07bdcc
    ctx->pc = 0x21B238u;
    SET_GPR_U32(ctx, 31, 0x21B240u);
    ctx->pc = 0x21B23Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EF730u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPadAct__Fiii_0x1ef730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B240u; }
        else if (ctx->pc != 0x21B240u) { ctx->pc = 0x21B240u; }
    }
    if (ctx->pc != 0x21B240u) { return; }
    ctx->pc = 0x21B240u;
    // 0x21b240: 0x26100001
    ctx->pc = 0x21b240u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_21b244:
    // 0x21b244: 0x2a030002
    ctx->pc = 0x21b244u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x21b248: 0x1460ffea
    ctx->pc = 0x21B248u;
    {
        const bool branch_taken_0x21b248 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21B24Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 840));
        if (branch_taken_0x21b248) {
            ctx->pc = 0x21B1F4u;
            goto label_21b1f4;
        }
    }
    ctx->pc = 0x21B250u;
label_21b250:
    // 0x21b250: 0x7bbf0040
    ctx->pc = 0x21b250u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b254: 0x7bb30030
    ctx->pc = 0x21b254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b258: 0x7bb20020
    ctx->pc = 0x21b258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b25c: 0x7bb10010
    ctx->pc = 0x21b25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b260: 0x7bb00000
    ctx->pc = 0x21b260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b264: 0x3e00008
    ctx->pc = 0x21B264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B268u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21B1F4u: goto label_21b1f4;
            case 0x21B220u: goto label_21b220;
            case 0x21B224u: goto label_21b224;
            case 0x21B244u: goto label_21b244;
            case 0x21B250u: goto label_21b250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21B26Cu;
}
