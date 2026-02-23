#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_Start
// Address: 0x170c10 - 0x170c6c
void ADXSTM_Start_0x170c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_Start");


    ctx->pc = 0x170c10u;

    // 0x170c10: 0x27bdffe0
    ctx->pc = 0x170c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170c14: 0xffb00000
    ctx->pc = 0x170c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170c18: 0xffbf0010
    ctx->pc = 0x170c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170c1c: 0x80802d
    ctx->pc = 0x170c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c20: 0x8e020014
    ctx->pc = 0x170c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x170c24: 0x14400006
    ctx->pc = 0x170C24u;
    {
        const bool branch_taken_0x170c24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x170C28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x170c24) {
            ctx->pc = 0x170C40u;
            goto label_170c40;
        }
    }
    ctx->pc = 0x170C2Cu;
    // 0x170c2c: 0x24020003
    ctx->pc = 0x170c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x170c30: 0xae000034
    ctx->pc = 0x170c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x170c34: 0xa2020001
    ctx->pc = 0x170c34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x170c38: 0x10000007
    ctx->pc = 0x170C38u;
    {
        const bool branch_taken_0x170c38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170C3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x170c38) {
            ctx->pc = 0x170C58u;
            goto label_170c58;
        }
    }
    ctx->pc = 0x170C40u;
label_170c40:
    // 0x170c40: 0xae000034
    ctx->pc = 0x170c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x170c44: 0xa2020001
    ctx->pc = 0x170c44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x170c48: 0xc05c2f4
    ctx->pc = 0x170C48u;
    SET_GPR_U32(ctx, 31, 0x170C50u);
    ctx->pc = 0x170C4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Tell_0x170bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C50u; }
        else if (ctx->pc != 0x170C50u) { ctx->pc = 0x170C50u; }
    }
    if (ctx->pc != 0x170C50u) { return; }
    ctx->pc = 0x170C50u;
    // 0x170c50: 0xae02000c
    ctx->pc = 0x170c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x170c54: 0xa2000003
    ctx->pc = 0x170c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_170c58:
    // 0x170c58: 0xdfbf0010
    ctx->pc = 0x170c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170c5c: 0x24020001
    ctx->pc = 0x170c5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x170c60: 0xdfb00000
    ctx->pc = 0x170c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170c64: 0x3e00008
    ctx->pc = 0x170C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170C68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170C40u: goto label_170c40;
            case 0x170C58u: goto label_170c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170C6Cu;
}
