#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalDBLvlPrint
// Address: 0x2b4358 - 0x2b4454
void evalDBLvlPrint_0x2b4358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4358u;

    // 0x2b4358: 0x27bdffb0
    ctx->pc = 0x2b4358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b435c: 0xffbf0040
    ctx->pc = 0x2b435cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b4360: 0xffb30030
    ctx->pc = 0x2b4360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b4364: 0xffb20020
    ctx->pc = 0x2b4364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b4368: 0xffb10010
    ctx->pc = 0x2b4368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b436c: 0xffb00000
    ctx->pc = 0x2b436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4370: 0x80802d
    ctx->pc = 0x2b4370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4374: 0xa0902d
    ctx->pc = 0x2b4374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4378: 0x10e0000b
    ctx->pc = 0x2B4378u;
    {
        const bool branch_taken_0x2b4378 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B437Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4378) {
            ctx->pc = 0x2B43A8u;
            goto label_2b43a8;
        }
    }
    ctx->pc = 0x2B4380u;
    // 0x2b4380: 0x3c020037
    ctx->pc = 0x2b4380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b4384: 0x8c4320ac
    ctx->pc = 0x2b4384u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b4388: 0x8c620008
    ctx->pc = 0x2b4388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b438c: 0x8c630024
    ctx->pc = 0x2b438cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2b4390: 0x431021
    ctx->pc = 0x2b4390u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b4394: 0x80420000
    ctx->pc = 0x2b4394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4398: 0x14400004
    ctx->pc = 0x2B4398u;
    {
        const bool branch_taken_0x2b4398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B439Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4398) {
            ctx->pc = 0x2B43ACu;
            goto label_2b43ac;
        }
    }
    ctx->pc = 0x2B43A0u;
    // 0x2b43a0: 0xc0ad0c8
    ctx->pc = 0x2B43A0u;
    SET_GPR_U32(ctx, 31, 0x2B43A8u);
    ctx->pc = 0x2B4320u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlChar_0x2b4320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B43A8u; }
    }
    if (ctx->pc != 0x2B43A8u) { return; }
    ctx->pc = 0x2B43A8u;
label_2b43a8:
    // 0x2b43a8: 0x200282d
    ctx->pc = 0x2b43a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b43ac:
    // 0x2b43ac: 0x14a00003
    ctx->pc = 0x2B43ACu;
    {
        const bool branch_taken_0x2b43ac = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B43B0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
        if (branch_taken_0x2b43ac) {
            ctx->pc = 0x2B43BCu;
            goto label_2b43bc;
        }
    }
    ctx->pc = 0x2B43B4u;
    // 0x2b43b4: 0x3c020037
    ctx->pc = 0x2b43b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b43b8: 0x8c4521bc
    ctx->pc = 0x2b43b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8636)));
label_2b43bc:
    // 0x2b43bc: 0x8e0220ac
    ctx->pc = 0x2b43bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
    // 0x2b43c0: 0x3c04003b
    ctx->pc = 0x2b43c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b43c4: 0x24844630
    ctx->pc = 0x2b43c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17968));
    // 0x2b43c8: 0x8c460018
    ctx->pc = 0x2b43c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b43cc: 0xc0b4a34
    ctx->pc = 0x2B43CCu;
    SET_GPR_U32(ctx, 31, 0x2B43D4u);
    ctx->pc = 0x2B43D0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B43D4u; }
    }
    if (ctx->pc != 0x2B43D4u) { return; }
    ctx->pc = 0x2B43D4u;
    // 0x2b43d4: 0x8e0220ac
    ctx->pc = 0x2b43d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
    // 0x2b43d8: 0xc0bf306
    ctx->pc = 0x2B43D8u;
    SET_GPR_U32(ctx, 31, 0x2B43E0u);
    ctx->pc = 0x2B43DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B43E0u; }
    }
    if (ctx->pc != 0x2B43E0u) { return; }
    ctx->pc = 0x2B43E0u;
    // 0x2b43e0: 0x40802d
    ctx->pc = 0x2b43e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b43e4: 0x2a020014
    ctx->pc = 0x2b43e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 20));
    // 0x2b43e8: 0x10400009
    ctx->pc = 0x2B43E8u;
    {
        const bool branch_taken_0x2b43e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B43ECu;
        SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
        if (branch_taken_0x2b43e8) {
            ctx->pc = 0x2B4410u;
            goto label_2b4410;
        }
    }
    ctx->pc = 0x2B43F0u;
    // 0x2b43f0: 0x26244640
    ctx->pc = 0x2b43f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 17984));
    // 0x2b43f4: 0x0
    ctx->pc = 0x2b43f4u;
    // NOP
label_2b43f8:
    // 0x2b43f8: 0xc0b4a34
    ctx->pc = 0x2B43F8u;
    SET_GPR_U32(ctx, 31, 0x2B4400u);
    ctx->pc = 0x2B43FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4400u; }
    }
    if (ctx->pc != 0x2B4400u) { return; }
    ctx->pc = 0x2B4400u;
    // 0x2b4400: 0x26100001
    ctx->pc = 0x2b4400u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b4404: 0x2a020014
    ctx->pc = 0x2b4404u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 20));
    // 0x2b4408: 0x1440fffb
    ctx->pc = 0x2B4408u;
    {
        const bool branch_taken_0x2b4408 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B440Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 17984));
        if (branch_taken_0x2b4408) {
            ctx->pc = 0x2B43F8u;
            goto label_2b43f8;
        }
    }
    ctx->pc = 0x2B4410u;
label_2b4410:
    // 0x2b4410: 0x1260000a
    ctx->pc = 0x2B4410u;
    {
        const bool branch_taken_0x2b4410 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4414u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2b4410) {
            ctx->pc = 0x2B443Cu;
            goto label_2b443c;
        }
    }
    ctx->pc = 0x2B4418u;
    // 0x2b4418: 0x3c04003b
    ctx->pc = 0x2b4418u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b441c: 0x24844648
    ctx->pc = 0x2b441cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17992));
    // 0x2b4420: 0x260282d
    ctx->pc = 0x2b4420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4424: 0xdfb30030
    ctx->pc = 0x2b4424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4428: 0xdfb20020
    ctx->pc = 0x2b4428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b442c: 0xdfb10010
    ctx->pc = 0x2b442cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4430: 0xdfb00000
    ctx->pc = 0x2b4430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4434: 0x80b4a34
    ctx->pc = 0x2B4434u;
    ctx->pc = 0x2B4438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2B443Cu;
label_2b443c:
    // 0x2b443c: 0xdfb30030
    ctx->pc = 0x2b443cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4440: 0xdfb20020
    ctx->pc = 0x2b4440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4444: 0xdfb10010
    ctx->pc = 0x2b4444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4448: 0xdfb00000
    ctx->pc = 0x2b4448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b444c: 0x3e00008
    ctx->pc = 0x2B444Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4450u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B43A8u: goto label_2b43a8;
            case 0x2B43ACu: goto label_2b43ac;
            case 0x2B43BCu: goto label_2b43bc;
            case 0x2B43F8u: goto label_2b43f8;
            case 0x2B4410u: goto label_2b4410;
            case 0x2B443Cu: goto label_2b443c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4454u;
}
