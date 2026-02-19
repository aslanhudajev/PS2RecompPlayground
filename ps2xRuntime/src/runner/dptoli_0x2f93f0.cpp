#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dptoli
// Address: 0x2f93f0 - 0x2f9484
void dptoli_0x2f93f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f93f0u;

    // 0x2f93f0: 0x27bdffc0
    ctx->pc = 0x2f93f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f93f4: 0xffa40020
    ctx->pc = 0x2f93f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2f93f8: 0x3a0282d
    ctx->pc = 0x2f93f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93fc: 0xffbf0030
    ctx->pc = 0x2f93fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f9400: 0xc0be288
    ctx->pc = 0x2F9400u;
    SET_GPR_U32(ctx, 31, 0x2F9408u);
    ctx->pc = 0x2F9404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9408u; }
    }
    if (ctx->pc != 0x2F9408u) { return; }
    ctx->pc = 0x2F9408u;
    // 0x2f9408: 0x8fa30000
    ctx->pc = 0x2f9408u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f940c: 0x38620002
    ctx->pc = 0x2f940cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x2f9410: 0x10400003
    ctx->pc = 0x2F9410u;
    {
        const bool branch_taken_0x2f9410 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9414u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2f9410) {
            ctx->pc = 0x2F9420u;
            goto label_2f9420;
        }
    }
    ctx->pc = 0x2F9418u;
    // 0x2f9418: 0x10400003
    ctx->pc = 0x2F9418u;
    {
        const bool branch_taken_0x2f9418 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F941Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2f9418) {
            ctx->pc = 0x2F9428u;
            goto label_2f9428;
        }
    }
    ctx->pc = 0x2F9420u;
label_2f9420:
    // 0x2f9420: 0x10000015
    ctx->pc = 0x2F9420u;
    {
        const bool branch_taken_0x2f9420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9424u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f9420) {
            ctx->pc = 0x2F9478u;
            goto label_2f9478;
        }
    }
    ctx->pc = 0x2F9428u;
label_2f9428:
    // 0x2f9428: 0x10400005
    ctx->pc = 0x2F9428u;
    {
        const bool branch_taken_0x2f9428 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F942Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x2f9428) {
            ctx->pc = 0x2F9440u;
            goto label_2f9440;
        }
    }
    ctx->pc = 0x2F9430u;
    // 0x2f9430: 0x480fffb
    ctx->pc = 0x2F9430u;
    {
        const bool branch_taken_0x2f9430 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F9434u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
        if (branch_taken_0x2f9430) {
            ctx->pc = 0x2F9420u;
            goto label_2f9420;
        }
    }
    ctx->pc = 0x2F9438u;
    // 0x2f9438: 0x14400007
    ctx->pc = 0x2F9438u;
    {
        const bool branch_taken_0x2f9438 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F943Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x2f9438) {
            ctx->pc = 0x2F9458u;
            goto label_2f9458;
        }
    }
    ctx->pc = 0x2F9440u;
label_2f9440:
    // 0x2f9440: 0x8fa30004
    ctx->pc = 0x2f9440u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f9444: 0x3c027fff
    ctx->pc = 0x2f9444u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x2f9448: 0x3442ffff
    ctx->pc = 0x2f9448u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2f944c: 0x3c048000
    ctx->pc = 0x2f944cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x2f9450: 0x10000009
    ctx->pc = 0x2F9450u;
    {
        const bool branch_taken_0x2f9450 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9454u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x2f9450) {
            ctx->pc = 0x2F9478u;
            goto label_2f9478;
        }
    }
    ctx->pc = 0x2F9458u;
label_2f9458:
    // 0x2f9458: 0xdfa20010
    ctx->pc = 0x2f9458u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f945c: 0x641823
    ctx->pc = 0x2f945cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f9460: 0x621016
    ctx->pc = 0x2f9460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x2f9464: 0x8fa40004
    ctx->pc = 0x2f9464u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f9468: 0x2103c
    ctx->pc = 0x2f9468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f946c: 0x2103f
    ctx->pc = 0x2f946cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9470: 0x21823
    ctx->pc = 0x2f9470u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f9474: 0x64100b
    ctx->pc = 0x2f9474u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
label_2f9478:
    // 0x2f9478: 0xdfbf0030
    ctx->pc = 0x2f9478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f947c: 0x3e00008
    ctx->pc = 0x2F947Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9480u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F9420u: goto label_2f9420;
            case 0x2F9428u: goto label_2f9428;
            case 0x2F9440u: goto label_2f9440;
            case 0x2F9458u: goto label_2f9458;
            case 0x2F9478u: goto label_2f9478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F9484u;
}
