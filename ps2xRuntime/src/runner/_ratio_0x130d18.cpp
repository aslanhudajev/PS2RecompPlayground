#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ratio
// Address: 0x130d18 - 0x130dd8
void _ratio_0x130d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130d18u;

    // 0x130d18: 0x27bdffb0
    ctx->pc = 0x130d18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x130d1c: 0xffb10020
    ctx->pc = 0x130d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x130d20: 0xffb00010
    ctx->pc = 0x130d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x130d24: 0xa0882d
    ctx->pc = 0x130d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d28: 0x80802d
    ctx->pc = 0x130d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d2c: 0xffb20030
    ctx->pc = 0x130d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x130d30: 0xffbf0040
    ctx->pc = 0x130d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x130d34: 0xc04c286
    ctx->pc = 0x130D34u;
    SET_GPR_U32(ctx, 31, 0x130D3Cu);
    ctx->pc = 0x130D38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x130a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D3Cu; }
    }
    if (ctx->pc != 0x130D3Cu) { return; }
    ctx->pc = 0x130D3Cu;
    // 0x130d3c: 0x40902d
    ctx->pc = 0x130d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d40: 0x220202d
    ctx->pc = 0x130d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d44: 0xc04c286
    ctx->pc = 0x130D44u;
    SET_GPR_U32(ctx, 31, 0x130D4Cu);
    ctx->pc = 0x130D48u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x130A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x130a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130D4Cu; }
    }
    if (ctx->pc != 0x130D4Cu) { return; }
    ctx->pc = 0x130D4Cu;
    // 0x130d4c: 0x8e030010
    ctx->pc = 0x130d4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x130d50: 0x40302d
    ctx->pc = 0x130d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d54: 0x8e240010
    ctx->pc = 0x130d54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x130d58: 0x8fa20000
    ctx->pc = 0x130d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130d5c: 0x8fa50004
    ctx->pc = 0x130d5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x130d60: 0x641823
    ctx->pc = 0x130d60u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x130d64: 0x31940
    ctx->pc = 0x130d64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x130d68: 0x451023
    ctx->pc = 0x130d68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x130d6c: 0x431021
    ctx->pc = 0x130d6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130d70: 0x18400009
    ctx->pc = 0x130D70u;
    {
        const bool branch_taken_0x130d70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x130D74u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 20));
        if (branch_taken_0x130d70) {
            ctx->pc = 0x130D98u;
            goto label_130d98;
        }
    }
    ctx->pc = 0x130D78u;
    // 0x130d78: 0x12183f
    ctx->pc = 0x130d78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x130d7c: 0x621821
    ctx->pc = 0x130d7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130d80: 0x3c04ffff
    ctx->pc = 0x130d80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x130d84: 0x4203e
    ctx->pc = 0x130d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x130d88: 0x3183c
    ctx->pc = 0x130d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130d8c: 0x2449024
    ctx->pc = 0x130d8cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x130d90: 0x10000008
    ctx->pc = 0x130D90u;
    {
        const bool branch_taken_0x130d90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130D94u;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        if (branch_taken_0x130d90) {
            ctx->pc = 0x130DB4u;
            goto label_130db4;
        }
    }
    ctx->pc = 0x130D98u;
label_130d98:
    // 0x130d98: 0x6183f
    ctx->pc = 0x130d98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x130d9c: 0x621823
    ctx->pc = 0x130d9cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130da0: 0x3c04ffff
    ctx->pc = 0x130da0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x130da4: 0x4203e
    ctx->pc = 0x130da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x130da8: 0x3183c
    ctx->pc = 0x130da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130dac: 0xc43024
    ctx->pc = 0x130dacu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x130db0: 0xc33025
    ctx->pc = 0x130db0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_130db4:
    // 0x130db4: 0x240202d
    ctx->pc = 0x130db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130db8: 0xc04a3e2
    ctx->pc = 0x130DB8u;
    SET_GPR_U32(ctx, 31, 0x130DC0u);
    ctx->pc = 0x130DBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x128f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130DC0u; }
    }
    if (ctx->pc != 0x130DC0u) { return; }
    ctx->pc = 0x130DC0u;
    // 0x130dc0: 0xdfbf0040
    ctx->pc = 0x130dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130dc4: 0xdfb20030
    ctx->pc = 0x130dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130dc8: 0xdfb10020
    ctx->pc = 0x130dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130dcc: 0xdfb00010
    ctx->pc = 0x130dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130dd0: 0x3e00008
    ctx->pc = 0x130DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130DD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130D98u: goto label_130d98;
            case 0x130DB4u: goto label_130db4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130DD8u;
}
