#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerGhostStart
// Address: 0x2748d8 - 0x274974
void SumnerGhostStart_0x2748d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2748d8u;

    // 0x2748d8: 0x27bdffd0
    ctx->pc = 0x2748d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2748dc: 0xffbf0020
    ctx->pc = 0x2748dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2748e0: 0xffb10010
    ctx->pc = 0x2748e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2748e4: 0xffb00000
    ctx->pc = 0x2748e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2748e8: 0x3c110034
    ctx->pc = 0x2748e8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x2748ec: 0x8e22fbbc
    ctx->pc = 0x2748ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966204)));
    // 0x2748f0: 0x1440001c
    ctx->pc = 0x2748F0u;
    {
        const bool branch_taken_0x2748f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2748F4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2748f0) {
            ctx->pc = 0x274964u;
            goto label_274964;
        }
    }
    ctx->pc = 0x2748F8u;
    // 0x2748f8: 0x3c020034
    ctx->pc = 0x2748f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2748fc: 0x8c44cda0
    ctx->pc = 0x2748fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x274900: 0x3c05003b
    ctx->pc = 0x274900u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x274904: 0x24a5a7f8
    ctx->pc = 0x274904u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944760));
    // 0x274908: 0xc0847fc
    ctx->pc = 0x274908u;
    SET_GPR_U32(ctx, 31, 0x274910u);
    ctx->pc = 0x27490Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274910u; }
    }
    if (ctx->pc != 0x274910u) { return; }
    ctx->pc = 0x274910u;
    // 0x274910: 0x10400013
    ctx->pc = 0x274910u;
    {
        const bool branch_taken_0x274910 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274914u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274910) {
            ctx->pc = 0x274960u;
            goto label_274960;
        }
    }
    ctx->pc = 0x274918u;
    // 0x274918: 0x3c100034
    ctx->pc = 0x274918u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x27491c: 0x2605fc90
    ctx->pc = 0x27491cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294966416));
    // 0x274920: 0x302d
    ctx->pc = 0x274920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274924: 0x3c070088
    ctx->pc = 0x274924u;
    SET_GPR_U32(ctx, 7, ((uint32_t)136 << 16));
    // 0x274928: 0xc08476a
    ctx->pc = 0x274928u;
    SET_GPR_U32(ctx, 31, 0x274930u);
    ctx->pc = 0x27492Cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2176));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274930u; }
    }
    if (ctx->pc != 0x274930u) { return; }
    ctx->pc = 0x274930u;
    // 0x274930: 0xae02fc90
    ctx->pc = 0x274930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966416), GPR_U32(ctx, 2));
    // 0x274934: 0x3c020038
    ctx->pc = 0x274934u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x274938: 0x8c44c9a0
    ctx->pc = 0x274938u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294953376)));
    // 0x27493c: 0x3c05003a
    ctx->pc = 0x27493cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x274940: 0x24a52550
    ctx->pc = 0x274940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x274944: 0xc0b3ec0
    ctx->pc = 0x274944u;
    SET_GPR_U32(ctx, 31, 0x27494Cu);
    ctx->pc = 0x274948u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27494Cu; }
    }
    if (ctx->pc != 0x27494Cu) { return; }
    ctx->pc = 0x27494Cu;
    // 0x27494c: 0xae22fbbc
    ctx->pc = 0x27494cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966204), GPR_U32(ctx, 2));
    // 0x274950: 0x8e03fc90
    ctx->pc = 0x274950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294966416)));
    // 0x274954: 0x8c640000
    ctx->pc = 0x274954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274958: 0xc0b3f94
    ctx->pc = 0x274958u;
    SET_GPR_U32(ctx, 31, 0x274960u);
    ctx->pc = 0x27495Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274960u; }
    }
    if (ctx->pc != 0x274960u) { return; }
    ctx->pc = 0x274960u;
label_274960:
    // 0x274960: 0xdfbf0020
    ctx->pc = 0x274960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_274964:
    // 0x274964: 0xdfb10010
    ctx->pc = 0x274964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274968: 0xdfb00000
    ctx->pc = 0x274968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27496c: 0x3e00008
    ctx->pc = 0x27496Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274970u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274960u: goto label_274960;
            case 0x274964u: goto label_274964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274974u;
}
