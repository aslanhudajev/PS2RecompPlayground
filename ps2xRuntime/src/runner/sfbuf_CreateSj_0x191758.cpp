#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_CreateSj
// Address: 0x191758 - 0x1917c0
void sfbuf_CreateSj_0x191758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_CreateSj");


    ctx->pc = 0x191758u;

    // 0x191758: 0x27bdffe0
    ctx->pc = 0x191758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19175c: 0xc73023
    ctx->pc = 0x19175cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x191760: 0xffb00000
    ctx->pc = 0x191760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x191764: 0xffbf0010
    ctx->pc = 0x191764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x191768: 0x80802d
    ctx->pc = 0x191768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19176c: 0xae050008
    ctx->pc = 0x19176cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x191770: 0xae000000
    ctx->pc = 0x191770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x191774: 0xae06000c
    ctx->pc = 0x191774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x191778: 0x18c0000d
    ctx->pc = 0x191778u;
    {
        const bool branch_taken_0x191778 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x19177Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x191778) {
            ctx->pc = 0x1917B0u;
            goto label_1917b0;
        }
    }
    ctx->pc = 0x191780u;
    // 0x191780: 0x24020001
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x191784: 0x55020004
    ctx->pc = 0x191784u;
    {
        const bool branch_taken_0x191784 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        if (branch_taken_0x191784) {
            ctx->pc = 0x191788u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
            ctx->pc = 0x191798u;
            goto label_191798;
        }
    }
    ctx->pc = 0x19178Cu;
    // 0x19178c: 0xae070014
    ctx->pc = 0x19178cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    // 0x191790: 0x10000002
    ctx->pc = 0x191790u;
    {
        const bool branch_taken_0x191790 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x191794u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x191790) {
            ctx->pc = 0x19179Cu;
            goto label_19179c;
        }
    }
    ctx->pc = 0x191798u;
label_191798:
    // 0x191798: 0xae000014
    ctx->pc = 0x191798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_19179c:
    // 0x19179c: 0x8e040008
    ctx->pc = 0x19179cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1917a0: 0x8e05000c
    ctx->pc = 0x1917a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1917a4: 0xc05f128
    ctx->pc = 0x1917A4u;
    SET_GPR_U32(ctx, 31, 0x1917ACu);
    ctx->pc = 0x1917A8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x17C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Create_0x17c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917ACu; }
        else if (ctx->pc != 0x1917ACu) { ctx->pc = 0x1917ACu; }
    }
    if (ctx->pc != 0x1917ACu) { return; }
    ctx->pc = 0x1917ACu;
    // 0x1917ac: 0xae020004
    ctx->pc = 0x1917acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1917b0:
    // 0x1917b0: 0xdfbf0010
    ctx->pc = 0x1917b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1917b4: 0xdfb00000
    ctx->pc = 0x1917b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1917b8: 0x3e00008
    ctx->pc = 0x1917B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1917BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191798u: goto label_191798;
            case 0x19179Cu: goto label_19179c;
            case 0x1917B0u: goto label_1917b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1917C0u;
}
