#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetSize
// Address: 0x2c33d8 - 0x2c3548
void MBBlitSetSize_0x2c33d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c33d8u;

    // 0x2c33d8: 0x27bdffa0
    ctx->pc = 0x2c33d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c33dc: 0xffbf0050
    ctx->pc = 0x2c33dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c33e0: 0xffb40040
    ctx->pc = 0x2c33e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c33e4: 0xffb30030
    ctx->pc = 0x2c33e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c33e8: 0xffb20020
    ctx->pc = 0x2c33e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c33ec: 0xffb10010
    ctx->pc = 0x2c33ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c33f0: 0xffb00000
    ctx->pc = 0x2c33f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c33f4: 0x80902d
    ctx->pc = 0x2c33f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33f8: 0xa0802d
    ctx->pc = 0x2c33f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c33fc: 0xc0882d
    ctx->pc = 0x2c33fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3400: 0x3c020036
    ctx->pc = 0x2c3400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c3404: 0x8c54dee0
    ctx->pc = 0x2c3404u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c3408: 0x6000003
    ctx->pc = 0x2C3408u;
    {
        const bool branch_taken_0x2c3408 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2C340Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c3408) {
            ctx->pc = 0x2C3418u;
            goto label_2c3418;
        }
    }
    ctx->pc = 0x2C3410u;
    // 0x2c3410: 0x621001b
    ctx->pc = 0x2C3410u;
    {
        const bool branch_taken_0x2c3410 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2c3410) {
            ctx->pc = 0x2C3480u;
            goto label_2c3480;
        }
    }
    ctx->pc = 0x2C3418u;
label_2c3418:
    // 0x2c3418: 0xc0b3da0
    ctx->pc = 0x2C3418u;
    SET_GPR_U32(ctx, 31, 0x2C3420u);
    ctx->pc = 0x2C341Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3420u; }
    }
    if (ctx->pc != 0x2C3420u) { return; }
    ctx->pc = 0x2C3420u;
    // 0x2c3420: 0x601000b
    ctx->pc = 0x2C3420u;
    {
        const bool branch_taken_0x2c3420 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2C3424u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c3420) {
            ctx->pc = 0x2C3450u;
            goto label_2c3450;
        }
    }
    ctx->pc = 0x2C3428u;
    // 0x2c3428: 0x94820008
    ctx->pc = 0x2c3428u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c342c: 0x30420001
    ctx->pc = 0x2c342cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2c3430: 0x10400006
    ctx->pc = 0x2C3430u;
    {
        const bool branch_taken_0x2c3430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3434u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
        if (branch_taken_0x2c3430) {
            ctx->pc = 0x2C344Cu;
            goto label_2c344c;
        }
    }
    ctx->pc = 0x2C3438u;
    // 0x2c3438: 0x8e420000
    ctx->pc = 0x2c3438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c343c: 0x3c030100
    ctx->pc = 0x2c343cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x2c3440: 0x431024
    ctx->pc = 0x2c3440u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3444: 0x101840
    ctx->pc = 0x2c3444u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 1));
    // 0x2c3448: 0x62800a
    ctx->pc = 0x2c3448u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_2c344c:
    // 0x2c344c: 0x36730400
    ctx->pc = 0x2c344cu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 1024));
label_2c3450:
    // 0x2c3450: 0x621000b
    ctx->pc = 0x2C3450u;
    {
        const bool branch_taken_0x2c3450 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2c3450) {
            ctx->pc = 0x2C3480u;
            goto label_2c3480;
        }
    }
    ctx->pc = 0x2C3458u;
    // 0x2c3458: 0x94820008
    ctx->pc = 0x2c3458u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c345c: 0x30420001
    ctx->pc = 0x2c345cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2c3460: 0x10400006
    ctx->pc = 0x2C3460u;
    {
        const bool branch_taken_0x2c3460 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3464u;
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
        if (branch_taken_0x2c3460) {
            ctx->pc = 0x2C347Cu;
            goto label_2c347c;
        }
    }
    ctx->pc = 0x2C3468u;
    // 0x2c3468: 0x8e420000
    ctx->pc = 0x2c3468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c346c: 0x3c030100
    ctx->pc = 0x2c346cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x2c3470: 0x431024
    ctx->pc = 0x2c3470u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3474: 0x111840
    ctx->pc = 0x2c3474u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x2c3478: 0x62880a
    ctx->pc = 0x2c3478u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_2c347c:
    // 0x2c347c: 0x36730800
    ctx->pc = 0x2c347cu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 2048));
label_2c3480:
    // 0x2c3480: 0x12000013
    ctx->pc = 0x2C3480u;
    {
        const bool branch_taken_0x2c3480 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c3480) {
            ctx->pc = 0x2C34D0u;
            goto label_2c34d0;
        }
    }
    ctx->pc = 0x2C3488u;
    // 0x2c3488: 0x8e420000
    ctx->pc = 0x2c3488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c348c: 0x30420040
    ctx->pc = 0x2c348cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2c3490: 0x50400003
    ctx->pc = 0x2C3490u;
    {
        const bool branch_taken_0x2c3490 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c3490) {
            ctx->pc = 0x2C3494u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->pc = 0x2C34A0u;
            goto label_2c34a0;
        }
    }
    ctx->pc = 0x2C3498u;
    // 0x2c3498: 0x10000007
    ctx->pc = 0x2C3498u;
    {
        const bool branch_taken_0x2c3498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C349Cu;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x2c3498) {
            ctx->pc = 0x2C34B8u;
            goto label_2c34b8;
        }
    }
    ctx->pc = 0x2C34A0u;
label_2c34a0:
    // 0x2c34a0: 0x44900000
    ctx->pc = 0x2c34a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x2c34a4: 0x46800020
    ctx->pc = 0x2c34a4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c34a8: 0xc4410000
    ctx->pc = 0x2c34a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c34ac: 0x46010002
    ctx->pc = 0x2c34acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c34b0: 0x46000064
    ctx->pc = 0x2c34b0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c34b4: 0x44100800
    ctx->pc = 0x2c34b4u;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[1]);
label_2c34b8:
    // 0x2c34b8: 0xa6500010
    ctx->pc = 0x2c34b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 16));
    // 0x2c34bc: 0x8e420000
    ctx->pc = 0x2c34bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c34c0: 0x3c03ffff
    ctx->pc = 0x2c34c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2c34c4: 0x3463fbff
    ctx->pc = 0x2c34c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 64511));
    // 0x2c34c8: 0x431024
    ctx->pc = 0x2c34c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c34cc: 0xae420000
    ctx->pc = 0x2c34ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2c34d0:
    // 0x2c34d0: 0x12200013
    ctx->pc = 0x2C34D0u;
    {
        const bool branch_taken_0x2c34d0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C34D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x2c34d0) {
            ctx->pc = 0x2C3520u;
            goto label_2c3520;
        }
    }
    ctx->pc = 0x2C34D8u;
    // 0x2c34d8: 0x30420140
    ctx->pc = 0x2c34d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 320));
    // 0x2c34dc: 0x50400003
    ctx->pc = 0x2C34DCu;
    {
        const bool branch_taken_0x2c34dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c34dc) {
            ctx->pc = 0x2C34E0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->pc = 0x2C34ECu;
            goto label_2c34ec;
        }
    }
    ctx->pc = 0x2C34E4u;
    // 0x2c34e4: 0x10000007
    ctx->pc = 0x2C34E4u;
    {
        const bool branch_taken_0x2c34e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C34E8u;
        SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x2c34e4) {
            ctx->pc = 0x2C3504u;
            goto label_2c3504;
        }
    }
    ctx->pc = 0x2C34ECu;
label_2c34ec:
    // 0x2c34ec: 0x44910000
    ctx->pc = 0x2c34ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x2c34f0: 0x46800020
    ctx->pc = 0x2c34f0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c34f4: 0xc4410004
    ctx->pc = 0x2c34f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c34f8: 0x46010002
    ctx->pc = 0x2c34f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c34fc: 0x46000064
    ctx->pc = 0x2c34fcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3500: 0x44110800
    ctx->pc = 0x2c3500u;
    SET_GPR_U32(ctx, 17, *(uint32_t*)&ctx->f[1]);
label_2c3504:
    // 0x2c3504: 0xa6510012
    ctx->pc = 0x2c3504u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 17));
    // 0x2c3508: 0x8e420000
    ctx->pc = 0x2c3508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c350c: 0x3c03ffff
    ctx->pc = 0x2c350cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2c3510: 0x3463f7ff
    ctx->pc = 0x2c3510u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 63487));
    // 0x2c3514: 0x431024
    ctx->pc = 0x2c3514u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3518: 0xae420000
    ctx->pc = 0x2c3518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2c351c: 0x8e420000
    ctx->pc = 0x2c351cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c3520:
    // 0x2c3520: 0x2621025
    ctx->pc = 0x2c3520u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2c3524: 0xae420000
    ctx->pc = 0x2c3524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2c3528: 0xdfbf0050
    ctx->pc = 0x2c3528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c352c: 0xdfb40040
    ctx->pc = 0x2c352cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3530: 0xdfb30030
    ctx->pc = 0x2c3530u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3534: 0xdfb20020
    ctx->pc = 0x2c3534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3538: 0xdfb10010
    ctx->pc = 0x2c3538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c353c: 0xdfb00000
    ctx->pc = 0x2c353cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3540: 0x3e00008
    ctx->pc = 0x2C3540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3544u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C3418u: goto label_2c3418;
            case 0x2C344Cu: goto label_2c344c;
            case 0x2C3450u: goto label_2c3450;
            case 0x2C347Cu: goto label_2c347c;
            case 0x2C3480u: goto label_2c3480;
            case 0x2C34A0u: goto label_2c34a0;
            case 0x2C34B8u: goto label_2c34b8;
            case 0x2C34D0u: goto label_2c34d0;
            case 0x2C34ECu: goto label_2c34ec;
            case 0x2C3504u: goto label_2c3504;
            case 0x2C3520u: goto label_2c3520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C3548u;
}
