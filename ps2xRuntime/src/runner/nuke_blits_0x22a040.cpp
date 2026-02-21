#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: nuke_blits
// Address: 0x22a040 - 0x22a0a8
void nuke_blits_0x22a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22a040u;

    // 0x22a040: 0x27bdffc0
    ctx->pc = 0x22a040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a044: 0xffbf0030
    ctx->pc = 0x22a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22a048: 0xffb20020
    ctx->pc = 0x22a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a04c: 0xffb10010
    ctx->pc = 0x22a04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a050: 0xffb00000
    ctx->pc = 0x22a050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a054: 0x80802d
    ctx->pc = 0x22a054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a058: 0xa0902d
    ctx->pc = 0x22a058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a05c: 0x1a40000c
    ctx->pc = 0x22A05Cu;
    {
        const bool branch_taken_0x22a05c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x22A060u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22a05c) {
            ctx->pc = 0x22A090u;
            goto label_22a090;
        }
    }
    ctx->pc = 0x22A064u;
    // 0x22a064: 0x0
    ctx->pc = 0x22a064u;
    // NOP
label_22a068:
    // 0x22a068: 0x8e040000
    ctx->pc = 0x22a068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22a06c: 0x50800004
    ctx->pc = 0x22A06Cu;
    {
        const bool branch_taken_0x22a06c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22a06c) {
            ctx->pc = 0x22A070u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x22A080u;
            goto label_22a080;
        }
    }
    ctx->pc = 0x22A074u;
    // 0x22a074: 0xc0b0b38
    ctx->pc = 0x22A074u;
    SET_GPR_U32(ctx, 31, 0x22A07Cu);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A07Cu; }
    }
    if (ctx->pc != 0x22A07Cu) { return; }
    ctx->pc = 0x22A07Cu;
    // 0x22a07c: 0xae000000
    ctx->pc = 0x22a07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_22a080:
    // 0x22a080: 0x26310001
    ctx->pc = 0x22a080u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x22a084: 0x232102a
    ctx->pc = 0x22a084u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x22a088: 0x1440fff7
    ctx->pc = 0x22A088u;
    {
        const bool branch_taken_0x22a088 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22A08Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x22a088) {
            ctx->pc = 0x22A068u;
            goto label_22a068;
        }
    }
    ctx->pc = 0x22A090u;
label_22a090:
    // 0x22a090: 0xdfbf0030
    ctx->pc = 0x22a090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a094: 0xdfb20020
    ctx->pc = 0x22a094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a098: 0xdfb10010
    ctx->pc = 0x22a098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a09c: 0xdfb00000
    ctx->pc = 0x22a09cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a0a0: 0x3e00008
    ctx->pc = 0x22A0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A0A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A068u: goto label_22a068;
            case 0x22A080u: goto label_22a080;
            case 0x22A090u: goto label_22a090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22A0A8u;
}
