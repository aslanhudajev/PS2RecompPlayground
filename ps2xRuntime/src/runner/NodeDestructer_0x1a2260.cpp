#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: NodeDestructer
// Address: 0x1a2260 - 0x1a232c
void NodeDestructer_0x1a2260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("NodeDestructer");


    ctx->pc = 0x1a2260u;

label_1a2260:
    // 0x1a2260: 0x27bdffc0
    ctx->pc = 0x1a2260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a2264:
    // 0x1a2264: 0x7fbf0030
    ctx->pc = 0x1a2264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1a2268:
    // 0x1a2268: 0x7fb20020
    ctx->pc = 0x1a2268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a226c:
    // 0x1a226c: 0x7fb10010
    ctx->pc = 0x1a226cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a2270:
    // 0x1a2270: 0x7fb00000
    ctx->pc = 0x1a2270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a2274:
    // 0x1a2274: 0x8c900034
    ctx->pc = 0x1a2274u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1a2278:
    // 0x1a2278: 0x12000026
label_1a227c:
    if (ctx->pc == 0x1A227Cu) {
        ctx->pc = 0x1A227Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A2280u;
        goto label_1a2280;
    }
    ctx->pc = 0x1A2278u;
    {
        const bool branch_taken_0x1a2278 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A227Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2278) {
            ctx->pc = 0x1A2314u;
            goto label_1a2314;
        }
    }
    ctx->pc = 0x1A2280u;
label_1a2280:
    // 0x1a2280: 0x8e030004
    ctx->pc = 0x1a2280u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a2284:
    // 0x1a2284: 0x10600004
label_1a2288:
    if (ctx->pc == 0x1A2288u) {
        ctx->pc = 0x1A2288u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x1A228Cu;
        goto label_1a228c;
    }
    ctx->pc = 0x1A2284u;
    {
        const bool branch_taken_0x1a2284 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2288u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        if (branch_taken_0x1a2284) {
            ctx->pc = 0x1A2298u;
            goto label_1a2298;
        }
    }
    ctx->pc = 0x1A228Cu;
label_1a228c:
    // 0x1a228c: 0x60f809
label_1a2290:
    if (ctx->pc == 0x1A2290u) {
        ctx->pc = 0x1A2290u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A2294u;
        goto label_1a2294;
    }
    ctx->pc = 0x1A228Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A2294u);
        ctx->pc = 0x1A2290u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2260u: goto label_1a2260;
            case 0x1A2264u: goto label_1a2264;
            case 0x1A2268u: goto label_1a2268;
            case 0x1A226Cu: goto label_1a226c;
            case 0x1A2270u: goto label_1a2270;
            case 0x1A2274u: goto label_1a2274;
            case 0x1A2278u: goto label_1a2278;
            case 0x1A227Cu: goto label_1a227c;
            case 0x1A2280u: goto label_1a2280;
            case 0x1A2284u: goto label_1a2284;
            case 0x1A2288u: goto label_1a2288;
            case 0x1A228Cu: goto label_1a228c;
            case 0x1A2290u: goto label_1a2290;
            case 0x1A2294u: goto label_1a2294;
            case 0x1A2298u: goto label_1a2298;
            case 0x1A229Cu: goto label_1a229c;
            case 0x1A22A0u: goto label_1a22a0;
            case 0x1A22A4u: goto label_1a22a4;
            case 0x1A22A8u: goto label_1a22a8;
            case 0x1A22ACu: goto label_1a22ac;
            case 0x1A22B0u: goto label_1a22b0;
            case 0x1A22B4u: goto label_1a22b4;
            case 0x1A22B8u: goto label_1a22b8;
            case 0x1A22BCu: goto label_1a22bc;
            case 0x1A22C0u: goto label_1a22c0;
            case 0x1A22C4u: goto label_1a22c4;
            case 0x1A22C8u: goto label_1a22c8;
            case 0x1A22CCu: goto label_1a22cc;
            case 0x1A22D0u: goto label_1a22d0;
            case 0x1A22D4u: goto label_1a22d4;
            case 0x1A22D8u: goto label_1a22d8;
            case 0x1A22DCu: goto label_1a22dc;
            case 0x1A22E0u: goto label_1a22e0;
            case 0x1A22E4u: goto label_1a22e4;
            case 0x1A22E8u: goto label_1a22e8;
            case 0x1A22ECu: goto label_1a22ec;
            case 0x1A22F0u: goto label_1a22f0;
            case 0x1A22F4u: goto label_1a22f4;
            case 0x1A22F8u: goto label_1a22f8;
            case 0x1A22FCu: goto label_1a22fc;
            case 0x1A2300u: goto label_1a2300;
            case 0x1A2304u: goto label_1a2304;
            case 0x1A2308u: goto label_1a2308;
            case 0x1A230Cu: goto label_1a230c;
            case 0x1A2310u: goto label_1a2310;
            case 0x1A2314u: goto label_1a2314;
            case 0x1A2318u: goto label_1a2318;
            case 0x1A231Cu: goto label_1a231c;
            case 0x1A2320u: goto label_1a2320;
            case 0x1A2324u: goto label_1a2324;
            case 0x1A2328u: goto label_1a2328;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A2294u; }
            if (ctx->pc != 0x1A2294u) { return; }
        }
    }
    ctx->pc = 0x1A2294u;
label_1a2294:
    // 0x1a2294: 0x0
    ctx->pc = 0x1a2294u;
    // NOP
label_1a2298:
    // 0x1a2298: 0xae000004
    ctx->pc = 0x1a2298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a229c:
    // 0x1a229c: 0x9603002e
    ctx->pc = 0x1a229cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_1a22a0:
    // 0x1a22a0: 0x30630004
    ctx->pc = 0x1a22a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4));
label_1a22a4:
    // 0x1a22a4: 0x10600004
label_1a22a8:
    if (ctx->pc == 0x1A22A8u) {
        ctx->pc = 0x1A22A8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A22ACu;
        goto label_1a22ac;
    }
    ctx->pc = 0x1A22A4u;
    {
        const bool branch_taken_0x1a22a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A22A8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a22a4) {
            ctx->pc = 0x1A22B8u;
            goto label_1a22b8;
        }
    }
    ctx->pc = 0x1A22ACu;
label_1a22ac:
    // 0x1a22ac: 0xc0690f4
label_1a22b0:
    if (ctx->pc == 0x1A22B0u) {
        ctx->pc = 0x1A22B4u;
        goto label_1a22b4;
    }
    ctx->pc = 0x1A22ACu;
    SET_GPR_U32(ctx, 31, 0x1A22B4u);
    ctx->pc = 0x1A43D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vr_destruct_0x1a43d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22B4u; }
        else if (ctx->pc != 0x1A22B4u) { ctx->pc = 0x1A22B4u; }
    }
    if (ctx->pc != 0x1A22B4u) { return; }
    ctx->pc = 0x1A22B4u;
label_1a22b4:
    // 0x1a22b4: 0x0
    ctx->pc = 0x1a22b4u;
    // NOP
label_1a22b8:
    // 0x1a22b8: 0x9603002e
    ctx->pc = 0x1a22b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_1a22bc:
    // 0x1a22bc: 0x30630004
    ctx->pc = 0x1a22bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4));
label_1a22c0:
    // 0x1a22c0: 0x14600003
label_1a22c4:
    if (ctx->pc == 0x1A22C4u) {
        ctx->pc = 0x1A22C4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A22C8u;
        goto label_1a22c8;
    }
    ctx->pc = 0x1A22C0u;
    {
        const bool branch_taken_0x1a22c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A22C4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a22c0) {
            ctx->pc = 0x1A22D0u;
            goto label_1a22d0;
        }
    }
    ctx->pc = 0x1A22C8u;
label_1a22c8:
    // 0x1a22c8: 0xc068a3c
label_1a22cc:
    if (ctx->pc == 0x1A22CCu) {
        ctx->pc = 0x1A22D0u;
        goto label_1a22d0;
    }
    ctx->pc = 0x1A22C8u;
    SET_GPR_U32(ctx, 31, 0x1A22D0u);
    ctx->pc = 0x1A28F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        killFamilyLink_0x1a28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22D0u; }
        else if (ctx->pc != 0x1A22D0u) { ctx->pc = 0x1A22D0u; }
    }
    if (ctx->pc != 0x1A22D0u) { return; }
    ctx->pc = 0x1A22D0u;
label_1a22d0:
    // 0x1a22d0: 0x9604002e
    ctx->pc = 0x1a22d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_1a22d4:
    // 0x1a22d4: 0x30830010
    ctx->pc = 0x1a22d4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 16));
label_1a22d8:
    // 0x1a22d8: 0x1460000b
label_1a22dc:
    if (ctx->pc == 0x1A22DCu) {
        ctx->pc = 0x1A22E0u;
        goto label_1a22e0;
    }
    ctx->pc = 0x1A22D8u;
    {
        const bool branch_taken_0x1a22d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a22d8) {
            ctx->pc = 0x1A2308u;
            goto label_1a2308;
        }
    }
    ctx->pc = 0x1A22E0u;
label_1a22e0:
    // 0x1a22e0: 0x30820008
    ctx->pc = 0x1a22e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
label_1a22e4:
    // 0x1a22e4: 0x10400006
label_1a22e8:
    if (ctx->pc == 0x1A22E8u) {
        ctx->pc = 0x1A22E8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A22ECu;
        goto label_1a22ec;
    }
    ctx->pc = 0x1A22E4u;
    {
        const bool branch_taken_0x1a22e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A22E8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a22e4) {
            ctx->pc = 0x1A2300u;
            goto label_1a2300;
        }
    }
    ctx->pc = 0x1A22ECu;
label_1a22ec:
    // 0x1a22ec: 0xc069100
label_1a22f0:
    if (ctx->pc == 0x1A22F0u) {
        ctx->pc = 0x1A22F0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A22F4u;
        goto label_1a22f4;
    }
    ctx->pc = 0x1A22ECu;
    SET_GPR_U32(ctx, 31, 0x1A22F4u);
    ctx->pc = 0x1A22F0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sys2_free_0x1a4400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22F4u; }
        else if (ctx->pc != 0x1A22F4u) { ctx->pc = 0x1A22F4u; }
    }
    if (ctx->pc != 0x1A22F4u) { return; }
    ctx->pc = 0x1A22F4u;
label_1a22f4:
    // 0x1a22f4: 0x10000005
label_1a22f8:
    if (ctx->pc == 0x1A22F8u) {
        ctx->pc = 0x1A22F8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->pc = 0x1A22FCu;
        goto label_1a22fc;
    }
    ctx->pc = 0x1A22F4u;
    {
        const bool branch_taken_0x1a22f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A22F8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 52)));
        if (branch_taken_0x1a22f4) {
            ctx->pc = 0x1A230Cu;
            goto label_1a230c;
        }
    }
    ctx->pc = 0x1A22FCu;
label_1a22fc:
    // 0x1a22fc: 0x72002628
    ctx->pc = 0x1a22fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1a2300:
    // 0x1a2300: 0xc0687c0
label_1a2304:
    if (ctx->pc == 0x1A2304u) {
        ctx->pc = 0x1A2308u;
        goto label_1a2308;
    }
    ctx->pc = 0x1A2300u;
    SET_GPR_U32(ctx, 31, 0x1A2308u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2308u; }
        else if (ctx->pc != 0x1A2308u) { ctx->pc = 0x1A2308u; }
    }
    if (ctx->pc != 0x1A2308u) { return; }
    ctx->pc = 0x1A2308u;
label_1a2308:
    // 0x1a2308: 0x8e430034
    ctx->pc = 0x1a2308u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1a230c:
    // 0x1a230c: 0x1623ffdc
label_1a2310:
    if (ctx->pc == 0x1A2310u) {
        ctx->pc = 0x1A2310u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A2314u;
        goto label_1a2314;
    }
    ctx->pc = 0x1A230Cu;
    {
        const bool branch_taken_0x1a230c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A2310u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a230c) {
            ctx->pc = 0x1A2280u;
            goto label_1a2280;
        }
    }
    ctx->pc = 0x1A2314u;
label_1a2314:
    // 0x1a2314: 0x7bbf0030
    ctx->pc = 0x1a2314u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a2318:
    // 0x1a2318: 0x7bb20020
    ctx->pc = 0x1a2318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a231c:
    // 0x1a231c: 0x7bb10010
    ctx->pc = 0x1a231cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2320:
    // 0x1a2320: 0x7bb00000
    ctx->pc = 0x1a2320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2324:
    // 0x1a2324: 0x3e00008
label_1a2328:
    if (ctx->pc == 0x1A2328u) {
        ctx->pc = 0x1A2328u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1A232Cu;
        goto label_fallthrough_0x1a2324;
    }
    ctx->pc = 0x1A2324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2328u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2260u: goto label_1a2260;
            case 0x1A2264u: goto label_1a2264;
            case 0x1A2268u: goto label_1a2268;
            case 0x1A226Cu: goto label_1a226c;
            case 0x1A2270u: goto label_1a2270;
            case 0x1A2274u: goto label_1a2274;
            case 0x1A2278u: goto label_1a2278;
            case 0x1A227Cu: goto label_1a227c;
            case 0x1A2280u: goto label_1a2280;
            case 0x1A2284u: goto label_1a2284;
            case 0x1A2288u: goto label_1a2288;
            case 0x1A228Cu: goto label_1a228c;
            case 0x1A2290u: goto label_1a2290;
            case 0x1A2294u: goto label_1a2294;
            case 0x1A2298u: goto label_1a2298;
            case 0x1A229Cu: goto label_1a229c;
            case 0x1A22A0u: goto label_1a22a0;
            case 0x1A22A4u: goto label_1a22a4;
            case 0x1A22A8u: goto label_1a22a8;
            case 0x1A22ACu: goto label_1a22ac;
            case 0x1A22B0u: goto label_1a22b0;
            case 0x1A22B4u: goto label_1a22b4;
            case 0x1A22B8u: goto label_1a22b8;
            case 0x1A22BCu: goto label_1a22bc;
            case 0x1A22C0u: goto label_1a22c0;
            case 0x1A22C4u: goto label_1a22c4;
            case 0x1A22C8u: goto label_1a22c8;
            case 0x1A22CCu: goto label_1a22cc;
            case 0x1A22D0u: goto label_1a22d0;
            case 0x1A22D4u: goto label_1a22d4;
            case 0x1A22D8u: goto label_1a22d8;
            case 0x1A22DCu: goto label_1a22dc;
            case 0x1A22E0u: goto label_1a22e0;
            case 0x1A22E4u: goto label_1a22e4;
            case 0x1A22E8u: goto label_1a22e8;
            case 0x1A22ECu: goto label_1a22ec;
            case 0x1A22F0u: goto label_1a22f0;
            case 0x1A22F4u: goto label_1a22f4;
            case 0x1A22F8u: goto label_1a22f8;
            case 0x1A22FCu: goto label_1a22fc;
            case 0x1A2300u: goto label_1a2300;
            case 0x1A2304u: goto label_1a2304;
            case 0x1A2308u: goto label_1a2308;
            case 0x1A230Cu: goto label_1a230c;
            case 0x1A2310u: goto label_1a2310;
            case 0x1A2314u: goto label_1a2314;
            case 0x1A2318u: goto label_1a2318;
            case 0x1A231Cu: goto label_1a231c;
            case 0x1A2320u: goto label_1a2320;
            case 0x1A2324u: goto label_1a2324;
            case 0x1A2328u: goto label_1a2328;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a2324:
    ctx->pc = 0x1A232Cu;
}
