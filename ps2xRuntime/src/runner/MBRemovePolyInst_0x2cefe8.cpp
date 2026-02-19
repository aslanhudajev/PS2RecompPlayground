#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBRemovePolyInst
// Address: 0x2cefe8 - 0x2cf058
void MBRemovePolyInst_0x2cefe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cefe8u;

    // 0x2cefe8: 0x8c850014
    ctx->pc = 0x2cefe8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2cefec: 0x182d
    ctx->pc = 0x2cefecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ceff0:
    // 0x2ceff0: 0x31140
    ctx->pc = 0x2ceff0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ceff4: 0x451021
    ctx->pc = 0x2ceff4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ceff8: 0xa440001c
    ctx->pc = 0x2ceff8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ceffc: 0x24630001
    ctx->pc = 0x2ceffcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cf000: 0x28620004
    ctx->pc = 0x2cf000u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x2cf004: 0x1440fffa
    ctx->pc = 0x2CF004u;
    {
        const bool branch_taken_0x2cf004 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cf004) {
            ctx->pc = 0x2CEFF0u;
            goto label_2ceff0;
        }
    }
    ctx->pc = 0x2CF00Cu;
    // 0x2cf00c: 0xa4800000
    ctx->pc = 0x2cf00cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cf010: 0x8c830018
    ctx->pc = 0x2cf010u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2cf014: 0x50600009
    ctx->pc = 0x2CF014u;
    {
        const bool branch_taken_0x2cf014 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cf014) {
            ctx->pc = 0x2CF018u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->pc = 0x2CF03Cu;
            goto label_2cf03c;
        }
    }
    ctx->pc = 0x2CF01Cu;
    // 0x2cf01c: 0x8c82001c
    ctx->pc = 0x2cf01cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cf020: 0xac62001c
    ctx->pc = 0x2cf020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2cf024: 0x8c83001c
    ctx->pc = 0x2cf024u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cf028: 0x10600009
    ctx->pc = 0x2CF028u;
    {
        const bool branch_taken_0x2cf028 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cf028) {
            ctx->pc = 0x2CF050u;
            goto label_2cf050;
        }
    }
    ctx->pc = 0x2CF030u;
    // 0x2cf030: 0x8c820018
    ctx->pc = 0x2cf030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2cf034: 0x10000006
    ctx->pc = 0x2CF034u;
    {
        const bool branch_taken_0x2cf034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF038u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x2cf034) {
            ctx->pc = 0x2CF050u;
            goto label_2cf050;
        }
    }
    ctx->pc = 0x2CF03Cu;
label_2cf03c:
    // 0x2cf03c: 0x8c82001c
    ctx->pc = 0x2cf03cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cf040: 0xac620000
    ctx->pc = 0x2cf040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2cf044: 0x8c82001c
    ctx->pc = 0x2cf044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cf048: 0x54400001
    ctx->pc = 0x2CF048u;
    {
        const bool branch_taken_0x2cf048 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cf048) {
            ctx->pc = 0x2CF04Cu;
            WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
            ctx->pc = 0x2CF050u;
            goto label_2cf050;
        }
    }
    ctx->pc = 0x2CF050u;
label_2cf050:
    // 0x2cf050: 0x3e00008
    ctx->pc = 0x2CF050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF054u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CEFF0u: goto label_2ceff0;
            case 0x2CF03Cu: goto label_2cf03c;
            case 0x2CF050u: goto label_2cf050;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF058u;
}
