#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SkorneSpewItems
// Address: 0x29f0e8 - 0x29f1f8
void SkorneSpewItems_0x29f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29f0e8u;

    // 0x29f0e8: 0x27bdff50
    ctx->pc = 0x29f0e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29f0ec: 0xffbf0090
    ctx->pc = 0x29f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29f0f0: 0xffb70080
    ctx->pc = 0x29f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x29f0f4: 0xffb60070
    ctx->pc = 0x29f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x29f0f8: 0xffb50060
    ctx->pc = 0x29f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x29f0fc: 0xffb40050
    ctx->pc = 0x29f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29f100: 0xffb30040
    ctx->pc = 0x29f100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29f104: 0xffb20030
    ctx->pc = 0x29f104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29f108: 0xffb10020
    ctx->pc = 0x29f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29f10c: 0xffb00010
    ctx->pc = 0x29f10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29f110: 0xe7b500a8
    ctx->pc = 0x29f110u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x29f114: 0xe7b400a0
    ctx->pc = 0x29f114u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x29f118: 0x80902d
    ctx->pc = 0x29f118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f11c: 0xa0882d
    ctx->pc = 0x29f11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f120: 0x460c6540
    ctx->pc = 0x29f120u;
    ctx->f[21] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x29f124: 0x3c013e80
    ctx->pc = 0x29f124u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x29f128: 0x44810000
    ctx->pc = 0x29f128u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f12c: 0x4600ad42
    ctx->pc = 0x29f12cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29f130: 0x46006507
    ctx->pc = 0x29f130u;
    ctx->f[20] = FPU_NEG_S(ctx->f[12]);
    // 0x29f134: 0x3c013f00
    ctx->pc = 0x29f134u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29f138: 0x44810000
    ctx->pc = 0x29f138u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f13c: 0x4600a802
    ctx->pc = 0x29f13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x29f140: 0x4600a500
    ctx->pc = 0x29f140u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x29f144: 0x802d
    ctx->pc = 0x29f144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f148: 0x2417001c
    ctx->pc = 0x29f148u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 28));
    // 0x29f14c: 0x3c020036
    ctx->pc = 0x29f14cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29f150: 0x2456d8c0
    ctx->pc = 0x29f150u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x29f154: 0x3c020036
    ctx->pc = 0x29f154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29f158: 0x2455d8d0
    ctx->pc = 0x29f158u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294957264));
    // 0x29f15c: 0x3c020036
    ctx->pc = 0x29f15cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29f160: 0x2454d8d4
    ctx->pc = 0x29f160u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294957268));
    // 0x29f164: 0x3c020036
    ctx->pc = 0x29f164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29f168: 0x2453d8d8
    ctx->pc = 0x29f168u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294957272));
    // 0x29f16c: 0x0
    ctx->pc = 0x29f16cu;
    // NOP
label_29f170:
    // 0x29f170: 0x220202d
    ctx->pc = 0x29f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f174: 0x3a0282d
    ctx->pc = 0x29f174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f178: 0xc0b57e6
    ctx->pc = 0x29F178u;
    SET_GPR_U32(ctx, 31, 0x29F180u);
    ctx->pc = 0x29F17Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F180u; }
    }
    if (ctx->pc != 0x29F180u) { return; }
    ctx->pc = 0x29F180u;
    // 0x29f180: 0x2173018
    ctx->pc = 0x29f180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29f184: 0xd51021
    ctx->pc = 0x29f184u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x29f188: 0xd41821
    ctx->pc = 0x29f188u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x29f18c: 0xd34821
    ctx->pc = 0x29f18cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x29f190: 0x24040001
    ctx->pc = 0x29f190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f194: 0x24050009
    ctx->pc = 0x29f194u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x29f198: 0xd63021
    ctx->pc = 0x29f198u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x29f19c: 0x8c470000
    ctx->pc = 0x29f19cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29f1a0: 0x8c680000
    ctx->pc = 0x29f1a0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f1a4: 0xc52c0000
    ctx->pc = 0x29f1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f1a8: 0x240482d
    ctx->pc = 0x29f1a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1ac: 0xc0a7a28
    ctx->pc = 0x29F1ACu;
    SET_GPR_U32(ctx, 31, 0x29F1B4u);
    ctx->pc = 0x29F1B0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29E8A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartSpewItem_0x29e8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F1B4u; }
    }
    if (ctx->pc != 0x29F1B4u) { return; }
    ctx->pc = 0x29F1B4u;
    // 0x29f1b4: 0x26100001
    ctx->pc = 0x29f1b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x29f1b8: 0x2a020004
    ctx->pc = 0x29f1b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x29f1bc: 0x1440ffec
    ctx->pc = 0x29F1BCu;
    {
        const bool branch_taken_0x29f1bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29F1C0u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        if (branch_taken_0x29f1bc) {
            ctx->pc = 0x29F170u;
            goto label_29f170;
        }
    }
    ctx->pc = 0x29F1C4u;
    // 0x29f1c4: 0xdfbf0090
    ctx->pc = 0x29f1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29f1c8: 0xdfb70080
    ctx->pc = 0x29f1c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29f1cc: 0xdfb60070
    ctx->pc = 0x29f1ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29f1d0: 0xdfb50060
    ctx->pc = 0x29f1d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29f1d4: 0xdfb40050
    ctx->pc = 0x29f1d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29f1d8: 0xdfb30040
    ctx->pc = 0x29f1d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29f1dc: 0xdfb20030
    ctx->pc = 0x29f1dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29f1e0: 0xdfb10020
    ctx->pc = 0x29f1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f1e4: 0xdfb00010
    ctx->pc = 0x29f1e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f1e8: 0xc7b500a8
    ctx->pc = 0x29f1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29f1ec: 0xc7b400a0
    ctx->pc = 0x29f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29f1f0: 0x3e00008
    ctx->pc = 0x29F1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F1F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29F170u: goto label_29f170;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29F1F8u;
}
