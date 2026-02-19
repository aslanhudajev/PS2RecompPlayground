#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBLockMessages
// Address: 0x2c57f8 - 0x2c5870
void MBLockMessages_0x2c57f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c57f8u;

    // 0x2c57f8: 0x27bdffe0
    ctx->pc = 0x2c57f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c57fc: 0xffbf0010
    ctx->pc = 0x2c57fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5800: 0xffb00000
    ctx->pc = 0x2c5800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c5804: 0x80802d
    ctx->pc = 0x2c5804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5808: 0x2a020008
    ctx->pc = 0x2c5808u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x2c580c: 0x14400006
    ctx->pc = 0x2C580Cu;
    {
        const bool branch_taken_0x2c580c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C5810u;
        SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
        if (branch_taken_0x2c580c) {
            ctx->pc = 0x2C5828u;
            goto label_2c5828;
        }
    }
    ctx->pc = 0x2C5814u;
    // 0x2c5814: 0x3c04003b
    ctx->pc = 0x2c5814u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c5818: 0x24846f98
    ctx->pc = 0x2c5818u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28568));
    // 0x2c581c: 0xc0b49a6
    ctx->pc = 0x2C581Cu;
    SET_GPR_U32(ctx, 31, 0x2C5824u);
    ctx->pc = 0x2C5820u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5824u; }
    }
    if (ctx->pc != 0x2C5824u) { return; }
    ctx->pc = 0x2C5824u;
    // 0x2c5824: 0x3c02003d
    ctx->pc = 0x2c5824u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c5828:
    // 0x2c5828: 0x2442c960
    ctx->pc = 0x2c5828u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953312));
    // 0x2c582c: 0x102080
    ctx->pc = 0x2c582cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c5830: 0x821021
    ctx->pc = 0x2c5830u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5834: 0x3c03003d
    ctx->pc = 0x2c5834u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c5838: 0x8c63c958
    ctx->pc = 0x2c5838u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294953304)));
    // 0x2c583c: 0xac430000
    ctx->pc = 0x2c583cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2c5840: 0x3c02003d
    ctx->pc = 0x2c5840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c5844: 0x24421f78
    ctx->pc = 0x2c5844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8056));
    // 0x2c5848: 0x822021
    ctx->pc = 0x2c5848u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c584c: 0x3c02003d
    ctx->pc = 0x2c584cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c5850: 0x8c421f70
    ctx->pc = 0x2c5850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8048)));
    // 0x2c5854: 0xac820000
    ctx->pc = 0x2c5854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c5858: 0x3c020038
    ctx->pc = 0x2c5858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c585c: 0xac50b130
    ctx->pc = 0x2c585cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947120), GPR_U32(ctx, 16));
    // 0x2c5860: 0xdfbf0010
    ctx->pc = 0x2c5860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5864: 0xdfb00000
    ctx->pc = 0x2c5864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5868: 0x3e00008
    ctx->pc = 0x2C5868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C586Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5828u: goto label_2c5828;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C5870u;
}
