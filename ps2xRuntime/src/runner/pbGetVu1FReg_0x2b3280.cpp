#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu1FReg
// Address: 0x2b3280 - 0x2b32f0
void pbGetVu1FReg_0x2b3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3280u;

    // 0x2b3280: 0x27bdffd0
    ctx->pc = 0x2b3280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b3284: 0xffbf0020
    ctx->pc = 0x2b3284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b3288: 0xffb10010
    ctx->pc = 0x2b3288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b328c: 0xffb00000
    ctx->pc = 0x2b328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3290: 0x80802d
    ctx->pc = 0x2b3290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3294: 0xa0182d
    ctx->pc = 0x2b3294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3298: 0xc0882d
    ctx->pc = 0x2b3298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b329c: 0x8e020000
    ctx->pc = 0x2b329cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b32a0: 0x8c45001c
    ctx->pc = 0x2b32a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2b32a4: 0xc0acc50
    ctx->pc = 0x2B32A4u;
    SET_GPR_U32(ctx, 31, 0x2B32ACu);
    ctx->pc = 0x2B32A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3140u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1RegNum_0x2b3140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B32ACu; }
    }
    if (ctx->pc != 0x2B32ACu) { return; }
    ctx->pc = 0x2B32ACu;
    // 0x2b32ac: 0x40202d
    ctx->pc = 0x2b32acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b32b0: 0x4830005
    ctx->pc = 0x2B32B0u;
    {
        const bool branch_taken_0x2b32b0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2b32b0) {
            ctx->pc = 0x2B32B4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x2B32C8u;
            goto label_2b32c8;
        }
    }
    ctx->pc = 0x2B32B8u;
    // 0x2b32b8: 0x3c01c000
    ctx->pc = 0x2b32b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49152 << 16));
    // 0x2b32bc: 0x44810000
    ctx->pc = 0x2b32bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2b32c0: 0x10000007
    ctx->pc = 0x2B32C0u;
    {
        const bool branch_taken_0x2b32c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B32C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2b32c0) {
            ctx->pc = 0x2B32E0u;
            goto label_2b32e0;
        }
    }
    ctx->pc = 0x2B32C8u;
label_2b32c8:
    // 0x2b32c8: 0x111880
    ctx->pc = 0x2b32c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b32cc: 0x42100
    ctx->pc = 0x2b32ccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2b32d0: 0x641821
    ctx->pc = 0x2b32d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b32d4: 0x431021
    ctx->pc = 0x2b32d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b32d8: 0xc4400020
    ctx->pc = 0x2b32d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b32dc: 0xdfbf0020
    ctx->pc = 0x2b32dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b32e0:
    // 0x2b32e0: 0xdfb10010
    ctx->pc = 0x2b32e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b32e4: 0xdfb00000
    ctx->pc = 0x2b32e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b32e8: 0x3e00008
    ctx->pc = 0x2B32E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B32ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B32C8u: goto label_2b32c8;
            case 0x2B32E0u: goto label_2b32e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B32F0u;
}
