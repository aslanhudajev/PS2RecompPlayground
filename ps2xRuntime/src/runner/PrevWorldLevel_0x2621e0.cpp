#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrevWorldLevel
// Address: 0x2621e0 - 0x262314
void PrevWorldLevel_0x2621e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2621e0u;

    // 0x2621e0: 0x3c02003c
    ctx->pc = 0x2621e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2621e4: 0x8c453200
    ctx->pc = 0x2621e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12800)));
    // 0x2621e8: 0x3c020034
    ctx->pc = 0x2621e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2621ec: 0x8c42e7c0
    ctx->pc = 0x2621ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x2621f0: 0x54400004
    ctx->pc = 0x2621F0u;
    {
        const bool branch_taken_0x2621f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2621f0) {
            ctx->pc = 0x2621F4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x262204u;
            goto label_262204;
        }
    }
    ctx->pc = 0x2621F8u;
    // 0x2621f8: 0x3c020031
    ctx->pc = 0x2621f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2621fc: 0x3e00008
    ctx->pc = 0x2621FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262200u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262204u: goto label_262204;
            case 0x262214u: goto label_262214;
            case 0x262258u: goto label_262258;
            case 0x262278u: goto label_262278;
            case 0x262280u: goto label_262280;
            case 0x2622A8u: goto label_2622a8;
            case 0x2622D0u: goto label_2622d0;
            case 0x2622ECu: goto label_2622ec;
            case 0x2622F0u: goto label_2622f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262204u;
label_262204:
    // 0x262204: 0x14820003
    ctx->pc = 0x262204u;
    {
        const bool branch_taken_0x262204 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x262208u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x262204) {
            ctx->pc = 0x262214u;
            goto label_262214;
        }
    }
    ctx->pc = 0x26220Cu;
    // 0x26220c: 0x1000001a
    ctx->pc = 0x26220Cu;
    {
        const bool branch_taken_0x26220c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x262210u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x26220c) {
            ctx->pc = 0x262278u;
            goto label_262278;
        }
    }
    ctx->pc = 0x262214u;
label_262214:
    // 0x262214: 0x8c42e7c0
    ctx->pc = 0x262214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x262218: 0x84460016
    ctx->pc = 0x262218u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x26221c: 0x10800016
    ctx->pc = 0x26221Cu;
    {
        const bool branch_taken_0x26221c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x262220u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x26221c) {
            ctx->pc = 0x262278u;
            goto label_262278;
        }
    }
    ctx->pc = 0x262224u;
    // 0x262224: 0x4c00016
    ctx->pc = 0x262224u;
    {
        const bool branch_taken_0x262224 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x262228u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 268));
        if (branch_taken_0x262224) {
            ctx->pc = 0x262280u;
            goto label_262280;
        }
    }
    ctx->pc = 0x26222Cu;
    // 0x26222c: 0x8c42001c
    ctx->pc = 0x26222cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x262230: 0xc31818
    ctx->pc = 0x262230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x262234: 0x621821
    ctx->pc = 0x262234u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262238: 0x84620004
    ctx->pc = 0x262238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26223c: 0x441024
    ctx->pc = 0x26223cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x262240: 0x1440000d
    ctx->pc = 0x262240u;
    {
        const bool branch_taken_0x262240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262244u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x262240) {
            ctx->pc = 0x262278u;
            goto label_262278;
        }
    }
    ctx->pc = 0x262248u;
    // 0x262248: 0x8c47e7c0
    ctx->pc = 0x262248u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x26224c: 0x2408010c
    ctx->pc = 0x26224cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 268));
    // 0x262250: 0x24c6ffff
    ctx->pc = 0x262250u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x262254: 0x0
    ctx->pc = 0x262254u;
    // NOP
label_262258:
    // 0x262258: 0x4c00009
    ctx->pc = 0x262258u;
    {
        const bool branch_taken_0x262258 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x26225Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x262258) {
            ctx->pc = 0x262280u;
            goto label_262280;
        }
    }
    ctx->pc = 0x262260u;
    // 0x262260: 0x8ce2001c
    ctx->pc = 0x262260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x262264: 0x621821
    ctx->pc = 0x262264u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262268: 0x84620004
    ctx->pc = 0x262268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26226c: 0x441024
    ctx->pc = 0x26226cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x262270: 0x5040fff9
    ctx->pc = 0x262270u;
    {
        const bool branch_taken_0x262270 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x262270) {
            ctx->pc = 0x262274u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->pc = 0x262258u;
            goto label_262258;
        }
    }
    ctx->pc = 0x262278u;
label_262278:
    // 0x262278: 0x4c1001d
    ctx->pc = 0x262278u;
    {
        const bool branch_taken_0x262278 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x26227Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x262278) {
            ctx->pc = 0x2622F0u;
            goto label_2622f0;
        }
    }
    ctx->pc = 0x262280u;
label_262280:
    // 0x262280: 0x302d
    ctx->pc = 0x262280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262284: 0x2408000d
    ctx->pc = 0x262284u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 13));
    // 0x262288: 0x2407ffff
    ctx->pc = 0x262288u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26228c: 0x2404002c
    ctx->pc = 0x26228cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 44));
    // 0x262290: 0x3c020034
    ctx->pc = 0x262290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262294: 0x244ae530
    ctx->pc = 0x262294u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x262298: 0x3c02003c
    ctx->pc = 0x262298u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26229c: 0x8c433200
    ctx->pc = 0x26229cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12800)));
    // 0x2622a0: 0x24a5ffff
    ctx->pc = 0x2622a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2622a4: 0x0
    ctx->pc = 0x2622a4u;
    // NOP
label_2622a8:
    // 0x2622a8: 0xe5102a
    ctx->pc = 0x2622a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 5)));
    // 0x2622ac: 0x102280a
    ctx->pc = 0x2622acu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 8));
    // 0x2622b0: 0xa44818
    ctx->pc = 0x2622b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2622b4: 0x12a1021
    ctx->pc = 0x2622b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2622b8: 0x8c420000
    ctx->pc = 0x2622b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2622bc: 0x54400004
    ctx->pc = 0x2622BCu;
    {
        const bool branch_taken_0x2622bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2622bc) {
            ctx->pc = 0x2622C0u;
            SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
            ctx->pc = 0x2622D0u;
            goto label_2622d0;
        }
    }
    ctx->pc = 0x2622C4u;
    // 0x2622c4: 0x54a3fff8
    ctx->pc = 0x2622C4u;
    {
        const bool branch_taken_0x2622c4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x2622c4) {
            ctx->pc = 0x2622C8u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->pc = 0x2622A8u;
            goto label_2622a8;
        }
    }
    ctx->pc = 0x2622CCu;
    // 0x2622cc: 0x3c030034
    ctx->pc = 0x2622ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2622d0:
    // 0x2622d0: 0x2463e520
    ctx->pc = 0x2622d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960416));
    // 0x2622d4: 0x2402002c
    ctx->pc = 0x2622d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x2622d8: 0xa21018
    ctx->pc = 0x2622d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2622dc: 0x621821
    ctx->pc = 0x2622dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2622e0: 0x8c620014
    ctx->pc = 0x2622e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2622e4: 0x4430001
    ctx->pc = 0x2622E4u;
    {
        const bool branch_taken_0x2622e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2622e4) {
            ctx->pc = 0x2622E8u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->pc = 0x2622ECu;
            goto label_2622ec;
        }
    }
    ctx->pc = 0x2622ECu;
label_2622ec:
    // 0x2622ec: 0x3c030034
    ctx->pc = 0x2622ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2622f0:
    // 0x2622f0: 0x2463e520
    ctx->pc = 0x2622f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960416));
    // 0x2622f4: 0x2402002c
    ctx->pc = 0x2622f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x2622f8: 0xa21018
    ctx->pc = 0x2622f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2622fc: 0x431021
    ctx->pc = 0x2622fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262300: 0x8c420000
    ctx->pc = 0x262300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262304: 0x21200
    ctx->pc = 0x262304u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x262308: 0x30c300ff
    ctx->pc = 0x262308u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 255));
    // 0x26230c: 0x3e00008
    ctx->pc = 0x26230Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262310u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262204u: goto label_262204;
            case 0x262214u: goto label_262214;
            case 0x262258u: goto label_262258;
            case 0x262278u: goto label_262278;
            case 0x262280u: goto label_262280;
            case 0x2622A8u: goto label_2622a8;
            case 0x2622D0u: goto label_2622d0;
            case 0x2622ECu: goto label_2622ec;
            case 0x2622F0u: goto label_2622f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262314u;
}
