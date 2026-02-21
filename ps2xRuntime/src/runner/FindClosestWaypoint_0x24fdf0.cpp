#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindClosestWaypoint
// Address: 0x24fdf0 - 0x24ff14
void FindClosestWaypoint_0x24fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24fdf0u;

    // 0x24fdf0: 0x27bdff70
    ctx->pc = 0x24fdf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24fdf4: 0xffbf0070
    ctx->pc = 0x24fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24fdf8: 0xffb50060
    ctx->pc = 0x24fdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x24fdfc: 0xffb40050
    ctx->pc = 0x24fdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24fe00: 0xffb30040
    ctx->pc = 0x24fe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24fe04: 0xffb20030
    ctx->pc = 0x24fe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24fe08: 0xffb10020
    ctx->pc = 0x24fe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24fe0c: 0xffb00010
    ctx->pc = 0x24fe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24fe10: 0xe7b40080
    ctx->pc = 0x24fe10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24fe14: 0x80902d
    ctx->pc = 0x24fe14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe18: 0x46006506
    ctx->pc = 0x24fe18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x24fe1c: 0xa0a02d
    ctx->pc = 0x24fe1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe20: 0x882d
    ctx->pc = 0x24fe20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe24: 0x3c020034
    ctx->pc = 0x24fe24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fe28: 0x2450c390
    ctx->pc = 0x24fe28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294951824));
    // 0x24fe2c: 0x3c020034
    ctx->pc = 0x24fe2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fe30: 0x8c42cd90
    ctx->pc = 0x24fe30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954384)));
    // 0x24fe34: 0x1840002c
    ctx->pc = 0x24FE34u;
    {
        const bool branch_taken_0x24fe34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24FE38u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fe34) {
            ctx->pc = 0x24FEE8u;
            goto label_24fee8;
        }
    }
    ctx->pc = 0x24FE3Cu;
    // 0x24fe3c: 0x3c150034
    ctx->pc = 0x24fe3cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
label_24fe40:
    // 0x24fe40: 0x56800007
    ctx->pc = 0x24FE40u;
    {
        const bool branch_taken_0x24fe40 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x24fe40) {
            ctx->pc = 0x24FE44u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->pc = 0x24FE60u;
            goto label_24fe60;
        }
    }
    ctx->pc = 0x24FE48u;
    // 0x24fe48: 0x86020070
    ctx->pc = 0x24fe48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x24fe4c: 0x4420022
    ctx->pc = 0x24FE4Cu;
    {
        const bool branch_taken_0x24fe4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24fe4c) {
            ctx->pc = 0x24FE50u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x24FED8u;
            goto label_24fed8;
        }
    }
    ctx->pc = 0x24FE54u;
    // 0x24fe54: 0x50510020
    ctx->pc = 0x24FE54u;
    {
        const bool branch_taken_0x24fe54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x24fe54) {
            ctx->pc = 0x24FE58u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x24FED8u;
            goto label_24fed8;
        }
    }
    ctx->pc = 0x24FE5Cu;
    // 0x24fe5c: 0xc6030030
    ctx->pc = 0x24fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24fe60:
    // 0x24fe60: 0xc6400000
    ctx->pc = 0x24fe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fe64: 0x460018c1
    ctx->pc = 0x24fe64u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x24fe68: 0xe7a30000
    ctx->pc = 0x24fe68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24fe6c: 0xc6020034
    ctx->pc = 0x24fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24fe70: 0xc6400004
    ctx->pc = 0x24fe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fe74: 0x46001081
    ctx->pc = 0x24fe74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24fe78: 0xe7a20004
    ctx->pc = 0x24fe78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24fe7c: 0xc6000038
    ctx->pc = 0x24fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fe80: 0xc6410008
    ctx->pc = 0x24fe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fe84: 0x46010001
    ctx->pc = 0x24fe84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24fe88: 0xe7a00008
    ctx->pc = 0x24fe88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24fe8c: 0x460318c2
    ctx->pc = 0x24fe8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x24fe90: 0x46021082
    ctx->pc = 0x24fe90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24fe94: 0x460218c0
    ctx->pc = 0x24fe94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24fe98: 0x46000002
    ctx->pc = 0x24fe98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24fe9c: 0x46001b00
    ctx->pc = 0x24fe9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x24fea0: 0x0
    ctx->pc = 0x24fea0u;
    // NOP
    // 0x24fea4: 0x0
    ctx->pc = 0x24fea4u;
    // NOP
    // 0x24fea8: 0x460c0004
    ctx->pc = 0x24fea8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x24feac: 0x46000032
    ctx->pc = 0x24feacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24feb0: 0x45010003
    ctx->pc = 0x24FEB0u;
    {
        const bool branch_taken_0x24feb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24feb0) {
            ctx->pc = 0x24FEC0u;
            goto label_24fec0;
        }
    }
    ctx->pc = 0x24FEB8u;
    // 0x24feb8: 0xc0ba284
    ctx->pc = 0x24FEB8u;
    SET_GPR_U32(ctx, 31, 0x24FEC0u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FEC0u; }
    }
    if (ctx->pc != 0x24FEC0u) { return; }
    ctx->pc = 0x24FEC0u;
label_24fec0:
    // 0x24fec0: 0x46140034
    ctx->pc = 0x24fec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fec4: 0x0
    ctx->pc = 0x24fec4u;
    // NOP
    // 0x24fec8: 0x45000003
    ctx->pc = 0x24FEC8u;
    {
        const bool branch_taken_0x24fec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24FECCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x24fec8) {
            ctx->pc = 0x24FED8u;
            goto label_24fed8;
        }
    }
    ctx->pc = 0x24FED0u;
    // 0x24fed0: 0x46000506
    ctx->pc = 0x24fed0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x24fed4: 0x200982d
    ctx->pc = 0x24fed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24fed8:
    // 0x24fed8: 0x8ea2cd90
    ctx->pc = 0x24fed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294954384)));
    // 0x24fedc: 0x222102a
    ctx->pc = 0x24fedcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x24fee0: 0x1440ffd7
    ctx->pc = 0x24FEE0u;
    {
        const bool branch_taken_0x24fee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24FEE4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 128));
        if (branch_taken_0x24fee0) {
            ctx->pc = 0x24FE40u;
            goto label_24fe40;
        }
    }
    ctx->pc = 0x24FEE8u;
label_24fee8:
    // 0x24fee8: 0x260102d
    ctx->pc = 0x24fee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24feec: 0xdfbf0070
    ctx->pc = 0x24feecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24fef0: 0xdfb50060
    ctx->pc = 0x24fef0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24fef4: 0xdfb40050
    ctx->pc = 0x24fef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24fef8: 0xdfb30040
    ctx->pc = 0x24fef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24fefc: 0xdfb20030
    ctx->pc = 0x24fefcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ff00: 0xdfb10020
    ctx->pc = 0x24ff00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ff04: 0xdfb00010
    ctx->pc = 0x24ff04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ff08: 0xc7b40080
    ctx->pc = 0x24ff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24ff0c: 0x3e00008
    ctx->pc = 0x24FF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FF10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24FE40u: goto label_24fe40;
            case 0x24FE60u: goto label_24fe60;
            case 0x24FEC0u: goto label_24fec0;
            case 0x24FED8u: goto label_24fed8;
            case 0x24FEE8u: goto label_24fee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24FF14u;
}
