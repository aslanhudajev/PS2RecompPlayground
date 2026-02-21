#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetupItemTexMods
// Address: 0x24f8f0 - 0x24f938
void SetupItemTexMods_0x24f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24f8f0u;

    // 0x24f8f0: 0x27bdfff0
    ctx->pc = 0x24f8f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24f8f4: 0xffbf0000
    ctx->pc = 0x24f8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f8f8: 0x3c020034
    ctx->pc = 0x24f8f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f8fc: 0x8c44cda0
    ctx->pc = 0x24f8fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x24f900: 0x10800003
    ctx->pc = 0x24F900u;
    {
        const bool branch_taken_0x24f900 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F904u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x24f900) {
            ctx->pc = 0x24F910u;
            goto label_24f910;
        }
    }
    ctx->pc = 0x24F908u;
    // 0x24f908: 0xc084c42
    ctx->pc = 0x24F908u;
    SET_GPR_U32(ctx, 31, 0x24F910u);
    ctx->pc = 0x24F90Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954416)));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F910u; }
    }
    if (ctx->pc != 0x24F910u) { return; }
    ctx->pc = 0x24F910u;
label_24f910:
    // 0x24f910: 0x3c020034
    ctx->pc = 0x24f910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f914: 0x8c44cda4
    ctx->pc = 0x24f914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954404)));
    // 0x24f918: 0x10800005
    ctx->pc = 0x24F918u;
    {
        const bool branch_taken_0x24f918 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F91Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x24f918) {
            ctx->pc = 0x24F930u;
            goto label_24f930;
        }
    }
    ctx->pc = 0x24F920u;
    // 0x24f920: 0x3c020034
    ctx->pc = 0x24f920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f924: 0x8c45cdb4
    ctx->pc = 0x24f924u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
    // 0x24f928: 0x8084c42
    ctx->pc = 0x24F928u;
    ctx->pc = 0x24F92Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x213108u;
    InitTexMods_0x213108(rdram, ctx, runtime); return;
    ctx->pc = 0x24F930u;
label_24f930:
    // 0x24f930: 0x3e00008
    ctx->pc = 0x24F930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F934u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F910u: goto label_24f910;
            case 0x24F930u: goto label_24f930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24F938u;
}
