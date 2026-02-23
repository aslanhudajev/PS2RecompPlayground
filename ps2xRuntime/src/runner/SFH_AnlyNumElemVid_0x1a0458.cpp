#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyNumElemVid
// Address: 0x1a0458 - 0x1a04a4
void SFH_AnlyNumElemVid_0x1a0458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyNumElemVid");


    ctx->pc = 0x1a0458u;

    // 0x1a0458: 0x27bdffd0
    ctx->pc = 0x1a0458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a045c: 0xffb10010
    ctx->pc = 0x1a045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0460: 0xffb00000
    ctx->pc = 0x1a0460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0464: 0xa0882d
    ctx->pc = 0x1a0464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0468: 0xffbf0020
    ctx->pc = 0x1a0468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a046c: 0x8c820004
    ctx->pc = 0x1a046cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0470: 0xc067f18
    ctx->pc = 0x1A0470u;
    SET_GPR_U32(ctx, 31, 0x1A0478u);
    ctx->pc = 0x1A0474u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0478u; }
        else if (ctx->pc != 0x1A0478u) { ctx->pc = 0x1A0478u; }
    }
    if (ctx->pc != 0x1A0478u) { return; }
    ctx->pc = 0x1A0478u;
    // 0x1a0478: 0x54400003
    ctx->pc = 0x1A0478u;
    {
        const bool branch_taken_0x1a0478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0478) {
            ctx->pc = 0x1A047Cu;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->pc = 0x1A0488u;
            goto label_1a0488;
        }
    }
    ctx->pc = 0x1A0480u;
    // 0x1a0480: 0x10000003
    ctx->pc = 0x1A0480u;
    {
        const bool branch_taken_0x1a0480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0484u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0480) {
            ctx->pc = 0x1A0490u;
            goto label_1a0490;
        }
    }
    ctx->pc = 0x1A0488u;
label_1a0488:
    // 0x1a0488: 0x24020001
    ctx->pc = 0x1a0488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a048c: 0xae230000
    ctx->pc = 0x1a048cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a0490:
    // 0x1a0490: 0xdfbf0020
    ctx->pc = 0x1a0490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0494: 0xdfb10010
    ctx->pc = 0x1a0494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0498: 0xdfb00000
    ctx->pc = 0x1a0498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a049c: 0x3e00008
    ctx->pc = 0x1A049Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A04A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0488u: goto label_1a0488;
            case 0x1A0490u: goto label_1a0490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A04A4u;
}
