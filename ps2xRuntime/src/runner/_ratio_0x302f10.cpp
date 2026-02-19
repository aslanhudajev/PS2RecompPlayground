#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ratio
// Address: 0x302f10 - 0x302fd0
void _ratio_0x302f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x302f10u;

    // 0x302f10: 0x27bdffb0
    ctx->pc = 0x302f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x302f14: 0xffb10020
    ctx->pc = 0x302f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x302f18: 0xffb00010
    ctx->pc = 0x302f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x302f1c: 0xa0882d
    ctx->pc = 0x302f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f20: 0x80802d
    ctx->pc = 0x302f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f24: 0xffb20030
    ctx->pc = 0x302f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x302f28: 0xffbf0040
    ctx->pc = 0x302f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x302f2c: 0xc0c0b04
    ctx->pc = 0x302F2Cu;
    SET_GPR_U32(ctx, 31, 0x302F34u);
    ctx->pc = 0x302F30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x302c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F34u; }
    }
    if (ctx->pc != 0x302F34u) { return; }
    ctx->pc = 0x302F34u;
    // 0x302f34: 0x40902d
    ctx->pc = 0x302f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f38: 0x220202d
    ctx->pc = 0x302f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f3c: 0xc0c0b04
    ctx->pc = 0x302F3Cu;
    SET_GPR_U32(ctx, 31, 0x302F44u);
    ctx->pc = 0x302F40u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x302C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x302c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302F44u; }
    }
    if (ctx->pc != 0x302F44u) { return; }
    ctx->pc = 0x302F44u;
    // 0x302f44: 0x8e030010
    ctx->pc = 0x302f44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x302f48: 0x40302d
    ctx->pc = 0x302f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302f4c: 0x8e240010
    ctx->pc = 0x302f4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x302f50: 0x8fa20000
    ctx->pc = 0x302f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302f54: 0x8fa50004
    ctx->pc = 0x302f54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x302f58: 0x641823
    ctx->pc = 0x302f58u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x302f5c: 0x31940
    ctx->pc = 0x302f5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x302f60: 0x451023
    ctx->pc = 0x302f60u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x302f64: 0x431021
    ctx->pc = 0x302f64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x302f68: 0x18400009
    ctx->pc = 0x302F68u;
    {
        const bool branch_taken_0x302f68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x302F6Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 20));
        if (branch_taken_0x302f68) {
            ctx->pc = 0x302F90u;
            goto label_302f90;
        }
    }
    ctx->pc = 0x302F70u;
    // 0x302f70: 0x12183f
    ctx->pc = 0x302f70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x302f74: 0x621821
    ctx->pc = 0x302f74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x302f78: 0x3c04ffff
    ctx->pc = 0x302f78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x302f7c: 0x4203e
    ctx->pc = 0x302f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x302f80: 0x3183c
    ctx->pc = 0x302f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x302f84: 0x2449024
    ctx->pc = 0x302f84u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x302f88: 0x10000008
    ctx->pc = 0x302F88u;
    {
        const bool branch_taken_0x302f88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x302F8Cu;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        if (branch_taken_0x302f88) {
            ctx->pc = 0x302FACu;
            goto label_302fac;
        }
    }
    ctx->pc = 0x302F90u;
label_302f90:
    // 0x302f90: 0x6183f
    ctx->pc = 0x302f90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x302f94: 0x621823
    ctx->pc = 0x302f94u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x302f98: 0x3c04ffff
    ctx->pc = 0x302f98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x302f9c: 0x4203e
    ctx->pc = 0x302f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x302fa0: 0x3183c
    ctx->pc = 0x302fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x302fa4: 0xc43024
    ctx->pc = 0x302fa4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x302fa8: 0xc33025
    ctx->pc = 0x302fa8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_302fac:
    // 0x302fac: 0x240202d
    ctx->pc = 0x302facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302fb0: 0xc0be41a
    ctx->pc = 0x302FB0u;
    SET_GPR_U32(ctx, 31, 0x302FB8u);
    ctx->pc = 0x302FB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9068u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2f9068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302FB8u; }
    }
    if (ctx->pc != 0x302FB8u) { return; }
    ctx->pc = 0x302FB8u;
    // 0x302fb8: 0xdfbf0040
    ctx->pc = 0x302fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302fbc: 0xdfb20030
    ctx->pc = 0x302fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302fc0: 0xdfb10020
    ctx->pc = 0x302fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302fc4: 0xdfb00010
    ctx->pc = 0x302fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302fc8: 0x3e00008
    ctx->pc = 0x302FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302FCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302F90u: goto label_302f90;
            case 0x302FACu: goto label_302fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302FD0u;
}
