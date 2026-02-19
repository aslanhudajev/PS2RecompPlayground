#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InterpXYZ
// Address: 0x20f9f8 - 0x20fa58
void InterpXYZ_0x20f9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20f9f8u;

    // 0x20f9f8: 0x382d
    ctx->pc = 0x20f9f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9fc: 0x71880
    ctx->pc = 0x20f9fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
label_20fa00:
    // 0x20fa00: 0x641021
    ctx->pc = 0x20fa00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20fa04: 0xc4410000
    ctx->pc = 0x20fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fa08: 0x651021
    ctx->pc = 0x20fa08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20fa0c: 0xc4400000
    ctx->pc = 0x20fa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fa10: 0x46000832
    ctx->pc = 0x20fa10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20fa14: 0x0
    ctx->pc = 0x20fa14u;
    // NOP
    // 0x20fa18: 0x45010007
    ctx->pc = 0x20FA18u;
    {
        const bool branch_taken_0x20fa18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20FA1Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x20fa18) {
            ctx->pc = 0x20FA38u;
            goto label_20fa38;
        }
    }
    ctx->pc = 0x20FA20u;
    // 0x20fa20: 0x661021
    ctx->pc = 0x20fa20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20fa24: 0x46010001
    ctx->pc = 0x20fa24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20fa28: 0x46006002
    ctx->pc = 0x20fa28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x20fa2c: 0x46000800
    ctx->pc = 0x20fa2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20fa30: 0x10000003
    ctx->pc = 0x20FA30u;
    {
        const bool branch_taken_0x20fa30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FA34u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x20fa30) {
            ctx->pc = 0x20FA40u;
            goto label_20fa40;
        }
    }
    ctx->pc = 0x20FA38u;
label_20fa38:
    // 0x20fa38: 0x461021
    ctx->pc = 0x20fa38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20fa3c: 0xe4410000
    ctx->pc = 0x20fa3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_20fa40:
    // 0x20fa40: 0x24e70001
    ctx->pc = 0x20fa40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x20fa44: 0x28e20003
    ctx->pc = 0x20fa44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 3));
    // 0x20fa48: 0x1440ffed
    ctx->pc = 0x20FA48u;
    {
        const bool branch_taken_0x20fa48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20FA4Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x20fa48) {
            ctx->pc = 0x20FA00u;
            goto label_20fa00;
        }
    }
    ctx->pc = 0x20FA50u;
    // 0x20fa50: 0x3e00008
    ctx->pc = 0x20FA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FA00u: goto label_20fa00;
            case 0x20FA38u: goto label_20fa38;
            case 0x20FA40u: goto label_20fa40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20FA58u;
}
