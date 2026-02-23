#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyHdrSiz
// Address: 0x1a01a8 - 0x1a01f0
void SFH_AnlyHdrSiz_0x1a01a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyHdrSiz");


    ctx->pc = 0x1a01a8u;

    // 0x1a01a8: 0x27bdffd0
    ctx->pc = 0x1a01a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a01ac: 0xffb10010
    ctx->pc = 0x1a01acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a01b0: 0xffbf0020
    ctx->pc = 0x1a01b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a01b4: 0xa0882d
    ctx->pc = 0x1a01b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a01b8: 0xffb00000
    ctx->pc = 0x1a01b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a01bc: 0xc067f18
    ctx->pc = 0x1A01BCu;
    SET_GPR_U32(ctx, 31, 0x1A01C4u);
    ctx->pc = 0x1A01C0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01C4u; }
        else if (ctx->pc != 0x1A01C4u) { ctx->pc = 0x1A01C4u; }
    }
    if (ctx->pc != 0x1A01C4u) { return; }
    ctx->pc = 0x1A01C4u;
    // 0x1a01c4: 0x54400003
    ctx->pc = 0x1A01C4u;
    {
        const bool branch_taken_0x1a01c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a01c4) {
            ctx->pc = 0x1A01C8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->pc = 0x1A01D4u;
            goto label_1a01d4;
        }
    }
    ctx->pc = 0x1A01CCu;
    // 0x1a01cc: 0x10000003
    ctx->pc = 0x1A01CCu;
    {
        const bool branch_taken_0x1a01cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A01D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a01cc) {
            ctx->pc = 0x1A01DCu;
            goto label_1a01dc;
        }
    }
    ctx->pc = 0x1A01D4u;
label_1a01d4:
    // 0x1a01d4: 0x24020001
    ctx->pc = 0x1a01d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a01d8: 0xae230000
    ctx->pc = 0x1a01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a01dc:
    // 0x1a01dc: 0xdfbf0020
    ctx->pc = 0x1a01dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a01e0: 0xdfb10010
    ctx->pc = 0x1a01e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a01e4: 0xdfb00000
    ctx->pc = 0x1a01e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a01e8: 0x3e00008
    ctx->pc = 0x1A01E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A01ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A01D4u: goto label_1a01d4;
            case 0x1A01DCu: goto label_1a01dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A01F0u;
}
