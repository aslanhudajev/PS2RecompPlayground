#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: checkCloseCamPath__14TrnKomono2TaskFif
// Address: 0x2208b0 - 0x22090c
void checkCloseCamPath__14TrnKomono2TaskFif_0x2208b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("checkCloseCamPath__14TrnKomono2TaskFif");


    ctx->pc = 0x2208b0u;

    // 0x2208b0: 0x27bdfff0
    ctx->pc = 0x2208b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2208b4: 0x7fbf0000
    ctx->pc = 0x2208b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2208b8: 0x8f868c48
    ctx->pc = 0x2208b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2208bc: 0x8cc40004
    ctx->pc = 0x2208bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2208c0: 0x41840
    ctx->pc = 0x2208c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2208c4: 0x641821
    ctx->pc = 0x2208c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2208c8: 0x31880
    ctx->pc = 0x2208c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2208cc: 0x641821
    ctx->pc = 0x2208ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2208d0: 0x31900
    ctx->pc = 0x2208d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2208d4: 0x662021
    ctx->pc = 0x2208d4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2208d8: 0x848300d0
    ctx->pc = 0x2208d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x2208dc: 0x14650008
    ctx->pc = 0x2208DCu;
    {
        const bool branch_taken_0x2208dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        if (branch_taken_0x2208dc) {
            ctx->pc = 0x220900u;
            goto label_220900;
        }
    }
    ctx->pc = 0x2208E4u;
    // 0x2208e4: 0xc48000c0
    ctx->pc = 0x2208e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208e8: 0x460c0034
    ctx->pc = 0x2208e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2208ec: 0x0
    ctx->pc = 0x2208ecu;
    // NOP
    // 0x2208f0: 0x45010003
    ctx->pc = 0x2208F0u;
    {
        const bool branch_taken_0x2208f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2208f0) {
            ctx->pc = 0x220900u;
            goto label_220900;
        }
    }
    ctx->pc = 0x2208F8u;
    // 0x2208f8: 0xc06898c
    ctx->pc = 0x2208F8u;
    SET_GPR_U32(ctx, 31, 0x220900u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220900u; }
        else if (ctx->pc != 0x220900u) { ctx->pc = 0x220900u; }
    }
    if (ctx->pc != 0x220900u) { return; }
    ctx->pc = 0x220900u;
label_220900:
    // 0x220900: 0x7bbf0000
    ctx->pc = 0x220900u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220904: 0x3e00008
    ctx->pc = 0x220904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220908u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220900u: goto label_220900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22090Cu;
}
