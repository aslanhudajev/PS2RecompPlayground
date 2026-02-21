#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lseek_r
// Address: 0x12fb58 - 0x12fbb8
void _lseek_r_0x12fb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fb58u;

    // 0x12fb58: 0x27bdffd0
    ctx->pc = 0x12fb58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12fb5c: 0xffb00000
    ctx->pc = 0x12fb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fb60: 0x80802d
    ctx->pc = 0x12fb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb64: 0xffb10010
    ctx->pc = 0x12fb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12fb68: 0xa0202d
    ctx->pc = 0x12fb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb6c: 0x3c110017
    ctx->pc = 0x12fb6cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x12fb70: 0xc0282d
    ctx->pc = 0x12fb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb74: 0xffbf0020
    ctx->pc = 0x12fb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12fb78: 0xae205fe0
    ctx->pc = 0x12fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24544), GPR_U32(ctx, 0));
    // 0x12fb7c: 0xc043a3c
    ctx->pc = 0x12FB7Cu;
    SET_GPR_U32(ctx, 31, 0x12FB84u);
    ctx->pc = 0x12FB80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        lseek_0x10e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB84u; }
    }
    if (ctx->pc != 0x12FB84u) { return; }
    ctx->pc = 0x12FB84u;
    // 0x12fb84: 0x40182d
    ctx->pc = 0x12fb84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb88: 0x2402ffff
    ctx->pc = 0x12fb88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12fb8c: 0x14620005
    ctx->pc = 0x12FB8Cu;
    {
        const bool branch_taken_0x12fb8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x12FB90u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12fb8c) {
            ctx->pc = 0x12FBA4u;
            goto label_12fba4;
        }
    }
    ctx->pc = 0x12FB94u;
    // 0x12fb94: 0x8e225fe0
    ctx->pc = 0x12fb94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24544)));
    // 0x12fb98: 0x54400002
    ctx->pc = 0x12FB98u;
    {
        const bool branch_taken_0x12fb98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12fb98) {
            ctx->pc = 0x12FB9Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x12FBA4u;
            goto label_12fba4;
        }
    }
    ctx->pc = 0x12FBA0u;
    // 0x12fba0: 0xdfbf0020
    ctx->pc = 0x12fba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12fba4:
    // 0x12fba4: 0x60102d
    ctx->pc = 0x12fba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fba8: 0xdfb10010
    ctx->pc = 0x12fba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fbac: 0xdfb00000
    ctx->pc = 0x12fbacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fbb0: 0x3e00008
    ctx->pc = 0x12FBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FBB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBA4u: goto label_12fba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FBB8u;
}
