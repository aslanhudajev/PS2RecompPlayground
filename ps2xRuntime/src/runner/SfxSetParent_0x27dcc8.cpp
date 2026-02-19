#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetParent
// Address: 0x27dcc8 - 0x27dd1c
void SfxSetParent_0x27dcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27dcc8u;

    // 0x27dcc8: 0x27bdffe0
    ctx->pc = 0x27dcc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27dccc: 0xffbf0010
    ctx->pc = 0x27dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27dcd0: 0x480000e
    ctx->pc = 0x27DCD0u;
    {
        const bool branch_taken_0x27dcd0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27DCD4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x27dcd0) {
            ctx->pc = 0x27DD0Cu;
            goto label_27dd0c;
        }
    }
    ctx->pc = 0x27DCD8u;
    // 0x27dcd8: 0x241000f0
    ctx->pc = 0x27dcd8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27dcdc: 0x908018
    ctx->pc = 0x27dcdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27dce0: 0x3c020034
    ctx->pc = 0x27dce0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27dce4: 0x24420eb0
    ctx->pc = 0x27dce4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27dce8: 0x2028021
    ctx->pc = 0x27dce8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27dcec: 0xc0b3f94
    ctx->pc = 0x27DCECu;
    SET_GPR_U32(ctx, 31, 0x27DCF4u);
    ctx->pc = 0x27DCF0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DCF4u; }
    }
    if (ctx->pc != 0x27DCF4u) { return; }
    ctx->pc = 0x27DCF4u;
    // 0x27dcf4: 0x8e040018
    ctx->pc = 0x27dcf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27dcf8: 0x10800004
    ctx->pc = 0x27DCF8u;
    {
        const bool branch_taken_0x27dcf8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DCFCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x27dcf8) {
            ctx->pc = 0x27DD0Cu;
            goto label_27dd0c;
        }
    }
    ctx->pc = 0x27DD00u;
    // 0x27dd00: 0x8c840000
    ctx->pc = 0x27dd00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27dd04: 0xc0b41b8
    ctx->pc = 0x27DD04u;
    SET_GPR_U32(ctx, 31, 0x27DD0Cu);
    ctx->pc = 0x27DD08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD0Cu; }
    }
    if (ctx->pc != 0x27DD0Cu) { return; }
    ctx->pc = 0x27DD0Cu;
label_27dd0c:
    // 0x27dd0c: 0xdfbf0010
    ctx->pc = 0x27dd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dd10: 0xdfb00000
    ctx->pc = 0x27dd10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dd14: 0x3e00008
    ctx->pc = 0x27DD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DD18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DD0Cu: goto label_27dd0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DD1Cu;
}
