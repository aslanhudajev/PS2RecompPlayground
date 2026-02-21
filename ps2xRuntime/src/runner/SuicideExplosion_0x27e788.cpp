#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SuicideExplosion
// Address: 0x27e788 - 0x27e99c
void SuicideExplosion_0x27e788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e788u;

    // 0x27e788: 0x27bdffc0
    ctx->pc = 0x27e788u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27e78c: 0xffbf0020
    ctx->pc = 0x27e78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27e790: 0xffb10010
    ctx->pc = 0x27e790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27e794: 0xffb00000
    ctx->pc = 0x27e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27e798: 0xe7b50038
    ctx->pc = 0x27e798u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27e79c: 0xe7b40030
    ctx->pc = 0x27e79cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27e7a0: 0x80882d
    ctx->pc = 0x27e7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7a4: 0x3c014120
    ctx->pc = 0x27e7a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x27e7a8: 0x4481a800
    ctx->pc = 0x27e7a8u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x27e7ac: 0x3c020034
    ctx->pc = 0x27e7acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27e7b0: 0x8c43e7f0
    ctx->pc = 0x27e7b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x27e7b4: 0x2402000b
    ctx->pc = 0x27e7b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x27e7b8: 0x10620004
    ctx->pc = 0x27E7B8u;
    {
        const bool branch_taken_0x27e7b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x27E7BCu;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x27e7b8) {
            ctx->pc = 0x27E7CCu;
            goto label_27e7cc;
        }
    }
    ctx->pc = 0x27E7C0u;
    // 0x27e7c0: 0x24020007
    ctx->pc = 0x27e7c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x27e7c4: 0x5462002d
    ctx->pc = 0x27E7C4u;
    {
        const bool branch_taken_0x27e7c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x27e7c4) {
            ctx->pc = 0x27E7C8u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
            ctx->pc = 0x27E87Cu;
            goto label_27e87c;
        }
    }
    ctx->pc = 0x27E7CCu;
label_27e7cc:
    // 0x27e7cc: 0x24040019
    ctx->pc = 0x27e7ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
    // 0x27e7d0: 0x220282d
    ctx->pc = 0x27e7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7d4: 0x302d
    ctx->pc = 0x27e7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7d8: 0x44806000
    ctx->pc = 0x27e7d8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27e7dc: 0x2407002b
    ctx->pc = 0x27e7dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 43));
    // 0x27e7e0: 0x402d
    ctx->pc = 0x27e7e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7e4: 0x24090004
    ctx->pc = 0x27e7e4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4));
    // 0x27e7e8: 0xc09f832
    ctx->pc = 0x27E7E8u;
    SET_GPR_U32(ctx, 31, 0x27E7F0u);
    ctx->pc = 0x27E7ECu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27E0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMissile_0x27e0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E7F0u; }
    }
    if (ctx->pc != 0x27E7F0u) { return; }
    ctx->pc = 0x27E7F0u;
    // 0x27e7f0: 0x40802d
    ctx->pc = 0x27e7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7f4: 0x200202d
    ctx->pc = 0x27e7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e7f8: 0x4600a306
    ctx->pc = 0x27e7f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27e7fc: 0x24050800
    ctx->pc = 0x27e7fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x27e800: 0x3c0140f0
    ctx->pc = 0x27e800u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16624 << 16));
    // 0x27e804: 0x44816800
    ctx->pc = 0x27e804u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x27e808: 0x44807000
    ctx->pc = 0x27e808u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x27e80c: 0xc09f780
    ctx->pc = 0x27E80Cu;
    SET_GPR_U32(ctx, 31, 0x27E814u);
    ctx->pc = 0x27E810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetDamage_0x27de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E814u; }
    }
    if (ctx->pc != 0x27E814u) { return; }
    ctx->pc = 0x27E814u;
    // 0x27e814: 0x3c030034
    ctx->pc = 0x27e814u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27e818: 0x24630eb0
    ctx->pc = 0x27e818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x27e81c: 0x240200f0
    ctx->pc = 0x27e81cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27e820: 0x2021018
    ctx->pc = 0x27e820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27e824: 0x431021
    ctx->pc = 0x27e824u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e828: 0x8c420014
    ctx->pc = 0x27e828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x27e82c: 0xc4400034
    ctx->pc = 0x27e82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e830: 0x3c01bf80
    ctx->pc = 0x27e830u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x27e834: 0x44810800
    ctx->pc = 0x27e834u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27e838: 0x46010000
    ctx->pc = 0x27e838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27e83c: 0xe4400034
    ctx->pc = 0x27e83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x27e840: 0x200202d
    ctx->pc = 0x27e840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e844: 0x2405001a
    ctx->pc = 0x27e844u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 26));
    // 0x27e848: 0x3c014000
    ctx->pc = 0x27e848u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x27e84c: 0x44816000
    ctx->pc = 0x27e84cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27e850: 0xc09f802
    ctx->pc = 0x27E850u;
    SET_GPR_U32(ctx, 31, 0x27E858u);
    ctx->pc = 0x27E854u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 27));
    ctx->pc = 0x27E008u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMorph_0x27e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E858u; }
    }
    if (ctx->pc != 0x27E858u) { return; }
    ctx->pc = 0x27E858u;
    // 0x27e858: 0x200202d
    ctx->pc = 0x27e858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e85c: 0x3c014020
    ctx->pc = 0x27e85cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16416 << 16));
    // 0x27e860: 0x44816000
    ctx->pc = 0x27e860u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27e864: 0x3c013f80
    ctx->pc = 0x27e864u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27e868: 0x44816800
    ctx->pc = 0x27e868u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x27e86c: 0xc09f63e
    ctx->pc = 0x27E86Cu;
    SET_GPR_U32(ctx, 31, 0x27E874u);
    ctx->pc = 0x27E870u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E874u; }
    }
    if (ctx->pc != 0x27E874u) { return; }
    ctx->pc = 0x27E874u;
    // 0x27e874: 0x10000035
    ctx->pc = 0x27E874u;
    {
        const bool branch_taken_0x27e874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27E878u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x27e874) {
            ctx->pc = 0x27E94Cu;
            goto label_27e94c;
        }
    }
    ctx->pc = 0x27E87Cu;
label_27e87c:
    // 0x27e87c: 0x220282d
    ctx->pc = 0x27e87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e880: 0x44806000
    ctx->pc = 0x27e880u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27e884: 0x24060029
    ctx->pc = 0x27e884u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 41));
    // 0x27e888: 0xc09f5fa
    ctx->pc = 0x27E888u;
    SET_GPR_U32(ctx, 31, 0x27E890u);
    ctx->pc = 0x27E88Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E890u; }
    }
    if (ctx->pc != 0x27E890u) { return; }
    ctx->pc = 0x27E890u;
    // 0x27e890: 0x40802d
    ctx->pc = 0x27e890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e894: 0x6010003
    ctx->pc = 0x27E894u;
    {
        const bool branch_taken_0x27e894 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x27E898u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27e894) {
            ctx->pc = 0x27E8A4u;
            goto label_27e8a4;
        }
    }
    ctx->pc = 0x27E89Cu;
    // 0x27e89c: 0x10000038
    ctx->pc = 0x27E89Cu;
    {
        const bool branch_taken_0x27e89c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27E8A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27e89c) {
            ctx->pc = 0x27E980u;
            goto label_27e980;
        }
    }
    ctx->pc = 0x27E8A4u;
label_27e8a4:
    // 0x27e8a4: 0x24630eb0
    ctx->pc = 0x27e8a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x27e8a8: 0x240200f0
    ctx->pc = 0x27e8a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27e8ac: 0x2021018
    ctx->pc = 0x27e8acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27e8b0: 0x431021
    ctx->pc = 0x27e8b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e8b4: 0x24030004
    ctx->pc = 0x27e8b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x27e8b8: 0xac4300cc
    ctx->pc = 0x27e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 3));
    // 0x27e8bc: 0x200202d
    ctx->pc = 0x27e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e8c0: 0x4600a306
    ctx->pc = 0x27e8c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27e8c4: 0x24050421
    ctx->pc = 0x27e8c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1057));
    // 0x27e8c8: 0x3c0140c0
    ctx->pc = 0x27e8c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
    // 0x27e8cc: 0x44816800
    ctx->pc = 0x27e8ccu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x27e8d0: 0x44807000
    ctx->pc = 0x27e8d0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x27e8d4: 0xc09f780
    ctx->pc = 0x27E8D4u;
    SET_GPR_U32(ctx, 31, 0x27E8DCu);
    ctx->pc = 0x27E8D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetDamage_0x27de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E8DCu; }
    }
    if (ctx->pc != 0x27E8DCu) { return; }
    ctx->pc = 0x27E8DCu;
    // 0x27e8dc: 0x200202d
    ctx->pc = 0x27e8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e8e0: 0x3c013f80
    ctx->pc = 0x27e8e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27e8e4: 0x44816000
    ctx->pc = 0x27e8e4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27e8e8: 0x46006346
    ctx->pc = 0x27e8e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x27e8ec: 0xc09f63e
    ctx->pc = 0x27E8ECu;
    SET_GPR_U32(ctx, 31, 0x27E8F4u);
    ctx->pc = 0x27E8F0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E8F4u; }
    }
    if (ctx->pc != 0x27E8F4u) { return; }
    ctx->pc = 0x27E8F4u;
    // 0x27e8f4: 0x2404001c
    ctx->pc = 0x27e8f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    // 0x27e8f8: 0x220282d
    ctx->pc = 0x27e8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e8fc: 0x302d
    ctx->pc = 0x27e8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e900: 0x44806000
    ctx->pc = 0x27e900u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27e904: 0x382d
    ctx->pc = 0x27e904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e908: 0x402d
    ctx->pc = 0x27e908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e90c: 0x482d
    ctx->pc = 0x27e90cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e910: 0xc09f832
    ctx->pc = 0x27E910u;
    SET_GPR_U32(ctx, 31, 0x27E918u);
    ctx->pc = 0x27E914u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27E0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMissile_0x27e0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E918u; }
    }
    if (ctx->pc != 0x27E918u) { return; }
    ctx->pc = 0x27E918u;
    // 0x27e918: 0x40202d
    ctx->pc = 0x27e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e91c: 0x3c013f99
    ctx->pc = 0x27e91cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16281 << 16));
    // 0x27e920: 0x3421999a
    ctx->pc = 0x27e920u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x27e924: 0x44816000
    ctx->pc = 0x27e924u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27e928: 0x46006346
    ctx->pc = 0x27e928u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x27e92c: 0xc09f63e
    ctx->pc = 0x27E92Cu;
    SET_GPR_U32(ctx, 31, 0x27E934u);
    ctx->pc = 0x27E930u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E934u; }
    }
    if (ctx->pc != 0x27E934u) { return; }
    ctx->pc = 0x27E934u;
    // 0x27e934: 0x200202d
    ctx->pc = 0x27e934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e938: 0x4615ab00
    ctx->pc = 0x27e938u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x27e93c: 0x3c050034
    ctx->pc = 0x27e93cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x27e940: 0xc09fdc2
    ctx->pc = 0x27E940u;
    SET_GPR_U32(ctx, 31, 0x27E948u);
    ctx->pc = 0x27E944u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 104));
    ctx->pc = 0x27F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetLight_0x27f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E948u; }
    }
    if (ctx->pc != 0x27E948u) { return; }
    ctx->pc = 0x27E948u;
    // 0x27e948: 0x24040050
    ctx->pc = 0x27e948u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
label_27e94c:
    // 0x27e94c: 0x220282d
    ctx->pc = 0x27e94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e950: 0x302d
    ctx->pc = 0x27e950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e954: 0x44806000
    ctx->pc = 0x27e954u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27e958: 0x382d
    ctx->pc = 0x27e958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e95c: 0x402d
    ctx->pc = 0x27e95cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e960: 0x482d
    ctx->pc = 0x27e960u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e964: 0xc09f832
    ctx->pc = 0x27E964u;
    SET_GPR_U32(ctx, 31, 0x27E96Cu);
    ctx->pc = 0x27E968u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27E0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMissile_0x27e0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E96Cu; }
    }
    if (ctx->pc != 0x27E96Cu) { return; }
    ctx->pc = 0x27E96Cu;
    // 0x27e96c: 0x3c013f00
    ctx->pc = 0x27e96cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27e970: 0x44816000
    ctx->pc = 0x27e970u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27e974: 0xc09f810
    ctx->pc = 0x27E974u;
    SET_GPR_U32(ctx, 31, 0x27E97Cu);
    ctx->pc = 0x27E978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27E040u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetFade_0x27e040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E97Cu; }
    }
    if (ctx->pc != 0x27E97Cu) { return; }
    ctx->pc = 0x27E97Cu;
    // 0x27e97c: 0x200102d
    ctx->pc = 0x27e97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e980:
    // 0x27e980: 0xdfbf0020
    ctx->pc = 0x27e980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e984: 0xdfb10010
    ctx->pc = 0x27e984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e988: 0xdfb00000
    ctx->pc = 0x27e988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e98c: 0xc7b50038
    ctx->pc = 0x27e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27e990: 0xc7b40030
    ctx->pc = 0x27e990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e994: 0x3e00008
    ctx->pc = 0x27E994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E998u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E7CCu: goto label_27e7cc;
            case 0x27E87Cu: goto label_27e87c;
            case 0x27E8A4u: goto label_27e8a4;
            case 0x27E94Cu: goto label_27e94c;
            case 0x27E980u: goto label_27e980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27E99Cu;
}
