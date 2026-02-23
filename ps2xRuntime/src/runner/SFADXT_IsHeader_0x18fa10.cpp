#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_IsHeader
// Address: 0x18fa10 - 0x18fa6c
void SFADXT_IsHeader_0x18fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_IsHeader");


    ctx->pc = 0x18fa10u;

    // 0x18fa10: 0x27bdfff0
    ctx->pc = 0x18fa10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18fa14: 0x24020120
    ctx->pc = 0x18fa14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 288));
    // 0x18fa18: 0xffbf0000
    ctx->pc = 0x18fa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fa1c: 0x28a50120
    ctx->pc = 0x18fa1cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 288));
    // 0x18fa20: 0x14a00005
    ctx->pc = 0x18FA20u;
    {
        const bool branch_taken_0x18fa20 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x18FA24u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x18fa20) {
            ctx->pc = 0x18FA38u;
            goto label_18fa38;
        }
    }
    ctx->pc = 0x18FA28u;
    // 0x18fa28: 0x90830000
    ctx->pc = 0x18fa28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18fa2c: 0x24020080
    ctx->pc = 0x18fa2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x18fa30: 0x50620003
    ctx->pc = 0x18FA30u;
    {
        const bool branch_taken_0x18fa30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x18fa30) {
            ctx->pc = 0x18FA34u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->pc = 0x18FA40u;
            goto label_18fa40;
        }
    }
    ctx->pc = 0x18FA38u;
label_18fa38:
    // 0x18fa38: 0x10000009
    ctx->pc = 0x18FA38u;
    {
        const bool branch_taken_0x18fa38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18FA3Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18fa38) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18FA40u;
label_18fa40:
    // 0x18fa40: 0x14400007
    ctx->pc = 0x18FA40u;
    {
        const bool branch_taken_0x18fa40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18FA44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18fa40) {
            ctx->pc = 0x18FA60u;
            goto label_18fa60;
        }
    }
    ctx->pc = 0x18FA48u;
    // 0x18fa48: 0x3c05002c
    ctx->pc = 0x18fa48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x18fa4c: 0x2484011a
    ctx->pc = 0x18fa4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 282));
    // 0x18fa50: 0x24a5d310
    ctx->pc = 0x18fa50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955792));
    // 0x18fa54: 0xc05160e
    ctx->pc = 0x18FA54u;
    SET_GPR_U32(ctx, 31, 0x18FA5Cu);
    ctx->pc = 0x18FA58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x145838u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x145838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA5Cu; }
        else if (ctx->pc != 0x18FA5Cu) { ctx->pc = 0x18FA5Cu; }
    }
    if (ctx->pc != 0x18FA5Cu) { return; }
    ctx->pc = 0x18FA5Cu;
    // 0x18fa5c: 0x2c420001
    ctx->pc = 0x18fa5cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_18fa60:
    // 0x18fa60: 0xdfbf0000
    ctx->pc = 0x18fa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fa64: 0x3e00008
    ctx->pc = 0x18FA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FA68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FA38u: goto label_18fa38;
            case 0x18FA40u: goto label_18fa40;
            case 0x18FA60u: goto label_18fa60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FA6Cu;
}
