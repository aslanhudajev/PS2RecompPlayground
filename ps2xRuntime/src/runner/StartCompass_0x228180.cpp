#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartCompass
// Address: 0x228180 - 0x2281cc
void StartCompass_0x228180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x228180u;

    // 0x228180: 0x27bdffe0
    ctx->pc = 0x228180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x228184: 0xffbf0010
    ctx->pc = 0x228184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x228188: 0xffb00000
    ctx->pc = 0x228188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22818c: 0x3c100032
    ctx->pc = 0x22818cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x228190: 0x8e02079c
    ctx->pc = 0x228190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1948)));
    // 0x228194: 0x1440000a
    ctx->pc = 0x228194u;
    {
        const bool branch_taken_0x228194 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x228198u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x228194) {
            ctx->pc = 0x2281C0u;
            goto label_2281c0;
        }
    }
    ctx->pc = 0x22819Cu;
    // 0x22819c: 0x3c020038
    ctx->pc = 0x22819cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2281a0: 0x3c04003a
    ctx->pc = 0x2281a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2281a4: 0x24846db0
    ctx->pc = 0x2281a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28080));
    // 0x2281a8: 0x282d
    ctx->pc = 0x2281a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2281ac: 0x8c46c9b0
    ctx->pc = 0x2281acu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294953392)));
    // 0x2281b0: 0xc0b1b04
    ctx->pc = 0x2281B0u;
    SET_GPR_U32(ctx, 31, 0x2281B8u);
    ctx->pc = 0x2281B4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2281B8u; }
    }
    if (ctx->pc != 0x2281B8u) { return; }
    ctx->pc = 0x2281B8u;
    // 0x2281b8: 0xae02079c
    ctx->pc = 0x2281b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1948), GPR_U32(ctx, 2));
    // 0x2281bc: 0xdfbf0010
    ctx->pc = 0x2281bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2281c0:
    // 0x2281c0: 0xdfb00000
    ctx->pc = 0x2281c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2281c4: 0x3e00008
    ctx->pc = 0x2281C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2281C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2281C0u: goto label_2281c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2281CCu;
}
