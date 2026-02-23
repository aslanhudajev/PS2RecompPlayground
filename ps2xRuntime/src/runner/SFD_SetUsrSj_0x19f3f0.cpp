#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetUsrSj
// Address: 0x19f3f0 - 0x19f4c0
void SFD_SetUsrSj_0x19f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetUsrSj");


    ctx->pc = 0x19f3f0u;

    // 0x19f3f0: 0x27bdff90
    ctx->pc = 0x19f3f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19f3f4: 0xffb10010
    ctx->pc = 0x19f3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f3f8: 0xffb50050
    ctx->pc = 0x19f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x19f3fc: 0x80882d
    ctx->pc = 0x19f3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f400: 0xffb40040
    ctx->pc = 0x19f400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19f404: 0xa0a82d
    ctx->pc = 0x19f404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f408: 0xffb30030
    ctx->pc = 0x19f408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19f40c: 0xe0a02d
    ctx->pc = 0x19f40cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f410: 0xffbf0060
    ctx->pc = 0x19f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19f414: 0xc0982d
    ctx->pc = 0x19f414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f418: 0xffb20020
    ctx->pc = 0x19f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19f41c: 0xc064f1e
    ctx->pc = 0x19F41Cu;
    SET_GPR_U32(ctx, 31, 0x19F424u);
    ctx->pc = 0x19F420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F424u; }
        else if (ctx->pc != 0x19F424u) { ctx->pc = 0x19F424u; }
    }
    if (ctx->pc != 0x19F424u) { return; }
    ctx->pc = 0x19F424u;
    // 0x19f424: 0x10400006
    ctx->pc = 0x19F424u;
    {
        const bool branch_taken_0x19f424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F428u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f424) {
            ctx->pc = 0x19F440u;
            goto label_19f440;
        }
    }
    ctx->pc = 0x19F42Cu;
    // 0x19f42c: 0x3c05ff00
    ctx->pc = 0x19f42cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19f430: 0xc064ea0
    ctx->pc = 0x19F430u;
    SET_GPR_U32(ctx, 31, 0x19F438u);
    ctx->pc = 0x19F434u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 401));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F438u; }
        else if (ctx->pc != 0x19F438u) { ctx->pc = 0x19F438u; }
    }
    if (ctx->pc != 0x19F438u) { return; }
    ctx->pc = 0x19F438u;
    // 0x19f438: 0x10000019
    ctx->pc = 0x19F438u;
    {
        const bool branch_taken_0x19f438 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F43Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x19f438) {
            ctx->pc = 0x19F4A0u;
            goto label_19f4a0;
        }
    }
    ctx->pc = 0x19F440u;
label_19f440:
    // 0x19f440: 0x8e326724
    ctx->pc = 0x19f440u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 26404)));
    // 0x19f444: 0x24020008
    ctx->pc = 0x19f444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19f448: 0x16420007
    ctx->pc = 0x19F448u;
    {
        const bool branch_taken_0x19f448 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x19F44Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 24704));
        if (branch_taken_0x19f448) {
            ctx->pc = 0x19F468u;
            goto label_19f468;
        }
    }
    ctx->pc = 0x19F450u;
    // 0x19f450: 0x3c05ff00
    ctx->pc = 0x19f450u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19f454: 0x220202d
    ctx->pc = 0x19f454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f458: 0xc064ea0
    ctx->pc = 0x19F458u;
    SET_GPR_U32(ctx, 31, 0x19F460u);
    ctx->pc = 0x19F45Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1538));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F460u; }
        else if (ctx->pc != 0x19F460u) { ctx->pc = 0x19F460u; }
    }
    if (ctx->pc != 0x19F460u) { return; }
    ctx->pc = 0x19F460u;
    // 0x19f460: 0x1000000f
    ctx->pc = 0x19F460u;
    {
        const bool branch_taken_0x19f460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F464u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x19f460) {
            ctx->pc = 0x19F4A0u;
            goto label_19f4a0;
        }
    }
    ctx->pc = 0x19F468u;
label_19f468:
    // 0x19f468: 0x1580c0
    ctx->pc = 0x19f468u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 21), 3));
    // 0x19f46c: 0x260282d
    ctx->pc = 0x19f46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f470: 0x26100004
    ctx->pc = 0x19f470u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x19f474: 0x280302d
    ctx->pc = 0x19f474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f478: 0x708021
    ctx->pc = 0x19f478u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19f47c: 0xc067db4
    ctx->pc = 0x19F47Cu;
    SET_GPR_U32(ctx, 31, 0x19F484u);
    ctx->pc = 0x19F480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F6D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfuo_SetUoch_0x19f6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F484u; }
        else if (ctx->pc != 0x19F484u) { ctx->pc = 0x19F484u; }
    }
    if (ctx->pc != 0x19F484u) { return; }
    ctx->pc = 0x19F484u;
    // 0x19f484: 0x220202d
    ctx->pc = 0x19f484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f488: 0x240282d
    ctx->pc = 0x19f488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f48c: 0x2a0302d
    ctx->pc = 0x19f48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f490: 0xc06472e
    ctx->pc = 0x19F490u;
    SET_GPR_U32(ctx, 31, 0x19F498u);
    ctx->pc = 0x19F494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191CB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_SetUoch_0x191cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F498u; }
        else if (ctx->pc != 0x19F498u) { ctx->pc = 0x19F498u; }
    }
    if (ctx->pc != 0x19F498u) { return; }
    ctx->pc = 0x19F498u;
    // 0x19f498: 0x102d
    ctx->pc = 0x19f498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f49c: 0xdfbf0060
    ctx->pc = 0x19f49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19f4a0:
    // 0x19f4a0: 0xdfb50050
    ctx->pc = 0x19f4a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f4a4: 0xdfb40040
    ctx->pc = 0x19f4a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f4a8: 0xdfb30030
    ctx->pc = 0x19f4a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f4ac: 0xdfb20020
    ctx->pc = 0x19f4acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f4b0: 0xdfb10010
    ctx->pc = 0x19f4b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f4b4: 0xdfb00000
    ctx->pc = 0x19f4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f4b8: 0x3e00008
    ctx->pc = 0x19F4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F4BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F440u: goto label_19f440;
            case 0x19F468u: goto label_19f468;
            case 0x19F4A0u: goto label_19f4a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F4C0u;
}
