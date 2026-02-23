#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DispNowLoading_ALL__Fv
// Address: 0x203440 - 0x203578
void DispNowLoading_ALL__Fv_0x203440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DispNowLoading_ALL__Fv");


    ctx->pc = 0x203440u;

    // 0x203440: 0x27bdff50
    ctx->pc = 0x203440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x203444: 0x7fbf0000
    ctx->pc = 0x203444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x203448: 0x8f838d30
    ctx->pc = 0x203448u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x20344c: 0x30630020
    ctx->pc = 0x20344cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32));
    // 0x203450: 0x10600046
    ctx->pc = 0x203450u;
    {
        const bool branch_taken_0x203450 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x203454u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x203450) {
            ctx->pc = 0x20356Cu;
            goto label_20356c;
        }
    }
    ctx->pc = 0x203458u;
    // 0x203458: 0x8423e504
    ctx->pc = 0x203458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20345c: 0x2402000a
    ctx->pc = 0x20345cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x203460: 0x14620025
    ctx->pc = 0x203460u;
    {
        const bool branch_taken_0x203460 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x203464u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x203460) {
            ctx->pc = 0x2034F8u;
            goto label_2034f8;
        }
    }
    ctx->pc = 0x203468u;
    // 0x203468: 0x8f828cb0
    ctx->pc = 0x203468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20346c: 0x30420004
    ctx->pc = 0x20346cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x203470: 0x10400021
    ctx->pc = 0x203470u;
    {
        const bool branch_taken_0x203470 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x203470) {
            ctx->pc = 0x2034F8u;
            goto label_2034f8;
        }
    }
    ctx->pc = 0x203478u;
    // 0x203478: 0x3c010050
    ctx->pc = 0x203478u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20347c: 0x8024fec5
    ctx->pc = 0x20347cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x203480: 0x3c02002c
    ctx->pc = 0x203480u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x203484: 0x24430360
    ctx->pc = 0x203484u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 864));
    // 0x203488: 0x3c023c34
    ctx->pc = 0x203488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15412 << 16));
    // 0x20348c: 0x34463958
    ctx->pc = 0x20348cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 14680));
    // 0x203490: 0x3c0843b8
    ctx->pc = 0x203490u;
    SET_GPR_U32(ctx, 8, ((uint32_t)17336 << 16));
    // 0x203494: 0x42080
    ctx->pc = 0x203494u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x203498: 0x641821
    ctx->pc = 0x203498u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20349c: 0x8c690000
    ctx->pc = 0x20349cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2034a0: 0x3c074100
    ctx->pc = 0x2034a0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)16640 << 16));
    // 0x2034a4: 0x3c053f80
    ctx->pc = 0x2034a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x2034a8: 0x24020005
    ctx->pc = 0x2034a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2034ac: 0x27a40010
    ctx->pc = 0x2034acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2034b0: 0xafa90058
    ctx->pc = 0x2034b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 9));
    // 0x2034b4: 0xafa8001c
    ctx->pc = 0x2034b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x2034b8: 0xafa70020
    ctx->pc = 0x2034b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x2034bc: 0xafa60024
    ctx->pc = 0x2034bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2034c0: 0xafa50028
    ctx->pc = 0x2034c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x2034c4: 0xafa5002c
    ctx->pc = 0x2034c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x2034c8: 0xafa00034
    ctx->pc = 0x2034c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2034cc: 0xafa00030
    ctx->pc = 0x2034ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2034d0: 0xafa5003c
    ctx->pc = 0x2034d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x2034d4: 0xafa50038
    ctx->pc = 0x2034d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x2034d8: 0xafa00040
    ctx->pc = 0x2034d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2034dc: 0x2403ffff
    ctx->pc = 0x2034dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2034e0: 0xafa50044
    ctx->pc = 0x2034e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x2034e4: 0xafa30048
    ctx->pc = 0x2034e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x2034e8: 0xc085bd8
    ctx->pc = 0x2034E8u;
    SET_GPR_U32(ctx, 31, 0x2034F0u);
    ctx->pc = 0x2034ECu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2034F0u; }
        else if (ctx->pc != 0x2034F0u) { ctx->pc = 0x2034F0u; }
    }
    if (ctx->pc != 0x2034F0u) { return; }
    ctx->pc = 0x2034F0u;
    // 0x2034f0: 0x1000001f
    ctx->pc = 0x2034F0u;
    {
        const bool branch_taken_0x2034f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2034F4u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2034f0) {
            ctx->pc = 0x203570u;
            goto label_203570;
        }
    }
    ctx->pc = 0x2034F8u;
label_2034f8:
    // 0x2034f8: 0x8024fec5
    ctx->pc = 0x2034f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x2034fc: 0x3c02002c
    ctx->pc = 0x2034fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x203500: 0x24430360
    ctx->pc = 0x203500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 864));
    // 0x203504: 0x3c023c34
    ctx->pc = 0x203504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15412 << 16));
    // 0x203508: 0x34463958
    ctx->pc = 0x203508u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 14680));
    // 0x20350c: 0x3c0843a0
    ctx->pc = 0x20350cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)17312 << 16));
    // 0x203510: 0x42080
    ctx->pc = 0x203510u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x203514: 0x641821
    ctx->pc = 0x203514u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x203518: 0x8c690000
    ctx->pc = 0x203518u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20351c: 0x3c074360
    ctx->pc = 0x20351cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)17248 << 16));
    // 0x203520: 0x3c053f80
    ctx->pc = 0x203520u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x203524: 0x2402000a
    ctx->pc = 0x203524u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x203528: 0x27a40060
    ctx->pc = 0x203528u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x20352c: 0xafa900a8
    ctx->pc = 0x20352cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 9));
    // 0x203530: 0xafa8006c
    ctx->pc = 0x203530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 8));
    // 0x203534: 0xafa70070
    ctx->pc = 0x203534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x203538: 0xafa60074
    ctx->pc = 0x203538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 6));
    // 0x20353c: 0xafa50078
    ctx->pc = 0x20353cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x203540: 0xafa5007c
    ctx->pc = 0x203540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x203544: 0xafa00084
    ctx->pc = 0x203544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x203548: 0xafa00080
    ctx->pc = 0x203548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x20354c: 0xafa5008c
    ctx->pc = 0x20354cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
    // 0x203550: 0xafa50088
    ctx->pc = 0x203550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x203554: 0xafa00090
    ctx->pc = 0x203554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x203558: 0x2403ffff
    ctx->pc = 0x203558u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20355c: 0xafa50094
    ctx->pc = 0x20355cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
    // 0x203560: 0xafa30098
    ctx->pc = 0x203560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x203564: 0xc085bd8
    ctx->pc = 0x203564u;
    SET_GPR_U32(ctx, 31, 0x20356Cu);
    ctx->pc = 0x203568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20356Cu; }
        else if (ctx->pc != 0x20356Cu) { ctx->pc = 0x20356Cu; }
    }
    if (ctx->pc != 0x20356Cu) { return; }
    ctx->pc = 0x20356Cu;
label_20356c:
    // 0x20356c: 0x7bbf0000
    ctx->pc = 0x20356cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203570:
    // 0x203570: 0x3e00008
    ctx->pc = 0x203570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2034F8u: goto label_2034f8;
            case 0x20356Cu: goto label_20356c;
            case 0x203570u: goto label_203570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203578u;
}
