#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ItemVisible
// Address: 0x253b08 - 0x253bbc
void ItemVisible_0x253b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253b08u;

    // 0x253b08: 0x27bdffd0
    ctx->pc = 0x253b08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253b0c: 0xffbf0020
    ctx->pc = 0x253b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x253b10: 0xffb00010
    ctx->pc = 0x253b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x253b14: 0x80802d
    ctx->pc = 0x253b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b18: 0x26040050
    ctx->pc = 0x253b18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    // 0x253b1c: 0xc0b1084
    ctx->pc = 0x253B1Cu;
    SET_GPR_U32(ctx, 31, 0x253B24u);
    ctx->pc = 0x253B20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2C4210u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldSphereVisible_0x2c4210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253B24u; }
    }
    if (ctx->pc != 0x253B24u) { return; }
    ctx->pc = 0x253B24u;
    // 0x253b24: 0x40202d
    ctx->pc = 0x253b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b28: 0x1080001f
    ctx->pc = 0x253B28u;
    {
        const bool branch_taken_0x253b28 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x253B2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x253b28) {
            ctx->pc = 0x253BA8u;
            goto label_253ba8;
        }
    }
    ctx->pc = 0x253B30u;
    // 0x253b30: 0x8c43f77c
    ctx->pc = 0x253b30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x253b34: 0x1060001c
    ctx->pc = 0x253B34u;
    {
        const bool branch_taken_0x253b34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x253B38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x253b34) {
            ctx->pc = 0x253BA8u;
            goto label_253ba8;
        }
    }
    ctx->pc = 0x253B3Cu;
    // 0x253b3c: 0x8c42f7d0
    ctx->pc = 0x253b3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965200)));
    // 0x253b40: 0x2442ffff
    ctx->pc = 0x253b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x253b44: 0x2c420002
    ctx->pc = 0x253b44u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x253b48: 0x10400017
    ctx->pc = 0x253B48u;
    {
        const bool branch_taken_0x253b48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x253B4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x253b48) {
            ctx->pc = 0x253BA8u;
            goto label_253ba8;
        }
    }
    ctx->pc = 0x253B50u;
    // 0x253b50: 0xc46300a4
    ctx->pc = 0x253b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x253b54: 0xc6000050
    ctx->pc = 0x253b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b58: 0x460018c1
    ctx->pc = 0x253b58u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x253b5c: 0xe7a30000
    ctx->pc = 0x253b5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x253b60: 0xc46100a8
    ctx->pc = 0x253b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253b64: 0xc6000054
    ctx->pc = 0x253b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b68: 0x46000841
    ctx->pc = 0x253b68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253b6c: 0xe7a10004
    ctx->pc = 0x253b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x253b70: 0xc46000ac
    ctx->pc = 0x253b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b74: 0xc6020058
    ctx->pc = 0x253b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253b78: 0x46020001
    ctx->pc = 0x253b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x253b7c: 0xe7a00008
    ctx->pc = 0x253b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x253b80: 0x460318c2
    ctx->pc = 0x253b80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x253b84: 0x46010842
    ctx->pc = 0x253b84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x253b88: 0x460118c0
    ctx->pc = 0x253b88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x253b8c: 0x46000002
    ctx->pc = 0x253b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x253b90: 0x460018c0
    ctx->pc = 0x253b90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x253b94: 0xc44049d4
    ctx->pc = 0x253b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b98: 0x46030034
    ctx->pc = 0x253b98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253b9c: 0x0
    ctx->pc = 0x253b9cu;
    // NOP
    // 0x253ba0: 0x45030001
    ctx->pc = 0x253BA0u;
    {
        const bool branch_taken_0x253ba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253ba0) {
            ctx->pc = 0x253BA4u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x253BA8u;
            goto label_253ba8;
        }
    }
    ctx->pc = 0x253BA8u;
label_253ba8:
    // 0x253ba8: 0x80102d
    ctx->pc = 0x253ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bac: 0xdfbf0020
    ctx->pc = 0x253bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253bb0: 0xdfb00010
    ctx->pc = 0x253bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253bb4: 0x3e00008
    ctx->pc = 0x253BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253BB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253BA8u: goto label_253ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x253BBCu;
}
