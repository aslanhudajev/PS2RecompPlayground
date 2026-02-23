#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyPackType
// Address: 0x1a01f0 - 0x1a023c
void SFH_AnlyPackType_0x1a01f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyPackType");


    ctx->pc = 0x1a01f0u;

    // 0x1a01f0: 0x27bdffd0
    ctx->pc = 0x1a01f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a01f4: 0xffb10010
    ctx->pc = 0x1a01f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a01f8: 0xffb00000
    ctx->pc = 0x1a01f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a01fc: 0xa0882d
    ctx->pc = 0x1a01fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0200: 0xffbf0020
    ctx->pc = 0x1a0200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0204: 0x8c820004
    ctx->pc = 0x1a0204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0208: 0xc067f18
    ctx->pc = 0x1A0208u;
    SET_GPR_U32(ctx, 31, 0x1A0210u);
    ctx->pc = 0x1A020Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 128));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0210u; }
        else if (ctx->pc != 0x1A0210u) { ctx->pc = 0x1A0210u; }
    }
    if (ctx->pc != 0x1A0210u) { return; }
    ctx->pc = 0x1A0210u;
    // 0x1a0210: 0x54400003
    ctx->pc = 0x1A0210u;
    {
        const bool branch_taken_0x1a0210 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0210) {
            ctx->pc = 0x1A0214u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x1A0220u;
            goto label_1a0220;
        }
    }
    ctx->pc = 0x1A0218u;
    // 0x1a0218: 0x10000003
    ctx->pc = 0x1A0218u;
    {
        const bool branch_taken_0x1a0218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A021Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0218) {
            ctx->pc = 0x1A0228u;
            goto label_1a0228;
        }
    }
    ctx->pc = 0x1A0220u;
label_1a0220:
    // 0x1a0220: 0x24020001
    ctx->pc = 0x1a0220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0224: 0xae230000
    ctx->pc = 0x1a0224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a0228:
    // 0x1a0228: 0xdfbf0020
    ctx->pc = 0x1a0228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a022c: 0xdfb10010
    ctx->pc = 0x1a022cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0230: 0xdfb00000
    ctx->pc = 0x1a0230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0234: 0x3e00008
    ctx->pc = 0x1A0234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0238u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0220u: goto label_1a0220;
            case 0x1A0228u: goto label_1a0228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A023Cu;
}
