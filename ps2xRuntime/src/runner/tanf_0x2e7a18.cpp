#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: tanf
// Address: 0x2e7a18 - 0x2e7aa0
void tanf_0x2e7a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e7a18u;

    // 0x2e7a18: 0x44026000
    ctx->pc = 0x2e7a18u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[12]);
    // 0x2e7a1c: 0x27bdffe0
    ctx->pc = 0x2e7a1cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7a20: 0x40202d
    ctx->pc = 0x2e7a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a24: 0x3c037fff
    ctx->pc = 0x2e7a24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x2e7a28: 0x3463ffff
    ctx->pc = 0x2e7a28u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2e7a2c: 0x3c023f49
    ctx->pc = 0x2e7a2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16201 << 16));
    // 0x2e7a30: 0x832024
    ctx->pc = 0x2e7a30u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e7a34: 0x34420fda
    ctx->pc = 0x2e7a34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4058));
    // 0x2e7a38: 0x44102a
    ctx->pc = 0x2e7a38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2e7a3c: 0x14400004
    ctx->pc = 0x2E7A3Cu;
    {
        const bool branch_taken_0x2e7a3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E7A40u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x2e7a3c) {
            ctx->pc = 0x2E7A50u;
            goto label_2e7a50;
        }
    }
    ctx->pc = 0x2E7A44u;
    // 0x2e7a44: 0x44806800
    ctx->pc = 0x2e7a44u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x2e7a48: 0x10000010
    ctx->pc = 0x2E7A48u;
    {
        const bool branch_taken_0x2e7a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E7A4Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2e7a48) {
            ctx->pc = 0x2E7A8Cu;
            goto label_2e7a8c;
        }
    }
    ctx->pc = 0x2E7A50u;
label_2e7a50:
    // 0x2e7a50: 0x3c027f7f
    ctx->pc = 0x2e7a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32639 << 16));
    // 0x2e7a54: 0x3442ffff
    ctx->pc = 0x2e7a54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e7a58: 0x44102a
    ctx->pc = 0x2e7a58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2e7a5c: 0x10400003
    ctx->pc = 0x2E7A5Cu;
    {
        const bool branch_taken_0x2e7a5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e7a5c) {
            ctx->pc = 0x2E7A6Cu;
            goto label_2e7a6c;
        }
    }
    ctx->pc = 0x2E7A64u;
    // 0x2e7a64: 0x1000000b
    ctx->pc = 0x2E7A64u;
    {
        const bool branch_taken_0x2e7a64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E7A68u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        if (branch_taken_0x2e7a64) {
            ctx->pc = 0x2E7A94u;
            goto label_2e7a94;
        }
    }
    ctx->pc = 0x2E7A6Cu;
label_2e7a6c:
    // 0x2e7a6c: 0xc0bad02
    ctx->pc = 0x2E7A6Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A74u);
    ctx->pc = 0x2E7A70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EB408u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x2eb408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A74u; }
    }
    if (ctx->pc != 0x2E7A74u) { return; }
    ctx->pc = 0x2E7A74u;
    // 0x2e7a74: 0x30420001
    ctx->pc = 0x2e7a74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2e7a78: 0x24040001
    ctx->pc = 0x2e7a78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7a7c: 0x21040
    ctx->pc = 0x2e7a7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e7a80: 0xc7ac0000
    ctx->pc = 0x2e7a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7a84: 0xc7ad0004
    ctx->pc = 0x2e7a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e7a88: 0x822023
    ctx->pc = 0x2e7a88u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2e7a8c:
    // 0x2e7a8c: 0xc0bb134
    ctx->pc = 0x2E7A8Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A94u);
    ctx->pc = 0x2EC4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_tanf_0x2ec4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A94u; }
    }
    if (ctx->pc != 0x2E7A94u) { return; }
    ctx->pc = 0x2E7A94u;
label_2e7a94:
    // 0x2e7a94: 0xdfbf0010
    ctx->pc = 0x2e7a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7a98: 0x3e00008
    ctx->pc = 0x2E7A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7A9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E7A50u: goto label_2e7a50;
            case 0x2E7A6Cu: goto label_2e7a6c;
            case 0x2E7A8Cu: goto label_2e7a8c;
            case 0x2E7A94u: goto label_2e7a94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E7AA0u;
}
