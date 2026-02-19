#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNewBlitNode
// Address: 0x2c2ef8 - 0x2c2f2c
void MBNewBlitNode_0x2c2ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c2ef8u;

    // 0x2c2ef8: 0x27bdfff0
    ctx->pc = 0x2c2ef8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2efc: 0xffbf0000
    ctx->pc = 0x2c2efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2f00: 0x3c05003a
    ctx->pc = 0x2c2f00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2c2f04: 0x24a52550
    ctx->pc = 0x2c2f04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    // 0x2c2f08: 0xc0b3ec0
    ctx->pc = 0x2C2F08u;
    SET_GPR_U32(ctx, 31, 0x2C2F10u);
    ctx->pc = 0x2C2F0Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F10u; }
    }
    if (ctx->pc != 0x2C2F10u) { return; }
    ctx->pc = 0x2C2F10u;
    // 0x2c2f10: 0x10400004
    ctx->pc = 0x2C2F10u;
    {
        const bool branch_taken_0x2c2f10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2F14u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2c2f10) {
            ctx->pc = 0x2C2F24u;
            goto label_2c2f24;
        }
    }
    ctx->pc = 0x2C2F18u;
    // 0x2c2f18: 0xac400060
    ctx->pc = 0x2c2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x2c2f1c: 0xac400070
    ctx->pc = 0x2c2f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x2c2f20: 0xac40006c
    ctx->pc = 0x2c2f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_2c2f24:
    // 0x2c2f24: 0x3e00008
    ctx->pc = 0x2C2F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2F28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2F24u: goto label_2c2f24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C2F2Cu;
}
