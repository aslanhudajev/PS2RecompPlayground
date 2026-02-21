#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoPlyrSfxSub
// Address: 0x24e240 - 0x24e514
void DoPlyrSfxSub_0x24e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24e240u;

    // 0x24e240: 0x27bdff80
    ctx->pc = 0x24e240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24e244: 0xffbf0070
    ctx->pc = 0x24e244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24e248: 0xffb60060
    ctx->pc = 0x24e248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x24e24c: 0xffb50050
    ctx->pc = 0x24e24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24e250: 0xffb40040
    ctx->pc = 0x24e250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24e254: 0xffb30030
    ctx->pc = 0x24e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24e258: 0xffb20020
    ctx->pc = 0x24e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24e25c: 0xffb10010
    ctx->pc = 0x24e25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24e260: 0xffb00000
    ctx->pc = 0x24e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24e264: 0x80902d
    ctx->pc = 0x24e264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e268: 0xa0a82d
    ctx->pc = 0x24e268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e26c: 0xc0982d
    ctx->pc = 0x24e26cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e270: 0xe0b02d
    ctx->pc = 0x24e270u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e274: 0x100802d
    ctx->pc = 0x24e274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e278: 0x8ea20008
    ctx->pc = 0x24e278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24e27c: 0x4400099
    ctx->pc = 0x24E27Cu;
    {
        const bool branch_taken_0x24e27c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24E280u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e27c) {
            ctx->pc = 0x24E4E4u;
            goto label_24e4e4;
        }
    }
    ctx->pc = 0x24E284u;
    // 0x24e284: 0x24070800
    ctx->pc = 0x24e284u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x24e288: 0x32020004
    ctx->pc = 0x24e288u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4));
    // 0x24e28c: 0x10400003
    ctx->pc = 0x24E28Cu;
    {
        const bool branch_taken_0x24e28c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E290u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e28c) {
            ctx->pc = 0x24E29Cu;
            goto label_24e29c;
        }
    }
    ctx->pc = 0x24E294u;
    // 0x24e294: 0x3c070008
    ctx->pc = 0x24e294u;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
    // 0x24e298: 0x34e70880
    ctx->pc = 0x24e298u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2176));
label_24e29c:
    // 0x24e29c: 0x32021000
    ctx->pc = 0x24e29cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4096));
    // 0x24e2a0: 0x10400002
    ctx->pc = 0x24E2A0u;
    {
        const bool branch_taken_0x24e2a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E2A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
        if (branch_taken_0x24e2a0) {
            ctx->pc = 0x24E2ACu;
            goto label_24e2ac;
        }
    }
    ctx->pc = 0x24E2A8u;
    // 0x24e2a8: 0xe23825
    ctx->pc = 0x24e2a8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_24e2ac:
    // 0x24e2ac: 0x32024000
    ctx->pc = 0x24e2acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 16384));
    // 0x24e2b0: 0x10400003
    ctx->pc = 0x24E2B0u;
    {
        const bool branch_taken_0x24e2b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E2B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294965247));
        if (branch_taken_0x24e2b0) {
            ctx->pc = 0x24E2C0u;
            goto label_24e2c0;
        }
    }
    ctx->pc = 0x24E2B8u;
    // 0x24e2b8: 0xe23824
    ctx->pc = 0x24e2b8u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x24e2bc: 0x34e72000
    ctx->pc = 0x24e2bcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 8192));
label_24e2c0:
    // 0x24e2c0: 0x32020010
    ctx->pc = 0x24e2c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 16));
    // 0x24e2c4: 0x10400002
    ctx->pc = 0x24E2C4u;
    {
        const bool branch_taken_0x24e2c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E2C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
        if (branch_taken_0x24e2c4) {
            ctx->pc = 0x24E2D0u;
            goto label_24e2d0;
        }
    }
    ctx->pc = 0x24E2CCu;
    // 0x24e2cc: 0xc23025
    ctx->pc = 0x24e2ccu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_24e2d0:
    // 0x24e2d0: 0x32028000
    ctx->pc = 0x24e2d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 32768));
    // 0x24e2d4: 0x10400002
    ctx->pc = 0x24E2D4u;
    {
        const bool branch_taken_0x24e2d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E2D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        if (branch_taken_0x24e2d4) {
            ctx->pc = 0x24E2E0u;
            goto label_24e2e0;
        }
    }
    ctx->pc = 0x24E2DCu;
    // 0x24e2dc: 0xc23025
    ctx->pc = 0x24e2dcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_24e2e0:
    // 0x24e2e0: 0x3c020001
    ctx->pc = 0x24e2e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x24e2e4: 0x2021024
    ctx->pc = 0x24e2e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24e2e8: 0x10400002
    ctx->pc = 0x24E2E8u;
    {
        const bool branch_taken_0x24e2e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E2ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
        if (branch_taken_0x24e2e8) {
            ctx->pc = 0x24E2F4u;
            goto label_24e2f4;
        }
    }
    ctx->pc = 0x24E2F0u;
    // 0x24e2f0: 0xc23025
    ctx->pc = 0x24e2f0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_24e2f4:
    // 0x24e2f4: 0x8ea40008
    ctx->pc = 0x24e2f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24e2f8: 0x260282d
    ctx->pc = 0x24e2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e2fc: 0xc09f5fa
    ctx->pc = 0x24E2FCu;
    SET_GPR_U32(ctx, 31, 0x24E304u);
    ctx->pc = 0x24E300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E304u; }
    }
    if (ctx->pc != 0x24E304u) { return; }
    ctx->pc = 0x24E304u;
    // 0x24e304: 0x40882d
    ctx->pc = 0x24e304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e308: 0x6200079
    ctx->pc = 0x24E308u;
    {
        const bool branch_taken_0x24e308 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x24E30Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x24e308) {
            ctx->pc = 0x24E4F0u;
            goto label_24e4f0;
        }
    }
    ctx->pc = 0x24E310u;
    // 0x24e310: 0x32020080
    ctx->pc = 0x24e310u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 128));
    // 0x24e314: 0x10400007
    ctx->pc = 0x24E314u;
    {
        const bool branch_taken_0x24e314 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E318u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e314) {
            ctx->pc = 0x24E334u;
            goto label_24e334;
        }
    }
    ctx->pc = 0x24E31Cu;
    // 0x24e31c: 0x8e460080
    ctx->pc = 0x24e31cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x24e320: 0x26450020
    ctx->pc = 0x24e320u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 32));
    // 0x24e324: 0xc09f748
    ctx->pc = 0x24E324u;
    SET_GPR_U32(ctx, 31, 0x24E32Cu);
    ctx->pc = 0x24E328u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 48));
    ctx->pc = 0x27DD20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMat_0x27dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E32Cu; }
    }
    if (ctx->pc != 0x24E32Cu) { return; }
    ctx->pc = 0x24E32Cu;
    // 0x24e32c: 0x10000042
    ctx->pc = 0x24E32Cu;
    {
        const bool branch_taken_0x24e32c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E330u;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x24e32c) {
            ctx->pc = 0x24E438u;
            goto label_24e438;
        }
    }
    ctx->pc = 0x24E334u;
label_24e334:
    // 0x24e334: 0x32020040
    ctx->pc = 0x24e334u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 64));
    // 0x24e338: 0x10400011
    ctx->pc = 0x24E338u;
    {
        const bool branch_taken_0x24e338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E33Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8192));
        if (branch_taken_0x24e338) {
            ctx->pc = 0x24E380u;
            goto label_24e380;
        }
    }
    ctx->pc = 0x24E340u;
    // 0x24e340: 0x10400004
    ctx->pc = 0x24E340u;
    {
        const bool branch_taken_0x24e340 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E344u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x24e340) {
            ctx->pc = 0x24E354u;
            goto label_24e354;
        }
    }
    ctx->pc = 0x24E348u;
    // 0x24e348: 0x8c421eb8
    ctx->pc = 0x24e348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7864)));
    // 0x24e34c: 0x54400001
    ctx->pc = 0x24E34Cu;
    {
        const bool branch_taken_0x24e34c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24e34c) {
            ctx->pc = 0x24E350u;
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x24E354u;
            goto label_24e354;
        }
    }
    ctx->pc = 0x24E354u;
label_24e354:
    // 0x24e354: 0x12c00004
    ctx->pc = 0x24E354u;
    {
        const bool branch_taken_0x24e354 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E358u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e354) {
            ctx->pc = 0x24E368u;
            goto label_24e368;
        }
    }
    ctx->pc = 0x24E35Cu;
    // 0x24e35c: 0x260282d
    ctx->pc = 0x24e35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e360: 0xc0b5836
    ctx->pc = 0x24E360u;
    SET_GPR_U32(ctx, 31, 0x24E368u);
    ctx->pc = 0x24E364u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 32));
    ctx->pc = 0x2D60D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat4_0x2d60d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E368u; }
    }
    if (ctx->pc != 0x24E368u) { return; }
    ctx->pc = 0x24E368u;
label_24e368:
    // 0x24e368: 0x220202d
    ctx->pc = 0x24e368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e36c: 0x26450020
    ctx->pc = 0x24e36cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 32));
    // 0x24e370: 0xc09f748
    ctx->pc = 0x24E370u;
    SET_GPR_U32(ctx, 31, 0x24E378u);
    ctx->pc = 0x24E374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DD20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMat_0x27dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E378u; }
    }
    if (ctx->pc != 0x24E378u) { return; }
    ctx->pc = 0x24E378u;
    // 0x24e378: 0x1000002f
    ctx->pc = 0x24E378u;
    {
        const bool branch_taken_0x24e378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E37Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x24e378) {
            ctx->pc = 0x24E438u;
            goto label_24e438;
        }
    }
    ctx->pc = 0x24E380u;
label_24e380:
    // 0x24e380: 0x52c00020
    ctx->pc = 0x24E380u;
    {
        const bool branch_taken_0x24e380 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x24e380) {
            ctx->pc = 0x24E384u;
            SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
            ctx->pc = 0x24E404u;
            goto label_24e404;
        }
    }
    ctx->pc = 0x24E388u;
    // 0x24e388: 0x10400004
    ctx->pc = 0x24E388u;
    {
        const bool branch_taken_0x24e388 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E38Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x24e388) {
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E390u;
    // 0x24e390: 0x8c421eb8
    ctx->pc = 0x24e390u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7864)));
    // 0x24e394: 0x54400001
    ctx->pc = 0x24E394u;
    {
        const bool branch_taken_0x24e394 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24e394) {
            ctx->pc = 0x24E398u;
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x24E39Cu;
            goto label_24e39c;
        }
    }
    ctx->pc = 0x24E39Cu;
label_24e39c:
    // 0x24e39c: 0x3c020004
    ctx->pc = 0x24e39cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
    // 0x24e3a0: 0x2021024
    ctx->pc = 0x24e3a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24e3a4: 0x10400009
    ctx->pc = 0x24E3A4u;
    {
        const bool branch_taken_0x24e3a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E3A8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2048));
        if (branch_taken_0x24e3a4) {
            ctx->pc = 0x24E3CCu;
            goto label_24e3cc;
        }
    }
    ctx->pc = 0x24E3ACu;
    // 0x24e3ac: 0x6800007
    ctx->pc = 0x24E3ACu;
    {
        const bool branch_taken_0x24e3ac = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x24E3B0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x24e3ac) {
            ctx->pc = 0x24E3CCu;
            goto label_24e3cc;
        }
    }
    ctx->pc = 0x24E3B4u;
    // 0x24e3b4: 0x24630eb0
    ctx->pc = 0x24e3b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x24e3b8: 0x240200f0
    ctx->pc = 0x24e3b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x24e3bc: 0x2821018
    ctx->pc = 0x24e3bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24e3c0: 0x431021
    ctx->pc = 0x24e3c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e3c4: 0x1000000b
    ctx->pc = 0x24E3C4u;
    {
        const bool branch_taken_0x24e3c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E3C8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 20)));
        if (branch_taken_0x24e3c4) {
            ctx->pc = 0x24E3F4u;
            goto label_24e3f4;
        }
    }
    ctx->pc = 0x24E3CCu;
label_24e3cc:
    // 0x24e3cc: 0x10400004
    ctx->pc = 0x24E3CCu;
    {
        const bool branch_taken_0x24e3cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E3D0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x24e3cc) {
            ctx->pc = 0x24E3E0u;
            goto label_24e3e0;
        }
    }
    ctx->pc = 0x24E3D4u;
    // 0x24e3d4: 0x8e420080
    ctx->pc = 0x24e3d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x24e3d8: 0x10000006
    ctx->pc = 0x24E3D8u;
    {
        const bool branch_taken_0x24e3d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E3DCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 116)));
        if (branch_taken_0x24e3d8) {
            ctx->pc = 0x24E3F4u;
            goto label_24e3f4;
        }
    }
    ctx->pc = 0x24E3E0u;
label_24e3e0:
    // 0x24e3e0: 0x50400003
    ctx->pc = 0x24E3E0u;
    {
        const bool branch_taken_0x24e3e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24e3e0) {
            ctx->pc = 0x24E3E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 128)));
            ctx->pc = 0x24E3F0u;
            goto label_24e3f0;
        }
    }
    ctx->pc = 0x24E3E8u;
    // 0x24e3e8: 0x10000002
    ctx->pc = 0x24E3E8u;
    {
        const bool branch_taken_0x24e3e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E3ECu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 128)));
        if (branch_taken_0x24e3e8) {
            ctx->pc = 0x24E3F4u;
            goto label_24e3f4;
        }
    }
    ctx->pc = 0x24E3F0u;
label_24e3f0:
    // 0x24e3f0: 0x8c450078
    ctx->pc = 0x24e3f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_24e3f4:
    // 0x24e3f4: 0xc09f732
    ctx->pc = 0x24E3F4u;
    SET_GPR_U32(ctx, 31, 0x24E3FCu);
    ctx->pc = 0x24E3F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E3FCu; }
    }
    if (ctx->pc != 0x24E3FCu) { return; }
    ctx->pc = 0x24E3FCu;
    // 0x24e3fc: 0x1000000e
    ctx->pc = 0x24E3FCu;
    {
        const bool branch_taken_0x24e3fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E400u;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x24e3fc) {
            ctx->pc = 0x24E438u;
            goto label_24e438;
        }
    }
    ctx->pc = 0x24E404u;
label_24e404:
    // 0x24e404: 0x2021024
    ctx->pc = 0x24e404u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24e408: 0x1040000b
    ctx->pc = 0x24E408u;
    {
        const bool branch_taken_0x24e408 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E40Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x24e408) {
            ctx->pc = 0x24E438u;
            goto label_24e438;
        }
    }
    ctx->pc = 0x24E410u;
    // 0x24e410: 0x6800009
    ctx->pc = 0x24E410u;
    {
        const bool branch_taken_0x24e410 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x24E414u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x24e410) {
            ctx->pc = 0x24E438u;
            goto label_24e438;
        }
    }
    ctx->pc = 0x24E418u;
    // 0x24e418: 0x24630eb0
    ctx->pc = 0x24e418u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x24e41c: 0x240200f0
    ctx->pc = 0x24e41cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x24e420: 0x2821018
    ctx->pc = 0x24e420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24e424: 0x431021
    ctx->pc = 0x24e424u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e428: 0x220202d
    ctx->pc = 0x24e428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e42c: 0xc09f732
    ctx->pc = 0x24E42Cu;
    SET_GPR_U32(ctx, 31, 0x24E434u);
    ctx->pc = 0x24E430u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E434u; }
    }
    if (ctx->pc != 0x24E434u) { return; }
    ctx->pc = 0x24E434u;
    // 0x24e434: 0x3c020002
    ctx->pc = 0x24e434u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
label_24e438:
    // 0x24e438: 0x2021024
    ctx->pc = 0x24e438u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24e43c: 0x1040000f
    ctx->pc = 0x24E43Cu;
    {
        const bool branch_taken_0x24e43c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E440u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x24e43c) {
            ctx->pc = 0x24E47Cu;
            goto label_24e47c;
        }
    }
    ctx->pc = 0x24E444u;
    // 0x24e444: 0x2442f540
    ctx->pc = 0x24e444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964544));
    // 0x24e448: 0x8e430004
    ctx->pc = 0x24e448u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24e44c: 0x31880
    ctx->pc = 0x24e44cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x24e450: 0x621821
    ctx->pc = 0x24e450u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e454: 0x3c020035
    ctx->pc = 0x24e454u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x24e458: 0x220202d
    ctx->pc = 0x24e458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e45c: 0x8c45f700
    ctx->pc = 0x24e45cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294964992)));
    // 0x24e460: 0x8c660000
    ctx->pc = 0x24e460u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e464: 0x3c014000
    ctx->pc = 0x24e464u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x24e468: 0x44816000
    ctx->pc = 0x24e468u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x24e46c: 0x3c013f80
    ctx->pc = 0x24e46cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x24e470: 0x44816800
    ctx->pc = 0x24e470u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x24e474: 0xc09f7d0
    ctx->pc = 0x24E474u;
    SET_GPR_U32(ctx, 31, 0x24E47Cu);
    ctx->pc = 0x24E478u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x27DF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetStreak_0x27df40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E47Cu; }
    }
    if (ctx->pc != 0x24E47Cu) { return; }
    ctx->pc = 0x24E47Cu;
label_24e47c:
    // 0x24e47c: 0x3c030034
    ctx->pc = 0x24e47cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x24e480: 0x24630eb0
    ctx->pc = 0x24e480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x24e484: 0x240200f0
    ctx->pc = 0x24e484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x24e488: 0x2221018
    ctx->pc = 0x24e488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24e48c: 0x431021
    ctx->pc = 0x24e48cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e490: 0x8c420018
    ctx->pc = 0x24e490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24e494: 0x8c440000
    ctx->pc = 0x24e494u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e498: 0x10800003
    ctx->pc = 0x24E498u;
    {
        const bool branch_taken_0x24e498 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E49Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 511));
        if (branch_taken_0x24e498) {
            ctx->pc = 0x24E4A8u;
            goto label_24e4a8;
        }
    }
    ctx->pc = 0x24E4A0u;
    // 0x24e4a0: 0xc0b4156
    ctx->pc = 0x24E4A0u;
    SET_GPR_U32(ctx, 31, 0x24E4A8u);
    ctx->pc = 0x24E4A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4A8u; }
    }
    if (ctx->pc != 0x24E4A8u) { return; }
    ctx->pc = 0x24E4A8u;
label_24e4a8:
    // 0x24e4a8: 0x8ea5004c
    ctx->pc = 0x24e4a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x24e4ac: 0x3c02ffff
    ctx->pc = 0x24e4acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x24e4b0: 0x3442ffff
    ctx->pc = 0x24e4b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x24e4b4: 0x10a2000c
    ctx->pc = 0x24E4B4u;
    {
        const bool branch_taken_0x24e4b4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x24E4B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x24e4b4) {
            ctx->pc = 0x24E4E8u;
            goto label_24e4e8;
        }
    }
    ctx->pc = 0x24E4BCu;
    // 0x24e4bc: 0x24630eb0
    ctx->pc = 0x24e4bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x24e4c0: 0x240200f0
    ctx->pc = 0x24e4c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x24e4c4: 0x2221018
    ctx->pc = 0x24e4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24e4c8: 0x431021
    ctx->pc = 0x24e4c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e4cc: 0x8c420018
    ctx->pc = 0x24e4ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x24e4d0: 0x8c440000
    ctx->pc = 0x24e4d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e4d4: 0xc0b4180
    ctx->pc = 0x24E4D4u;
    SET_GPR_U32(ctx, 31, 0x24E4DCu);
    ctx->pc = 0x24E4D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0600u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetColor_0x2d0600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E4DCu; }
    }
    if (ctx->pc != 0x24E4DCu) { return; }
    ctx->pc = 0x24E4DCu;
    // 0x24e4dc: 0x10000003
    ctx->pc = 0x24E4DCu;
    {
        const bool branch_taken_0x24e4dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E4E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e4dc) {
            ctx->pc = 0x24E4ECu;
            goto label_24e4ec;
        }
    }
    ctx->pc = 0x24E4E4u;
label_24e4e4:
    // 0x24e4e4: 0x2411ffff
    ctx->pc = 0x24e4e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
label_24e4e8:
    // 0x24e4e8: 0x220102d
    ctx->pc = 0x24e4e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e4ec:
    // 0x24e4ec: 0xdfbf0070
    ctx->pc = 0x24e4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24e4f0:
    // 0x24e4f0: 0xdfb60060
    ctx->pc = 0x24e4f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e4f4: 0xdfb50050
    ctx->pc = 0x24e4f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e4f8: 0xdfb40040
    ctx->pc = 0x24e4f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e4fc: 0xdfb30030
    ctx->pc = 0x24e4fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e500: 0xdfb20020
    ctx->pc = 0x24e500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e504: 0xdfb10010
    ctx->pc = 0x24e504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e508: 0xdfb00000
    ctx->pc = 0x24e508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e50c: 0x3e00008
    ctx->pc = 0x24E50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E510u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24E29Cu: goto label_24e29c;
            case 0x24E2ACu: goto label_24e2ac;
            case 0x24E2C0u: goto label_24e2c0;
            case 0x24E2D0u: goto label_24e2d0;
            case 0x24E2E0u: goto label_24e2e0;
            case 0x24E2F4u: goto label_24e2f4;
            case 0x24E334u: goto label_24e334;
            case 0x24E354u: goto label_24e354;
            case 0x24E368u: goto label_24e368;
            case 0x24E380u: goto label_24e380;
            case 0x24E39Cu: goto label_24e39c;
            case 0x24E3CCu: goto label_24e3cc;
            case 0x24E3E0u: goto label_24e3e0;
            case 0x24E3F0u: goto label_24e3f0;
            case 0x24E3F4u: goto label_24e3f4;
            case 0x24E404u: goto label_24e404;
            case 0x24E438u: goto label_24e438;
            case 0x24E47Cu: goto label_24e47c;
            case 0x24E4A8u: goto label_24e4a8;
            case 0x24E4E4u: goto label_24e4e4;
            case 0x24E4E8u: goto label_24e4e8;
            case 0x24E4ECu: goto label_24e4ec;
            case 0x24E4F0u: goto label_24e4f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24E514u;
}
