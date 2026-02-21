#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: print_closest_item
// Address: 0x25bdf0 - 0x25bf0c
void print_closest_item_0x25bdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25bdf0u;

    // 0x25bdf0: 0x27bdff60
    ctx->pc = 0x25bdf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25bdf4: 0xffbf0080
    ctx->pc = 0x25bdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x25bdf8: 0xffb60070
    ctx->pc = 0x25bdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25bdfc: 0xffb50060
    ctx->pc = 0x25bdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25be00: 0xffb40050
    ctx->pc = 0x25be00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25be04: 0xffb30040
    ctx->pc = 0x25be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25be08: 0xffb20030
    ctx->pc = 0x25be08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25be0c: 0xffb10020
    ctx->pc = 0x25be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25be10: 0xffb00010
    ctx->pc = 0x25be10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25be14: 0xe7b50098
    ctx->pc = 0x25be14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x25be18: 0xe7b40090
    ctx->pc = 0x25be18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x25be1c: 0x80882d
    ctx->pc = 0x25be1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be20: 0xa0982d
    ctx->pc = 0x25be20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be24: 0x3c01bf80
    ctx->pc = 0x25be24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25be28: 0x4481a000
    ctx->pc = 0x25be28u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x25be2c: 0xc0a0120
    ctx->pc = 0x25BE2Cu;
    SET_GPR_U32(ctx, 31, 0x25BE34u);
    ctx->pc = 0x25BE30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE34u; }
    }
    if (ctx->pc != 0x25BE34u) { return; }
    ctx->pc = 0x25BE34u;
    // 0x25be34: 0x3c160034
    ctx->pc = 0x25be34u;
    SET_GPR_U32(ctx, 22, ((uint32_t)52 << 16));
    // 0x25be38: 0x24150110
    ctx->pc = 0x25be38u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 272));
    // 0x25be3c: 0x4480a800
    ctx->pc = 0x25be3cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x25be40: 0x10000020
    ctx->pc = 0x25BE40u;
    {
        const bool branch_taken_0x25be40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25BE44u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x25be40) {
            ctx->pc = 0x25BEC4u;
            goto label_25bec4;
        }
    }
    ctx->pc = 0x25BE48u;
label_25be48:
    // 0x25be48: 0x8ec2cd94
    ctx->pc = 0x25be48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294954388)));
    // 0x25be4c: 0x628021
    ctx->pc = 0x25be4cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25be50: 0x860200d8
    ctx->pc = 0x25be50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x25be54: 0x1054001b
    ctx->pc = 0x25BE54u;
    {
        const bool branch_taken_0x25be54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        if (branch_taken_0x25be54) {
            ctx->pc = 0x25BEC4u;
            goto label_25bec4;
        }
    }
    ctx->pc = 0x25BE5Cu;
    // 0x25be5c: 0x820200e1
    ctx->pc = 0x25be5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 225)));
    // 0x25be60: 0x14400018
    ctx->pc = 0x25BE60u;
    {
        const bool branch_taken_0x25be60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25be60) {
            ctx->pc = 0x25BEC4u;
            goto label_25bec4;
        }
    }
    ctx->pc = 0x25BE68u;
    // 0x25be68: 0xc6000060
    ctx->pc = 0x25be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25be6c: 0xc6210000
    ctx->pc = 0x25be6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25be70: 0x46010001
    ctx->pc = 0x25be70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25be74: 0xe7a00000
    ctx->pc = 0x25be74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25be78: 0xc6000064
    ctx->pc = 0x25be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25be7c: 0xc6210004
    ctx->pc = 0x25be7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25be80: 0x46010001
    ctx->pc = 0x25be80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25be84: 0xe7a00004
    ctx->pc = 0x25be84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25be88: 0xc6000068
    ctx->pc = 0x25be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25be8c: 0xc6210008
    ctx->pc = 0x25be8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25be90: 0x46010001
    ctx->pc = 0x25be90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25be94: 0xe7a00008
    ctx->pc = 0x25be94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25be98: 0xc0b58a4
    ctx->pc = 0x25BE98u;
    SET_GPR_U32(ctx, 31, 0x25BEA0u);
    ctx->pc = 0x25BE9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BEA0u; }
    }
    if (ctx->pc != 0x25BEA0u) { return; }
    ctx->pc = 0x25BEA0u;
    // 0x25bea0: 0x4615a034
    ctx->pc = 0x25bea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25bea4: 0x0
    ctx->pc = 0x25bea4u;
    // NOP
    // 0x25bea8: 0x45030005
    ctx->pc = 0x25BEA8u;
    {
        const bool branch_taken_0x25bea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25bea8) {
            ctx->pc = 0x25BEACu;
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x25BEC0u;
            goto label_25bec0;
        }
    }
    ctx->pc = 0x25BEB0u;
    // 0x25beb0: 0x46140034
    ctx->pc = 0x25beb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25beb4: 0x45000003
    ctx->pc = 0x25BEB4u;
    {
        const bool branch_taken_0x25beb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25beb4) {
            ctx->pc = 0x25BEC4u;
            goto label_25bec4;
        }
    }
    ctx->pc = 0x25BEBCu;
    // 0x25bebc: 0x200902d
    ctx->pc = 0x25bebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25bec0:
    // 0x25bec0: 0x46000506
    ctx->pc = 0x25bec0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25bec4:
    // 0x25bec4: 0xc0a015a
    ctx->pc = 0x25BEC4u;
    SET_GPR_U32(ctx, 31, 0x25BECCu);
    ctx->pc = 0x280568u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridItem_0x280568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BECCu; }
    }
    if (ctx->pc != 0x25BECCu) { return; }
    ctx->pc = 0x25BECCu;
    // 0x25becc: 0x441ffde
    ctx->pc = 0x25BECCu;
    {
        const bool branch_taken_0x25becc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25BED0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x25becc) {
            ctx->pc = 0x25BE48u;
            goto label_25be48;
        }
    }
    ctx->pc = 0x25BED4u;
    // 0x25bed4: 0xae720000
    ctx->pc = 0x25bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x25bed8: 0x4600a006
    ctx->pc = 0x25bed8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x25bedc: 0xdfbf0080
    ctx->pc = 0x25bedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25bee0: 0xdfb60070
    ctx->pc = 0x25bee0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25bee4: 0xdfb50060
    ctx->pc = 0x25bee4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25bee8: 0xdfb40050
    ctx->pc = 0x25bee8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25beec: 0xdfb30040
    ctx->pc = 0x25beecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25bef0: 0xdfb20030
    ctx->pc = 0x25bef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25bef4: 0xdfb10020
    ctx->pc = 0x25bef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bef8: 0xdfb00010
    ctx->pc = 0x25bef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25befc: 0xc7b50098
    ctx->pc = 0x25befcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25bf00: 0xc7b40090
    ctx->pc = 0x25bf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25bf04: 0x3e00008
    ctx->pc = 0x25BF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BF08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25BE48u: goto label_25be48;
            case 0x25BEC0u: goto label_25bec0;
            case 0x25BEC4u: goto label_25bec4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25BF0Cu;
}
