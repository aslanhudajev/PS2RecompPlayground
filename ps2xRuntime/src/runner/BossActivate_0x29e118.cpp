#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossActivate
// Address: 0x29e118 - 0x29e178
void BossActivate_0x29e118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29e118u;

    // 0x29e118: 0x27bdffe0
    ctx->pc = 0x29e118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e11c: 0xffbf0010
    ctx->pc = 0x29e11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29e120: 0xffb00000
    ctx->pc = 0x29e120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29e124: 0xa0802d
    ctx->pc = 0x29e124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e128: 0x3c020036
    ctx->pc = 0x29e128u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29e12c: 0x24050001
    ctx->pc = 0x29e12cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e130: 0xac45d800
    ctx->pc = 0x29e130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957056), GPR_U32(ctx, 5));
    // 0x29e134: 0x3c030034
    ctx->pc = 0x29e134u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x29e138: 0x8c62f9cc
    ctx->pc = 0x29e138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965708)));
    // 0x29e13c: 0x14400004
    ctx->pc = 0x29E13Cu;
    {
        const bool branch_taken_0x29e13c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29e13c) {
            ctx->pc = 0x29E150u;
            goto label_29e150;
        }
    }
    ctx->pc = 0x29E144u;
    // 0x29e144: 0xac65f9cc
    ctx->pc = 0x29e144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965708), GPR_U32(ctx, 5));
    // 0x29e148: 0xc09a352
    ctx->pc = 0x29E148u;
    SET_GPR_U32(ctx, 31, 0x29E150u);
    ctx->pc = 0x29E14Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    ctx->pc = 0x268D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_target_0x268d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E150u; }
    }
    if (ctx->pc != 0x29E150u) { return; }
    ctx->pc = 0x29E150u;
label_29e150:
    // 0x29e150: 0x12000005
    ctx->pc = 0x29E150u;
    {
        const bool branch_taken_0x29e150 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E154u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x29e150) {
            ctx->pc = 0x29E168u;
            goto label_29e168;
        }
    }
    ctx->pc = 0x29E158u;
    // 0x29e158: 0x24030001
    ctx->pc = 0x29e158u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e15c: 0xac43d320
    ctx->pc = 0x29e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955808), GPR_U32(ctx, 3));
    // 0x29e160: 0x3c020034
    ctx->pc = 0x29e160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29e164: 0xac43d324
    ctx->pc = 0x29e164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955812), GPR_U32(ctx, 3));
label_29e168:
    // 0x29e168: 0xdfbf0010
    ctx->pc = 0x29e168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e16c: 0xdfb00000
    ctx->pc = 0x29e16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e170: 0x3e00008
    ctx->pc = 0x29E170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E174u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29E150u: goto label_29e150;
            case 0x29E168u: goto label_29e168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29E178u;
}
