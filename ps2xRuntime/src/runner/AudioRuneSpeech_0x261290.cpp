#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioRuneSpeech
// Address: 0x261290 - 0x26133c
void AudioRuneSpeech_0x261290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261290u;

label_261290:
    // 0x261290: 0x27bdffe0
    ctx->pc = 0x261290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_261294:
    // 0x261294: 0xffbf0010
    ctx->pc = 0x261294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_261298:
    // 0x261298: 0xffb00000
    ctx->pc = 0x261298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26129c:
    // 0x26129c: 0x2c820025
    ctx->pc = 0x26129cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 37));
label_2612a0:
    // 0x2612a0: 0x10400016
label_2612a4:
    if (ctx->pc == 0x2612A4u) {
        ctx->pc = 0x2612A4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2612A8u;
        goto label_2612a8;
    }
    ctx->pc = 0x2612A0u;
    {
        const bool branch_taken_0x2612a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2612A4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2612a0) {
            ctx->pc = 0x2612FCu;
            goto label_2612fc;
        }
    }
    ctx->pc = 0x2612A8u;
label_2612a8:
    // 0x2612a8: 0x3c02003b
    ctx->pc = 0x2612a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2612ac:
    // 0x2612ac: 0x24429680
    ctx->pc = 0x2612acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940288));
label_2612b0:
    // 0x2612b0: 0x41880
    ctx->pc = 0x2612b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_2612b4:
    // 0x2612b4: 0x621821
    ctx->pc = 0x2612b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2612b8:
    // 0x2612b8: 0x8c620000
    ctx->pc = 0x2612b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2612bc:
    // 0x2612bc: 0x400008
label_2612c0:
    if (ctx->pc == 0x2612C0u) {
        ctx->pc = 0x2612C4u;
        goto label_2612c4;
    }
    ctx->pc = 0x2612BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261290u: goto label_261290;
            case 0x261294u: goto label_261294;
            case 0x261298u: goto label_261298;
            case 0x26129Cu: goto label_26129c;
            case 0x2612A0u: goto label_2612a0;
            case 0x2612A4u: goto label_2612a4;
            case 0x2612A8u: goto label_2612a8;
            case 0x2612ACu: goto label_2612ac;
            case 0x2612B0u: goto label_2612b0;
            case 0x2612B4u: goto label_2612b4;
            case 0x2612B8u: goto label_2612b8;
            case 0x2612BCu: goto label_2612bc;
            case 0x2612C0u: goto label_2612c0;
            case 0x2612C4u: goto label_2612c4;
            case 0x2612C8u: goto label_2612c8;
            case 0x2612CCu: goto label_2612cc;
            case 0x2612D0u: goto label_2612d0;
            case 0x2612D4u: goto label_2612d4;
            case 0x2612D8u: goto label_2612d8;
            case 0x2612DCu: goto label_2612dc;
            case 0x2612E0u: goto label_2612e0;
            case 0x2612E4u: goto label_2612e4;
            case 0x2612E8u: goto label_2612e8;
            case 0x2612ECu: goto label_2612ec;
            case 0x2612F0u: goto label_2612f0;
            case 0x2612F4u: goto label_2612f4;
            case 0x2612F8u: goto label_2612f8;
            case 0x2612FCu: goto label_2612fc;
            case 0x261300u: goto label_261300;
            case 0x261304u: goto label_261304;
            case 0x261308u: goto label_261308;
            case 0x26130Cu: goto label_26130c;
            case 0x261310u: goto label_261310;
            case 0x261314u: goto label_261314;
            case 0x261318u: goto label_261318;
            case 0x26131Cu: goto label_26131c;
            case 0x261320u: goto label_261320;
            case 0x261324u: goto label_261324;
            case 0x261328u: goto label_261328;
            case 0x26132Cu: goto label_26132c;
            case 0x261330u: goto label_261330;
            case 0x261334u: goto label_261334;
            case 0x261338u: goto label_261338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2612C4u;
label_2612c4:
    // 0x2612c4: 0x3c10000e
    ctx->pc = 0x2612c4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)14 << 16));
label_2612c8:
    // 0x2612c8: 0x1000000c
label_2612cc:
    if (ctx->pc == 0x2612CCu) {
        ctx->pc = 0x2612CCu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 164));
        ctx->pc = 0x2612D0u;
        goto label_2612d0;
    }
    ctx->pc = 0x2612C8u;
    {
        const bool branch_taken_0x2612c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2612CCu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 164));
        if (branch_taken_0x2612c8) {
            ctx->pc = 0x2612FCu;
            goto label_2612fc;
        }
    }
    ctx->pc = 0x2612D0u;
label_2612d0:
    // 0x2612d0: 0x3c10000e
    ctx->pc = 0x2612d0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)14 << 16));
label_2612d4:
    // 0x2612d4: 0x10000009
label_2612d8:
    if (ctx->pc == 0x2612D8u) {
        ctx->pc = 0x2612D8u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 168));
        ctx->pc = 0x2612DCu;
        goto label_2612dc;
    }
    ctx->pc = 0x2612D4u;
    {
        const bool branch_taken_0x2612d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2612D8u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 168));
        if (branch_taken_0x2612d4) {
            ctx->pc = 0x2612FCu;
            goto label_2612fc;
        }
    }
    ctx->pc = 0x2612DCu;
label_2612dc:
    // 0x2612dc: 0x3c10000e
    ctx->pc = 0x2612dcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)14 << 16));
label_2612e0:
    // 0x2612e0: 0x10000006
label_2612e4:
    if (ctx->pc == 0x2612E4u) {
        ctx->pc = 0x2612E4u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 167));
        ctx->pc = 0x2612E8u;
        goto label_2612e8;
    }
    ctx->pc = 0x2612E0u;
    {
        const bool branch_taken_0x2612e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2612E4u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 167));
        if (branch_taken_0x2612e0) {
            ctx->pc = 0x2612FCu;
            goto label_2612fc;
        }
    }
    ctx->pc = 0x2612E8u;
label_2612e8:
    // 0x2612e8: 0x3c10000e
    ctx->pc = 0x2612e8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)14 << 16));
label_2612ec:
    // 0x2612ec: 0x10000003
label_2612f0:
    if (ctx->pc == 0x2612F0u) {
        ctx->pc = 0x2612F0u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 165));
        ctx->pc = 0x2612F4u;
        goto label_2612f4;
    }
    ctx->pc = 0x2612ECu;
    {
        const bool branch_taken_0x2612ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2612F0u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 165));
        if (branch_taken_0x2612ec) {
            ctx->pc = 0x2612FCu;
            goto label_2612fc;
        }
    }
    ctx->pc = 0x2612F4u;
label_2612f4:
    // 0x2612f4: 0x3c10000e
    ctx->pc = 0x2612f4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)14 << 16));
label_2612f8:
    // 0x2612f8: 0x361000a6
    ctx->pc = 0x2612f8u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 166));
label_2612fc:
    // 0x2612fc: 0x600000a
label_261300:
    if (ctx->pc == 0x261300u) {
        ctx->pc = 0x261300u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x261304u;
        goto label_261304;
    }
    ctx->pc = 0x2612FCu;
    {
        const bool branch_taken_0x2612fc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x261300u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2612fc) {
            ctx->pc = 0x261328u;
            goto label_261328;
        }
    }
    ctx->pc = 0x261304u;
label_261304:
    // 0x261304: 0x200282d
    ctx->pc = 0x261304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261308:
    // 0x261308: 0x240600e0
    ctx->pc = 0x261308u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
label_26130c:
    // 0x26130c: 0x2407007f
    ctx->pc = 0x26130cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 127));
label_261310:
    // 0x261310: 0x3c01bf80
    ctx->pc = 0x261310u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_261314:
    // 0x261314: 0x44816000
    ctx->pc = 0x261314u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_261318:
    // 0x261318: 0x3c014120
    ctx->pc = 0x261318u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_26131c:
    // 0x26131c: 0x44816800
    ctx->pc = 0x26131cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_261320:
    // 0x261320: 0xc088bd2
label_261324:
    if (ctx->pc == 0x261324u) {
        ctx->pc = 0x261324u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x261328u;
        goto label_261328;
    }
    ctx->pc = 0x261320u;
    SET_GPR_U32(ctx, 31, 0x261328u);
    ctx->pc = 0x261324u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x222F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAnyQueAdd4_0x222f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261328u; }
    }
    if (ctx->pc != 0x261328u) { return; }
    ctx->pc = 0x261328u;
label_261328:
    // 0x261328: 0x200102d
    ctx->pc = 0x261328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26132c:
    // 0x26132c: 0xdfbf0010
    ctx->pc = 0x26132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_261330:
    // 0x261330: 0xdfb00000
    ctx->pc = 0x261330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261334:
    // 0x261334: 0x3e00008
label_261338:
    if (ctx->pc == 0x261338u) {
        ctx->pc = 0x261338u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x26133Cu;
        goto label_fallthrough_0x261334;
    }
    ctx->pc = 0x261334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261338u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261290u: goto label_261290;
            case 0x261294u: goto label_261294;
            case 0x261298u: goto label_261298;
            case 0x26129Cu: goto label_26129c;
            case 0x2612A0u: goto label_2612a0;
            case 0x2612A4u: goto label_2612a4;
            case 0x2612A8u: goto label_2612a8;
            case 0x2612ACu: goto label_2612ac;
            case 0x2612B0u: goto label_2612b0;
            case 0x2612B4u: goto label_2612b4;
            case 0x2612B8u: goto label_2612b8;
            case 0x2612BCu: goto label_2612bc;
            case 0x2612C0u: goto label_2612c0;
            case 0x2612C4u: goto label_2612c4;
            case 0x2612C8u: goto label_2612c8;
            case 0x2612CCu: goto label_2612cc;
            case 0x2612D0u: goto label_2612d0;
            case 0x2612D4u: goto label_2612d4;
            case 0x2612D8u: goto label_2612d8;
            case 0x2612DCu: goto label_2612dc;
            case 0x2612E0u: goto label_2612e0;
            case 0x2612E4u: goto label_2612e4;
            case 0x2612E8u: goto label_2612e8;
            case 0x2612ECu: goto label_2612ec;
            case 0x2612F0u: goto label_2612f0;
            case 0x2612F4u: goto label_2612f4;
            case 0x2612F8u: goto label_2612f8;
            case 0x2612FCu: goto label_2612fc;
            case 0x261300u: goto label_261300;
            case 0x261304u: goto label_261304;
            case 0x261308u: goto label_261308;
            case 0x26130Cu: goto label_26130c;
            case 0x261310u: goto label_261310;
            case 0x261314u: goto label_261314;
            case 0x261318u: goto label_261318;
            case 0x26131Cu: goto label_26131c;
            case 0x261320u: goto label_261320;
            case 0x261324u: goto label_261324;
            case 0x261328u: goto label_261328;
            case 0x26132Cu: goto label_26132c;
            case 0x261330u: goto label_261330;
            case 0x261334u: goto label_261334;
            case 0x261338u: goto label_261338;
            default: break;
        }
        return;
    }
label_fallthrough_0x261334:
    ctx->pc = 0x26133Cu;
}
