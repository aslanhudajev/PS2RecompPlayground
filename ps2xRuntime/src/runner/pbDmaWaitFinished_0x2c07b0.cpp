#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDmaWaitFinished
// Address: 0x2c07b0 - 0x2c0824
void pbDmaWaitFinished_0x2c07b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c07b0u;

    // 0x2c07b0: 0x27bdffc0
    ctx->pc = 0x2c07b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c07b4: 0xffbf0030
    ctx->pc = 0x2c07b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c07b8: 0xffb20020
    ctx->pc = 0x2c07b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c07bc: 0xffb10010
    ctx->pc = 0x2c07bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c07c0: 0xffb00000
    ctx->pc = 0x2c07c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c07c4: 0x802d
    ctx->pc = 0x2c07c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c07c8: 0x3c1205f5
    ctx->pc = 0x2c07c8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)1525 << 16));
    // 0x2c07cc: 0x3652e100
    ctx->pc = 0x2c07ccu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 57600));
    // 0x2c07d0: 0x10000008
    ctx->pc = 0x2C07D0u;
    {
        const bool branch_taken_0x2c07d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C07D4u;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        if (branch_taken_0x2c07d0) {
            ctx->pc = 0x2C07F4u;
            goto label_2c07f4;
        }
    }
    ctx->pc = 0x2C07D8u;
label_2c07d8:
    // 0x2c07d8: 0x26100001
    ctx->pc = 0x2c07d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c07dc: 0x250102a
    ctx->pc = 0x2c07dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
    // 0x2c07e0: 0x10400004
    ctx->pc = 0x2C07E0u;
    {
        const bool branch_taken_0x2c07e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C07E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 28000));
        if (branch_taken_0x2c07e0) {
            ctx->pc = 0x2C07F4u;
            goto label_2c07f4;
        }
    }
    ctx->pc = 0x2C07E8u;
    // 0x2c07e8: 0x3c050080
    ctx->pc = 0x2c07e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x2c07ec: 0xc0b49a6
    ctx->pc = 0x2C07ECu;
    SET_GPR_U32(ctx, 31, 0x2C07F4u);
    ctx->pc = 0x2C07F0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 128));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07F4u; }
    }
    if (ctx->pc != 0x2C07F4u) { return; }
    ctx->pc = 0x2C07F4u;
label_2c07f4:
    // 0x2c07f4: 0xc0b01dc
    ctx->pc = 0x2C07F4u;
    SET_GPR_U32(ctx, 31, 0x2C07FCu);
    ctx->pc = 0x2C0770u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaFinished_0x2c0770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C07FCu; }
    }
    if (ctx->pc != 0x2C07FCu) { return; }
    ctx->pc = 0x2C07FCu;
    // 0x2c07fc: 0x1040fff6
    ctx->pc = 0x2C07FCu;
    {
        const bool branch_taken_0x2c07fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0800u;
        SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
        if (branch_taken_0x2c07fc) {
            ctx->pc = 0x2C07D8u;
            goto label_2c07d8;
        }
    }
    ctx->pc = 0x2C0804u;
    // 0x2c0804: 0x2402ffff
    ctx->pc = 0x2c0804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0808: 0xac622948
    ctx->pc = 0x2c0808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10568), GPR_U32(ctx, 2));
    // 0x2c080c: 0xdfbf0030
    ctx->pc = 0x2c080cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0810: 0xdfb20020
    ctx->pc = 0x2c0810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0814: 0xdfb10010
    ctx->pc = 0x2c0814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0818: 0xdfb00000
    ctx->pc = 0x2c0818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c081c: 0x3e00008
    ctx->pc = 0x2C081Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0820u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C07D8u: goto label_2c07d8;
            case 0x2C07F4u: goto label_2c07f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C0824u;
}
