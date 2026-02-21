#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetStringTextSub
// Address: 0x201908 - 0x201978
void GetStringTextSub_0x201908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201908u;

    // 0x201908: 0x24020014
    ctx->pc = 0x201908u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x20190c: 0xa22818
    ctx->pc = 0x20190cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201910: 0x8c820018
    ctx->pc = 0x201910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x201914: 0xa22821
    ctx->pc = 0x201914u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x201918: 0x8ca20000
    ctx->pc = 0x201918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20191c: 0xc2102a
    ctx->pc = 0x20191cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x201920: 0x54400003
    ctx->pc = 0x201920u;
    {
        const bool branch_taken_0x201920 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x201920) {
            ctx->pc = 0x201924u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->pc = 0x201930u;
            goto label_201930;
        }
    }
    ctx->pc = 0x201928u;
    // 0x201928: 0x3e00008
    ctx->pc = 0x201928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20192Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201930u: goto label_201930;
            case 0x20196Cu: goto label_20196c;
            case 0x201970u: goto label_201970;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201930u;
label_201930:
    // 0x201930: 0xc21021
    ctx->pc = 0x201930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x201934: 0x8c830014
    ctx->pc = 0x201934u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x201938: 0x21080
    ctx->pc = 0x201938u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20193c: 0x431021
    ctx->pc = 0x20193cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201940: 0x10e0000a
    ctx->pc = 0x201940u;
    {
        const bool branch_taken_0x201940 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x201944u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x201940) {
            ctx->pc = 0x20196Cu;
            goto label_20196c;
        }
    }
    ctx->pc = 0x201948u;
    // 0x201948: 0x8ca50008
    ctx->pc = 0x201948u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20194c: 0x4a20008
    ctx->pc = 0x20194Cu;
    {
        const bool branch_taken_0x20194c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x20194c) {
            ctx->pc = 0x201950u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->pc = 0x201970u;
            goto label_201970;
        }
    }
    ctx->pc = 0x201954u;
    // 0x201954: 0x8c83000c
    ctx->pc = 0x201954u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x201958: 0x24020014
    ctx->pc = 0x201958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x20195c: 0xa21018
    ctx->pc = 0x20195cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201960: 0x431021
    ctx->pc = 0x201960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201964: 0x8c420010
    ctx->pc = 0x201964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x201968: 0xace20000
    ctx->pc = 0x201968u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_20196c:
    // 0x20196c: 0x8c820010
    ctx->pc = 0x20196cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_201970:
    // 0x201970: 0x3e00008
    ctx->pc = 0x201970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201974u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201930u: goto label_201930;
            case 0x20196Cu: goto label_20196c;
            case 0x201970u: goto label_201970;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201978u;
}
