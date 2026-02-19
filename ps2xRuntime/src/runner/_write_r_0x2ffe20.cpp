#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _write_r
// Address: 0x2ffe20 - 0x2ffe80
void _write_r_0x2ffe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ffe20u;

    // 0x2ffe20: 0x27bdffd0
    ctx->pc = 0x2ffe20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ffe24: 0xffb00000
    ctx->pc = 0x2ffe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ffe28: 0x80802d
    ctx->pc = 0x2ffe28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe2c: 0xffb10010
    ctx->pc = 0x2ffe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ffe30: 0xa0202d
    ctx->pc = 0x2ffe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe34: 0x3c11003c
    ctx->pc = 0x2ffe34u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x2ffe38: 0xc0282d
    ctx->pc = 0x2ffe38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe3c: 0xffbf0020
    ctx->pc = 0x2ffe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ffe40: 0xae20b198
    ctx->pc = 0x2ffe40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947224), GPR_U32(ctx, 0));
    // 0x2ffe44: 0xc0c0ebc
    ctx->pc = 0x2FFE44u;
    SET_GPR_U32(ctx, 31, 0x2FFE4Cu);
    ctx->pc = 0x2FFE48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_0x303af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE4Cu; }
    }
    if (ctx->pc != 0x2FFE4Cu) { return; }
    ctx->pc = 0x2FFE4Cu;
    // 0x2ffe4c: 0x40182d
    ctx->pc = 0x2ffe4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe50: 0x2402ffff
    ctx->pc = 0x2ffe50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ffe54: 0x14620005
    ctx->pc = 0x2FFE54u;
    {
        const bool branch_taken_0x2ffe54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FFE58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2ffe54) {
            ctx->pc = 0x2FFE6Cu;
            goto label_2ffe6c;
        }
    }
    ctx->pc = 0x2FFE5Cu;
    // 0x2ffe5c: 0x8e22b198
    ctx->pc = 0x2ffe5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
    // 0x2ffe60: 0x54400002
    ctx->pc = 0x2FFE60u;
    {
        const bool branch_taken_0x2ffe60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ffe60) {
            ctx->pc = 0x2FFE64u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x2FFE6Cu;
            goto label_2ffe6c;
        }
    }
    ctx->pc = 0x2FFE68u;
    // 0x2ffe68: 0xdfbf0020
    ctx->pc = 0x2ffe68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ffe6c:
    // 0x2ffe6c: 0x60102d
    ctx->pc = 0x2ffe6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe70: 0xdfb10010
    ctx->pc = 0x2ffe70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffe74: 0xdfb00000
    ctx->pc = 0x2ffe74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffe78: 0x3e00008
    ctx->pc = 0x2FFE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFE7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FFE6Cu: goto label_2ffe6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FFE80u;
}
