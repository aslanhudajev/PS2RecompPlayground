#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: test_controls
// Address: 0x205e28 - 0x205ecc
void test_controls_0x205e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x205e28u;

    // 0x205e28: 0x27bdffb0
    ctx->pc = 0x205e28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x205e2c: 0xffbf0040
    ctx->pc = 0x205e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x205e30: 0xffb20030
    ctx->pc = 0x205e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x205e34: 0xffb10020
    ctx->pc = 0x205e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x205e38: 0xffb00010
    ctx->pc = 0x205e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x205e3c: 0x3c10003a
    ctx->pc = 0x205e3cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x205e40: 0x3c12003a
    ctx->pc = 0x205e40u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x205e44: 0x3c020031
    ctx->pc = 0x205e44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205e48: 0x24421b94
    ctx->pc = 0x205e48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7060));
    // 0x205e4c: 0x2451003c
    ctx->pc = 0x205e4cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 60));
label_205e50:
    // 0x205e50: 0x8e02239c
    ctx->pc = 0x205e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 9116)));
label_205e54:
    // 0x205e54: 0x0
    ctx->pc = 0x205e54u;
    // NOP
    // 0x205e58: 0x0
    ctx->pc = 0x205e58u;
    // NOP
    // 0x205e5c: 0x0
    ctx->pc = 0x205e5cu;
    // NOP
    // 0x205e60: 0x0
    ctx->pc = 0x205e60u;
    // NOP
    // 0x205e64: 0x1040fffa
    ctx->pc = 0x205E64u;
    {
        const bool branch_taken_0x205e64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x205e64) {
            ctx->pc = 0x205E50u;
            goto label_205e50;
        }
    }
    ctx->pc = 0x205E6Cu;
    // 0x205e6c: 0xc0815b4
    ctx->pc = 0x205E6Cu;
    SET_GPR_U32(ctx, 31, 0x205E74u);
    ctx->pc = 0x205E70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9116), GPR_U32(ctx, 0));
    ctx->pc = 0x2056D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerControls_0x2056d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205E74u; }
    }
    if (ctx->pc != 0x205E74u) { return; }
    ctx->pc = 0x205E74u;
    // 0x205e74: 0x8e220000
    ctx->pc = 0x205e74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x205e78: 0x22d43
    ctx->pc = 0x205e78u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 21));
    // 0x205e7c: 0x23503
    ctx->pc = 0x205e7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 20));
    // 0x205e80: 0x23dc3
    ctx->pc = 0x205e80u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 23));
    // 0x205e84: 0x24583
    ctx->pc = 0x205e84u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 22));
    // 0x205e88: 0x24ec3
    ctx->pc = 0x205e88u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 27));
    // 0x205e8c: 0x25603
    ctx->pc = 0x205e8cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 24));
    // 0x205e90: 0x25e43
    ctx->pc = 0x205e90u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 25));
    // 0x205e94: 0x21683
    ctx->pc = 0x205e94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 26));
    // 0x205e98: 0x30420001
    ctx->pc = 0x205e98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x205e9c: 0xafa20000
    ctx->pc = 0x205e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x205ea0: 0x26444a40
    ctx->pc = 0x205ea0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 19008));
    // 0x205ea4: 0x30a50001
    ctx->pc = 0x205ea4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    // 0x205ea8: 0x30c60001
    ctx->pc = 0x205ea8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 1));
    // 0x205eac: 0x30e70001
    ctx->pc = 0x205eacu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 1));
    // 0x205eb0: 0x31080001
    ctx->pc = 0x205eb0u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), 1));
    // 0x205eb4: 0x31290001
    ctx->pc = 0x205eb4u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 9), 1));
    // 0x205eb8: 0x314a0001
    ctx->pc = 0x205eb8u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), 1));
    // 0x205ebc: 0xc0b4a34
    ctx->pc = 0x205EBCu;
    SET_GPR_U32(ctx, 31, 0x205EC4u);
    ctx->pc = 0x205EC0u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 1));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205EC4u; }
    }
    if (ctx->pc != 0x205EC4u) { return; }
    ctx->pc = 0x205EC4u;
    // 0x205ec4: 0x1000ffe3
    ctx->pc = 0x205EC4u;
    {
        const bool branch_taken_0x205ec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x205EC8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 9116)));
        if (branch_taken_0x205ec4) {
            ctx->pc = 0x205E54u;
            goto label_205e54;
        }
    }
    ctx->pc = 0x205ECCu;
}
