#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_GetWTot
// Address: 0x1922a0 - 0x192330
void SFBUF_GetWTot_0x1922a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_GetWTot");


    ctx->pc = 0x1922a0u;

label_1922a0:
    // 0x1922a0: 0x24020388
    ctx->pc = 0x1922a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
label_1922a4:
    // 0x1922a4: 0x27bdffb0
    ctx->pc = 0x1922a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_1922a8:
    // 0x1922a8: 0xa21818
    ctx->pc = 0x1922a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_1922ac:
    // 0x1922ac: 0xffb10020
    ctx->pc = 0x1922acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1922b0:
    // 0x1922b0: 0xffb20030
    ctx->pc = 0x1922b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1922b4:
    // 0x1922b4: 0xffb00010
    ctx->pc = 0x1922b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1922b8:
    // 0x1922b8: 0xffbf0040
    ctx->pc = 0x1922b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1922bc:
    // 0x1922bc: 0x642821
    ctx->pc = 0x1922bcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1922c0:
    // 0x1922c0: 0x24b10d44
    ctx->pc = 0x1922c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 5), 3396));
label_1922c4:
    // 0x1922c4: 0xc064f3a
label_1922c8:
    if (ctx->pc == 0x1922C8u) {
        ctx->pc = 0x1922C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1922CCu;
        goto label_1922cc;
    }
    ctx->pc = 0x1922C4u;
    SET_GPR_U32(ctx, 31, 0x1922CCu);
    ctx->pc = 0x1922C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1922CCu; }
        else if (ctx->pc != 0x1922CCu) { ctx->pc = 0x1922CCu; }
    }
    if (ctx->pc != 0x1922CCu) { return; }
    ctx->pc = 0x1922CCu;
label_1922cc:
    // 0x1922cc: 0x8e300028
    ctx->pc = 0x1922ccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1922d0:
    // 0x1922d0: 0x1600000e
label_1922d4:
    if (ctx->pc == 0x1922D4u) {
        ctx->pc = 0x1922D4u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x1922D8u;
        goto label_1922d8;
    }
    ctx->pc = 0x1922D0u;
    {
        const bool branch_taken_0x1922d0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1922D4u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 44)));
        if (branch_taken_0x1922d0) {
            ctx->pc = 0x19230Cu;
            goto label_19230c;
        }
    }
    ctx->pc = 0x1922D8u;
label_1922d8:
    // 0x1922d8: 0x1240000c
label_1922dc:
    if (ctx->pc == 0x1922DCu) {
        ctx->pc = 0x1922E0u;
        goto label_1922e0;
    }
    ctx->pc = 0x1922D8u;
    {
        const bool branch_taken_0x1922d8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1922d8) {
            ctx->pc = 0x19230Cu;
            goto label_19230c;
        }
    }
    ctx->pc = 0x1922E0u;
label_1922e0:
    // 0x1922e0: 0x8e240004
    ctx->pc = 0x1922e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1922e4:
    // 0x1922e4: 0x8c830000
    ctx->pc = 0x1922e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1922e8:
    // 0x1922e8: 0x8c620024
    ctx->pc = 0x1922e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1922ec:
    // 0x1922ec: 0x40f809
label_1922f0:
    if (ctx->pc == 0x1922F0u) {
        ctx->pc = 0x1922F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1922F4u;
        goto label_1922f4;
    }
    ctx->pc = 0x1922ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1922F4u);
        ctx->pc = 0x1922F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1922A0u: goto label_1922a0;
            case 0x1922A4u: goto label_1922a4;
            case 0x1922A8u: goto label_1922a8;
            case 0x1922ACu: goto label_1922ac;
            case 0x1922B0u: goto label_1922b0;
            case 0x1922B4u: goto label_1922b4;
            case 0x1922B8u: goto label_1922b8;
            case 0x1922BCu: goto label_1922bc;
            case 0x1922C0u: goto label_1922c0;
            case 0x1922C4u: goto label_1922c4;
            case 0x1922C8u: goto label_1922c8;
            case 0x1922CCu: goto label_1922cc;
            case 0x1922D0u: goto label_1922d0;
            case 0x1922D4u: goto label_1922d4;
            case 0x1922D8u: goto label_1922d8;
            case 0x1922DCu: goto label_1922dc;
            case 0x1922E0u: goto label_1922e0;
            case 0x1922E4u: goto label_1922e4;
            case 0x1922E8u: goto label_1922e8;
            case 0x1922ECu: goto label_1922ec;
            case 0x1922F0u: goto label_1922f0;
            case 0x1922F4u: goto label_1922f4;
            case 0x1922F8u: goto label_1922f8;
            case 0x1922FCu: goto label_1922fc;
            case 0x192300u: goto label_192300;
            case 0x192304u: goto label_192304;
            case 0x192308u: goto label_192308;
            case 0x19230Cu: goto label_19230c;
            case 0x192310u: goto label_192310;
            case 0x192314u: goto label_192314;
            case 0x192318u: goto label_192318;
            case 0x19231Cu: goto label_19231c;
            case 0x192320u: goto label_192320;
            case 0x192324u: goto label_192324;
            case 0x192328u: goto label_192328;
            case 0x19232Cu: goto label_19232c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1922F4u; }
            if (ctx->pc != 0x1922F4u) { return; }
        }
    }
    ctx->pc = 0x1922F4u;
label_1922f4:
    // 0x1922f4: 0x2428021
    ctx->pc = 0x1922f4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1922f8:
    // 0x1922f8: 0x3c037fff
    ctx->pc = 0x1922f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
label_1922fc:
    // 0x1922fc: 0x2402ffff
    ctx->pc = 0x1922fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_192300:
    // 0x192300: 0x3463ffff
    ctx->pc = 0x192300u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_192304:
    // 0x192304: 0x50102a
    ctx->pc = 0x192304u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_192308:
    // 0x192308: 0x62800a
    ctx->pc = 0x192308u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_19230c:
    // 0x19230c: 0xc064f44
label_192310:
    if (ctx->pc == 0x192310u) {
        ctx->pc = 0x192310u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x192314u;
        goto label_192314;
    }
    ctx->pc = 0x19230Cu;
    SET_GPR_U32(ctx, 31, 0x192314u);
    ctx->pc = 0x192310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192314u; }
        else if (ctx->pc != 0x192314u) { ctx->pc = 0x192314u; }
    }
    if (ctx->pc != 0x192314u) { return; }
    ctx->pc = 0x192314u;
label_192314:
    // 0x192314: 0x200102d
    ctx->pc = 0x192314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192318:
    // 0x192318: 0xdfbf0040
    ctx->pc = 0x192318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19231c:
    // 0x19231c: 0xdfb20030
    ctx->pc = 0x19231cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_192320:
    // 0x192320: 0xdfb10020
    ctx->pc = 0x192320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_192324:
    // 0x192324: 0xdfb00010
    ctx->pc = 0x192324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_192328:
    // 0x192328: 0x3e00008
label_19232c:
    if (ctx->pc == 0x19232Cu) {
        ctx->pc = 0x19232Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x192330u;
        goto label_fallthrough_0x192328;
    }
    ctx->pc = 0x192328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19232Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1922A0u: goto label_1922a0;
            case 0x1922A4u: goto label_1922a4;
            case 0x1922A8u: goto label_1922a8;
            case 0x1922ACu: goto label_1922ac;
            case 0x1922B0u: goto label_1922b0;
            case 0x1922B4u: goto label_1922b4;
            case 0x1922B8u: goto label_1922b8;
            case 0x1922BCu: goto label_1922bc;
            case 0x1922C0u: goto label_1922c0;
            case 0x1922C4u: goto label_1922c4;
            case 0x1922C8u: goto label_1922c8;
            case 0x1922CCu: goto label_1922cc;
            case 0x1922D0u: goto label_1922d0;
            case 0x1922D4u: goto label_1922d4;
            case 0x1922D8u: goto label_1922d8;
            case 0x1922DCu: goto label_1922dc;
            case 0x1922E0u: goto label_1922e0;
            case 0x1922E4u: goto label_1922e4;
            case 0x1922E8u: goto label_1922e8;
            case 0x1922ECu: goto label_1922ec;
            case 0x1922F0u: goto label_1922f0;
            case 0x1922F4u: goto label_1922f4;
            case 0x1922F8u: goto label_1922f8;
            case 0x1922FCu: goto label_1922fc;
            case 0x192300u: goto label_192300;
            case 0x192304u: goto label_192304;
            case 0x192308u: goto label_192308;
            case 0x19230Cu: goto label_19230c;
            case 0x192310u: goto label_192310;
            case 0x192314u: goto label_192314;
            case 0x192318u: goto label_192318;
            case 0x19231Cu: goto label_19231c;
            case 0x192320u: goto label_192320;
            case 0x192324u: goto label_192324;
            case 0x192328u: goto label_192328;
            case 0x19232Cu: goto label_19232c;
            default: break;
        }
        return;
    }
label_fallthrough_0x192328:
    ctx->pc = 0x192330u;
}
