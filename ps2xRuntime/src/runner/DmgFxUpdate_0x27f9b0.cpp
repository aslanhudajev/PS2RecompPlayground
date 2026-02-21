#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DmgFxUpdate
// Address: 0x27f9b0 - 0x27fa2c
void DmgFxUpdate_0x27f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f9b0u;

    // 0x27f9b0: 0x240200f0
    ctx->pc = 0x27f9b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27f9b4: 0x822018
    ctx->pc = 0x27f9b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f9b8: 0x3c020034
    ctx->pc = 0x27f9b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27f9bc: 0x24420eb0
    ctx->pc = 0x27f9bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27f9c0: 0x822021
    ctx->pc = 0x27f9c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27f9c4: 0x8c820064
    ctx->pc = 0x27f9c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x27f9c8: 0x30420020
    ctx->pc = 0x27f9c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x27f9cc: 0x10400015
    ctx->pc = 0x27F9CCu;
    {
        const bool branch_taken_0x27f9cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27f9cc) {
            ctx->pc = 0x27FA24u;
            goto label_27fa24;
        }
    }
    ctx->pc = 0x27F9D4u;
    // 0x27f9d4: 0x3c013c23
    ctx->pc = 0x27f9d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x27f9d8: 0x3421d70a
    ctx->pc = 0x27f9d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x27f9dc: 0x44810000
    ctx->pc = 0x27f9dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27f9e0: 0x46006302
    ctx->pc = 0x27f9e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x27f9e4: 0xc481009c
    ctx->pc = 0x27f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f9e8: 0x3c01bf80
    ctx->pc = 0x27f9e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x27f9ec: 0x44810000
    ctx->pc = 0x27f9ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27f9f0: 0x46000836
    ctx->pc = 0x27f9f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f9f4: 0x0
    ctx->pc = 0x27f9f4u;
    // NOP
    // 0x27f9f8: 0x45010004
    ctx->pc = 0x27F9F8u;
    {
        const bool branch_taken_0x27f9f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F9FCu;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x27f9f8) {
            ctx->pc = 0x27FA0Cu;
            goto label_27fa0c;
        }
    }
    ctx->pc = 0x27FA00u;
    // 0x27fa00: 0x3c013f00
    ctx->pc = 0x27fa00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27fa04: 0x44810000
    ctx->pc = 0x27fa04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27fa08: 0x46006002
    ctx->pc = 0x27fa08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_27fa0c:
    // 0x27fa0c: 0x8c8200e0
    ctx->pc = 0x27fa0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x27fa10: 0xe44c0040
    ctx->pc = 0x27fa10u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x27fa14: 0x8c8200e0
    ctx->pc = 0x27fa14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x27fa18: 0xe4400044
    ctx->pc = 0x27fa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x27fa1c: 0x8c8200e0
    ctx->pc = 0x27fa1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x27fa20: 0xe44c0048
    ctx->pc = 0x27fa20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_27fa24:
    // 0x27fa24: 0x3e00008
    ctx->pc = 0x27FA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27FA0Cu: goto label_27fa0c;
            case 0x27FA24u: goto label_27fa24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27FA2Cu;
}
