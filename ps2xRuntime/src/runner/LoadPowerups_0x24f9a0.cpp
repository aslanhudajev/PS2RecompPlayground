#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadPowerups
// Address: 0x24f9a0 - 0x24f9f0
void LoadPowerups_0x24f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24f9a0u;

    // 0x24f9a0: 0x27bdffe0
    ctx->pc = 0x24f9a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24f9a4: 0xffbf0010
    ctx->pc = 0x24f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24f9a8: 0x14800003
    ctx->pc = 0x24F9A8u;
    {
        const bool branch_taken_0x24f9a8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x24F9ACu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x24f9a8) {
            ctx->pc = 0x24F9B8u;
            goto label_24f9b8;
        }
    }
    ctx->pc = 0x24F9B0u;
    // 0x24f9b0: 0x3c02003b
    ctx->pc = 0x24f9b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x24f9b4: 0x244484a0
    ctx->pc = 0x24f9b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294935712));
label_24f9b8:
    // 0x24f9b8: 0x3c100033
    ctx->pc = 0x24f9b8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
    // 0x24f9bc: 0x8e024974
    ctx->pc = 0x24f9bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 18804)));
    // 0x24f9c0: 0x4410008
    ctx->pc = 0x24F9C0u;
    {
        const bool branch_taken_0x24f9c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x24F9C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x24f9c0) {
            ctx->pc = 0x24F9E4u;
            goto label_24f9e4;
        }
    }
    ctx->pc = 0x24F9C8u;
    // 0x24f9c8: 0x3c050034
    ctx->pc = 0x24f9c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x24f9cc: 0x24a5cdac
    ctx->pc = 0x24f9ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954412));
    // 0x24f9d0: 0x302d
    ctx->pc = 0x24f9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f9d4: 0xc080d22
    ctx->pc = 0x24F9D4u;
    SET_GPR_U32(ctx, 31, 0x24F9DCu);
    ctx->pc = 0x24F9D8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F9DCu; }
    }
    if (ctx->pc != 0x24F9DCu) { return; }
    ctx->pc = 0x24F9DCu;
    // 0x24f9dc: 0xae024974
    ctx->pc = 0x24f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18804), GPR_U32(ctx, 2));
    // 0x24f9e0: 0xdfbf0010
    ctx->pc = 0x24f9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24f9e4:
    // 0x24f9e4: 0xdfb00000
    ctx->pc = 0x24f9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f9e8: 0x3e00008
    ctx->pc = 0x24F9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F9ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F9B8u: goto label_24f9b8;
            case 0x24F9E4u: goto label_24f9e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24F9F0u;
}
