#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalGetAssign
// Address: 0x2b4d10 - 0x2b4d98
void evalGetAssign_0x2b4d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4d10u;

    // 0x2b4d10: 0x27bdffe0
    ctx->pc = 0x2b4d10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4d14: 0xffbf0010
    ctx->pc = 0x2b4d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b4d18: 0xffb00000
    ctx->pc = 0x2b4d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4d1c: 0x80802d
    ctx->pc = 0x2b4d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d20: 0xc0ad26c
    ctx->pc = 0x2B4D20u;
    SET_GPR_U32(ctx, 31, 0x2B4D28u);
    ctx->pc = 0x2B4D24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B49B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getVar_0x2b49b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D28u; }
    }
    if (ctx->pc != 0x2B4D28u) { return; }
    ctx->pc = 0x2B4D28u;
    // 0x2b4d28: 0x14400004
    ctx->pc = 0x2B4D28u;
    {
        const bool branch_taken_0x2b4d28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B4D2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4d28) {
            ctx->pc = 0x2B4D3Cu;
            goto label_2b4d3c;
        }
    }
    ctx->pc = 0x2B4D30u;
    // 0x2b4d30: 0x24020020
    ctx->pc = 0x2b4d30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b4d34: 0x10000014
    ctx->pc = 0x2B4D34u;
    {
        const bool branch_taken_0x2b4d34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4D38u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b4d34) {
            ctx->pc = 0x2B4D88u;
            goto label_2b4d88;
        }
    }
    ctx->pc = 0x2B4D3Cu;
label_2b4d3c:
    // 0x2b4d3c: 0x24430040
    ctx->pc = 0x2b4d3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 64));
label_2b4d40:
    // 0x2b4d40: 0xdc450000
    ctx->pc = 0x2b4d40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4d44: 0xdc460008
    ctx->pc = 0x2b4d44u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b4d48: 0xdc470010
    ctx->pc = 0x2b4d48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b4d4c: 0xdc480018
    ctx->pc = 0x2b4d4cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b4d50: 0xfc850000
    ctx->pc = 0x2b4d50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x2b4d54: 0xfc860008
    ctx->pc = 0x2b4d54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2b4d58: 0xfc870010
    ctx->pc = 0x2b4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2b4d5c: 0xfc880018
    ctx->pc = 0x2b4d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2b4d60: 0x24420020
    ctx->pc = 0x2b4d60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b4d64: 0x24840020
    ctx->pc = 0x2b4d64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2b4d68: 0x0
    ctx->pc = 0x2b4d68u;
    // NOP
    // 0x2b4d6c: 0x0
    ctx->pc = 0x2b4d6cu;
    // NOP
    // 0x2b4d70: 0x1443fff3
    ctx->pc = 0x2B4D70u;
    {
        const bool branch_taken_0x2b4d70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2b4d70) {
            ctx->pc = 0x2B4D40u;
            goto label_2b4d40;
        }
    }
    ctx->pc = 0x2B4D78u;
    // 0x2b4d78: 0xdc430000
    ctx->pc = 0x2b4d78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4d7c: 0xdc450008
    ctx->pc = 0x2b4d7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b4d80: 0xfc830000
    ctx->pc = 0x2b4d80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2b4d84: 0xfc850008
    ctx->pc = 0x2b4d84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
label_2b4d88:
    // 0x2b4d88: 0xdfbf0010
    ctx->pc = 0x2b4d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4d8c: 0xdfb00000
    ctx->pc = 0x2b4d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4d90: 0x3e00008
    ctx->pc = 0x2B4D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4D94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4D3Cu: goto label_2b4d3c;
            case 0x2B4D40u: goto label_2b4d40;
            case 0x2B4D88u: goto label_2b4d88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4D98u;
}
