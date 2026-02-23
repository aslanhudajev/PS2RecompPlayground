#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfuo_InitInf
// Address: 0x19f648 - 0x19f6c0
void sfuo_InitInf_0x19f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfuo_InitInf");


    ctx->pc = 0x19f648u;

    // 0x19f648: 0x27bdffb0
    ctx->pc = 0x19f648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f64c: 0xffb30030
    ctx->pc = 0x19f64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19f650: 0xffb20020
    ctx->pc = 0x19f650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19f654: 0x80982d
    ctx->pc = 0x19f654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f658: 0xffb10010
    ctx->pc = 0x19f658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f65c: 0xc0902d
    ctx->pc = 0x19f65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f660: 0xffb00000
    ctx->pc = 0x19f660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f664: 0x882d
    ctx->pc = 0x19f664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f668: 0xffbf0040
    ctx->pc = 0x19f668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19f66c: 0x24b00004
    ctx->pc = 0x19f66cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 4));
    // 0x19f670: 0xaca00000
    ctx->pc = 0x19f670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x19f674: 0x0
    ctx->pc = 0x19f674u;
    // NOP
label_19f678:
    // 0x19f678: 0xc067db0
    ctx->pc = 0x19F678u;
    SET_GPR_U32(ctx, 31, 0x19F680u);
    ctx->pc = 0x19F67Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F6C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfuo_InitUoch_0x19f6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F680u; }
        else if (ctx->pc != 0x19F680u) { ctx->pc = 0x19F680u; }
    }
    if (ctx->pc != 0x19F680u) { return; }
    ctx->pc = 0x19F680u;
    // 0x19f680: 0x220302d
    ctx->pc = 0x19f680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f684: 0x200382d
    ctx->pc = 0x19f684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f688: 0x260202d
    ctx->pc = 0x19f688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f68c: 0xc06472e
    ctx->pc = 0x19F68Cu;
    SET_GPR_U32(ctx, 31, 0x19F694u);
    ctx->pc = 0x19F690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191CB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_SetUoch_0x191cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F694u; }
        else if (ctx->pc != 0x19F694u) { ctx->pc = 0x19F694u; }
    }
    if (ctx->pc != 0x19F694u) { return; }
    ctx->pc = 0x19F694u;
    // 0x19f694: 0x26310001
    ctx->pc = 0x19f694u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x19f698: 0x2a220003
    ctx->pc = 0x19f698u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x19f69c: 0x1440fff6
    ctx->pc = 0x19F69Cu;
    {
        const bool branch_taken_0x19f69c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19F6A0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x19f69c) {
            ctx->pc = 0x19F678u;
            goto label_19f678;
        }
    }
    ctx->pc = 0x19F6A4u;
    // 0x19f6a4: 0xdfbf0040
    ctx->pc = 0x19f6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f6a8: 0xdfb30030
    ctx->pc = 0x19f6a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f6ac: 0xdfb20020
    ctx->pc = 0x19f6acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f6b0: 0xdfb10010
    ctx->pc = 0x19f6b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f6b4: 0xdfb00000
    ctx->pc = 0x19f6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f6b8: 0x3e00008
    ctx->pc = 0x19F6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F6BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F678u: goto label_19f678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F6C0u;
}
