#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_RingGetRead
// Address: 0x194010 - 0x194060
void sfmps_RingGetRead_0x194010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_RingGetRead");


    ctx->pc = 0x194010u;

    // 0x194010: 0x27bdffb0
    ctx->pc = 0x194010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194014: 0xffb10030
    ctx->pc = 0x194014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x194018: 0xffb00020
    ctx->pc = 0x194018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19401c: 0xa0882d
    ctx->pc = 0x19401cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194020: 0xffbf0040
    ctx->pc = 0x194020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x194024: 0xc0802d
    ctx->pc = 0x194024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194028: 0x3a0302d
    ctx->pc = 0x194028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19402c: 0xc064754
    ctx->pc = 0x19402Cu;
    SET_GPR_U32(ctx, 31, 0x194034u);
    ctx->pc = 0x194030u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 14084)));
    ctx->pc = 0x191D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingGetRead_0x191d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194034u; }
        else if (ctx->pc != 0x194034u) { ctx->pc = 0x194034u; }
    }
    if (ctx->pc != 0x194034u) { return; }
    ctx->pc = 0x194034u;
    // 0x194034: 0x14400006
    ctx->pc = 0x194034u;
    {
        const bool branch_taken_0x194034 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194038u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x194034) {
            ctx->pc = 0x194050u;
            goto label_194050;
        }
    }
    ctx->pc = 0x19403Cu;
    // 0x19403c: 0x8fa40000
    ctx->pc = 0x19403cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194040: 0x102d
    ctx->pc = 0x194040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194044: 0x8fa30004
    ctx->pc = 0x194044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x194048: 0xae240000
    ctx->pc = 0x194048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x19404c: 0xae030000
    ctx->pc = 0x19404cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_194050:
    // 0x194050: 0xdfb10030
    ctx->pc = 0x194050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194054: 0xdfb00020
    ctx->pc = 0x194054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194058: 0x3e00008
    ctx->pc = 0x194058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19405Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194050u: goto label_194050;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194060u;
}
