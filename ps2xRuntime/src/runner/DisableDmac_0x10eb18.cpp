#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DisableDmac
// Address: 0x10eb18 - 0x10eb80
void DisableDmac_0x10eb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10eb18u;

    // 0x10eb18: 0x27bdffd0
    ctx->pc = 0x10eb18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10eb1c: 0xffb10010
    ctx->pc = 0x10eb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10eb20: 0xffbf0020
    ctx->pc = 0x10eb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10eb24: 0x80882d
    ctx->pc = 0x10eb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb28: 0xffb00000
    ctx->pc = 0x10eb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10eb2c: 0x40106000
    ctx->pc = 0x10eb2cu;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x10eb30: 0x3c020001
    ctx->pc = 0x10eb30u;
    SET_GPR_S32(ctx, 2, ((uint32_t)1 << 16));
    // 0x10eb34: 0x2028024
    ctx->pc = 0x10eb34u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10eb38: 0x12000003
    ctx->pc = 0x10EB38u;
    {
        const bool branch_taken_0x10eb38 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x10eb38) {
            ctx->pc = 0x10EB48u;
            goto label_10eb48;
        }
    }
    ctx->pc = 0x10EB40u;
    // 0x10eb40: 0xc0453ee
    ctx->pc = 0x10EB40u;
    SET_GPR_U32(ctx, 31, 0x10EB48u);
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EB48u; }
    }
    if (ctx->pc != 0x10EB48u) { return; }
    ctx->pc = 0x10EB48u;
label_10eb48:
    // 0x10eb48: 0xc043804
    ctx->pc = 0x10EB48u;
    SET_GPR_U32(ctx, 31, 0x10EB50u);
    ctx->pc = 0x10EB4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E010u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__DisableDmac_0x10e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EB50u; }
    }
    if (ctx->pc != 0x10EB50u) { return; }
    ctx->pc = 0x10EB50u;
    // 0x10eb50: 0x40882d
    ctx->pc = 0x10eb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb54: 0xf
    ctx->pc = 0x10eb54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10eb58: 0x12000004
    ctx->pc = 0x10EB58u;
    {
        const bool branch_taken_0x10eb58 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x10EB5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10eb58) {
            ctx->pc = 0x10EB6Cu;
            goto label_10eb6c;
        }
    }
    ctx->pc = 0x10EB60u;
    // 0x10eb60: 0xc045400
    ctx->pc = 0x10EB60u;
    SET_GPR_U32(ctx, 31, 0x10EB68u);
    ctx->pc = 0x115000u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x115000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EB68u; }
    }
    if (ctx->pc != 0x10EB68u) { return; }
    ctx->pc = 0x10EB68u;
    // 0x10eb68: 0x220102d
    ctx->pc = 0x10eb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10eb6c:
    // 0x10eb6c: 0xdfbf0020
    ctx->pc = 0x10eb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10eb70: 0xdfb10010
    ctx->pc = 0x10eb70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eb74: 0xdfb00000
    ctx->pc = 0x10eb74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eb78: 0x3e00008
    ctx->pc = 0x10EB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EB48u: goto label_10eb48;
            case 0x10EB6Cu: goto label_10eb6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EB80u;
}
