#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isEffectiveObj
// Address: 0x19fca8 - 0x19fcc4
void isEffectiveObj_0x19fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isEffectiveObj");


    ctx->pc = 0x19fca8u;

    // 0x19fca8: 0x8c840000
    ctx->pc = 0x19fca8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fcac: 0x28830002
    ctx->pc = 0x19fcacu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 2));
    // 0x19fcb0: 0x10600002
    ctx->pc = 0x19FCB0u;
    {
        const bool branch_taken_0x19fcb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FCB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19fcb0) {
            ctx->pc = 0x19FCBCu;
            goto label_19fcbc;
        }
    }
    ctx->pc = 0x19FCB8u;
    // 0x19fcb8: 0x2882ffff
    ctx->pc = 0x19fcb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4294967295));
label_19fcbc:
    // 0x19fcbc: 0x3e00008
    ctx->pc = 0x19FCBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FCBCu: goto label_19fcbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FCC4u;
}
