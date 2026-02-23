#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dtx_def_sndcbf
// Address: 0x176e08 - 0x176e70
void dtx_def_sndcbf_0x176e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dtx_def_sndcbf");


    ctx->pc = 0x176e08u;

    // 0x176e08: 0x27bdfff0
    ctx->pc = 0x176e08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176e0c: 0x382d
    ctx->pc = 0x176e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176e10: 0x18c0000c
    ctx->pc = 0x176E10u;
    {
        const bool branch_taken_0x176e10 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x176E14u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x176e10) {
            ctx->pc = 0x176E44u;
            goto label_176e44;
        }
    }
    ctx->pc = 0x176E18u;
    // 0x176e18: 0x3c08002c
    ctx->pc = 0x176e18u;
    SET_GPR_U32(ctx, 8, ((uint32_t)44 << 16));
    // 0x176e1c: 0x0
    ctx->pc = 0x176e1cu;
    // NOP
label_176e20:
    // 0x176e20: 0xa72021
    ctx->pc = 0x176e20u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x176e24: 0x2403ffaa
    ctx->pc = 0x176e24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x176e28: 0x24e70001
    ctx->pc = 0x176e28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x176e2c: 0xa0830000
    ctx->pc = 0x176e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x176e30: 0xe6102a
    ctx->pc = 0x176e30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 6)));
    // 0x176e34: 0x1440fffa
    ctx->pc = 0x176E34u;
    {
        const bool branch_taken_0x176e34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x176e34) {
            ctx->pc = 0x176E20u;
            goto label_176e20;
        }
    }
    ctx->pc = 0x176E3Cu;
    // 0x176e3c: 0x10000003
    ctx->pc = 0x176E3Cu;
    {
        const bool branch_taken_0x176e3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176E40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176e3c) {
            ctx->pc = 0x176E4Cu;
            goto label_176e4c;
        }
    }
    ctx->pc = 0x176E44u;
label_176e44:
    // 0x176e44: 0x3c08002c
    ctx->pc = 0x176e44u;
    SET_GPR_U32(ctx, 8, ((uint32_t)44 << 16));
    // 0x176e48: 0xa0202d
    ctx->pc = 0x176e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_176e4c:
    // 0x176e4c: 0x8f868290
    ctx->pc = 0x176e4cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294935184)));
    // 0x176e50: 0xc0513ca
    ctx->pc = 0x176E50u;
    SET_GPR_U32(ctx, 31, 0x176E58u);
    ctx->pc = 0x176E54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 4294947224));
    ctx->pc = 0x144F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x144f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E58u; }
        else if (ctx->pc != 0x176E58u) { ctx->pc = 0x176E58u; }
    }
    if (ctx->pc != 0x176E58u) { return; }
    ctx->pc = 0x176E58u;
    // 0x176e58: 0x8f838290
    ctx->pc = 0x176e58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935184)));
    // 0x176e5c: 0xdfbf0000
    ctx->pc = 0x176e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176e60: 0x24630001
    ctx->pc = 0x176e60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x176e64: 0xaf838290
    ctx->pc = 0x176e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935184), GPR_U32(ctx, 3));
    // 0x176e68: 0x3e00008
    ctx->pc = 0x176E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176E6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176E20u: goto label_176e20;
            case 0x176E44u: goto label_176e44;
            case 0x176E4Cu: goto label_176e4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176E70u;
}
