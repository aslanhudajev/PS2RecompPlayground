#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcAnimation
// Address: 0x20fbb8 - 0x20fce4
void CalcAnimation_0x20fbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20fbb8u;

    // 0x20fbb8: 0x27bdff60
    ctx->pc = 0x20fbb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20fbbc: 0xffbf0080
    ctx->pc = 0x20fbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x20fbc0: 0xffb70070
    ctx->pc = 0x20fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x20fbc4: 0xffb60060
    ctx->pc = 0x20fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x20fbc8: 0xffb50050
    ctx->pc = 0x20fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20fbcc: 0xffb40040
    ctx->pc = 0x20fbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20fbd0: 0xffb30030
    ctx->pc = 0x20fbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20fbd4: 0xffb20020
    ctx->pc = 0x20fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20fbd8: 0xffb10010
    ctx->pc = 0x20fbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20fbdc: 0xffb00000
    ctx->pc = 0x20fbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20fbe0: 0xe7b40090
    ctx->pc = 0x20fbe0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x20fbe4: 0xe0882d
    ctx->pc = 0x20fbe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbe8: 0xc6340014
    ctx->pc = 0x20fbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20fbec: 0xa0802d
    ctx->pc = 0x20fbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbf0: 0x24940030
    ctx->pc = 0x20fbf0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 4), 48));
    // 0x20fbf4: 0x26120010
    ctx->pc = 0x20fbf4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 16));
    // 0x20fbf8: 0x24960060
    ctx->pc = 0x20fbf8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 4), 96));
    // 0x20fbfc: 0x26130020
    ctx->pc = 0x20fbfcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 32));
    // 0x20fc00: 0x24970090
    ctx->pc = 0x20fc00u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 4), 144));
    // 0x20fc04: 0x100382d
    ctx->pc = 0x20fc04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc08: 0x120402d
    ctx->pc = 0x20fc08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc0c: 0xc62c0018
    ctx->pc = 0x20fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20fc10: 0xc083a80
    ctx->pc = 0x20FC10u;
    SET_GPR_U32(ctx, 31, 0x20FC18u);
    ctx->pc = 0x20FC14u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x20EA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAnimAngXYZVal_0x20ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC18u; }
    }
    if (ctx->pc != 0x20FC18u) { return; }
    ctx->pc = 0x20FC18u;
    // 0x20fc18: 0x40a82d
    ctx->pc = 0x20fc18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc1c: 0x12a00025
    ctx->pc = 0x20FC1Cu;
    {
        const bool branch_taken_0x20fc1c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FC20u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20fc1c) {
            ctx->pc = 0x20FCB4u;
            goto label_20fcb4;
        }
    }
    ctx->pc = 0x20FC24u;
    // 0x20fc24: 0x44800000
    ctx->pc = 0x20fc24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x20fc28: 0x4600a032
    ctx->pc = 0x20fc28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20fc2c: 0x0
    ctx->pc = 0x20fc2cu;
    // NOP
    // 0x20fc30: 0x45030011
    ctx->pc = 0x20FC30u;
    {
        const bool branch_taken_0x20fc30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20fc30) {
            ctx->pc = 0x20FC34u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
            ctx->pc = 0x20FC78u;
            goto label_20fc78;
        }
    }
    ctx->pc = 0x20FC38u;
    // 0x20fc38: 0x4600a306
    ctx->pc = 0x20fc38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20fc3c: 0x280202d
    ctx->pc = 0x20fc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc40: 0x200282d
    ctx->pc = 0x20fc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc44: 0xc083e52
    ctx->pc = 0x20FC44u;
    SET_GPR_U32(ctx, 31, 0x20FC4Cu);
    ctx->pc = 0x20FC48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20F948u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterpPYR_0x20f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC4Cu; }
    }
    if (ctx->pc != 0x20FC4Cu) { return; }
    ctx->pc = 0x20FC4Cu;
    // 0x20fc4c: 0x4600a306
    ctx->pc = 0x20fc4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20fc50: 0x2c0202d
    ctx->pc = 0x20fc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc54: 0x240282d
    ctx->pc = 0x20fc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc58: 0xc083e7e
    ctx->pc = 0x20FC58u;
    SET_GPR_U32(ctx, 31, 0x20FC60u);
    ctx->pc = 0x20FC5Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20F9F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterpXYZ_0x20f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC60u; }
    }
    if (ctx->pc != 0x20FC60u) { return; }
    ctx->pc = 0x20FC60u;
    // 0x20fc60: 0x4600a306
    ctx->pc = 0x20fc60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20fc64: 0x2e0202d
    ctx->pc = 0x20fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc68: 0x260282d
    ctx->pc = 0x20fc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc6c: 0xc083e7e
    ctx->pc = 0x20FC6Cu;
    SET_GPR_U32(ctx, 31, 0x20FC74u);
    ctx->pc = 0x20FC70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20F9F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterpXYZ_0x20f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC74u; }
    }
    if (ctx->pc != 0x20FC74u) { return; }
    ctx->pc = 0x20FC74u;
    // 0x20fc74: 0x92220013
    ctx->pc = 0x20fc74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
label_20fc78:
    // 0x20fc78: 0x30420001
    ctx->pc = 0x20fc78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20fc7c: 0x1040000d
    ctx->pc = 0x20FC7Cu;
    {
        const bool branch_taken_0x20fc7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FC80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20fc7c) {
            ctx->pc = 0x20FCB4u;
            goto label_20fcb4;
        }
    }
    ctx->pc = 0x20FC84u;
    // 0x20fc84: 0xc6000004
    ctx->pc = 0x20fc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fc88: 0x46000007
    ctx->pc = 0x20fc88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20fc8c: 0xe6000004
    ctx->pc = 0x20fc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20fc90: 0xc6000008
    ctx->pc = 0x20fc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fc94: 0x46000007
    ctx->pc = 0x20fc94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20fc98: 0xe6000008
    ctx->pc = 0x20fc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x20fc9c: 0xc6400000
    ctx->pc = 0x20fc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fca0: 0x46000007
    ctx->pc = 0x20fca0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20fca4: 0xe6400000
    ctx->pc = 0x20fca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x20fca8: 0xc6600000
    ctx->pc = 0x20fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fcac: 0x46000007
    ctx->pc = 0x20fcacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20fcb0: 0xe6600000
    ctx->pc = 0x20fcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_20fcb4:
    // 0x20fcb4: 0xdfbf0080
    ctx->pc = 0x20fcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20fcb8: 0xdfb70070
    ctx->pc = 0x20fcb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20fcbc: 0xdfb60060
    ctx->pc = 0x20fcbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20fcc0: 0xdfb50050
    ctx->pc = 0x20fcc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20fcc4: 0xdfb40040
    ctx->pc = 0x20fcc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20fcc8: 0xdfb30030
    ctx->pc = 0x20fcc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fccc: 0xdfb20020
    ctx->pc = 0x20fcccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fcd0: 0xdfb10010
    ctx->pc = 0x20fcd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fcd4: 0xdfb00000
    ctx->pc = 0x20fcd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fcd8: 0xc7b40090
    ctx->pc = 0x20fcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20fcdc: 0x3e00008
    ctx->pc = 0x20FCDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FCE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FC78u: goto label_20fc78;
            case 0x20FCB4u: goto label_20fcb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20FCE4u;
}
