#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: update_history
// Address: 0x220278 - 0x2202cc
void update_history_0x220278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220278u;

    // 0x220278: 0x3c06003c
    ctx->pc = 0x220278u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x22027c: 0x24c6d7b0
    ctx->pc = 0x22027cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294956976));
    // 0x220280: 0x3c080032
    ctx->pc = 0x220280u;
    SET_GPR_U32(ctx, 8, ((uint32_t)50 << 16));
    // 0x220284: 0x8d07fd90
    ctx->pc = 0x220284u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 4294966672)));
    // 0x220288: 0x2402000c
    ctx->pc = 0x220288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x22028c: 0xe21018
    ctx->pc = 0x22028cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x220290: 0x461821
    ctx->pc = 0x220290u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x220294: 0xac650000
    ctx->pc = 0x220294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x220298: 0xc21821
    ctx->pc = 0x220298u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22029c: 0xac640004
    ctx->pc = 0x22029cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2202a0: 0x60302d
    ctx->pc = 0x2202a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2202a4: 0x3c020031
    ctx->pc = 0x2202a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2202a8: 0xc440ffa4
    ctx->pc = 0x2202a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2202ac: 0xe4c00008
    ctx->pc = 0x2202acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2202b0: 0x24e70001
    ctx->pc = 0x2202b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x2202b4: 0xad07fd90
    ctx->pc = 0x2202b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294966672), GPR_U32(ctx, 7));
    // 0x2202b8: 0x28e70400
    ctx->pc = 0x2202b8u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 7), 1024));
    // 0x2202bc: 0x50e00001
    ctx->pc = 0x2202BCu;
    {
        const bool branch_taken_0x2202bc = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x2202bc) {
            ctx->pc = 0x2202C0u;
            WRITE32(ADD32(GPR_U32(ctx, 8), 4294966672), GPR_U32(ctx, 0));
            ctx->pc = 0x2202C4u;
            goto label_2202c4;
        }
    }
    ctx->pc = 0x2202C4u;
label_2202c4:
    // 0x2202c4: 0x3e00008
    ctx->pc = 0x2202C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2202C4u: goto label_2202c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2202CCu;
}
