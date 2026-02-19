#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioThrowWeapon
// Address: 0x25e7f0 - 0x25e94c
void AudioThrowWeapon_0x25e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e7f0u;

    // 0x25e7f0: 0x80302d
    ctx->pc = 0x25e7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7f4: 0x3c020032
    ctx->pc = 0x25e7f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e7f8: 0x24441bc0
    ctx->pc = 0x25e7f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25e7fc: 0x24022b00
    ctx->pc = 0x25e7fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e800: 0xc22818
    ctx->pc = 0x25e800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e804: 0xa41021
    ctx->pc = 0x25e804u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25e808: 0x8c430130
    ctx->pc = 0x25e808u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25e80c: 0x3c020058
    ctx->pc = 0x25e80cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)88 << 16));
    // 0x25e810: 0x621024
    ctx->pc = 0x25e810u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e814: 0x10400007
    ctx->pc = 0x25E814u;
    {
        const bool branch_taken_0x25e814 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25E818u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
        if (branch_taken_0x25e814) {
            ctx->pc = 0x25E834u;
            goto label_25e834;
        }
    }
    ctx->pc = 0x25E81Cu;
    // 0x25e81c: 0x852821
    ctx->pc = 0x25e81cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x25e820: 0x24040042
    ctx->pc = 0x25e820u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 66));
    // 0x25e824: 0x24a50050
    ctx->pc = 0x25e824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 80));
    // 0x25e828: 0x2406007f
    ctx->pc = 0x25e828u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25e82c: 0x8088a62
    ctx->pc = 0x25E82Cu;
    ctx->pc = 0x25E830u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25E834u;
label_25e834:
    // 0x25e834: 0x24020002
    ctx->pc = 0x25e834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e838: 0x10620018
    ctx->pc = 0x25E838u;
    {
        const bool branch_taken_0x25e838 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25E83Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x25e838) {
            ctx->pc = 0x25E89Cu;
            goto label_25e89c;
        }
    }
    ctx->pc = 0x25E840u;
    // 0x25e840: 0x10400005
    ctx->pc = 0x25E840u;
    {
        const bool branch_taken_0x25e840 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25E844u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25e840) {
            ctx->pc = 0x25E858u;
            goto label_25e858;
        }
    }
    ctx->pc = 0x25E848u;
    // 0x25e848: 0x1062000a
    ctx->pc = 0x25E848u;
    {
        const bool branch_taken_0x25e848 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25E84Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x25e848) {
            ctx->pc = 0x25E874u;
            goto label_25e874;
        }
    }
    ctx->pc = 0x25E850u;
    // 0x25e850: 0x10000030
    ctx->pc = 0x25E850u;
    {
        const bool branch_taken_0x25e850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25E854u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956848));
        if (branch_taken_0x25e850) {
            ctx->pc = 0x25E914u;
            goto label_25e914;
        }
    }
    ctx->pc = 0x25E858u;
label_25e858:
    // 0x25e858: 0x24020003
    ctx->pc = 0x25e858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x25e85c: 0x10620019
    ctx->pc = 0x25E85Cu;
    {
        const bool branch_taken_0x25e85c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25E860u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x25e85c) {
            ctx->pc = 0x25E8C4u;
            goto label_25e8c4;
        }
    }
    ctx->pc = 0x25E864u;
    // 0x25e864: 0x10620021
    ctx->pc = 0x25E864u;
    {
        const bool branch_taken_0x25e864 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25E868u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x25e864) {
            ctx->pc = 0x25E8ECu;
            goto label_25e8ec;
        }
    }
    ctx->pc = 0x25E86Cu;
    // 0x25e86c: 0x10000029
    ctx->pc = 0x25E86Cu;
    {
        const bool branch_taken_0x25e86c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25E870u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956848));
        if (branch_taken_0x25e86c) {
            ctx->pc = 0x25E914u;
            goto label_25e914;
        }
    }
    ctx->pc = 0x25E874u;
label_25e874:
    // 0x25e874: 0x24052b00
    ctx->pc = 0x25e874u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e878: 0xc52818
    ctx->pc = 0x25e878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e87c: 0x3c020032
    ctx->pc = 0x25e87cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e880: 0x24421be0
    ctx->pc = 0x25e880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25e884: 0xa22821
    ctx->pc = 0x25e884u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25e888: 0x24040044
    ctx->pc = 0x25e888u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 68));
    // 0x25e88c: 0x24a50030
    ctx->pc = 0x25e88cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    // 0x25e890: 0x2406007f
    ctx->pc = 0x25e890u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25e894: 0x8088a62
    ctx->pc = 0x25E894u;
    ctx->pc = 0x25E898u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25E89Cu;
label_25e89c:
    // 0x25e89c: 0x24052b00
    ctx->pc = 0x25e89cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e8a0: 0xc52818
    ctx->pc = 0x25e8a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e8a4: 0x3c020032
    ctx->pc = 0x25e8a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e8a8: 0x24421be0
    ctx->pc = 0x25e8a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25e8ac: 0xa22821
    ctx->pc = 0x25e8acu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25e8b0: 0x24040046
    ctx->pc = 0x25e8b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 70));
    // 0x25e8b4: 0x24a50030
    ctx->pc = 0x25e8b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    // 0x25e8b8: 0x2406007f
    ctx->pc = 0x25e8b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25e8bc: 0x8088a62
    ctx->pc = 0x25E8BCu;
    ctx->pc = 0x25E8C0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25E8C4u;
label_25e8c4:
    // 0x25e8c4: 0x24052b00
    ctx->pc = 0x25e8c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e8c8: 0xc52818
    ctx->pc = 0x25e8c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e8cc: 0x3c020032
    ctx->pc = 0x25e8ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e8d0: 0x24421be0
    ctx->pc = 0x25e8d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25e8d4: 0xa22821
    ctx->pc = 0x25e8d4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25e8d8: 0x24040045
    ctx->pc = 0x25e8d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 69));
    // 0x25e8dc: 0x24a50030
    ctx->pc = 0x25e8dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    // 0x25e8e0: 0x2406007f
    ctx->pc = 0x25e8e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25e8e4: 0x8088a62
    ctx->pc = 0x25E8E4u;
    ctx->pc = 0x25E8E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25E8ECu;
label_25e8ec:
    // 0x25e8ec: 0x24052b00
    ctx->pc = 0x25e8ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e8f0: 0xc52818
    ctx->pc = 0x25e8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e8f4: 0x3c020032
    ctx->pc = 0x25e8f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e8f8: 0x24421be0
    ctx->pc = 0x25e8f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25e8fc: 0xa22821
    ctx->pc = 0x25e8fcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25e900: 0x24040043
    ctx->pc = 0x25e900u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 67));
    // 0x25e904: 0x24a50030
    ctx->pc = 0x25e904u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    // 0x25e908: 0x2406007f
    ctx->pc = 0x25e908u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25e90c: 0x8088a62
    ctx->pc = 0x25E90Cu;
    ctx->pc = 0x25E910u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25E914u;
label_25e914:
    // 0x25e914: 0x3c050032
    ctx->pc = 0x25e914u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x25e918: 0x24a51bc0
    ctx->pc = 0x25e918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7104));
    // 0x25e91c: 0x24032b00
    ctx->pc = 0x25e91cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e920: 0xc31818
    ctx->pc = 0x25e920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e924: 0x651021
    ctx->pc = 0x25e924u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25e928: 0x8c420008
    ctx->pc = 0x25e928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25e92c: 0x21080
    ctx->pc = 0x25e92cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e930: 0x441021
    ctx->pc = 0x25e930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25e934: 0xa32821
    ctx->pc = 0x25e934u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25e938: 0x8c440000
    ctx->pc = 0x25e938u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e93c: 0x24a50050
    ctx->pc = 0x25e93cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 80));
    // 0x25e940: 0x2406007f
    ctx->pc = 0x25e940u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25e944: 0x8088a62
    ctx->pc = 0x25E944u;
    ctx->pc = 0x25E948u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 42));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25E94Cu;
}
