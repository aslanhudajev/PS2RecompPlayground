#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartShieldFX
// Address: 0x27ed18 - 0x27eeb4
void StartShieldFX_0x27ed18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ed18u;

    // 0x27ed18: 0x27bdff90
    ctx->pc = 0x27ed18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27ed1c: 0xffbf0040
    ctx->pc = 0x27ed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27ed20: 0xffb30030
    ctx->pc = 0x27ed20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27ed24: 0xffb20020
    ctx->pc = 0x27ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27ed28: 0xffb10010
    ctx->pc = 0x27ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27ed2c: 0xffb00000
    ctx->pc = 0x27ed2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ed30: 0xe7b60060
    ctx->pc = 0x27ed30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27ed34: 0xe7b50058
    ctx->pc = 0x27ed34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27ed38: 0xe7b40050
    ctx->pc = 0x27ed38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27ed3c: 0x80382d
    ctx->pc = 0x27ed3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed40: 0x46006506
    ctx->pc = 0x27ed40u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27ed44: 0x46006d86
    ctx->pc = 0x27ed44u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x27ed48: 0xa0802d
    ctx->pc = 0x27ed48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed4c: 0xc0882d
    ctx->pc = 0x27ed4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed50: 0x3c013daa
    ctx->pc = 0x27ed50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15786 << 16));
    // 0x27ed54: 0x3421aaab
    ctx->pc = 0x27ed54u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43691));
    // 0x27ed58: 0x44810000
    ctx->pc = 0x27ed58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27ed5c: 0x4600b542
    ctx->pc = 0x27ed5cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x27ed60: 0x3213000f
    ctx->pc = 0x27ed60u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 16), 15));
    // 0x27ed64: 0x3c030034
    ctx->pc = 0x27ed64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27ed68: 0x24630e40
    ctx->pc = 0x27ed68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3648));
    // 0x27ed6c: 0x131080
    ctx->pc = 0x27ed6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x27ed70: 0x431021
    ctx->pc = 0x27ed70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ed74: 0x8c440000
    ctx->pc = 0x27ed74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ed78: 0xe0282d
    ctx->pc = 0x27ed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed7c: 0x302d
    ctx->pc = 0x27ed7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed80: 0x3c014040
    ctx->pc = 0x27ed80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x27ed84: 0x44816000
    ctx->pc = 0x27ed84u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27ed88: 0x2407013a
    ctx->pc = 0x27ed88u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 314));
    // 0x27ed8c: 0x402d
    ctx->pc = 0x27ed8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed90: 0x482d
    ctx->pc = 0x27ed90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed94: 0xc09f832
    ctx->pc = 0x27ED94u;
    SET_GPR_U32(ctx, 31, 0x27ED9Cu);
    ctx->pc = 0x27ED98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27E0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMissile_0x27e0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ED9Cu; }
    }
    if (ctx->pc != 0x27ED9Cu) { return; }
    ctx->pc = 0x27ED9Cu;
    // 0x27ed9c: 0x40902d
    ctx->pc = 0x27ed9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eda0: 0x240202d
    ctx->pc = 0x27eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eda4: 0x282d
    ctx->pc = 0x27eda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eda8: 0x302d
    ctx->pc = 0x27eda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edac: 0x44806000
    ctx->pc = 0x27edacu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27edb0: 0xc09f794
    ctx->pc = 0x27EDB0u;
    SET_GPR_U32(ctx, 31, 0x27EDB8u);
    ctx->pc = 0x27EDB4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x27DE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetPhysics_0x27de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDB8u; }
    }
    if (ctx->pc != 0x27EDB8u) { return; }
    ctx->pc = 0x27EDB8u;
    // 0x27edb8: 0x240202d
    ctx->pc = 0x27edb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edbc: 0x4600a306
    ctx->pc = 0x27edbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27edc0: 0x200282d
    ctx->pc = 0x27edc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edc4: 0x4600b346
    ctx->pc = 0x27edc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x27edc8: 0x44807000
    ctx->pc = 0x27edc8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x27edcc: 0xc09f780
    ctx->pc = 0x27EDCCu;
    SET_GPR_U32(ctx, 31, 0x27EDD4u);
    ctx->pc = 0x27EDD0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x27DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetDamage_0x27de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EDD4u; }
    }
    if (ctx->pc != 0x27EDD4u) { return; }
    ctx->pc = 0x27EDD4u;
    // 0x27edd4: 0x3c013ea8
    ctx->pc = 0x27edd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16040 << 16));
    // 0x27edd8: 0x3421f5c3
    ctx->pc = 0x27edd8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62915));
    // 0x27eddc: 0x44810000
    ctx->pc = 0x27eddcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27ede0: 0x4600a834
    ctx->pc = 0x27ede0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ede4: 0x0
    ctx->pc = 0x27ede4u;
    // NOP
    // 0x27ede8: 0x45010008
    ctx->pc = 0x27EDE8u;
    {
        const bool branch_taken_0x27ede8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EDECu;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x27ede8) {
            ctx->pc = 0x27EE0Cu;
            goto label_27ee0c;
        }
    }
    ctx->pc = 0x27EDF0u;
    // 0x27edf0: 0x3c013f80
    ctx->pc = 0x27edf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27edf4: 0x44810000
    ctx->pc = 0x27edf4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27edf8: 0x46150034
    ctx->pc = 0x27edf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27edfc: 0x0
    ctx->pc = 0x27edfcu;
    // NOP
    // 0x27ee00: 0x45000002
    ctx->pc = 0x27EE00u;
    {
        const bool branch_taken_0x27ee00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EE04u;
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x27ee00) {
            ctx->pc = 0x27EE0Cu;
            goto label_27ee0c;
        }
    }
    ctx->pc = 0x27EE08u;
    // 0x27ee08: 0x46000306
    ctx->pc = 0x27ee08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_27ee0c:
    // 0x27ee0c: 0x46006546
    ctx->pc = 0x27ee0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x27ee10: 0x240202d
    ctx->pc = 0x27ee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee14: 0x3c013f80
    ctx->pc = 0x27ee14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27ee18: 0x44816800
    ctx->pc = 0x27ee18u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x27ee1c: 0xc09f63e
    ctx->pc = 0x27EE1Cu;
    SET_GPR_U32(ctx, 31, 0x27EE24u);
    ctx->pc = 0x27EE20u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE24u; }
    }
    if (ctx->pc != 0x27EE24u) { return; }
    ctx->pc = 0x27EE24u;
    // 0x27ee24: 0x3c030034
    ctx->pc = 0x27ee24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27ee28: 0x24630eb0
    ctx->pc = 0x27ee28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x27ee2c: 0x240200f0
    ctx->pc = 0x27ee2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27ee30: 0x2421018
    ctx->pc = 0x27ee30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27ee34: 0x431021
    ctx->pc = 0x27ee34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ee38: 0x8c440014
    ctx->pc = 0x27ee38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x27ee3c: 0x3c050009
    ctx->pc = 0x27ee3cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)9 << 16));
    // 0x27ee40: 0x34a50800
    ctx->pc = 0x27ee40u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 2048));
    // 0x27ee44: 0xc0b41b8
    ctx->pc = 0x27EE44u;
    SET_GPR_U32(ctx, 31, 0x27EE4Cu);
    ctx->pc = 0x27EE48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE4Cu; }
    }
    if (ctx->pc != 0x27EE4Cu) { return; }
    ctx->pc = 0x27EE4Cu;
    // 0x27ee4c: 0x3c013fc0
    ctx->pc = 0x27ee4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x27ee50: 0x44816000
    ctx->pc = 0x27ee50u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27ee54: 0x3c030034
    ctx->pc = 0x27ee54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27ee58: 0x246300d0
    ctx->pc = 0x27ee58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 208));
    // 0x27ee5c: 0x131080
    ctx->pc = 0x27ee5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x27ee60: 0x431021
    ctx->pc = 0x27ee60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ee64: 0x8c430000
    ctx->pc = 0x27ee64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ee68: 0x2402000c
    ctx->pc = 0x27ee68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x27ee6c: 0x621818
    ctx->pc = 0x27ee6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27ee70: 0x3c050034
    ctx->pc = 0x27ee70u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x27ee74: 0x24a50068
    ctx->pc = 0x27ee74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 104));
    // 0x27ee78: 0x240202d
    ctx->pc = 0x27ee78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee7c: 0x460cb302
    ctx->pc = 0x27ee7cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x27ee80: 0xc09fdc2
    ctx->pc = 0x27EE80u;
    SET_GPR_U32(ctx, 31, 0x27EE88u);
    ctx->pc = 0x27EE84u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x27F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetLight_0x27f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EE88u; }
    }
    if (ctx->pc != 0x27EE88u) { return; }
    ctx->pc = 0x27EE88u;
    // 0x27ee88: 0x240102d
    ctx->pc = 0x27ee88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee8c: 0xdfbf0040
    ctx->pc = 0x27ee8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ee90: 0xdfb30030
    ctx->pc = 0x27ee90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ee94: 0xdfb20020
    ctx->pc = 0x27ee94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ee98: 0xdfb10010
    ctx->pc = 0x27ee98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee9c: 0xdfb00000
    ctx->pc = 0x27ee9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27eea0: 0xc7b60060
    ctx->pc = 0x27eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27eea4: 0xc7b50058
    ctx->pc = 0x27eea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27eea8: 0xc7b40050
    ctx->pc = 0x27eea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27eeac: 0x3e00008
    ctx->pc = 0x27EEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EEB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27EE0Cu: goto label_27ee0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27EEB4u;
}
