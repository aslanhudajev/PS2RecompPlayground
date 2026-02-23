#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getFIFOindex
// Address: 0x199258 - 0x1992a8
void getFIFOindex_0x199258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getFIFOindex");


    ctx->pc = 0x199258u;

    // 0x199258: 0x80302d
    ctx->pc = 0x199258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19925c: 0x3c020fff
    ctx->pc = 0x19925cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x199260: 0x8cc30008
    ctx->pc = 0x199260u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x199264: 0x3442ffff
    ctx->pc = 0x199264u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x199268: 0x8cc40004
    ctx->pc = 0x199268u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x19926c: 0x31900
    ctx->pc = 0x19926cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x199270: 0x641821
    ctx->pc = 0x199270u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x199274: 0x24630010
    ctx->pc = 0x199274u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x199278: 0x621824
    ctx->pc = 0x199278u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19927c: 0x54a30003
    ctx->pc = 0x19927Cu;
    {
        const bool branch_taken_0x19927c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x19927c) {
            ctx->pc = 0x199280u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x19928Cu;
            goto label_19928c;
        }
    }
    ctx->pc = 0x199284u;
    // 0x199284: 0x3e00008
    ctx->pc = 0x199284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199288u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19928Cu: goto label_19928c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19928Cu;
label_19928c:
    // 0x19928c: 0x2404ffff
    ctx->pc = 0x19928cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199290: 0xa31823
    ctx->pc = 0x199290u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x199294: 0x83202a
    ctx->pc = 0x199294u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x199298: 0x246207ff
    ctx->pc = 0x199298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x19929c: 0x64100b
    ctx->pc = 0x19929cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x1992a0: 0x3e00008
    ctx->pc = 0x1992A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1992A4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19928Cu: goto label_19928c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1992A8u;
}
