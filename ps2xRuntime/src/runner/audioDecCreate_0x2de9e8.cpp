#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecCreate
// Address: 0x2de9e8 - 0x2dea7c
void audioDecCreate_0x2de9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de9e8u;

    // 0x2de9e8: 0x27bdffd0
    ctx->pc = 0x2de9e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de9ec: 0xffbf0020
    ctx->pc = 0x2de9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2de9f0: 0xffb10010
    ctx->pc = 0x2de9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2de9f4: 0xffb00000
    ctx->pc = 0x2de9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de9f8: 0x80802d
    ctx->pc = 0x2de9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de9fc: 0xe0882d
    ctx->pc = 0x2de9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dea00: 0xae000000
    ctx->pc = 0x2dea00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2dea04: 0xae00002c
    ctx->pc = 0x2dea04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2dea08: 0xae050030
    ctx->pc = 0x2dea08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x2dea0c: 0xae000034
    ctx->pc = 0x2dea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2dea10: 0xae000038
    ctx->pc = 0x2dea10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2dea14: 0xae06003c
    ctx->pc = 0x2dea14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 6));
    // 0x2dea18: 0xae000040
    ctx->pc = 0x2dea18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2dea1c: 0xae000054
    ctx->pc = 0x2dea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2dea20: 0xae110048
    ctx->pc = 0x2dea20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
    // 0x2dea24: 0xae00004c
    ctx->pc = 0x2dea24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2dea28: 0xae000050
    ctx->pc = 0x2dea28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2dea2c: 0xc08902e
    ctx->pc = 0x2DEA2Cu;
    SET_GPR_U32(ctx, 31, 0x2DEA34u);
    ctx->pc = 0x2DEA30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2240B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_stream_set_buffer_0x2240b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA34u; }
    }
    if (ctx->pc != 0x2DEA34u) { return; }
    ctx->pc = 0x2DEA34u;
    // 0x2dea34: 0x4410006
    ctx->pc = 0x2DEA34u;
    {
        const bool branch_taken_0x2dea34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DEA38u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        if (branch_taken_0x2dea34) {
            ctx->pc = 0x2DEA50u;
            goto label_2dea50;
        }
    }
    ctx->pc = 0x2DEA3Cu;
    // 0x2dea3c: 0x3c04003c
    ctx->pc = 0x2dea3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2dea40: 0xc0b4a34
    ctx->pc = 0x2DEA40u;
    SET_GPR_U32(ctx, 31, 0x2DEA48u);
    ctx->pc = 0x2DEA44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936808));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA48u; }
    }
    if (ctx->pc != 0x2DEA48u) { return; }
    ctx->pc = 0x2DEA48u;
    // 0x2dea48: 0x10000007
    ctx->pc = 0x2DEA48u;
    {
        const bool branch_taken_0x2dea48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DEA4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dea48) {
            ctx->pc = 0x2DEA68u;
            goto label_2dea68;
        }
    }
    ctx->pc = 0x2DEA50u;
label_2dea50:
    // 0x2dea50: 0x3c04003c
    ctx->pc = 0x2dea50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2dea54: 0x24848908
    ctx->pc = 0x2dea54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936840));
    // 0x2dea58: 0x220282d
    ctx->pc = 0x2dea58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dea5c: 0xc0b4a34
    ctx->pc = 0x2DEA5Cu;
    SET_GPR_U32(ctx, 31, 0x2DEA64u);
    ctx->pc = 0x2DEA60u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA64u; }
    }
    if (ctx->pc != 0x2DEA64u) { return; }
    ctx->pc = 0x2DEA64u;
    // 0x2dea64: 0x24020001
    ctx->pc = 0x2dea64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2dea68:
    // 0x2dea68: 0xdfbf0020
    ctx->pc = 0x2dea68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dea6c: 0xdfb10010
    ctx->pc = 0x2dea6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dea70: 0xdfb00000
    ctx->pc = 0x2dea70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dea74: 0x3e00008
    ctx->pc = 0x2DEA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEA78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DEA50u: goto label_2dea50;
            case 0x2DEA68u: goto label_2dea68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DEA7Cu;
}
