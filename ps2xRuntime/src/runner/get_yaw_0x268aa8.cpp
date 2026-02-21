#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_yaw
// Address: 0x268aa8 - 0x268b8c
void get_yaw_0x268aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x268aa8u;

    // 0x268aa8: 0x27bdffe0
    ctx->pc = 0x268aa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x268aac: 0xffbf0010
    ctx->pc = 0x268aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x268ab0: 0xc4800000
    ctx->pc = 0x268ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ab4: 0xc4a10000
    ctx->pc = 0x268ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268ab8: 0x46010001
    ctx->pc = 0x268ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x268abc: 0xe7a00000
    ctx->pc = 0x268abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x268ac0: 0xc4800004
    ctx->pc = 0x268ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ac4: 0xc4a10004
    ctx->pc = 0x268ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268ac8: 0x46010001
    ctx->pc = 0x268ac8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x268acc: 0xe7a00004
    ctx->pc = 0x268accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x268ad0: 0xc4800008
    ctx->pc = 0x268ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268ad4: 0xc4a10008
    ctx->pc = 0x268ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268ad8: 0x46010001
    ctx->pc = 0x268ad8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x268adc: 0xe7a00008
    ctx->pc = 0x268adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x268ae0: 0x46000345
    ctx->pc = 0x268ae0u;
    ctx->f[13] = FPU_ABS_S(ctx->f[0]);
    // 0x268ae4: 0x3c013a83
    ctx->pc = 0x268ae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x268ae8: 0x3421126f
    ctx->pc = 0x268ae8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x268aec: 0x44810000
    ctx->pc = 0x268aecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x268af0: 0x46006836
    ctx->pc = 0x268af0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268af4: 0x0
    ctx->pc = 0x268af4u;
    // NOP
    // 0x268af8: 0x45030001
    ctx->pc = 0x268AF8u;
    {
        const bool branch_taken_0x268af8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268af8) {
            ctx->pc = 0x268AFCu;
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x268B00u;
            goto label_268b00;
        }
    }
    ctx->pc = 0x268B00u;
label_268b00:
    // 0x268b00: 0xc7ac0000
    ctx->pc = 0x268b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268b04: 0xc0ba04a
    ctx->pc = 0x268B04u;
    SET_GPR_U32(ctx, 31, 0x268B0Cu);
    ctx->pc = 0x268B08u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B0Cu; }
    }
    if (ctx->pc != 0x268B0Cu) { return; }
    ctx->pc = 0x268B0Cu;
    // 0x268b0c: 0x46000306
    ctx->pc = 0x268b0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x268b10: 0xc7a00008
    ctx->pc = 0x268b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268b14: 0x44800800
    ctx->pc = 0x268b14u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x268b18: 0x46000836
    ctx->pc = 0x268b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268b1c: 0x0
    ctx->pc = 0x268b1cu;
    // NOP
    // 0x268b20: 0x45000007
    ctx->pc = 0x268B20u;
    {
        const bool branch_taken_0x268b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268B24u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x268b20) {
            ctx->pc = 0x268B40u;
            goto label_268b40;
        }
    }
    ctx->pc = 0x268B28u;
    // 0x268b28: 0x46000836
    ctx->pc = 0x268b28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268b2c: 0x0
    ctx->pc = 0x268b2cu;
    // NOP
    // 0x268b30: 0x45020011
    ctx->pc = 0x268B30u;
    {
        const bool branch_taken_0x268b30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268b30) {
            ctx->pc = 0x268B34u;
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->pc = 0x268B78u;
            goto label_268b78;
        }
    }
    ctx->pc = 0x268B38u;
    // 0x268b38: 0x1000000f
    ctx->pc = 0x268B38u;
    {
        const bool branch_taken_0x268b38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x268b38) {
            ctx->pc = 0x268B78u;
            goto label_268b78;
        }
    }
    ctx->pc = 0x268B40u;
label_268b40:
    // 0x268b40: 0xc7a10000
    ctx->pc = 0x268b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268b44: 0x44800000
    ctx->pc = 0x268b44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x268b48: 0x46010036
    ctx->pc = 0x268b48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268b4c: 0x45000006
    ctx->pc = 0x268B4Cu;
    {
        const bool branch_taken_0x268b4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268b4c) {
            ctx->pc = 0x268B68u;
            goto label_268b68;
        }
    }
    ctx->pc = 0x268B54u;
    // 0x268b54: 0x3c014049
    ctx->pc = 0x268b54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x268b58: 0x34210fdb
    ctx->pc = 0x268b58u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x268b5c: 0x44810000
    ctx->pc = 0x268b5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x268b60: 0x10000005
    ctx->pc = 0x268B60u;
    {
        const bool branch_taken_0x268b60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x268B64u;
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        if (branch_taken_0x268b60) {
            ctx->pc = 0x268B78u;
            goto label_268b78;
        }
    }
    ctx->pc = 0x268B68u;
label_268b68:
    // 0x268b68: 0x3c014049
    ctx->pc = 0x268b68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x268b6c: 0x34210fdb
    ctx->pc = 0x268b6cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x268b70: 0x44810000
    ctx->pc = 0x268b70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x268b74: 0x46006300
    ctx->pc = 0x268b74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_268b78:
    // 0x268b78: 0xc0b5a1a
    ctx->pc = 0x268B78u;
    SET_GPR_U32(ctx, 31, 0x268B80u);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B80u; }
    }
    if (ctx->pc != 0x268B80u) { return; }
    ctx->pc = 0x268B80u;
    // 0x268b80: 0xdfbf0010
    ctx->pc = 0x268b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268b84: 0x3e00008
    ctx->pc = 0x268B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268B88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268B00u: goto label_268b00;
            case 0x268B40u: goto label_268b40;
            case 0x268B68u: goto label_268b68;
            case 0x268B78u: goto label_268b78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268B8Cu;
}
