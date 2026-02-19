#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartThrowMagicFX
// Address: 0x27ead0 - 0x27ec64
void StartThrowMagicFX_0x27ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ead0u;

    // 0x27ead0: 0x27bdff70
    ctx->pc = 0x27ead0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27ead4: 0xffbf0060
    ctx->pc = 0x27ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27ead8: 0xffb50050
    ctx->pc = 0x27ead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27eadc: 0xffb40040
    ctx->pc = 0x27eadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27eae0: 0xffb30030
    ctx->pc = 0x27eae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27eae4: 0xffb20020
    ctx->pc = 0x27eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27eae8: 0xffb10010
    ctx->pc = 0x27eae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27eaec: 0xffb00000
    ctx->pc = 0x27eaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27eaf0: 0xe7b70088
    ctx->pc = 0x27eaf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x27eaf4: 0xe7b60080
    ctx->pc = 0x27eaf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27eaf8: 0xe7b50078
    ctx->pc = 0x27eaf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27eafc: 0xe7b40070
    ctx->pc = 0x27eafcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27eb00: 0x80182d
    ctx->pc = 0x27eb00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb04: 0xa0a02d
    ctx->pc = 0x27eb04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb08: 0x46006586
    ctx->pc = 0x27eb08u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x27eb0c: 0x46006dc6
    ctx->pc = 0x27eb0cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x27eb10: 0x46007546
    ctx->pc = 0x27eb10u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x27eb14: 0xc0982d
    ctx->pc = 0x27eb14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb18: 0xe0a82d
    ctx->pc = 0x27eb18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb1c: 0x3c013d00
    ctx->pc = 0x27eb1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15616 << 16));
    // 0x27eb20: 0x44810000
    ctx->pc = 0x27eb20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27eb24: 0x4600ad02
    ctx->pc = 0x27eb24u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x27eb28: 0x3c013f80
    ctx->pc = 0x27eb28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27eb2c: 0x44810000
    ctx->pc = 0x27eb2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27eb30: 0x46140034
    ctx->pc = 0x27eb30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27eb34: 0x0
    ctx->pc = 0x27eb34u;
    // NOP
    // 0x27eb38: 0x45000002
    ctx->pc = 0x27EB38u;
    {
        const bool branch_taken_0x27eb38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EB3Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27eb38) {
            ctx->pc = 0x27EB44u;
            goto label_27eb44;
        }
    }
    ctx->pc = 0x27EB40u;
    // 0x27eb40: 0x46000506
    ctx->pc = 0x27eb40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27eb44:
    // 0x27eb44: 0x3270000f
    ctx->pc = 0x27eb44u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 19), 15));
    // 0x27eb48: 0x3c020034
    ctx->pc = 0x27eb48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27eb4c: 0x24420e28
    ctx->pc = 0x27eb4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3624));
    // 0x27eb50: 0x108080
    ctx->pc = 0x27eb50u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x27eb54: 0x2021021
    ctx->pc = 0x27eb54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27eb58: 0x8c440000
    ctx->pc = 0x27eb58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27eb5c: 0x60282d
    ctx->pc = 0x27eb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb60: 0x3c013f2a
    ctx->pc = 0x27eb60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
    // 0x27eb64: 0x3421c083
    ctx->pc = 0x27eb64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49283));
    // 0x27eb68: 0x44816000
    ctx->pc = 0x27eb68u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27eb6c: 0x3c060020
    ctx->pc = 0x27eb6cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32 << 16));
    // 0x27eb70: 0x34c6010e
    ctx->pc = 0x27eb70u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 270));
    // 0x27eb74: 0xc09f5fa
    ctx->pc = 0x27EB74u;
    SET_GPR_U32(ctx, 31, 0x27EB7Cu);
    ctx->pc = 0x27EB78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB7Cu; }
    }
    if (ctx->pc != 0x27EB7Cu) { return; }
    ctx->pc = 0x27EB7Cu;
    // 0x27eb7c: 0x40882d
    ctx->pc = 0x27eb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb80: 0x220202d
    ctx->pc = 0x27eb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb84: 0x280282d
    ctx->pc = 0x27eb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb88: 0x3c060034
    ctx->pc = 0x27eb88u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x27eb8c: 0x24c60ea0
    ctx->pc = 0x27eb8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3744));
    // 0x27eb90: 0x3c013f00
    ctx->pc = 0x27eb90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27eb94: 0x44816800
    ctx->pc = 0x27eb94u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x27eb98: 0xc09f794
    ctx->pc = 0x27EB98u;
    SET_GPR_U32(ctx, 31, 0x27EBA0u);
    ctx->pc = 0x27EB9Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x27DE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetPhysics_0x27de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EBA0u; }
    }
    if (ctx->pc != 0x27EBA0u) { return; }
    ctx->pc = 0x27EBA0u;
    // 0x27eba0: 0x3c020034
    ctx->pc = 0x27eba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27eba4: 0x24420e10
    ctx->pc = 0x27eba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3600));
    // 0x27eba8: 0x2021021
    ctx->pc = 0x27eba8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27ebac: 0x220202d
    ctx->pc = 0x27ebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebb0: 0x8c450000
    ctx->pc = 0x27ebb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ebb4: 0x240302d
    ctx->pc = 0x27ebb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebb8: 0xc09f768
    ctx->pc = 0x27EBB8u;
    SET_GPR_U32(ctx, 31, 0x27EBC0u);
    ctx->pc = 0x27EBBCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetHit_0x27dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EBC0u; }
    }
    if (ctx->pc != 0x27EBC0u) { return; }
    ctx->pc = 0x27EBC0u;
    // 0x27ebc0: 0x220202d
    ctx->pc = 0x27ebc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebc4: 0x4600bb06
    ctx->pc = 0x27ebc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x27ebc8: 0x260282d
    ctx->pc = 0x27ebc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebcc: 0x4600ab46
    ctx->pc = 0x27ebccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x27ebd0: 0x44807000
    ctx->pc = 0x27ebd0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x27ebd4: 0xc09f780
    ctx->pc = 0x27EBD4u;
    SET_GPR_U32(ctx, 31, 0x27EBDCu);
    ctx->pc = 0x27EBD8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x27DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetDamage_0x27de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EBDCu; }
    }
    if (ctx->pc != 0x27EBDCu) { return; }
    ctx->pc = 0x27EBDCu;
    // 0x27ebdc: 0x3c030034
    ctx->pc = 0x27ebdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27ebe0: 0x24630eb0
    ctx->pc = 0x27ebe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x27ebe4: 0x240200f0
    ctx->pc = 0x27ebe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27ebe8: 0x2221018
    ctx->pc = 0x27ebe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27ebec: 0x431021
    ctx->pc = 0x27ebecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ebf0: 0xe45400b0
    ctx->pc = 0x27ebf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x27ebf4: 0x3c013fc0
    ctx->pc = 0x27ebf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x27ebf8: 0x44816000
    ctx->pc = 0x27ebf8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27ebfc: 0x3c020034
    ctx->pc = 0x27ebfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27ec00: 0x244200d0
    ctx->pc = 0x27ec00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 208));
    // 0x27ec04: 0x2028021
    ctx->pc = 0x27ec04u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27ec08: 0x8e030000
    ctx->pc = 0x27ec08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27ec0c: 0x2402000c
    ctx->pc = 0x27ec0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x27ec10: 0x621818
    ctx->pc = 0x27ec10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27ec14: 0x3c050034
    ctx->pc = 0x27ec14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x27ec18: 0x24a50068
    ctx->pc = 0x27ec18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 104));
    // 0x27ec1c: 0x220202d
    ctx->pc = 0x27ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec20: 0x460cab02
    ctx->pc = 0x27ec20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x27ec24: 0xc09fdc2
    ctx->pc = 0x27EC24u;
    SET_GPR_U32(ctx, 31, 0x27EC2Cu);
    ctx->pc = 0x27EC28u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x27F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetLight_0x27f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EC2Cu; }
    }
    if (ctx->pc != 0x27EC2Cu) { return; }
    ctx->pc = 0x27EC2Cu;
    // 0x27ec2c: 0x220102d
    ctx->pc = 0x27ec2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec30: 0xdfbf0060
    ctx->pc = 0x27ec30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27ec34: 0xdfb50050
    ctx->pc = 0x27ec34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27ec38: 0xdfb40040
    ctx->pc = 0x27ec38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ec3c: 0xdfb30030
    ctx->pc = 0x27ec3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ec40: 0xdfb20020
    ctx->pc = 0x27ec40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ec44: 0xdfb10010
    ctx->pc = 0x27ec44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ec48: 0xdfb00000
    ctx->pc = 0x27ec48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ec4c: 0xc7b70088
    ctx->pc = 0x27ec4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27ec50: 0xc7b60080
    ctx->pc = 0x27ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27ec54: 0xc7b50078
    ctx->pc = 0x27ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27ec58: 0xc7b40070
    ctx->pc = 0x27ec58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ec5c: 0x3e00008
    ctx->pc = 0x27EC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EC60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27EB44u: goto label_27eb44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27EC64u;
}
