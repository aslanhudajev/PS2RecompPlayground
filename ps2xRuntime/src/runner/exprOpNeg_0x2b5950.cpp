#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpNeg
// Address: 0x2b5950 - 0x2b5990
void exprOpNeg_0x2b5950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5950u;

    // 0x2b5950: 0x8c830000
    ctx->pc = 0x2b5950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5954: 0x24020001
    ctx->pc = 0x2b5954u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5958: 0x10620007
    ctx->pc = 0x2B5958u;
    {
        const bool branch_taken_0x2b5958 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B595Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2b5958) {
            ctx->pc = 0x2B5978u;
            goto label_2b5978;
        }
    }
    ctx->pc = 0x2B5960u;
    // 0x2b5960: 0x10400009
    ctx->pc = 0x2B5960u;
    {
        const bool branch_taken_0x2b5960 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5964u;
        SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
        if (branch_taken_0x2b5960) {
            ctx->pc = 0x2B5988u;
            goto label_2b5988;
        }
    }
    ctx->pc = 0x2B5968u;
    // 0x2b5968: 0xc4a00010
    ctx->pc = 0x2b5968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b596c: 0x46000007
    ctx->pc = 0x2b596cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b5970: 0x3e00008
    ctx->pc = 0x2B5970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5974u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5978u: goto label_2b5978;
            case 0x2B5988u: goto label_2b5988;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B5978u;
label_2b5978:
    // 0x2b5978: 0x8ca20010
    ctx->pc = 0x2b5978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b597c: 0x21023
    ctx->pc = 0x2b597cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2b5980: 0x3e00008
    ctx->pc = 0x2B5980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5984u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5978u: goto label_2b5978;
            case 0x2B5988u: goto label_2b5988;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B5988u;
label_2b5988:
    // 0x2b5988: 0x80ad496
    ctx->pc = 0x2B5988u;
    ctx->pc = 0x2B598Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 19248));
    ctx->pc = 0x2B5258u;
    typeError_0x2b5258(rdram, ctx, runtime); return;
    ctx->pc = 0x2B5990u;
}
