#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: tally_treasures
// Address: 0x227288 - 0x227368
void tally_treasures_0x227288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x227288u;

    // 0x227288: 0x80282d
    ctx->pc = 0x227288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22728c: 0x3c03003c
    ctx->pc = 0x22728cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x227290: 0x24631878
    ctx->pc = 0x227290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6264));
    // 0x227294: 0x8ca20000
    ctx->pc = 0x227294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227298: 0x21080
    ctx->pc = 0x227298u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22729c: 0x431021
    ctx->pc = 0x22729cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2272a0: 0x8c460000
    ctx->pc = 0x2272a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2272a4: 0x3c020031
    ctx->pc = 0x2272a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2272a8: 0x8c42ff9c
    ctx->pc = 0x2272a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x2272ac: 0x14400020
    ctx->pc = 0x2272ACu;
    {
        const bool branch_taken_0x2272ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2272B0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x2272ac) {
            ctx->pc = 0x227330u;
            goto label_227330;
        }
    }
    ctx->pc = 0x2272B4u;
    // 0x2272b4: 0x24631b90
    ctx->pc = 0x2272b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x2272b8: 0x8ca20000
    ctx->pc = 0x2272b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2272bc: 0x2404003c
    ctx->pc = 0x2272bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2272c0: 0x441018
    ctx->pc = 0x2272c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2272c4: 0x621821
    ctx->pc = 0x2272c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2272c8: 0x8c620004
    ctx->pc = 0x2272c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2272cc: 0x3c030f00
    ctx->pc = 0x2272ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)3840 << 16));
    // 0x2272d0: 0x431024
    ctx->pc = 0x2272d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2272d4: 0x10400002
    ctx->pc = 0x2272D4u;
    {
        const bool branch_taken_0x2272d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2272D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2272d4) {
            ctx->pc = 0x2272E0u;
            goto label_2272e0;
        }
    }
    ctx->pc = 0x2272DCu;
    // 0x2272dc: 0xc23018
    ctx->pc = 0x2272dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2272e0:
    // 0x2272e0: 0x3c04003c
    ctx->pc = 0x2272e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2272e4: 0x24841828
    ctx->pc = 0x2272e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6184));
    // 0x2272e8: 0x8ca30000
    ctx->pc = 0x2272e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2272ec: 0x31880
    ctx->pc = 0x2272ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2272f0: 0x641821
    ctx->pc = 0x2272f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2272f4: 0x8c620000
    ctx->pc = 0x2272f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2272f8: 0xc21021
    ctx->pc = 0x2272f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2272fc: 0xac620000
    ctx->pc = 0x2272fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x227300: 0x8ca20000
    ctx->pc = 0x227300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227304: 0x21080
    ctx->pc = 0x227304u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x227308: 0x441021
    ctx->pc = 0x227308u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22730c: 0x8ca3000c
    ctx->pc = 0x22730cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x227310: 0x2404001c
    ctx->pc = 0x227310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    // 0x227314: 0x643018
    ctx->pc = 0x227314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x227318: 0xc51821
    ctx->pc = 0x227318u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x22731c: 0x8c420000
    ctx->pc = 0x22731cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227320: 0x8c630b40
    ctx->pc = 0x227320u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 2880)));
    // 0x227324: 0x43102a
    ctx->pc = 0x227324u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x227328: 0x10400003
    ctx->pc = 0x227328u;
    {
        const bool branch_taken_0x227328 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22732Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x227328) {
            ctx->pc = 0x227338u;
            goto label_227338;
        }
    }
    ctx->pc = 0x227330u;
label_227330:
    // 0x227330: 0x3e00008
    ctx->pc = 0x227330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227334u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2272E0u: goto label_2272e0;
            case 0x227330u: goto label_227330;
            case 0x227338u: goto label_227338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227338u;
label_227338:
    // 0x227338: 0x24421828
    ctx->pc = 0x227338u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6184));
    // 0x22733c: 0x8ca40000
    ctx->pc = 0x22733cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227340: 0x42080
    ctx->pc = 0x227340u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x227344: 0x822021
    ctx->pc = 0x227344u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x227348: 0x8ca2000c
    ctx->pc = 0x227348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22734c: 0x2403001c
    ctx->pc = 0x22734cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x227350: 0x433018
    ctx->pc = 0x227350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x227354: 0xc51021
    ctx->pc = 0x227354u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x227358: 0x8c420b40
    ctx->pc = 0x227358u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2880)));
    // 0x22735c: 0xac820000
    ctx->pc = 0x22735cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x227360: 0x3e00008
    ctx->pc = 0x227360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227364u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2272E0u: goto label_2272e0;
            case 0x227330u: goto label_227330;
            case 0x227338u: goto label_227338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227368u;
}
