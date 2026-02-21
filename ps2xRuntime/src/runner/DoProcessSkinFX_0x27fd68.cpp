#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoProcessSkinFX
// Address: 0x27fd68 - 0x27fe60
void DoProcessSkinFX_0x27fd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27fd68u;

    // 0x27fd68: 0x27bdffb0
    ctx->pc = 0x27fd68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27fd6c: 0xffbf0040
    ctx->pc = 0x27fd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27fd70: 0xffb30030
    ctx->pc = 0x27fd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27fd74: 0xffb20020
    ctx->pc = 0x27fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27fd78: 0xffb10010
    ctx->pc = 0x27fd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27fd7c: 0xffb00000
    ctx->pc = 0x27fd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27fd80: 0x80802d
    ctx->pc = 0x27fd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd84: 0xa0882d
    ctx->pc = 0x27fd84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd88: 0xc0902d
    ctx->pc = 0x27fd88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd8c: 0x12400004
    ctx->pc = 0x27FD8Cu;
    {
        const bool branch_taken_0x27fd8c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x27FD90u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27fd8c) {
            ctx->pc = 0x27FDA0u;
            goto label_27fda0;
        }
    }
    ctx->pc = 0x27FD94u;
    // 0x27fd94: 0x8e530060
    ctx->pc = 0x27fd94u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x27fd98: 0x36620010
    ctx->pc = 0x27fd98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), 16));
    // 0x27fd9c: 0xae420060
    ctx->pc = 0x27fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_27fda0:
    // 0x27fda0: 0xc6010000
    ctx->pc = 0x27fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fda4: 0x44800000
    ctx->pc = 0x27fda4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27fda8: 0x46010034
    ctx->pc = 0x27fda8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fdac: 0x0
    ctx->pc = 0x27fdacu;
    // NOP
    // 0x27fdb0: 0x45000019
    ctx->pc = 0x27FDB0u;
    {
        const bool branch_taken_0x27fdb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27FDB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27fdb0) {
            ctx->pc = 0x27FE18u;
            goto label_27fe18;
        }
    }
    ctx->pc = 0x27FDB8u;
    // 0x27fdb8: 0x8e03000c
    ctx->pc = 0x27fdb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27fdbc: 0x8c4254f4
    ctx->pc = 0x27fdbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 21748)));
    // 0x27fdc0: 0x10620004
    ctx->pc = 0x27FDC0u;
    {
        const bool branch_taken_0x27fdc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x27FDC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27fdc0) {
            ctx->pc = 0x27FDD4u;
            goto label_27fdd4;
        }
    }
    ctx->pc = 0x27FDC8u;
    // 0x27fdc8: 0x8c4254f8
    ctx->pc = 0x27fdc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 21752)));
    // 0x27fdcc: 0x14620002
    ctx->pc = 0x27FDCCu;
    {
        const bool branch_taken_0x27fdcc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x27FDD0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x27fdcc) {
            ctx->pc = 0x27FDD8u;
            goto label_27fdd8;
        }
    }
    ctx->pc = 0x27FDD4u;
label_27fdd4:
    // 0x27fdd4: 0x2405fffd
    ctx->pc = 0x27fdd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
label_27fdd8:
    // 0x27fdd8: 0xc6000004
    ctx->pc = 0x27fdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fddc: 0x46000064
    ctx->pc = 0x27fddcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x27fde0: 0x44020800
    ctx->pc = 0x27fde0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x27fde4: 0x8e06000c
    ctx->pc = 0x27fde4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27fde8: 0x220202d
    ctx->pc = 0x27fde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fdec: 0x463021
    ctx->pc = 0x27fdecu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27fdf0: 0xc0b4126
    ctx->pc = 0x27FDF0u;
    SET_GPR_U32(ctx, 31, 0x27FDF8u);
    ctx->pc = 0x27FDF4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FDF8u; }
    }
    if (ctx->pc != 0x27FDF8u) { return; }
    ctx->pc = 0x27FDF8u;
    // 0x27fdf8: 0xc6000014
    ctx->pc = 0x27fdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fdfc: 0x220202d
    ctx->pc = 0x27fdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe00: 0x46000064
    ctx->pc = 0x27fe00u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x27fe04: 0x44050800
    ctx->pc = 0x27fe04u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x27fe08: 0xc0b4156
    ctx->pc = 0x27FE08u;
    SET_GPR_U32(ctx, 31, 0x27FE10u);
    ctx->pc = 0x27FE0Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE10u; }
    }
    if (ctx->pc != 0x27FE10u) { return; }
    ctx->pc = 0x27FE10u;
    // 0x27fe10: 0x1000000a
    ctx->pc = 0x27FE10u;
    {
        const bool branch_taken_0x27fe10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x27fe10) {
            ctx->pc = 0x27FE3Cu;
            goto label_27fe3c;
        }
    }
    ctx->pc = 0x27FE18u;
label_27fe18:
    // 0x27fe18: 0x220202d
    ctx->pc = 0x27fe18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe1c: 0x2405ffff
    ctx->pc = 0x27fe1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27fe20: 0x302d
    ctx->pc = 0x27fe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe24: 0xc0b4126
    ctx->pc = 0x27FE24u;
    SET_GPR_U32(ctx, 31, 0x27FE2Cu);
    ctx->pc = 0x27FE28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE2Cu; }
    }
    if (ctx->pc != 0x27FE2Cu) { return; }
    ctx->pc = 0x27FE2Cu;
    // 0x27fe2c: 0x220202d
    ctx->pc = 0x27fe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe30: 0x282d
    ctx->pc = 0x27fe30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe34: 0xc0b4156
    ctx->pc = 0x27FE34u;
    SET_GPR_U32(ctx, 31, 0x27FE3Cu);
    ctx->pc = 0x27FE38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE3Cu; }
    }
    if (ctx->pc != 0x27FE3Cu) { return; }
    ctx->pc = 0x27FE3Cu;
label_27fe3c:
    // 0x27fe3c: 0x56400001
    ctx->pc = 0x27FE3Cu;
    {
        const bool branch_taken_0x27fe3c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x27fe3c) {
            ctx->pc = 0x27FE40u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 19));
            ctx->pc = 0x27FE44u;
            goto label_27fe44;
        }
    }
    ctx->pc = 0x27FE44u;
label_27fe44:
    // 0x27fe44: 0xdfbf0040
    ctx->pc = 0x27fe44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fe48: 0xdfb30030
    ctx->pc = 0x27fe48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fe4c: 0xdfb20020
    ctx->pc = 0x27fe4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fe50: 0xdfb10010
    ctx->pc = 0x27fe50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fe54: 0xdfb00000
    ctx->pc = 0x27fe54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fe58: 0x3e00008
    ctx->pc = 0x27FE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FE5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27FDA0u: goto label_27fda0;
            case 0x27FDD4u: goto label_27fdd4;
            case 0x27FDD8u: goto label_27fdd8;
            case 0x27FE18u: goto label_27fe18;
            case 0x27FE3Cu: goto label_27fe3c;
            case 0x27FE44u: goto label_27fe44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27FE60u;
}
