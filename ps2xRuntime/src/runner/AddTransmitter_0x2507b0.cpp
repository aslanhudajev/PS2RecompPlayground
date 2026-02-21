#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddTransmitter
// Address: 0x2507b0 - 0x2508a0
void AddTransmitter_0x2507b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2507b0u;

    // 0x2507b0: 0x27bdffc0
    ctx->pc = 0x2507b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2507b4: 0xffbf0030
    ctx->pc = 0x2507b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2507b8: 0xffb20020
    ctx->pc = 0x2507b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2507bc: 0xffb10010
    ctx->pc = 0x2507bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2507c0: 0xffb00000
    ctx->pc = 0x2507c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2507c4: 0x80882d
    ctx->pc = 0x2507c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507c8: 0x3c030034
    ctx->pc = 0x2507c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2507cc: 0x8c628b70
    ctx->pc = 0x2507ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294937456)));
    // 0x2507d0: 0x24420001
    ctx->pc = 0x2507d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2507d4: 0xac628b70
    ctx->pc = 0x2507d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937456), GPR_U32(ctx, 2));
    // 0x2507d8: 0x28420101
    ctx->pc = 0x2507d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 257));
    // 0x2507dc: 0x14400005
    ctx->pc = 0x2507DCu;
    {
        const bool branch_taken_0x2507dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2507E0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2507dc) {
            ctx->pc = 0x2507F4u;
            goto label_2507f4;
        }
    }
    ctx->pc = 0x2507E4u;
    // 0x2507e4: 0x3c04003b
    ctx->pc = 0x2507e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2507e8: 0x24848580
    ctx->pc = 0x2507e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935936));
    // 0x2507ec: 0xc0b49a6
    ctx->pc = 0x2507ECu;
    SET_GPR_U32(ctx, 31, 0x2507F4u);
    ctx->pc = 0x2507F0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2507F4u; }
    }
    if (ctx->pc != 0x2507F4u) { return; }
    ctx->pc = 0x2507F4u;
label_2507f4:
    // 0x2507f4: 0x3c020034
    ctx->pc = 0x2507f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2507f8: 0x8c438b70
    ctx->pc = 0x2507f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x2507fc: 0x31980
    ctx->pc = 0x2507fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x250800: 0x3c020033
    ctx->pc = 0x250800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x250804: 0x24424b30
    ctx->pc = 0x250804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19248));
    // 0x250808: 0x628021
    ctx->pc = 0x250808u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25080c: 0xc6200004
    ctx->pc = 0x25080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250810: 0xe6000010
    ctx->pc = 0x250810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x250814: 0xc6200008
    ctx->pc = 0x250814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250818: 0xe6000014
    ctx->pc = 0x250818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x25081c: 0xc620000c
    ctx->pc = 0x25081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250820: 0xe6000018
    ctx->pc = 0x250820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x250824: 0xc6210010
    ctx->pc = 0x250824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250828: 0xe6010020
    ctx->pc = 0x250828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x25082c: 0xc6200014
    ctx->pc = 0x25082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250830: 0xe6000024
    ctx->pc = 0x250830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x250834: 0xc6200018
    ctx->pc = 0x250834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250838: 0x24020001
    ctx->pc = 0x250838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25083c: 0x16420004
    ctx->pc = 0x25083Cu;
    {
        const bool branch_taken_0x25083c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x250840u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        if (branch_taken_0x25083c) {
            ctx->pc = 0x250850u;
            goto label_250850;
        }
    }
    ctx->pc = 0x250844u;
    // 0x250844: 0x46000807
    ctx->pc = 0x250844u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x250848: 0x10000009
    ctx->pc = 0x250848u;
    {
        const bool branch_taken_0x250848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25084Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        if (branch_taken_0x250848) {
            ctx->pc = 0x250870u;
            goto label_250870;
        }
    }
    ctx->pc = 0x250850u;
label_250850:
    // 0x250850: 0xc60c0024
    ctx->pc = 0x250850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x250854: 0x3c014049
    ctx->pc = 0x250854u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x250858: 0x34210fdb
    ctx->pc = 0x250858u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x25085c: 0x44810000
    ctx->pc = 0x25085cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x250860: 0x46006300
    ctx->pc = 0x250860u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x250864: 0xc0b5a1a
    ctx->pc = 0x250864u;
    SET_GPR_U32(ctx, 31, 0x25086Cu);
    ctx->pc = 0x250868u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25086Cu; }
    }
    if (ctx->pc != 0x25086Cu) { return; }
    ctx->pc = 0x25086Cu;
    // 0x25086c: 0xe6000024
    ctx->pc = 0x25086cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_250870:
    // 0x250870: 0x24020001
    ctx->pc = 0x250870u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x250874: 0xa6020002
    ctx->pc = 0x250874u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x250878: 0xa2120000
    ctx->pc = 0x250878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x25087c: 0x92220001
    ctx->pc = 0x25087cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x250880: 0xa2020001
    ctx->pc = 0x250880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x250884: 0x200102d
    ctx->pc = 0x250884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250888: 0xdfbf0030
    ctx->pc = 0x250888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25088c: 0xdfb20020
    ctx->pc = 0x25088cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250890: 0xdfb10010
    ctx->pc = 0x250890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250894: 0xdfb00000
    ctx->pc = 0x250894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250898: 0x3e00008
    ctx->pc = 0x250898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25089Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2507F4u: goto label_2507f4;
            case 0x250850u: goto label_250850;
            case 0x250870u: goto label_250870;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2508A0u;
}
