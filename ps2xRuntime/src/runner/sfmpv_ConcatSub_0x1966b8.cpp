#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_ConcatSub
// Address: 0x1966b8 - 0x196764
void sfmpv_ConcatSub_0x1966b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_ConcatSub");


    ctx->pc = 0x1966b8u;

    // 0x1966b8: 0x27bdffc0
    ctx->pc = 0x1966b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1966bc: 0x24050006
    ctx->pc = 0x1966bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1966c0: 0xffb00000
    ctx->pc = 0x1966c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1966c4: 0x80802d
    ctx->pc = 0x1966c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966c8: 0xffb20020
    ctx->pc = 0x1966c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1966cc: 0xffb10010
    ctx->pc = 0x1966ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1966d0: 0x26120a94
    ctx->pc = 0x1966d0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 2708));
    // 0x1966d4: 0xffbf0030
    ctx->pc = 0x1966d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1966d8: 0xc0674c2
    ctx->pc = 0x1966D8u;
    SET_GPR_U32(ctx, 31, 0x1966E0u);
    ctx->pc = 0x1966DCu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 14144));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966E0u; }
        else if (ctx->pc != 0x1966E0u) { ctx->pc = 0x1966E0u; }
    }
    if (ctx->pc != 0x1966E0u) { return; }
    ctx->pc = 0x1966E0u;
    // 0x1966e0: 0x10400007
    ctx->pc = 0x1966E0u;
    {
        const bool branch_taken_0x1966e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1966e0) {
            ctx->pc = 0x196700u;
            goto label_196700;
        }
    }
    ctx->pc = 0x1966E8u;
    // 0x1966e8: 0xc0659fe
    ctx->pc = 0x1966E8u;
    SET_GPR_U32(ctx, 31, 0x1966F0u);
    ctx->pc = 0x1966ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1967F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_CalcAudioTotTime_0x1967f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966F0u; }
        else if (ctx->pc != 0x1966F0u) { ctx->pc = 0x1966F0u; }
    }
    if (ctx->pc != 0x1966F0u) { return; }
    ctx->pc = 0x1966F0u;
    // 0x1966f0: 0x4410005
    ctx->pc = 0x1966F0u;
    {
        const bool branch_taken_0x1966f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1966f0) {
            ctx->pc = 0x196708u;
            goto label_196708;
        }
    }
    ctx->pc = 0x1966F8u;
    // 0x1966f8: 0x10000014
    ctx->pc = 0x1966F8u;
    {
        const bool branch_taken_0x1966f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1966FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1966f8) {
            ctx->pc = 0x19674Cu;
            goto label_19674c;
        }
    }
    ctx->pc = 0x196700u;
label_196700:
    // 0x196700: 0xc0659da
    ctx->pc = 0x196700u;
    SET_GPR_U32(ctx, 31, 0x196708u);
    ctx->pc = 0x196704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196768u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_CalcVideoTotTime_0x196768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196708u; }
        else if (ctx->pc != 0x196708u) { ctx->pc = 0x196708u; }
    }
    if (ctx->pc != 0x196708u) { return; }
    ctx->pc = 0x196708u;
label_196708:
    // 0x196708: 0x18400006
    ctx->pc = 0x196708u;
    {
        const bool branch_taken_0x196708 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19670Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196708) {
            ctx->pc = 0x196724u;
            goto label_196724;
        }
    }
    ctx->pc = 0x196710u;
    // 0x196710: 0xc064aa8
    ctx->pc = 0x196710u;
    SET_GPR_U32(ctx, 31, 0x196718u);
    ctx->pc = 0x196714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFCON_UpdateConcatTime_0x192aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196718u; }
        else if (ctx->pc != 0x196718u) { ctx->pc = 0x196718u; }
    }
    if (ctx->pc != 0x196718u) { return; }
    ctx->pc = 0x196718u;
    // 0x196718: 0x8e220040
    ctx->pc = 0x196718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19671c: 0x24420001
    ctx->pc = 0x19671cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x196720: 0xae220040
    ctx->pc = 0x196720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_196724:
    // 0x196724: 0x3c057fff
    ctx->pc = 0x196724u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
    // 0x196728: 0x26440018
    ctx->pc = 0x196728u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 24));
    // 0x19672c: 0xc06760c
    ctx->pc = 0x19672Cu;
    SET_GPR_U32(ctx, 31, 0x196734u);
    ctx->pc = 0x196730u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    ctx->pc = 0x19D830u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_InitTtu_0x19d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196734u; }
        else if (ctx->pc != 0x196734u) { ctx->pc = 0x196734u; }
    }
    if (ctx->pc != 0x196734u) { return; }
    ctx->pc = 0x196734u;
    // 0x196734: 0x26440040
    ctx->pc = 0x196734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
    // 0x196738: 0xc06760c
    ctx->pc = 0x196738u;
    SET_GPR_U32(ctx, 31, 0x196740u);
    ctx->pc = 0x19673Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x19D830u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_InitTtu_0x19d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196740u; }
        else if (ctx->pc != 0x196740u) { ctx->pc = 0x196740u; }
    }
    if (ctx->pc != 0x196740u) { return; }
    ctx->pc = 0x196740u;
    // 0x196740: 0x240300c0
    ctx->pc = 0x196740u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x196744: 0x102d
    ctx->pc = 0x196744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196748: 0xae230030
    ctx->pc = 0x196748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_19674c:
    // 0x19674c: 0xdfbf0030
    ctx->pc = 0x19674cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196750: 0xdfb20020
    ctx->pc = 0x196750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196754: 0xdfb10010
    ctx->pc = 0x196754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196758: 0xdfb00000
    ctx->pc = 0x196758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19675c: 0x3e00008
    ctx->pc = 0x19675Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196760u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196700u: goto label_196700;
            case 0x196708u: goto label_196708;
            case 0x196724u: goto label_196724;
            case 0x19674Cu: goto label_19674c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196764u;
}
