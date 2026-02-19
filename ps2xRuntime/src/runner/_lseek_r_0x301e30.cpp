#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lseek_r
// Address: 0x301e30 - 0x301e90
void _lseek_r_0x301e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x301e30u;

    // 0x301e30: 0x27bdffd0
    ctx->pc = 0x301e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x301e34: 0xffb00000
    ctx->pc = 0x301e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x301e38: 0x80802d
    ctx->pc = 0x301e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301e3c: 0xffb10010
    ctx->pc = 0x301e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x301e40: 0xa0202d
    ctx->pc = 0x301e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301e44: 0x3c11003c
    ctx->pc = 0x301e44u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x301e48: 0xc0282d
    ctx->pc = 0x301e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301e4c: 0xffbf0020
    ctx->pc = 0x301e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x301e50: 0xae20b198
    ctx->pc = 0x301e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947224), GPR_U32(ctx, 0));
    // 0x301e54: 0xc0c0f08
    ctx->pc = 0x301E54u;
    SET_GPR_U32(ctx, 31, 0x301E5Cu);
    ctx->pc = 0x301E58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        lseek_0x303c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E5Cu; }
    }
    if (ctx->pc != 0x301E5Cu) { return; }
    ctx->pc = 0x301E5Cu;
    // 0x301e5c: 0x40182d
    ctx->pc = 0x301e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301e60: 0x2402ffff
    ctx->pc = 0x301e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x301e64: 0x14620005
    ctx->pc = 0x301E64u;
    {
        const bool branch_taken_0x301e64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x301E68u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x301e64) {
            ctx->pc = 0x301E7Cu;
            goto label_301e7c;
        }
    }
    ctx->pc = 0x301E6Cu;
    // 0x301e6c: 0x8e22b198
    ctx->pc = 0x301e6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
    // 0x301e70: 0x54400002
    ctx->pc = 0x301E70u;
    {
        const bool branch_taken_0x301e70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x301e70) {
            ctx->pc = 0x301E74u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x301E7Cu;
            goto label_301e7c;
        }
    }
    ctx->pc = 0x301E78u;
    // 0x301e78: 0xdfbf0020
    ctx->pc = 0x301e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_301e7c:
    // 0x301e7c: 0x60102d
    ctx->pc = 0x301e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301e80: 0xdfb10010
    ctx->pc = 0x301e80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301e84: 0xdfb00000
    ctx->pc = 0x301e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301e88: 0x3e00008
    ctx->pc = 0x301E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301E8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x301E7Cu: goto label_301e7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x301E90u;
}
