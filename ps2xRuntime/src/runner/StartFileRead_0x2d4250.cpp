#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartFileRead
// Address: 0x2d4250 - 0x2d4458
void StartFileRead_0x2d4250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4250u;

    // 0x2d4250: 0x27bdff90
    ctx->pc = 0x2d4250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d4254: 0xffbf0060
    ctx->pc = 0x2d4254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d4258: 0xffb50050
    ctx->pc = 0x2d4258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2d425c: 0xffb40040
    ctx->pc = 0x2d425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d4260: 0xffb30030
    ctx->pc = 0x2d4260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d4264: 0xffb20020
    ctx->pc = 0x2d4264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d4268: 0xffb10010
    ctx->pc = 0x2d4268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d426c: 0xffb00000
    ctx->pc = 0x2d426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4270: 0x80802d
    ctx->pc = 0x2d4270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4274: 0xa0902d
    ctx->pc = 0x2d4274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4278: 0xe0982d
    ctx->pc = 0x2d4278u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d427c: 0x100a02d
    ctx->pc = 0x2d427cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4280: 0x3c02003a
    ctx->pc = 0x2d4280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4284: 0x8c4221e8
    ctx->pc = 0x2d4284u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8680)));
    // 0x2d4288: 0x10400007
    ctx->pc = 0x2D4288u;
    {
        const bool branch_taken_0x2d4288 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D428Cu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d4288) {
            ctx->pc = 0x2D42A8u;
            goto label_2d42a8;
        }
    }
    ctx->pc = 0x2D4290u;
    // 0x2d4290: 0x3c020037
    ctx->pc = 0x2d4290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d4294: 0x240300ff
    ctx->pc = 0x2d4294u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d4298: 0xac438008
    ctx->pc = 0x2d4298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d429c: 0x3c04003b
    ctx->pc = 0x2d429cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d42a0: 0xc0b4976
    ctx->pc = 0x2D42A0u;
    SET_GPR_U32(ctx, 31, 0x2D42A8u);
    ctx->pc = 0x2D42A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31608));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D42A8u; }
    }
    if (ctx->pc != 0x2D42A8u) { return; }
    ctx->pc = 0x2D42A8u;
label_2d42a8:
    // 0x2d42a8: 0x3c02003d
    ctx->pc = 0x2d42a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d42ac: 0x8c432d10
    ctx->pc = 0x2d42acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 11536)));
    // 0x2d42b0: 0x2402ffff
    ctx->pc = 0x2d42b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d42b4: 0x1062000c
    ctx->pc = 0x2D42B4u;
    {
        const bool branch_taken_0x2d42b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2D42B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d42b4) {
            ctx->pc = 0x2D42E8u;
            goto label_2d42e8;
        }
    }
    ctx->pc = 0x2D42BCu;
    // 0x2d42bc: 0x3c02003d
    ctx->pc = 0x2d42bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d42c0: 0x24472d00
    ctx->pc = 0x2d42c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 11520));
    // 0x2d42c4: 0x2405012c
    ctx->pc = 0x2d42c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 300));
    // 0x2d42c8: 0x2403ffff
    ctx->pc = 0x2d42c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d42cc: 0x24840001
    ctx->pc = 0x2d42ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2d42d0:
    // 0x2d42d0: 0x1c800005
    ctx->pc = 0x2D42D0u;
    {
        const bool branch_taken_0x2d42d0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2D42D4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2d42d0) {
            ctx->pc = 0x2D42E8u;
            goto label_2d42e8;
        }
    }
    ctx->pc = 0x2D42D8u;
    // 0x2d42d8: 0xc71021
    ctx->pc = 0x2d42d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d42dc: 0x8c420010
    ctx->pc = 0x2d42dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d42e0: 0x5443fffb
    ctx->pc = 0x2D42E0u;
    {
        const bool branch_taken_0x2d42e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2d42e0) {
            ctx->pc = 0x2D42E4u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x2D42D0u;
            goto label_2d42d0;
        }
    }
    ctx->pc = 0x2D42E8u;
label_2d42e8:
    // 0x2d42e8: 0x24020001
    ctx->pc = 0x2d42e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d42ec: 0x1482000a
    ctx->pc = 0x2D42ECu;
    {
        const bool branch_taken_0x2d42ec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D42F0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 300));
        if (branch_taken_0x2d42ec) {
            ctx->pc = 0x2D4318u;
            goto label_2d4318;
        }
    }
    ctx->pc = 0x2D42F4u;
    // 0x2d42f4: 0x3c020037
    ctx->pc = 0x2d42f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d42f8: 0x240300ff
    ctx->pc = 0x2d42f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d42fc: 0xac438008
    ctx->pc = 0x2d42fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d4300: 0x3c04003b
    ctx->pc = 0x2d4300u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d4304: 0x24847be8
    ctx->pc = 0x2d4304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31720));
    // 0x2d4308: 0xc0b4976
    ctx->pc = 0x2D4308u;
    SET_GPR_U32(ctx, 31, 0x2D4310u);
    ctx->pc = 0x2D430Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4310u; }
    }
    if (ctx->pc != 0x2D4310u) { return; }
    ctx->pc = 0x2D4310u;
    // 0x2d4310: 0x10000048
    ctx->pc = 0x2D4310u;
    {
        const bool branch_taken_0x2d4310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4314u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d4310) {
            ctx->pc = 0x2D4434u;
            goto label_2d4434;
        }
    }
    ctx->pc = 0x2D4318u;
label_2d4318:
    // 0x2d4318: 0x831818
    ctx->pc = 0x2d4318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2d431c: 0x3c02003d
    ctx->pc = 0x2d431cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d4320: 0x24422d00
    ctx->pc = 0x2d4320u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11520));
    // 0x2d4324: 0x628821
    ctx->pc = 0x2d4324u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4328: 0x200202d
    ctx->pc = 0x2d4328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d432c: 0xc0b5346
    ctx->pc = 0x2D432Cu;
    SET_GPR_U32(ctx, 31, 0x2D4334u);
    ctx->pc = 0x2D4330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWadInfo_0x2d4d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4334u; }
    }
    if (ctx->pc != 0x2D4334u) { return; }
    ctx->pc = 0x2D4334u;
    // 0x2d4334: 0x3c03003a
    ctx->pc = 0x2d4334u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d4338: 0x14400009
    ctx->pc = 0x2D4338u;
    {
        const bool branch_taken_0x2d4338 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D433Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 9092), GPR_U32(ctx, 2));
        if (branch_taken_0x2d4338) {
            ctx->pc = 0x2D4360u;
            goto label_2d4360;
        }
    }
    ctx->pc = 0x2D4340u;
    // 0x2d4340: 0x3c020037
    ctx->pc = 0x2d4340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d4344: 0x240300ff
    ctx->pc = 0x2d4344u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d4348: 0xac438008
    ctx->pc = 0x2d4348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d434c: 0x3c04003b
    ctx->pc = 0x2d434cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d4350: 0x24847c00
    ctx->pc = 0x2d4350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31744));
    // 0x2d4354: 0x200282d
    ctx->pc = 0x2d4354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4358: 0xc0b4976
    ctx->pc = 0x2D4358u;
    SET_GPR_U32(ctx, 31, 0x2D4360u);
    ctx->pc = 0x2D435Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4360u; }
    }
    if (ctx->pc != 0x2D4360u) { return; }
    ctx->pc = 0x2D4360u;
label_2d4360:
    // 0x2d4360: 0x3c02003a
    ctx->pc = 0x2d4360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4364: 0x8c442384
    ctx->pc = 0x2d4364u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x2d4368: 0x8c83000c
    ctx->pc = 0x2d4368u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d436c: 0x2402ffff
    ctx->pc = 0x2d436cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4370: 0x14620003
    ctx->pc = 0x2D4370u;
    {
        const bool branch_taken_0x2d4370 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D4374u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d4370) {
            ctx->pc = 0x2D4380u;
            goto label_2d4380;
        }
    }
    ctx->pc = 0x2D4378u;
    // 0x2d4378: 0x10000003
    ctx->pc = 0x2D4378u;
    {
        const bool branch_taken_0x2d4378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D437Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2d4378) {
            ctx->pc = 0x2D4388u;
            goto label_2d4388;
        }
    }
    ctx->pc = 0x2D4380u;
label_2d4380:
    // 0x2d4380: 0x8c422384
    ctx->pc = 0x2d4380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x2d4384: 0x8c50000c
    ctx->pc = 0x2d4384u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2d4388:
    // 0x2d4388: 0xae340004
    ctx->pc = 0x2d4388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x2d438c: 0xae330008
    ctx->pc = 0x2d438cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x2d4390: 0xae350000
    ctx->pc = 0x2d4390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x2d4394: 0xae300018
    ctx->pc = 0x2d4394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x2d4398: 0x3c02003a
    ctx->pc = 0x2d4398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d439c: 0x8c432384
    ctx->pc = 0x2d439cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x2d43a0: 0x8c620000
    ctx->pc = 0x2d43a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d43a4: 0xae220128
    ctx->pc = 0x2d43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
    // 0x2d43a8: 0xae20000c
    ctx->pc = 0x2d43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2d43ac: 0x8c62000c
    ctx->pc = 0x2d43acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d43b0: 0x21027
    ctx->pc = 0x2d43b0u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2d43b4: 0x2102b
    ctx->pc = 0x2d43b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2d43b8: 0xae220120
    ctx->pc = 0x2d43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x2d43bc: 0x8c620000
    ctx->pc = 0x2d43bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d43c0: 0x262102a
    ctx->pc = 0x2d43c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x2d43c4: 0x10400006
    ctx->pc = 0x2D43C4u;
    {
        const bool branch_taken_0x2d43c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D43C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2d43c4) {
            ctx->pc = 0x2D43E0u;
            goto label_2d43e0;
        }
    }
    ctx->pc = 0x2D43CCu;
    // 0x2d43cc: 0x240300ff
    ctx->pc = 0x2d43ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d43d0: 0xac438008
    ctx->pc = 0x2d43d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d43d4: 0x3c04003b
    ctx->pc = 0x2d43d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d43d8: 0xc0b4976
    ctx->pc = 0x2D43D8u;
    SET_GPR_U32(ctx, 31, 0x2D43E0u);
    ctx->pc = 0x2D43DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31784));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D43E0u; }
    }
    if (ctx->pc != 0x2D43E0u) { return; }
    ctx->pc = 0x2D43E0u;
label_2d43e0:
    // 0x2d43e0: 0x8e220120
    ctx->pc = 0x2d43e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2d43e4: 0x10400007
    ctx->pc = 0x2D43E4u;
    {
        const bool branch_taken_0x2d43e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D43E8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 15));
        if (branch_taken_0x2d43e4) {
            ctx->pc = 0x2D4404u;
            goto label_2d4404;
        }
    }
    ctx->pc = 0x2D43ECu;
    // 0x2d43ec: 0x10600002
    ctx->pc = 0x2D43ECu;
    {
        const bool branch_taken_0x2d43ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D43F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x2d43ec) {
            ctx->pc = 0x2D43F8u;
            goto label_2d43f8;
        }
    }
    ctx->pc = 0x2D43F4u;
    // 0x2d43f4: 0x438023
    ctx->pc = 0x2d43f4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d43f8:
    // 0x2d43f8: 0xc0b4f1a
    ctx->pc = 0x2D43F8u;
    SET_GPR_U32(ctx, 31, 0x2D4400u);
    ctx->pc = 0x2D43FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocHiMem_0x2d3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4400u; }
    }
    if (ctx->pc != 0x2D4400u) { return; }
    ctx->pc = 0x2D4400u;
    // 0x2d4400: 0xae220124
    ctx->pc = 0x2d4400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_2d4404:
    // 0x2d4404: 0x3c10003a
    ctx->pc = 0x2d4404u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2d4408: 0x3c02003a
    ctx->pc = 0x2d4408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d440c: 0x8c422384
    ctx->pc = 0x2d440cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x2d4410: 0x8e04231c
    ctx->pc = 0x2d4410u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    // 0x2d4414: 0x8c450004
    ctx->pc = 0x2d4414u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d4418: 0xc0c1bb4
    ctx->pc = 0x2D4418u;
    SET_GPR_U32(ctx, 31, 0x2D4420u);
    ctx->pc = 0x2D441Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x306ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x306ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4420u; }
    }
    if (ctx->pc != 0x2D4420u) { return; }
    ctx->pc = 0x2D4420u;
    // 0x2d4420: 0x8e02231c
    ctx->pc = 0x2d4420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8988)));
    // 0x2d4424: 0xae22001c
    ctx->pc = 0x2d4424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2d4428: 0xae200014
    ctx->pc = 0x2d4428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2d442c: 0xae200010
    ctx->pc = 0x2d442cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2d4430: 0x220102d
    ctx->pc = 0x2d4430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d4434:
    // 0x2d4434: 0xdfbf0060
    ctx->pc = 0x2d4434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4438: 0xdfb50050
    ctx->pc = 0x2d4438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d443c: 0xdfb40040
    ctx->pc = 0x2d443cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4440: 0xdfb30030
    ctx->pc = 0x2d4440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4444: 0xdfb20020
    ctx->pc = 0x2d4444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4448: 0xdfb10010
    ctx->pc = 0x2d4448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d444c: 0xdfb00000
    ctx->pc = 0x2d444cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4450: 0x3e00008
    ctx->pc = 0x2D4450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4454u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D42A8u: goto label_2d42a8;
            case 0x2D42D0u: goto label_2d42d0;
            case 0x2D42E8u: goto label_2d42e8;
            case 0x2D4318u: goto label_2d4318;
            case 0x2D4360u: goto label_2d4360;
            case 0x2D4380u: goto label_2d4380;
            case 0x2D4388u: goto label_2d4388;
            case 0x2D43E0u: goto label_2d43e0;
            case 0x2D43F8u: goto label_2d43f8;
            case 0x2D4404u: goto label_2d4404;
            case 0x2D4434u: goto label_2d4434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D4458u;
}
