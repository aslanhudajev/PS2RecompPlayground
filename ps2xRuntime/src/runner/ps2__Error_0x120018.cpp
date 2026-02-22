#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _Error
// Address: 0x120018 - 0x120070
void ps2__Error_0x120018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120018u;

    // 0x120018: 0x3c020017
    ctx->pc = 0x120018u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x12001c: 0x80182d
    ctx->pc = 0x12001cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120020: 0x27bdffe0
    ctx->pc = 0x120020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x120024: 0x8c4417bc
    ctx->pc = 0x120024u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    // 0x120028: 0x1080000c
    ctx->pc = 0x120028u;
    {
        const bool branch_taken_0x120028 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12002Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x120028) {
            ctx->pc = 0x12005Cu;
            goto label_12005c;
        }
    }
    ctx->pc = 0x120030u;
    // 0x120030: 0x8c820040
    ctx->pc = 0x120030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x120034: 0x10400009
    ctx->pc = 0x120034u;
    {
        const bool branch_taken_0x120034 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x120034) {
            ctx->pc = 0x12005Cu;
            goto label_12005c;
        }
    }
    ctx->pc = 0x12003Cu;
    // 0x12003c: 0x8c42000c
    ctx->pc = 0x12003cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x120040: 0x10400006
    ctx->pc = 0x120040u;
    {
        const bool branch_taken_0x120040 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x120044u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x120040) {
            ctx->pc = 0x12005Cu;
            goto label_12005c;
        }
    }
    ctx->pc = 0x120048u;
    // 0x120048: 0xafa30004
    ctx->pc = 0x120048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x12004c: 0xc047de0
    ctx->pc = 0x12004Cu;
    SET_GPR_U32(ctx, 31, 0x120054u);
    ctx->pc = 0x120050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x11F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120054u; }
    }
    if (ctx->pc != 0x120054u) { return; }
    ctx->pc = 0x120054u;
    // 0x120054: 0x10000004
    ctx->pc = 0x120054u;
    {
        const bool branch_taken_0x120054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120058u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x120054) {
            ctx->pc = 0x120068u;
            goto label_120068;
        }
    }
    ctx->pc = 0x12005Cu;
label_12005c:
    // 0x12005c: 0xc047ff6
    ctx->pc = 0x12005Cu;
    SET_GPR_U32(ctx, 31, 0x120064u);
    ctx->pc = 0x120060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11FFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__ErrMessage_0x11ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120064u; }
    }
    if (ctx->pc != 0x120064u) { return; }
    ctx->pc = 0x120064u;
    // 0x120064: 0xdfbf0010
    ctx->pc = 0x120064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_120068:
    // 0x120068: 0x3e00008
    ctx->pc = 0x120068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12006Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12005Cu: goto label_12005c;
            case 0x120068u: goto label_120068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120070u;
}
