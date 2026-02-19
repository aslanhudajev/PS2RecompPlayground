#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu1DataAddr
// Address: 0x2b3368 - 0x2b3524
void pbGetVu1DataAddr_0x2b3368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3368u;

    // 0x2b3368: 0x27bdff70
    ctx->pc = 0x2b3368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b336c: 0xffbf0080
    ctx->pc = 0x2b336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2b3370: 0xffb70070
    ctx->pc = 0x2b3370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2b3374: 0xffb60060
    ctx->pc = 0x2b3374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b3378: 0xffb50050
    ctx->pc = 0x2b3378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b337c: 0xffb40040
    ctx->pc = 0x2b337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b3380: 0xffb30030
    ctx->pc = 0x2b3380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b3384: 0xffb20020
    ctx->pc = 0x2b3384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b3388: 0xffb10010
    ctx->pc = 0x2b3388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b338c: 0xffb00000
    ctx->pc = 0x2b338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3390: 0x80802d
    ctx->pc = 0x2b3390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3394: 0xc0a02d
    ctx->pc = 0x2b3394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3398: 0x12800016
    ctx->pc = 0x2B3398u;
    {
        const bool branch_taken_0x2b3398 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B339Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b3398) {
            ctx->pc = 0x2B33F4u;
            goto label_2b33f4;
        }
    }
    ctx->pc = 0x2B33A0u;
    // 0x2b33a0: 0xc0bf306
    ctx->pc = 0x2B33A0u;
    SET_GPR_U32(ctx, 31, 0x2B33A8u);
    ctx->pc = 0x2B33A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B33A8u; }
    }
    if (ctx->pc != 0x2B33A8u) { return; }
    ctx->pc = 0x2B33A8u;
    // 0x2b33a8: 0x242b021
    ctx->pc = 0x2b33a8u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b33ac: 0x26c48000
    ctx->pc = 0x2b33acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294934528));
    // 0x2b33b0: 0x80937fff
    ctx->pc = 0x2b33b0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 32767)));
    // 0x2b33b4: 0x3c02003c
    ctx->pc = 0x2b33b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b33b8: 0x2442a781
    ctx->pc = 0x2b33b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944641));
    // 0x2b33bc: 0x2621021
    ctx->pc = 0x2b33bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2b33c0: 0x90420000
    ctx->pc = 0x2b33c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b33c4: 0x30420001
    ctx->pc = 0x2b33c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2b33c8: 0x26630020
    ctx->pc = 0x2b33c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 32));
    // 0x2b33cc: 0x60882d
    ctx->pc = 0x2b33ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b33d0: 0x262880a
    ctx->pc = 0x2b33d0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 19));
    // 0x2b33d4: 0x2622ff89
    ctx->pc = 0x2b33d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967177));
    // 0x2b33d8: 0x2c420004
    ctx->pc = 0x2b33d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
    // 0x2b33dc: 0x10400005
    ctx->pc = 0x2B33DCu;
    {
        const bool branch_taken_0x2b33dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B33E0u;
        SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 32766)));
        if (branch_taken_0x2b33dc) {
            ctx->pc = 0x2B33F4u;
            goto label_2b33f4;
        }
    }
    ctx->pc = 0x2B33E4u;
    // 0x2b33e4: 0x2402005f
    ctx->pc = 0x2b33e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 95));
    // 0x2b33e8: 0x16a20002
    ctx->pc = 0x2B33E8u;
    {
        const bool branch_taken_0x2b33e8 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B33ECu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 32767), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2b33e8) {
            ctx->pc = 0x2B33F4u;
            goto label_2b33f4;
        }
    }
    ctx->pc = 0x2B33F0u;
    // 0x2b33f0: 0xa0807ffe
    ctx->pc = 0x2b33f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32766), (uint8_t)GPR_U32(ctx, 0));
label_2b33f4:
    // 0x2b33f4: 0xc0bf306
    ctx->pc = 0x2B33F4u;
    SET_GPR_U32(ctx, 31, 0x2B33FCu);
    ctx->pc = 0x2B33F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B33FCu; }
    }
    if (ctx->pc != 0x2B33FCu) { return; }
    ctx->pc = 0x2B33FCu;
    // 0x2b33fc: 0x40882d
    ctx->pc = 0x2b33fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3400: 0x8e020000
    ctx->pc = 0x2b3400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b3404: 0x8c500020
    ctx->pc = 0x2b3404u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b3408: 0x10000019
    ctx->pc = 0x2B3408u;
    {
        const bool branch_taken_0x2b3408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B340Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 95));
        if (branch_taken_0x2b3408) {
            ctx->pc = 0x2B3470u;
            goto label_2b3470;
        }
    }
    ctx->pc = 0x2B3410u;
label_2b3410:
    // 0x2b3410: 0x52800017
    ctx->pc = 0x2B3410u;
    {
        const bool branch_taken_0x2b3410 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b3410) {
            ctx->pc = 0x2B3414u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
            ctx->pc = 0x2B3470u;
            goto label_2b3470;
        }
    }
    ctx->pc = 0x2B3418u;
    // 0x2b3418: 0x8e020004
    ctx->pc = 0x2b3418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b341c: 0x511821
    ctx->pc = 0x2b341cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b3420: 0x80620000
    ctx->pc = 0x2b3420u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b3424: 0x54570006
    ctx->pc = 0x2B3424u;
    {
        const bool branch_taken_0x2b3424 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        if (branch_taken_0x2b3424) {
            ctx->pc = 0x2B3428u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x2B3440u;
            goto label_2b3440;
        }
    }
    ctx->pc = 0x2B342Cu;
    // 0x2b342c: 0x80620002
    ctx->pc = 0x2b342cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b3430: 0x5440000f
    ctx->pc = 0x2B3430u;
    {
        const bool branch_taken_0x2b3430 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3430) {
            ctx->pc = 0x2B3434u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
            ctx->pc = 0x2B3470u;
            goto label_2b3470;
        }
    }
    ctx->pc = 0x2B3438u;
    // 0x2b3438: 0x10000006
    ctx->pc = 0x2B3438u;
    {
        const bool branch_taken_0x2b3438 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B343Cu;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
        if (branch_taken_0x2b3438) {
            ctx->pc = 0x2B3454u;
            goto label_2b3454;
        }
    }
    ctx->pc = 0x2B3440u;
label_2b3440:
    // 0x2b3440: 0x2221821
    ctx->pc = 0x2b3440u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b3444: 0x80620001
    ctx->pc = 0x2b3444u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2b3448: 0x54400009
    ctx->pc = 0x2B3448u;
    {
        const bool branch_taken_0x2b3448 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3448) {
            ctx->pc = 0x2B344Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
            ctx->pc = 0x2B3470u;
            goto label_2b3470;
        }
    }
    ctx->pc = 0x2B3450u;
    // 0x2b3450: 0x80630000
    ctx->pc = 0x2b3450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2b3454:
    // 0x2b3454: 0x28620077
    ctx->pc = 0x2b3454u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 119));
    // 0x2b3458: 0x54400005
    ctx->pc = 0x2B3458u;
    {
        const bool branch_taken_0x2b3458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3458) {
            ctx->pc = 0x2B345Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
            ctx->pc = 0x2B3470u;
            goto label_2b3470;
        }
    }
    ctx->pc = 0x2B3460u;
    // 0x2b3460: 0x2862007b
    ctx->pc = 0x2b3460u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 123));
    // 0x2b3464: 0x1440000e
    ctx->pc = 0x2B3464u;
    {
        const bool branch_taken_0x2b3464 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3464) {
            ctx->pc = 0x2B34A0u;
            goto label_2b34a0;
        }
    }
    ctx->pc = 0x2B346Cu;
    // 0x2b346c: 0x2610000c
    ctx->pc = 0x2b346cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
label_2b3470:
    // 0x2b3470: 0x8e050004
    ctx->pc = 0x2b3470u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b3474: 0x10a0000a
    ctx->pc = 0x2B3474u;
    {
        const bool branch_taken_0x2b3474 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3478u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b3474) {
            ctx->pc = 0x2B34A0u;
            goto label_2b34a0;
        }
    }
    ctx->pc = 0x2B347Cu;
    // 0x2b347c: 0xc0bf3c0
    ctx->pc = 0x2B347Cu;
    SET_GPR_U32(ctx, 31, 0x2B3484u);
    ctx->pc = 0x2B3480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3484u; }
    }
    if (ctx->pc != 0x2B3484u) { return; }
    ctx->pc = 0x2B3484u;
    // 0x2b3484: 0x5440fffa
    ctx->pc = 0x2B3484u;
    {
        const bool branch_taken_0x2b3484 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3484) {
            ctx->pc = 0x2B3488u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
            ctx->pc = 0x2B3470u;
            goto label_2b3470;
        }
    }
    ctx->pc = 0x2B348Cu;
    // 0x2b348c: 0x8e020004
    ctx->pc = 0x2b348cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b3490: 0x511021
    ctx->pc = 0x2b3490u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b3494: 0x80420000
    ctx->pc = 0x2b3494u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b3498: 0x1440ffdd
    ctx->pc = 0x2B3498u;
    {
        const bool branch_taken_0x2b3498 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3498) {
            ctx->pc = 0x2B3410u;
            goto label_2b3410;
        }
    }
    ctx->pc = 0x2B34A0u;
label_2b34a0:
    // 0x2b34a0: 0x12800003
    ctx->pc = 0x2B34A0u;
    {
        const bool branch_taken_0x2b34a0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B34A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294934528));
        if (branch_taken_0x2b34a0) {
            ctx->pc = 0x2B34B0u;
            goto label_2b34b0;
        }
    }
    ctx->pc = 0x2B34A8u;
    // 0x2b34a8: 0xa0537fff
    ctx->pc = 0x2b34a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32767), (uint8_t)GPR_U32(ctx, 19));
    // 0x2b34ac: 0xa0557ffe
    ctx->pc = 0x2b34acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32766), (uint8_t)GPR_U32(ctx, 21));
label_2b34b0:
    // 0x2b34b0: 0x8e020004
    ctx->pc = 0x2b34b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b34b4: 0x1040000c
    ctx->pc = 0x2B34B4u;
    {
        const bool branch_taken_0x2b34b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B34B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
        if (branch_taken_0x2b34b4) {
            ctx->pc = 0x2B34E8u;
            goto label_2b34e8;
        }
    }
    ctx->pc = 0x2B34BCu;
    // 0x2b34bc: 0x8e030000
    ctx->pc = 0x2b34bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b34c0: 0x3c02ffff
    ctx->pc = 0x2b34c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2b34c4: 0x3442ffff
    ctx->pc = 0x2b34c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2b34c8: 0x5462000b
    ctx->pc = 0x2B34C8u;
    {
        const bool branch_taken_0x2b34c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b34c8) {
            ctx->pc = 0x2B34CCu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2B34F8u;
            goto label_2b34f8;
        }
    }
    ctx->pc = 0x2B34D0u;
    // 0x2b34d0: 0x3c030037
    ctx->pc = 0x2b34d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2b34d4: 0x8c6220b0
    ctx->pc = 0x2b34d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8368)));
    // 0x2b34d8: 0x34420008
    ctx->pc = 0x2b34d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x2b34dc: 0xac6220b0
    ctx->pc = 0x2b34dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8368), GPR_U32(ctx, 2));
    // 0x2b34e0: 0x10000005
    ctx->pc = 0x2B34E0u;
    {
        const bool branch_taken_0x2b34e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B34E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b34e0) {
            ctx->pc = 0x2B34F8u;
            goto label_2b34f8;
        }
    }
    ctx->pc = 0x2B34E8u;
label_2b34e8:
    // 0x2b34e8: 0x8c6220b0
    ctx->pc = 0x2b34e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8368)));
    // 0x2b34ec: 0x34420002
    ctx->pc = 0x2b34ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2b34f0: 0xac6220b0
    ctx->pc = 0x2b34f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8368), GPR_U32(ctx, 2));
    // 0x2b34f4: 0x102d
    ctx->pc = 0x2b34f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b34f8:
    // 0x2b34f8: 0xdfbf0080
    ctx->pc = 0x2b34f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b34fc: 0xdfb70070
    ctx->pc = 0x2b34fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b3500: 0xdfb60060
    ctx->pc = 0x2b3500u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b3504: 0xdfb50050
    ctx->pc = 0x2b3504u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b3508: 0xdfb40040
    ctx->pc = 0x2b3508u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b350c: 0xdfb30030
    ctx->pc = 0x2b350cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b3510: 0xdfb20020
    ctx->pc = 0x2b3510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3514: 0xdfb10010
    ctx->pc = 0x2b3514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3518: 0xdfb00000
    ctx->pc = 0x2b3518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b351c: 0x3e00008
    ctx->pc = 0x2B351Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3520u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B33F4u: goto label_2b33f4;
            case 0x2B3410u: goto label_2b3410;
            case 0x2B3440u: goto label_2b3440;
            case 0x2B3454u: goto label_2b3454;
            case 0x2B3470u: goto label_2b3470;
            case 0x2B34A0u: goto label_2b34a0;
            case 0x2B34B0u: goto label_2b34b0;
            case 0x2B34E8u: goto label_2b34e8;
            case 0x2B34F8u: goto label_2b34f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B3524u;
}
