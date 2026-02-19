#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartHealFx
// Address: 0x27f6b0 - 0x27f704
void StartHealFx_0x27f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f6b0u;

    // 0x27f6b0: 0x27bdffd0
    ctx->pc = 0x27f6b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27f6b4: 0xffbf0020
    ctx->pc = 0x27f6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27f6b8: 0xffb10010
    ctx->pc = 0x27f6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27f6bc: 0xffb00000
    ctx->pc = 0x27f6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27f6c0: 0x80882d
    ctx->pc = 0x27f6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6c4: 0xa0202d
    ctx->pc = 0x27f6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6c8: 0x4800008
    ctx->pc = 0x27F6C8u;
    {
        const bool branch_taken_0x27f6c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27F6CCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27f6c8) {
            ctx->pc = 0x27F6ECu;
            goto label_27f6ec;
        }
    }
    ctx->pc = 0x27F6D0u;
    // 0x27f6d0: 0xc09f866
    ctx->pc = 0x27F6D0u;
    SET_GPR_U32(ctx, 31, 0x27F6D8u);
    ctx->pc = 0x27F6D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 48));
    ctx->pc = 0x27E198u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXNoLoop_0x27e198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F6D8u; }
    }
    if (ctx->pc != 0x27F6D8u) { return; }
    ctx->pc = 0x27F6D8u;
    // 0x27f6d8: 0x40802d
    ctx->pc = 0x27f6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6dc: 0x200202d
    ctx->pc = 0x27f6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6e0: 0x220282d
    ctx->pc = 0x27f6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6e4: 0xc09f748
    ctx->pc = 0x27F6E4u;
    SET_GPR_U32(ctx, 31, 0x27F6ECu);
    ctx->pc = 0x27F6E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DD20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMat_0x27dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F6ECu; }
    }
    if (ctx->pc != 0x27F6ECu) { return; }
    ctx->pc = 0x27F6ECu;
label_27f6ec:
    // 0x27f6ec: 0x200102d
    ctx->pc = 0x27f6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6f0: 0xdfbf0020
    ctx->pc = 0x27f6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f6f4: 0xdfb10010
    ctx->pc = 0x27f6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f6f8: 0xdfb00000
    ctx->pc = 0x27f6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f6fc: 0x3e00008
    ctx->pc = 0x27F6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F6ECu: goto label_27f6ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F704u;
}
