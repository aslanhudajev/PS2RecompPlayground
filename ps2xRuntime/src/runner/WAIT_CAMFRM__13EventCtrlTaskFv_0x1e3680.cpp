#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_CAMFRM__13EventCtrlTaskFv
// Address: 0x1e3680 - 0x1e3758
void WAIT_CAMFRM__13EventCtrlTaskFv_0x1e3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_CAMFRM__13EventCtrlTaskFv");


    ctx->pc = 0x1e3680u;

    // 0x1e3680: 0x8c87000c
    ctx->pc = 0x1e3680u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3684: 0x8f838ce8
    ctx->pc = 0x1e3684u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x1e3688: 0x10600006
    ctx->pc = 0x1E3688u;
    {
        const bool branch_taken_0x1e3688 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E368Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 4)));
        if (branch_taken_0x1e3688) {
            ctx->pc = 0x1E36A4u;
            goto label_1e36a4;
        }
    }
    ctx->pc = 0x1E3690u;
    // 0x1e3690: 0xa0800004
    ctx->pc = 0x1e3690u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3694: 0x8c83000c
    ctx->pc = 0x1e3694u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3698: 0x2463000c
    ctx->pc = 0x1e3698u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
    // 0x1e369c: 0x1000002c
    ctx->pc = 0x1E369Cu;
    {
        const bool branch_taken_0x1e369c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E36A0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x1e369c) {
            ctx->pc = 0x1E3750u;
            goto label_1e3750;
        }
    }
    ctx->pc = 0x1E36A4u;
label_1e36a4:
    // 0x1e36a4: 0x80850004
    ctx->pc = 0x1e36a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e36a8: 0x24030001
    ctx->pc = 0x1e36a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e36ac: 0x10a30004
    ctx->pc = 0x1E36ACu;
    {
        const bool branch_taken_0x1e36ac = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e36ac) {
            ctx->pc = 0x1E36C0u;
            goto label_1e36c0;
        }
    }
    ctx->pc = 0x1E36B4u;
    // 0x1e36b4: 0x24030001
    ctx->pc = 0x1e36b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e36b8: 0x10000025
    ctx->pc = 0x1E36B8u;
    {
        const bool branch_taken_0x1e36b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E36BCu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1e36b8) {
            ctx->pc = 0x1E3750u;
            goto label_1e3750;
        }
    }
    ctx->pc = 0x1E36C0u;
label_1e36c0:
    // 0x1e36c0: 0x83838b2c
    ctx->pc = 0x1e36c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1e36c4: 0x10600022
    ctx->pc = 0x1E36C4u;
    {
        const bool branch_taken_0x1e36c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e36c4) {
            ctx->pc = 0x1E3750u;
            goto label_1e3750;
        }
    }
    ctx->pc = 0x1E36CCu;
    // 0x1e36cc: 0x8ce30008
    ctx->pc = 0x1e36ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1e36d0: 0x10600003
    ctx->pc = 0x1E36D0u;
    {
        const bool branch_taken_0x1e36d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e36d0) {
            ctx->pc = 0x1E36E0u;
            goto label_1e36e0;
        }
    }
    ctx->pc = 0x1E36D8u;
    // 0x1e36d8: 0x1000000b
    ctx->pc = 0x1E36D8u;
    {
        const bool branch_taken_0x1e36d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E36DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x1e36d8) {
            ctx->pc = 0x1E3708u;
            goto label_1e3708;
        }
    }
    ctx->pc = 0x1E36E0u;
label_1e36e0:
    // 0x1e36e0: 0x8f858c48
    ctx->pc = 0x1e36e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e36e4: 0x61840
    ctx->pc = 0x1e36e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e36e8: 0x661821
    ctx->pc = 0x1e36e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e36ec: 0x31880
    ctx->pc = 0x1e36ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e36f0: 0x661821
    ctx->pc = 0x1e36f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e36f4: 0x31900
    ctx->pc = 0x1e36f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e36f8: 0x651821
    ctx->pc = 0x1e36f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e36fc: 0x8c6300c8
    ctx->pc = 0x1e36fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1e3700: 0x0
    ctx->pc = 0x1e3700u;
    // NOP
    // 0x1e3704: 0x2463ffff
    ctx->pc = 0x1e3704u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1e3708:
    // 0x1e3708: 0x44830000
    ctx->pc = 0x1e3708u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1e370c: 0x8f858c48
    ctx->pc = 0x1e370cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e3710: 0x61840
    ctx->pc = 0x1e3710u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e3714: 0x661821
    ctx->pc = 0x1e3714u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e3718: 0x31880
    ctx->pc = 0x1e3718u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e371c: 0x661821
    ctx->pc = 0x1e371cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e3720: 0x31900
    ctx->pc = 0x1e3720u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e3724: 0x651821
    ctx->pc = 0x1e3724u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e3728: 0x46800020
    ctx->pc = 0x1e3728u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1e372c: 0xc46100c0
    ctx->pc = 0x1e372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3730: 0x46000834
    ctx->pc = 0x1e3730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3734: 0x0
    ctx->pc = 0x1e3734u;
    // NOP
    // 0x1e3738: 0x45010005
    ctx->pc = 0x1E3738u;
    {
        const bool branch_taken_0x1e3738 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3738) {
            ctx->pc = 0x1E3750u;
            goto label_1e3750;
        }
    }
    ctx->pc = 0x1E3740u;
    // 0x1e3740: 0xa0800004
    ctx->pc = 0x1e3740u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3744: 0x8c83000c
    ctx->pc = 0x1e3744u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3748: 0x2463000c
    ctx->pc = 0x1e3748u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
    // 0x1e374c: 0xac83000c
    ctx->pc = 0x1e374cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1e3750:
    // 0x1e3750: 0x3e00008
    ctx->pc = 0x1E3750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E36A4u: goto label_1e36a4;
            case 0x1E36C0u: goto label_1e36c0;
            case 0x1E36E0u: goto label_1e36e0;
            case 0x1E3708u: goto label_1e3708;
            case 0x1E3750u: goto label_1e3750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3758u;
}
