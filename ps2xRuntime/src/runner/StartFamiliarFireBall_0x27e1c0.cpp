#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartFamiliarFireBall
// Address: 0x27e1c0 - 0x27e324
void StartFamiliarFireBall_0x27e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e1c0u;

    // 0x27e1c0: 0x27bdff80
    ctx->pc = 0x27e1c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27e1c4: 0xffbf0050
    ctx->pc = 0x27e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27e1c8: 0xffb30040
    ctx->pc = 0x27e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27e1cc: 0xffb20030
    ctx->pc = 0x27e1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27e1d0: 0xffb10020
    ctx->pc = 0x27e1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27e1d4: 0xffb00010
    ctx->pc = 0x27e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27e1d8: 0xe7b60070
    ctx->pc = 0x27e1d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27e1dc: 0xe7b50068
    ctx->pc = 0x27e1dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27e1e0: 0xe7b40060
    ctx->pc = 0x27e1e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27e1e4: 0x80902d
    ctx->pc = 0x27e1e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1e8: 0xa0982d
    ctx->pc = 0x27e1e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1ec: 0xe0802d
    ctx->pc = 0x27e1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1f0: 0x46006506
    ctx->pc = 0x27e1f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27e1f4: 0x46006d86
    ctx->pc = 0x27e1f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x27e1f8: 0x46007546
    ctx->pc = 0x27e1f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x27e1fc: 0x3c030035
    ctx->pc = 0x27e1fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x27e200: 0x2463f748
    ctx->pc = 0x27e200u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965064));
    // 0x27e204: 0x121080
    ctx->pc = 0x27e204u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x27e208: 0x431021
    ctx->pc = 0x27e208u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e20c: 0x8c440000
    ctx->pc = 0x27e20cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e210: 0xc0282d
    ctx->pc = 0x27e210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e214: 0x3c014040
    ctx->pc = 0x27e214u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x27e218: 0x44816000
    ctx->pc = 0x27e218u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27e21c: 0x3c060101
    ctx->pc = 0x27e21cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)257 << 16));
    // 0x27e220: 0x34c6000e
    ctx->pc = 0x27e220u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 14));
    // 0x27e224: 0xc09f580
    ctx->pc = 0x27E224u;
    SET_GPR_U32(ctx, 31, 0x27E22Cu);
    ctx->pc = 0x27E228u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D600u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXTree_0x27d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E22Cu; }
    }
    if (ctx->pc != 0x27E22Cu) { return; }
    ctx->pc = 0x27E22Cu;
    // 0x27e22c: 0x40882d
    ctx->pc = 0x27e22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e230: 0x6230003
    ctx->pc = 0x27E230u;
    {
        const bool branch_taken_0x27e230 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x27e230) {
            ctx->pc = 0x27E234u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x27E240u;
            goto label_27e240;
        }
    }
    ctx->pc = 0x27E238u;
    // 0x27e238: 0x10000030
    ctx->pc = 0x27E238u;
    {
        const bool branch_taken_0x27e238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27E23Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27e238) {
            ctx->pc = 0x27E2FCu;
            goto label_27e2fc;
        }
    }
    ctx->pc = 0x27E240u;
label_27e240:
    // 0x27e240: 0x4600a002
    ctx->pc = 0x27e240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27e244: 0xe7a00000
    ctx->pc = 0x27e244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27e248: 0xc6000004
    ctx->pc = 0x27e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e24c: 0x4600a002
    ctx->pc = 0x27e24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27e250: 0xe7a00004
    ctx->pc = 0x27e250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27e254: 0xc6000008
    ctx->pc = 0x27e254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e258: 0x4600a002
    ctx->pc = 0x27e258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27e25c: 0xe7a00008
    ctx->pc = 0x27e25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27e260: 0x220202d
    ctx->pc = 0x27e260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e264: 0x3a0282d
    ctx->pc = 0x27e264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e268: 0x302d
    ctx->pc = 0x27e268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e26c: 0x3c013f80
    ctx->pc = 0x27e26cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27e270: 0x44816800
    ctx->pc = 0x27e270u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x27e274: 0xc09f794
    ctx->pc = 0x27E274u;
    SET_GPR_U32(ctx, 31, 0x27E27Cu);
    ctx->pc = 0x27E278u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x27DE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetPhysics_0x27de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E27Cu; }
    }
    if (ctx->pc != 0x27E27Cu) { return; }
    ctx->pc = 0x27E27Cu;
    // 0x27e27c: 0x3c020034
    ctx->pc = 0x27e27cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27e280: 0x24420e88
    ctx->pc = 0x27e280u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3720));
    // 0x27e284: 0x121880
    ctx->pc = 0x27e284u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x27e288: 0x621821
    ctx->pc = 0x27e288u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e28c: 0x220202d
    ctx->pc = 0x27e28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e290: 0x4600b306
    ctx->pc = 0x27e290u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x27e294: 0x8c650000
    ctx->pc = 0x27e294u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27e298: 0x44806800
    ctx->pc = 0x27e298u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x27e29c: 0x46006b86
    ctx->pc = 0x27e29cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x27e2a0: 0xc09f780
    ctx->pc = 0x27E2A0u;
    SET_GPR_U32(ctx, 31, 0x27E2A8u);
    ctx->pc = 0x27E2A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x27DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetDamage_0x27de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2A8u; }
    }
    if (ctx->pc != 0x27E2A8u) { return; }
    ctx->pc = 0x27E2A8u;
    // 0x27e2a8: 0x3c040034
    ctx->pc = 0x27e2a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x27e2ac: 0x248400c0
    ctx->pc = 0x27e2acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 192));
    // 0x27e2b0: 0x3c030032
    ctx->pc = 0x27e2b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x27e2b4: 0x24631bc0
    ctx->pc = 0x27e2b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x27e2b8: 0x24022b00
    ctx->pc = 0x27e2b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x27e2bc: 0x2621018
    ctx->pc = 0x27e2bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27e2c0: 0x431021
    ctx->pc = 0x27e2c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e2c4: 0x8c420004
    ctx->pc = 0x27e2c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27e2c8: 0x21080
    ctx->pc = 0x27e2c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x27e2cc: 0x441021
    ctx->pc = 0x27e2ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27e2d0: 0x8c430000
    ctx->pc = 0x27e2d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e2d4: 0x2402000c
    ctx->pc = 0x27e2d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x27e2d8: 0x621818
    ctx->pc = 0x27e2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27e2dc: 0x3c050034
    ctx->pc = 0x27e2dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x27e2e0: 0x24a50068
    ctx->pc = 0x27e2e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 104));
    // 0x27e2e4: 0x240202d
    ctx->pc = 0x27e2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2e8: 0x3c014040
    ctx->pc = 0x27e2e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x27e2ec: 0x44816000
    ctx->pc = 0x27e2ecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27e2f0: 0xc09fdc2
    ctx->pc = 0x27E2F0u;
    SET_GPR_U32(ctx, 31, 0x27E2F8u);
    ctx->pc = 0x27E2F4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x27F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetLight_0x27f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2F8u; }
    }
    if (ctx->pc != 0x27E2F8u) { return; }
    ctx->pc = 0x27E2F8u;
    // 0x27e2f8: 0x220102d
    ctx->pc = 0x27e2f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e2fc:
    // 0x27e2fc: 0xdfbf0050
    ctx->pc = 0x27e2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27e300: 0xdfb30040
    ctx->pc = 0x27e300u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e304: 0xdfb20030
    ctx->pc = 0x27e304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e308: 0xdfb10020
    ctx->pc = 0x27e308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e30c: 0xdfb00010
    ctx->pc = 0x27e30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e310: 0xc7b60070
    ctx->pc = 0x27e310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27e314: 0xc7b50068
    ctx->pc = 0x27e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27e318: 0xc7b40060
    ctx->pc = 0x27e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e31c: 0x3e00008
    ctx->pc = 0x27E31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E320u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E240u: goto label_27e240;
            case 0x27E2FCu: goto label_27e2fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27E324u;
}
