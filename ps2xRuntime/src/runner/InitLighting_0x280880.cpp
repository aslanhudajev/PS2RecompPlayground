#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitLighting
// Address: 0x280880 - 0x280944
void InitLighting_0x280880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280880u;

    // 0x280880: 0x27bdffe0
    ctx->pc = 0x280880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x280884: 0xffbf0010
    ctx->pc = 0x280884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x280888: 0xffb00000
    ctx->pc = 0x280888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28088c: 0xc0b172e
    ctx->pc = 0x28088Cu;
    SET_GPR_U32(ctx, 31, 0x280894u);
    ctx->pc = 0x280890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5CB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitLights_0x2c5cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280894u; }
    }
    if (ctx->pc != 0x280894u) { return; }
    ctx->pc = 0x280894u;
    // 0x280894: 0x1200000b
    ctx->pc = 0x280894u;
    {
        const bool branch_taken_0x280894 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x280898u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x280894) {
            ctx->pc = 0x2808C4u;
            goto label_2808c4;
        }
    }
    ctx->pc = 0x28089Cu;
    // 0x28089c: 0x3c020034
    ctx->pc = 0x28089cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2808a0: 0x8c45e7c8
    ctx->pc = 0x2808a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x2808a4: 0xc4a000ec
    ctx->pc = 0x2808a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2808a8: 0xe46096c0
    ctx->pc = 0x2808a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294940352), bits); }
    // 0x2808ac: 0x24a400f0
    ctx->pc = 0x2808acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 240));
    // 0x2808b0: 0xc4ac0108
    ctx->pc = 0x2808b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2808b4: 0xc0b16d8
    ctx->pc = 0x2808B4u;
    SET_GPR_U32(ctx, 31, 0x2808BCu);
    ctx->pc = 0x2808B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 252));
    ctx->pc = 0x2C5B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBAddLight_0x2c5b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808BCu; }
    }
    if (ctx->pc != 0x2808BCu) { return; }
    ctx->pc = 0x2808BCu;
    // 0x2808bc: 0x10000006
    ctx->pc = 0x2808BCu;
    {
        const bool branch_taken_0x2808bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2808C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x2808bc) {
            ctx->pc = 0x2808D8u;
            goto label_2808d8;
        }
    }
    ctx->pc = 0x2808C4u;
label_2808c4:
    // 0x2808c4: 0x3c020035
    ctx->pc = 0x2808c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2808c8: 0x3c013f80
    ctx->pc = 0x2808c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2808cc: 0x44810000
    ctx->pc = 0x2808ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2808d0: 0xe44096c0
    ctx->pc = 0x2808d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940352), bits); }
    // 0x2808d4: 0x3c020035
    ctx->pc = 0x2808d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2808d8:
    // 0x2808d8: 0x3c013f80
    ctx->pc = 0x2808d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2808dc: 0x44810000
    ctx->pc = 0x2808dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2808e0: 0xe44096bc
    ctx->pc = 0x2808e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940348), bits); }
    // 0x2808e4: 0x3c020035
    ctx->pc = 0x2808e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2808e8: 0xc44c96c0
    ctx->pc = 0x2808e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2808ec: 0xc0b1740
    ctx->pc = 0x2808ECu;
    SET_GPR_U32(ctx, 31, 0x2808F4u);
    ctx->pc = 0x2808F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetAmbient_0x2c5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808F4u; }
    }
    if (ctx->pc != 0x2808F4u) { return; }
    ctx->pc = 0x2808F4u;
    // 0x2808f4: 0xc0a01b6
    ctx->pc = 0x2808F4u;
    SET_GPR_U32(ctx, 31, 0x2808FCu);
    ctx->pc = 0x2808F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2806D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoLighting_0x2806d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2808FCu; }
    }
    if (ctx->pc != 0x2808FCu) { return; }
    ctx->pc = 0x2808FCu;
    // 0x2808fc: 0x3c020035
    ctx->pc = 0x2808fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x280900: 0x3c01bf00
    ctx->pc = 0x280900u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48896 << 16));
    // 0x280904: 0x44810000
    ctx->pc = 0x280904u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x280908: 0xe44096c4
    ctx->pc = 0x280908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940356), bits); }
    // 0x28090c: 0x3c020035
    ctx->pc = 0x28090cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x280910: 0xe44096cc
    ctx->pc = 0x280910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940364), bits); }
    // 0x280914: 0x3c020035
    ctx->pc = 0x280914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x280918: 0xac4096c8
    ctx->pc = 0x280918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940360), GPR_U32(ctx, 0));
    // 0x28091c: 0x3c02003c
    ctx->pc = 0x28091cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x280920: 0xac403aa8
    ctx->pc = 0x280920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15016), GPR_U32(ctx, 0));
    // 0x280924: 0x3c02003c
    ctx->pc = 0x280924u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x280928: 0xac403aac
    ctx->pc = 0x280928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15020), GPR_U32(ctx, 0));
    // 0x28092c: 0x3c02003c
    ctx->pc = 0x28092cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x280930: 0xac403ab0
    ctx->pc = 0x280930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15024), GPR_U32(ctx, 0));
    // 0x280934: 0xdfbf0010
    ctx->pc = 0x280934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280938: 0xdfb00000
    ctx->pc = 0x280938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28093c: 0x3e00008
    ctx->pc = 0x28093Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280940u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2808C4u: goto label_2808c4;
            case 0x2808D8u: goto label_2808d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280944u;
}
