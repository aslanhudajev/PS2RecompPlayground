#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncVDot
// Address: 0x2b7160 - 0x2b71e4
void efuncVDot_0x2b7160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b7160u;

    // 0x2b7160: 0x8c860010
    ctx->pc = 0x2b7160u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b7164: 0x8cc30000
    ctx->pc = 0x2b7164u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b7168: 0x24020002
    ctx->pc = 0x2b7168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b716c: 0x10620004
    ctx->pc = 0x2B716Cu;
    {
        const bool branch_taken_0x2b716c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B7170u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2b716c) {
            ctx->pc = 0x2B7180u;
            goto label_2b7180;
        }
    }
    ctx->pc = 0x2B7174u;
    // 0x2b7174: 0x24020020
    ctx->pc = 0x2b7174u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7178: 0x3e00008
    ctx->pc = 0x2B7178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B717Cu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7180u: goto label_2b7180;
            case 0x2B71B0u: goto label_2b71b0;
            case 0x2B71D8u: goto label_2b71d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B7180u;
label_2b7180:
    // 0x2b7180: 0x44801000
    ctx->pc = 0x2b7180u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x2b7184: 0x8c820004
    ctx->pc = 0x2b7184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b7188: 0x80440006
    ctx->pc = 0x2b7188u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b718c: 0x2484ffd0
    ctx->pc = 0x2b718cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2b7190: 0x2482ffff
    ctx->pc = 0x2b7190u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b7194: 0x2c420004
    ctx->pc = 0x2b7194u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
    // 0x2b7198: 0x24030003
    ctx->pc = 0x2b7198u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b719c: 0x62200a
    ctx->pc = 0x2b719cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2b71a0: 0x1880000d
    ctx->pc = 0x2B71A0u;
    {
        const bool branch_taken_0x2b71a0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B71A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b71a0) {
            ctx->pc = 0x2B71D8u;
            goto label_2b71d8;
        }
    }
    ctx->pc = 0x2B71A8u;
    // 0x2b71a8: 0x24c70010
    ctx->pc = 0x2b71a8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 16));
    // 0x2b71ac: 0x24c60060
    ctx->pc = 0x2b71acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 96));
label_2b71b0:
    // 0x2b71b0: 0x51080
    ctx->pc = 0x2b71b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b71b4: 0xe21821
    ctx->pc = 0x2b71b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2b71b8: 0xc21021
    ctx->pc = 0x2b71b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b71bc: 0xc4600000
    ctx->pc = 0x2b71bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b71c0: 0xc4410000
    ctx->pc = 0x2b71c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b71c4: 0x46010002
    ctx->pc = 0x2b71c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b71c8: 0x24a50001
    ctx->pc = 0x2b71c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b71cc: 0xa4102a
    ctx->pc = 0x2b71ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x2b71d0: 0x1440fff7
    ctx->pc = 0x2B71D0u;
    {
        const bool branch_taken_0x2b71d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B71D4u;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x2b71d0) {
            ctx->pc = 0x2B71B0u;
            goto label_2b71b0;
        }
    }
    ctx->pc = 0x2B71D8u;
label_2b71d8:
    // 0x2b71d8: 0xe5020010
    ctx->pc = 0x2b71d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2b71dc: 0x3e00008
    ctx->pc = 0x2B71DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B71E0u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7180u: goto label_2b7180;
            case 0x2B71B0u: goto label_2b71b0;
            case 0x2B71D8u: goto label_2b71d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B71E4u;
}
