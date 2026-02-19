#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbLogEvent
// Address: 0x2a32e0 - 0x2a3410
void pbLogEvent_0x2a32e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a32e0u;

    // 0x2a32e0: 0x27bdff50
    ctx->pc = 0x2a32e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a32e4: 0xffbf0030
    ctx->pc = 0x2a32e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a32e8: 0xffb20020
    ctx->pc = 0x2a32e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a32ec: 0xffb10010
    ctx->pc = 0x2a32ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a32f0: 0xffb00000
    ctx->pc = 0x2a32f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a32f4: 0x80602d
    ctx->pc = 0x2a32f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32f8: 0xffa60080
    ctx->pc = 0x2a32f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
    // 0x2a32fc: 0xffa70088
    ctx->pc = 0x2a32fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x2a3300: 0xffa80090
    ctx->pc = 0x2a3300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x2a3304: 0xffa90098
    ctx->pc = 0x2a3304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x2a3308: 0xffaa00a0
    ctx->pc = 0x2a3308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x2a330c: 0xffab00a8
    ctx->pc = 0x2a330cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x2a3310: 0xa0802d
    ctx->pc = 0x2a3310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3314: 0x3c020036
    ctx->pc = 0x2a3314u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3318: 0x8c52dee0
    ctx->pc = 0x2a3318u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a331c: 0x101e02
    ctx->pc = 0x2a331cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 16), 24));
    // 0x2a3320: 0x8e44002c
    ctx->pc = 0x2a3320u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2a3324: 0x24020001
    ctx->pc = 0x2a3324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3328: 0x621004
    ctx->pc = 0x2a3328u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2a332c: 0x8c830004
    ctx->pc = 0x2a332cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a3330: 0x431024
    ctx->pc = 0x2a3330u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3334: 0x10400031
    ctx->pc = 0x2A3334u;
    {
        const bool branch_taken_0x2a3334 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3338u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2a3334) {
            ctx->pc = 0x2A33FCu;
            goto label_2a33fc;
        }
    }
    ctx->pc = 0x2A333Cu;
    // 0x2a333c: 0x11800005
    ctx->pc = 0x2A333Cu;
    {
        const bool branch_taken_0x2a333c = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3340u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 16), 255));
        if (branch_taken_0x2a333c) {
            ctx->pc = 0x2A3354u;
            goto label_2a3354;
        }
    }
    ctx->pc = 0x2A3344u;
    // 0x2a3344: 0xc0a8c74
    ctx->pc = 0x2A3344u;
    SET_GPR_U32(ctx, 31, 0x2A334Cu);
    ctx->pc = 0x2A3348u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x2A31D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbLogGetPkt_0x2a31d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A334Cu; }
    }
    if (ctx->pc != 0x2A334Cu) { return; }
    ctx->pc = 0x2A334Cu;
    // 0x2a334c: 0x1000000d
    ctx->pc = 0x2A334Cu;
    {
        const bool branch_taken_0x2a334c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3350u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a334c) {
            ctx->pc = 0x2A3384u;
            goto label_2a3384;
        }
    }
    ctx->pc = 0x2A3354u;
label_2a3354:
    // 0x2a3354: 0x3c030001
    ctx->pc = 0x2a3354u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_2a3358:
    // 0x2a3358: 0x42000039
    ctx->pc = 0x2a3358u;
    ctx->cop0_status &= ~0x1; // Disable interrupts
    // 0x2a335c: 0x40f
    ctx->pc = 0x2a335cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2a3360: 0x40026000
    ctx->pc = 0x2a3360u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2a3364: 0x431024
    ctx->pc = 0x2a3364u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3368: 0x0
    ctx->pc = 0x2a3368u;
    // NOP
    // 0x2a336c: 0x1440fffa
    ctx->pc = 0x2A336Cu;
    {
        const bool branch_taken_0x2a336c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a336c) {
            ctx->pc = 0x2A3358u;
            goto label_2a3358;
        }
    }
    ctx->pc = 0x2A3374u;
    // 0x2a3374: 0xc0a8c74
    ctx->pc = 0x2A3374u;
    SET_GPR_U32(ctx, 31, 0x2A337Cu);
    ctx->pc = 0x2A3378u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x2A31D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbLogGetPkt_0x2a31d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A337Cu; }
    }
    if (ctx->pc != 0x2A337Cu) { return; }
    ctx->pc = 0x2A337Cu;
    // 0x2a337c: 0x40202d
    ctx->pc = 0x2a337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3380: 0x42000038
    ctx->pc = 0x2a3380u;
    ctx->cop0_status |= 0x1; // Enable interrupts
label_2a3384:
    // 0x2a3384: 0x27a60080
    ctx->pc = 0x2a3384u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a3388: 0x1220001a
    ctx->pc = 0x2A3388u;
    {
        const bool branch_taken_0x2a3388 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A338Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a3388) {
            ctx->pc = 0x2A33F4u;
            goto label_2a33f4;
        }
    }
    ctx->pc = 0x2A3390u;
    // 0x2a3390: 0x3c098000
    ctx->pc = 0x2a3390u;
    SET_GPR_U32(ctx, 9, ((uint32_t)32768 << 16));
    // 0x2a3394: 0x24080001
    ctx->pc = 0x2a3394u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3398: 0x3c077fff
    ctx->pc = 0x2a3398u;
    SET_GPR_U32(ctx, 7, ((uint32_t)32767 << 16));
    // 0x2a339c: 0x34e7ffff
    ctx->pc = 0x2a339cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2a33a0: 0x24c60008
    ctx->pc = 0x2a33a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a33a4: 0x0
    ctx->pc = 0x2a33a4u;
    // NOP
label_2a33a8:
    // 0x2a33a8: 0x8cc3fff8
    ctx->pc = 0x2a33a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x2a33ac: 0x691024
    ctx->pc = 0x2a33acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a33b0: 0x10400004
    ctx->pc = 0x2A33B0u;
    {
        const bool branch_taken_0x2a33b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A33B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x2a33b0) {
            ctx->pc = 0x2A33C4u;
            goto label_2a33c4;
        }
    }
    ctx->pc = 0x2A33B8u;
    // 0x2a33b8: 0x481004
    ctx->pc = 0x2a33b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x2a33bc: 0x2028025
    ctx->pc = 0x2a33bcu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a33c0: 0x671824
    ctx->pc = 0x2a33c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2a33c4:
    // 0x2a33c4: 0xac830000
    ctx->pc = 0x2a33c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2a33c8: 0x2484fffc
    ctx->pc = 0x2a33c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2a33cc: 0x8e43002c
    ctx->pc = 0x2a33ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2a33d0: 0x8c620008
    ctx->pc = 0x2a33d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a33d4: 0x44102b
    ctx->pc = 0x2a33d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a33d8: 0x14400003
    ctx->pc = 0x2A33D8u;
    {
        const bool branch_taken_0x2a33d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A33DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2a33d8) {
            ctx->pc = 0x2A33E8u;
            goto label_2a33e8;
        }
    }
    ctx->pc = 0x2A33E0u;
    // 0x2a33e0: 0x8c620010
    ctx->pc = 0x2a33e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a33e4: 0x2444fffc
    ctx->pc = 0x2a33e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967292));
label_2a33e8:
    // 0x2a33e8: 0xb1102a
    ctx->pc = 0x2a33e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 17)));
    // 0x2a33ec: 0x5440ffee
    ctx->pc = 0x2A33ECu;
    {
        const bool branch_taken_0x2a33ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a33ec) {
            ctx->pc = 0x2A33F0u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
            ctx->pc = 0x2A33A8u;
            goto label_2a33a8;
        }
    }
    ctx->pc = 0x2A33F4u;
label_2a33f4:
    // 0x2a33f4: 0xac900000
    ctx->pc = 0x2a33f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2a33f8: 0xdfbf0030
    ctx->pc = 0x2a33f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a33fc:
    // 0x2a33fc: 0xdfb20020
    ctx->pc = 0x2a33fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3400: 0xdfb10010
    ctx->pc = 0x2a3400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3404: 0xdfb00000
    ctx->pc = 0x2a3404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3408: 0x3e00008
    ctx->pc = 0x2A3408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A340Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3354u: goto label_2a3354;
            case 0x2A3358u: goto label_2a3358;
            case 0x2A3384u: goto label_2a3384;
            case 0x2A33A8u: goto label_2a33a8;
            case 0x2A33C4u: goto label_2a33c4;
            case 0x2A33E8u: goto label_2a33e8;
            case 0x2A33F4u: goto label_2a33f4;
            case 0x2A33FCu: goto label_2a33fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A3410u;
}
