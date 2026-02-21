#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScreenSaverUpdate
// Address: 0x22ae10 - 0x22ae5c
void ScreenSaverUpdate_0x22ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22ae10u;

    // 0x22ae10: 0x27bdffe0
    ctx->pc = 0x22ae10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22ae14: 0xffbf0010
    ctx->pc = 0x22ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22ae18: 0xffb00000
    ctx->pc = 0x22ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ae1c: 0x3c020034
    ctx->pc = 0x22ae1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x22ae20: 0x8c44cdac
    ctx->pc = 0x22ae20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x22ae24: 0x10800004
    ctx->pc = 0x22AE24u;
    {
        const bool branch_taken_0x22ae24 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AE28u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22ae24) {
            ctx->pc = 0x22AE38u;
            goto label_22ae38;
        }
    }
    ctx->pc = 0x22AE2Cu;
    // 0x22ae2c: 0xc084cc4
    ctx->pc = 0x22AE2Cu;
    SET_GPR_U32(ctx, 31, 0x22AE34u);
    ctx->pc = 0x213310u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexMods_0x213310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE34u; }
    }
    if (ctx->pc != 0x22AE34u) { return; }
    ctx->pc = 0x22AE34u;
    // 0x22ae34: 0x0
    ctx->pc = 0x22ae34u;
    // NOP
label_22ae38:
    // 0x22ae38: 0xc08a976
    ctx->pc = 0x22AE38u;
    SET_GPR_U32(ctx, 31, 0x22AE40u);
    ctx->pc = 0x22AE3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22A5D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaverUpdateWeap_0x22a5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE40u; }
    }
    if (ctx->pc != 0x22AE40u) { return; }
    ctx->pc = 0x22AE40u;
    // 0x22ae40: 0x26100001
    ctx->pc = 0x22ae40u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x22ae44: 0x2a020004
    ctx->pc = 0x22ae44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x22ae48: 0x1440fffb
    ctx->pc = 0x22AE48u;
    {
        const bool branch_taken_0x22ae48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22AE4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x22ae48) {
            ctx->pc = 0x22AE38u;
            goto label_22ae38;
        }
    }
    ctx->pc = 0x22AE50u;
    // 0x22ae50: 0xdfb00000
    ctx->pc = 0x22ae50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ae54: 0x3e00008
    ctx->pc = 0x22AE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AE58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22AE38u: goto label_22ae38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22AE5Cu;
}
