#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ProfileFrameRate
// Address: 0x2d2e70 - 0x2d2f30
void ProfileFrameRate_0x2d2e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2e70u;

    // 0x2d2e70: 0x27bdffb0
    ctx->pc = 0x2d2e70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d2e74: 0xffbf0040
    ctx->pc = 0x2d2e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d2e78: 0xffb30030
    ctx->pc = 0x2d2e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d2e7c: 0xffb20020
    ctx->pc = 0x2d2e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d2e80: 0xffb10010
    ctx->pc = 0x2d2e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d2e84: 0xffb00000
    ctx->pc = 0x2d2e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2e88: 0x2410001f
    ctx->pc = 0x2d2e88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 31));
    // 0x2d2e8c: 0x2413001f
    ctx->pc = 0x2d2e8cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 31));
    // 0x2d2e90: 0x3c020038
    ctx->pc = 0x2d2e90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2d2e94: 0x2452b1c0
    ctx->pc = 0x2d2e94u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x2d2e98: 0x3c110038
    ctx->pc = 0x2d2e98u;
    SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
    // 0x2d2e9c: 0x2701023
    ctx->pc = 0x2d2e9cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2d2ea0:
    // 0x2d2ea0: 0x228c0
    ctx->pc = 0x2d2ea0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d2ea4: 0xa22823
    ctx->pc = 0x2d2ea4u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d2ea8: 0x2602ffe1
    ctx->pc = 0x2d2ea8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967265));
    // 0x2d2eac: 0x8e23b178
    ctx->pc = 0x2d2eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294947192)));
    // 0x2d2eb0: 0x431021
    ctx->pc = 0x2d2eb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2eb4: 0x3042007f
    ctx->pc = 0x2d2eb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 127));
    // 0x2d2eb8: 0x21080
    ctx->pc = 0x2d2eb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d2ebc: 0x521021
    ctx->pc = 0x2d2ebcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d2ec0: 0x3c0400ff
    ctx->pc = 0x2d2ec0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2d2ec4: 0x3484ffff
    ctx->pc = 0x2d2ec4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2d2ec8: 0x24a50010
    ctx->pc = 0x2d2ec8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x2d2ecc: 0x240600c8
    ctx->pc = 0x2d2eccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d2ed0: 0xc0b4af0
    ctx->pc = 0x2D2ED0u;
    SET_GPR_U32(ctx, 31, 0x2D2ED8u);
    ctx->pc = 0x2D2ED4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2D2BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        BlitBarProfiler_0x2d2bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2ED8u; }
    }
    if (ctx->pc != 0x2D2ED8u) { return; }
    ctx->pc = 0x2D2ED8u;
    // 0x2d2ed8: 0x2610ffff
    ctx->pc = 0x2d2ed8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d2edc: 0x601fff0
    ctx->pc = 0x2D2EDCu;
    {
        const bool branch_taken_0x2d2edc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2D2EE0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        if (branch_taken_0x2d2edc) {
            ctx->pc = 0x2D2EA0u;
            goto label_2d2ea0;
        }
    }
    ctx->pc = 0x2D2EE4u;
    // 0x2d2ee4: 0x24100001
    ctx->pc = 0x2d2ee4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2ee8: 0x241100c8
    ctx->pc = 0x2d2ee8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d2eec: 0x1030c0
    ctx->pc = 0x2d2eecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 3));
label_2d2ef0:
    // 0x2d2ef0: 0x3c040001
    ctx->pc = 0x2d2ef0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    // 0x2d2ef4: 0x34840101
    ctx->pc = 0x2d2ef4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 257));
    // 0x2d2ef8: 0x24050010
    ctx->pc = 0x2d2ef8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d2efc: 0xc0b4b22
    ctx->pc = 0x2D2EFCu;
    SET_GPR_U32(ctx, 31, 0x2D2F04u);
    ctx->pc = 0x2D2F00u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->pc = 0x2D2C88u;
    {
        const uint32_t __entryPc = ctx->pc;
        BlitBarProfilerGrid_0x2d2c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F04u; }
    }
    if (ctx->pc != 0x2D2F04u) { return; }
    ctx->pc = 0x2D2F04u;
    // 0x2d2f04: 0x26100001
    ctx->pc = 0x2d2f04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d2f08: 0x2a02000a
    ctx->pc = 0x2d2f08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 10));
    // 0x2d2f0c: 0x5440fff8
    ctx->pc = 0x2D2F0Cu;
    {
        const bool branch_taken_0x2d2f0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d2f0c) {
            ctx->pc = 0x2D2F10u;
            SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 3));
            ctx->pc = 0x2D2EF0u;
            goto label_2d2ef0;
        }
    }
    ctx->pc = 0x2D2F14u;
    // 0x2d2f14: 0xdfbf0040
    ctx->pc = 0x2d2f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2f18: 0xdfb30030
    ctx->pc = 0x2d2f18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2f1c: 0xdfb20020
    ctx->pc = 0x2d2f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2f20: 0xdfb10010
    ctx->pc = 0x2d2f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2f24: 0xdfb00000
    ctx->pc = 0x2d2f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2f28: 0x3e00008
    ctx->pc = 0x2D2F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2F2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2EA0u: goto label_2d2ea0;
            case 0x2D2EF0u: goto label_2d2ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2F30u;
}
