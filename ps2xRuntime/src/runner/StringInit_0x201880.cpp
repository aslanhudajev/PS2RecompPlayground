#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StringInit
// Address: 0x201880 - 0x201908
void StringInit_0x201880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201880u;

    // 0x201880: 0x27bdffb0
    ctx->pc = 0x201880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x201884: 0xffbf0040
    ctx->pc = 0x201884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x201888: 0xffb30030
    ctx->pc = 0x201888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20188c: 0xffb20020
    ctx->pc = 0x20188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x201890: 0xffb10010
    ctx->pc = 0x201890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201894: 0xffb00000
    ctx->pc = 0x201894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201898: 0x202d
    ctx->pc = 0x201898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20189c: 0x3c050031
    ctx->pc = 0x20189cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x2018a0: 0xc08058e
    ctx->pc = 0x2018A0u;
    SET_GPR_U32(ctx, 31, 0x2018A8u);
    ctx->pc = 0x2018A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294964904));
    ctx->pc = 0x201638u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringInitSub_0x201638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2018A8u; }
    }
    if (ctx->pc != 0x2018A8u) { return; }
    ctx->pc = 0x2018A8u;
    // 0x2018a8: 0x802d
    ctx->pc = 0x2018a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018ac: 0x3c020031
    ctx->pc = 0x2018acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2018b0: 0x2453f270
    ctx->pc = 0x2018b0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294963824));
    // 0x2018b4: 0x24120044
    ctx->pc = 0x2018b4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 68));
    // 0x2018b8: 0x3c020031
    ctx->pc = 0x2018b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2018bc: 0x2451f6f0
    ctx->pc = 0x2018bcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x2018c0: 0x101080
    ctx->pc = 0x2018c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2018c4: 0x0
    ctx->pc = 0x2018c4u;
    // NOP
label_2018c8:
    // 0x2018c8: 0x531021
    ctx->pc = 0x2018c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2018cc: 0x8c440000
    ctx->pc = 0x2018ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2018d0: 0x2121018
    ctx->pc = 0x2018d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2018d4: 0xc08058e
    ctx->pc = 0x2018D4u;
    SET_GPR_U32(ctx, 31, 0x2018DCu);
    ctx->pc = 0x2018D8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x201638u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringInitSub_0x201638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2018DCu; }
    }
    if (ctx->pc != 0x2018DCu) { return; }
    ctx->pc = 0x2018DCu;
    // 0x2018dc: 0x26100001
    ctx->pc = 0x2018dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2018e0: 0x2a020002
    ctx->pc = 0x2018e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x2018e4: 0x5440fff8
    ctx->pc = 0x2018E4u;
    {
        const bool branch_taken_0x2018e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2018e4) {
            ctx->pc = 0x2018E8u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
            ctx->pc = 0x2018C8u;
            goto label_2018c8;
        }
    }
    ctx->pc = 0x2018ECu;
    // 0x2018ec: 0xdfbf0040
    ctx->pc = 0x2018ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2018f0: 0xdfb30030
    ctx->pc = 0x2018f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2018f4: 0xdfb20020
    ctx->pc = 0x2018f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2018f8: 0xdfb10010
    ctx->pc = 0x2018f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2018fc: 0xdfb00000
    ctx->pc = 0x2018fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201900: 0x3e00008
    ctx->pc = 0x201900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201904u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2018C8u: goto label_2018c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201908u;
}
