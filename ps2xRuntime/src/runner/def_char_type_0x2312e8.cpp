#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: def_char_type
// Address: 0x2312e8 - 0x23132c
void def_char_type_0x2312e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2312e8u;

    // 0x2312e8: 0x24020001
    ctx->pc = 0x2312e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2312ec: 0x10820009
    ctx->pc = 0x2312ECu;
    {
        const bool branch_taken_0x2312ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2312F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x2312ec) {
            ctx->pc = 0x231314u;
            goto label_231314;
        }
    }
    ctx->pc = 0x2312F4u;
    // 0x2312f4: 0x14400005
    ctx->pc = 0x2312F4u;
    {
        const bool branch_taken_0x2312f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2312F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2312f4) {
            ctx->pc = 0x23130Cu;
            goto label_23130c;
        }
    }
    ctx->pc = 0x2312FCu;
    // 0x2312fc: 0x10820007
    ctx->pc = 0x2312FCu;
    {
        const bool branch_taken_0x2312fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x231300u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2312fc) {
            ctx->pc = 0x23131Cu;
            goto label_23131c;
        }
    }
    ctx->pc = 0x231304u;
    // 0x231304: 0x10820007
    ctx->pc = 0x231304u;
    {
        const bool branch_taken_0x231304 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x231304) {
            ctx->pc = 0x231324u;
            goto label_231324;
        }
    }
    ctx->pc = 0x23130Cu;
label_23130c:
    // 0x23130c: 0x3e00008
    ctx->pc = 0x23130Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231310u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23130Cu: goto label_23130c;
            case 0x231314u: goto label_231314;
            case 0x23131Cu: goto label_23131c;
            case 0x231324u: goto label_231324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231314u;
label_231314:
    // 0x231314: 0x3e00008
    ctx->pc = 0x231314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231318u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23130Cu: goto label_23130c;
            case 0x231314u: goto label_231314;
            case 0x23131Cu: goto label_23131c;
            case 0x231324u: goto label_231324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23131Cu;
label_23131c:
    // 0x23131c: 0x3e00008
    ctx->pc = 0x23131Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231320u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23130Cu: goto label_23130c;
            case 0x231314u: goto label_231314;
            case 0x23131Cu: goto label_23131c;
            case 0x231324u: goto label_231324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231324u;
label_231324:
    // 0x231324: 0x3e00008
    ctx->pc = 0x231324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231328u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23130Cu: goto label_23130c;
            case 0x231314u: goto label_231314;
            case 0x23131Cu: goto label_23131c;
            case 0x231324u: goto label_231324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23132Cu;
}
