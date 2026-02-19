#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerGetBossTarget
// Address: 0x29dc80 - 0x29dd3c
void PlayerGetBossTarget_0x29dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29dc80u;

    // 0x29dc80: 0x27bdffb0
    ctx->pc = 0x29dc80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29dc84: 0xffbf0040
    ctx->pc = 0x29dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29dc88: 0xffb10030
    ctx->pc = 0x29dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x29dc8c: 0xffb00020
    ctx->pc = 0x29dc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29dc90: 0xa0802d
    ctx->pc = 0x29dc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc94: 0x3c020036
    ctx->pc = 0x29dc94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29dc98: 0x8c42d930
    ctx->pc = 0x29dc98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x29dc9c: 0x10400018
    ctx->pc = 0x29DC9Cu;
    {
        const bool branch_taken_0x29dc9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29DCA0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29dc9c) {
            ctx->pc = 0x29DD00u;
            goto label_29dd00;
        }
    }
    ctx->pc = 0x29DCA4u;
    // 0x29dca4: 0x3c013f34
    ctx->pc = 0x29dca4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x29dca8: 0x3421fdf4
    ctx->pc = 0x29dca8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x29dcac: 0x44816000
    ctx->pc = 0x29dcacu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29dcb0: 0x44806800
    ctx->pc = 0x29dcb0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x29dcb4: 0xc0a6762
    ctx->pc = 0x29DCB4u;
    SET_GPR_U32(ctx, 31, 0x29DCBCu);
    ctx->pc = 0x29DCB8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x299D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetTarget_0x299d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DCBCu; }
    }
    if (ctx->pc != 0x29DCBCu) { return; }
    ctx->pc = 0x29DCBCu;
    // 0x29dcbc: 0x14400005
    ctx->pc = 0x29DCBCu;
    {
        const bool branch_taken_0x29dcbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29DCC0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x29dcbc) {
            ctx->pc = 0x29DCD4u;
            goto label_29dcd4;
        }
    }
    ctx->pc = 0x29DCC4u;
    // 0x29dcc4: 0x3c01bf80
    ctx->pc = 0x29dcc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x29dcc8: 0x44810000
    ctx->pc = 0x29dcc8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29dccc: 0x10000017
    ctx->pc = 0x29DCCCu;
    {
        const bool branch_taken_0x29dccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29DCD0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x29dccc) {
            ctx->pc = 0x29DD2Cu;
            goto label_29dd2c;
        }
    }
    ctx->pc = 0x29DCD4u;
label_29dcd4:
    // 0x29dcd4: 0x44800000
    ctx->pc = 0x29dcd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29dcd8: 0x46000834
    ctx->pc = 0x29dcd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29dcdc: 0x0
    ctx->pc = 0x29dcdcu;
    // NOP
    // 0x29dce0: 0x45030008
    ctx->pc = 0x29DCE0u;
    {
        const bool branch_taken_0x29dce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29dce0) {
            ctx->pc = 0x29DCE4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x29DD04u;
            goto label_29dd04;
        }
    }
    ctx->pc = 0x29DCE8u;
    // 0x29dce8: 0x3c01447a
    ctx->pc = 0x29dce8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x29dcec: 0x44810000
    ctx->pc = 0x29dcecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29dcf0: 0x46010034
    ctx->pc = 0x29dcf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29dcf4: 0x0
    ctx->pc = 0x29dcf4u;
    // NOP
    // 0x29dcf8: 0x4500000b
    ctx->pc = 0x29DCF8u;
    {
        const bool branch_taken_0x29dcf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29DCFCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29dcf8) {
            ctx->pc = 0x29DD28u;
            goto label_29dd28;
        }
    }
    ctx->pc = 0x29DD00u;
label_29dd00:
    // 0x29dd00: 0xc6000000
    ctx->pc = 0x29dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29dd04:
    // 0x29dd04: 0xe6200000
    ctx->pc = 0x29dd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29dd08: 0xc6000004
    ctx->pc = 0x29dd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dd0c: 0xe6200004
    ctx->pc = 0x29dd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x29dd10: 0xc6000008
    ctx->pc = 0x29dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dd14: 0xe6200008
    ctx->pc = 0x29dd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x29dd18: 0x3c01447a
    ctx->pc = 0x29dd18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x29dd1c: 0x44810000
    ctx->pc = 0x29dd1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29dd20: 0xe7a00010
    ctx->pc = 0x29dd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29dd24: 0xc7a00010
    ctx->pc = 0x29dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29dd28:
    // 0x29dd28: 0xdfbf0040
    ctx->pc = 0x29dd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29dd2c:
    // 0x29dd2c: 0xdfb10030
    ctx->pc = 0x29dd2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29dd30: 0xdfb00020
    ctx->pc = 0x29dd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dd34: 0x3e00008
    ctx->pc = 0x29DD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DD38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29DCD4u: goto label_29dcd4;
            case 0x29DD00u: goto label_29dd00;
            case 0x29DD04u: goto label_29dd04;
            case 0x29DD28u: goto label_29dd28;
            case 0x29DD2Cu: goto label_29dd2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29DD3Cu;
}
