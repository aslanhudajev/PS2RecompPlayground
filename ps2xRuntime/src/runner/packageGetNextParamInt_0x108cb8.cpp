#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: packageGetNextParamInt
// Address: 0x108cb8 - 0x108d60
void packageGetNextParamInt_0x108cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108cb8u;

    // 0x108cb8: 0x27bdfef0
    ctx->pc = 0x108cb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x108cbc: 0x8f8382bc
    ctx->pc = 0x108cbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x108cc0: 0xffbf0100
    ctx->pc = 0x108cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x108cc4: 0x282d
    ctx->pc = 0x108cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cc8: 0x3a0302d
    ctx->pc = 0x108cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ccc: 0x240400ff
    ctx->pc = 0x108cccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
    // 0x108cd0: 0x27a200ff
    ctx->pc = 0x108cd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 255));
    // 0x108cd4: 0x0
    ctx->pc = 0x108cd4u;
    // NOP
label_108cd8:
    // 0x108cd8: 0xa0400000
    ctx->pc = 0x108cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x108cdc: 0x2484ffff
    ctx->pc = 0x108cdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x108ce0: 0x2442ffff
    ctx->pc = 0x108ce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x108ce4: 0x0
    ctx->pc = 0x108ce4u;
    // NOP
    // 0x108ce8: 0x0
    ctx->pc = 0x108ce8u;
    // NOP
    // 0x108cec: 0x481fffa
    ctx->pc = 0x108CECu;
    {
        const bool branch_taken_0x108cec = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x108cec) {
            ctx->pc = 0x108CD8u;
            goto label_108cd8;
        }
    }
    ctx->pc = 0x108CF4u;
    // 0x108cf4: 0x90620000
    ctx->pc = 0x108cf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108cf8: 0x1040000d
    ctx->pc = 0x108CF8u;
    {
        const bool branch_taken_0x108cf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108CFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108cf8) {
            ctx->pc = 0x108D30u;
            goto label_108d30;
        }
    }
    ctx->pc = 0x108D00u;
    // 0x108d00: 0x10000003
    ctx->pc = 0x108D00u;
    {
        const bool branch_taken_0x108d00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108D04u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x108d00) {
            ctx->pc = 0x108D10u;
            goto label_108d10;
        }
    }
    ctx->pc = 0x108D08u;
label_108d08:
    // 0x108d08: 0x3a53021
    ctx->pc = 0x108d08u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x108d0c: 0x90820000
    ctx->pc = 0x108d0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_108d10:
    // 0x108d10: 0x24830001
    ctx->pc = 0x108d10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x108d14: 0x24a50001
    ctx->pc = 0x108d14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x108d18: 0xa0c20000
    ctx->pc = 0x108d18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x108d1c: 0xaf8382bc
    ctx->pc = 0x108d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 3));
    // 0x108d20: 0x90620000
    ctx->pc = 0x108d20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108d24: 0x1440fff8
    ctx->pc = 0x108D24u;
    {
        const bool branch_taken_0x108d24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x108D28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108d24) {
            ctx->pc = 0x108D08u;
            goto label_108d08;
        }
    }
    ctx->pc = 0x108D2Cu;
    // 0x108d2c: 0x3a53021
    ctx->pc = 0x108d2cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_108d30:
    // 0x108d30: 0x24630001
    ctx->pc = 0x108d30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x108d34: 0x3c040017
    ctx->pc = 0x108d34u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x108d38: 0xaf8382bc
    ctx->pc = 0x108d38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 3));
    // 0x108d3c: 0x24845c78
    ctx->pc = 0x108d3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23672));
    // 0x108d40: 0x3a0282d
    ctx->pc = 0x108d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d44: 0xc04ace4
    ctx->pc = 0x108D44u;
    SET_GPR_U32(ctx, 31, 0x108D4Cu);
    ctx->pc = 0x108D48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D4Cu; }
    }
    if (ctx->pc != 0x108D4Cu) { return; }
    ctx->pc = 0x108D4Cu;
    // 0x108d4c: 0xc04a83a
    ctx->pc = 0x108D4Cu;
    SET_GPR_U32(ctx, 31, 0x108D54u);
    ctx->pc = 0x108D50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12A0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x12a0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D54u; }
    }
    if (ctx->pc != 0x108D54u) { return; }
    ctx->pc = 0x108D54u;
    // 0x108d54: 0xdfbf0100
    ctx->pc = 0x108d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x108d58: 0x3e00008
    ctx->pc = 0x108D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108D5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108CD8u: goto label_108cd8;
            case 0x108D08u: goto label_108d08;
            case 0x108D10u: goto label_108d10;
            case 0x108D30u: goto label_108d30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108D60u;
}
