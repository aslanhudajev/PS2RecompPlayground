#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldPsysDeActivate
// Address: 0x21bce0 - 0x21bd3c
void WorldPsysDeActivate_0x21bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21bce0u;

    // 0x21bce0: 0x27bdffe0
    ctx->pc = 0x21bce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21bce4: 0xffbf0010
    ctx->pc = 0x21bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21bce8: 0xffb00000
    ctx->pc = 0x21bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bcec: 0x80802d
    ctx->pc = 0x21bcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bcf0: 0x8e020010
    ctx->pc = 0x21bcf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21bcf4: 0x3c030080
    ctx->pc = 0x21bcf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x21bcf8: 0x431024
    ctx->pc = 0x21bcf8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bcfc: 0x1040000b
    ctx->pc = 0x21BCFCu;
    {
        const bool branch_taken_0x21bcfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BD00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21bcfc) {
            ctx->pc = 0x21BD2Cu;
            goto label_21bd2c;
        }
    }
    ctx->pc = 0x21BD04u;
    // 0x21bd04: 0xc0b245c
    ctx->pc = 0x21BD04u;
    SET_GPR_U32(ctx, 31, 0x21BD0Cu);
    ctx->pc = 0x21BD08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x2C9170u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemovePsys_0x2c9170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD0Cu; }
    }
    if (ctx->pc != 0x21BD0Cu) { return; }
    ctx->pc = 0x21BD0Cu;
    // 0x21bd0c: 0x8e020010
    ctx->pc = 0x21bd0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21bd10: 0x3c03ff7f
    ctx->pc = 0x21bd10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65407 << 16));
    // 0x21bd14: 0x3463ffff
    ctx->pc = 0x21bd14u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x21bd18: 0x431024
    ctx->pc = 0x21bd18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bd1c: 0x3c030040
    ctx->pc = 0x21bd1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
    // 0x21bd20: 0x431025
    ctx->pc = 0x21bd20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bd24: 0xae020010
    ctx->pc = 0x21bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x21bd28: 0x24020001
    ctx->pc = 0x21bd28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21bd2c:
    // 0x21bd2c: 0xdfbf0010
    ctx->pc = 0x21bd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bd30: 0xdfb00000
    ctx->pc = 0x21bd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bd34: 0x3e00008
    ctx->pc = 0x21BD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BD38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21BD2Cu: goto label_21bd2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21BD3Cu;
}
