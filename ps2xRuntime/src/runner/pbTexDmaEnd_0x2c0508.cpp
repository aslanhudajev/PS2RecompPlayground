#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbTexDmaEnd
// Address: 0x2c0508 - 0x2c05d8
void pbTexDmaEnd_0x2c0508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0508u;

    // 0x2c0508: 0x27bdffd0
    ctx->pc = 0x2c0508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c050c: 0xffbf0020
    ctx->pc = 0x2c050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c0510: 0xffb10010
    ctx->pc = 0x2c0510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0514: 0xffb00000
    ctx->pc = 0x2c0514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0518: 0x3c110037
    ctx->pc = 0x2c0518u;
    SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
    // 0x2c051c: 0x24840001
    ctx->pc = 0x2c051cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c0520: 0xc0aac18
    ctx->pc = 0x2C0520u;
    SET_GPR_U32(ctx, 31, 0x2C0528u);
    ctx->pc = 0x2C0524u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 10588)));
    ctx->pc = 0x2AB060u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetTexSeq_0x2ab060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0528u; }
    }
    if (ctx->pc != 0x2C0528u) { return; }
    ctx->pc = 0x2C0528u;
    // 0x2c0528: 0x40802d
    ctx->pc = 0x2c0528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c052c: 0x3c027000
    ctx->pc = 0x2c052cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x2c0530: 0xae020000
    ctx->pc = 0x2c0530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c0534: 0x26100004
    ctx->pc = 0x2c0534u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c0538: 0xae000000
    ctx->pc = 0x2c0538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c053c: 0x26100004
    ctx->pc = 0x2c053cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c0540: 0xae000000
    ctx->pc = 0x2c0540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c0544: 0x26100004
    ctx->pc = 0x2c0544u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c0548: 0xae000000
    ctx->pc = 0x2c0548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c054c: 0x26100004
    ctx->pc = 0x2c054cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c0550: 0xc0c0e18
    ctx->pc = 0x2C0550u;
    SET_GPR_U32(ctx, 31, 0x2C0558u);
    ctx->pc = 0x2C0554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0558u; }
    }
    if (ctx->pc != 0x2C0558u) { return; }
    ctx->pc = 0x2C0558u;
    // 0x2c0558: 0xae30295c
    ctx->pc = 0x2c0558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10588), GPR_U32(ctx, 16));
    // 0x2c055c: 0x3c030037
    ctx->pc = 0x2c055cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2c0560: 0x3c020037
    ctx->pc = 0x2c0560u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0564: 0x8c422960
    ctx->pc = 0x2c0564u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10592)));
    // 0x2c0568: 0x2028023
    ctx->pc = 0x2c0568u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c056c: 0xac702968
    ctx->pc = 0x2c056cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10600), GPR_U32(ctx, 16));
    // 0x2c0570: 0x3c020037
    ctx->pc = 0x2c0570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0574: 0x8c42296c
    ctx->pc = 0x2c0574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10604)));
    // 0x2c0578: 0x50102b
    ctx->pc = 0x2c0578u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c057c: 0x1040000d
    ctx->pc = 0x2C057Cu;
    {
        const bool branch_taken_0x2c057c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0580u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2c057c) {
            ctx->pc = 0x2C05B4u;
            goto label_2c05b4;
        }
    }
    ctx->pc = 0x2C0584u;
    // 0x2c0584: 0x8c422964
    ctx->pc = 0x2c0584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10596)));
    // 0x2c0588: 0x50102b
    ctx->pc = 0x2c0588u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c058c: 0x10400005
    ctx->pc = 0x2C058Cu;
    {
        const bool branch_taken_0x2c058c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0590u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2c058c) {
            ctx->pc = 0x2C05A4u;
            goto label_2c05a4;
        }
    }
    ctx->pc = 0x2C0594u;
    // 0x2c0594: 0x24846d20
    ctx->pc = 0x2c0594u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27936));
    // 0x2c0598: 0x3c050080
    ctx->pc = 0x2c0598u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x2c059c: 0xc0b49a6
    ctx->pc = 0x2C059Cu;
    SET_GPR_U32(ctx, 31, 0x2C05A4u);
    ctx->pc = 0x2C05A0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 128));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C05A4u; }
    }
    if (ctx->pc != 0x2C05A4u) { return; }
    ctx->pc = 0x2C05A4u;
label_2c05a4:
    // 0x2c05a4: 0x3c020037
    ctx->pc = 0x2c05a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c05a8: 0x3c030037
    ctx->pc = 0x2c05a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2c05ac: 0x8c632968
    ctx->pc = 0x2c05acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10600)));
    // 0x2c05b0: 0xac43296c
    ctx->pc = 0x2c05b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10604), GPR_U32(ctx, 3));
label_2c05b4:
    // 0x2c05b4: 0x3c020037
    ctx->pc = 0x2c05b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c05b8: 0x3c030037
    ctx->pc = 0x2c05b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2c05bc: 0x8c632968
    ctx->pc = 0x2c05bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10600)));
    // 0x2c05c0: 0xac432984
    ctx->pc = 0x2c05c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10628), GPR_U32(ctx, 3));
    // 0x2c05c4: 0xdfbf0020
    ctx->pc = 0x2c05c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c05c8: 0xdfb10010
    ctx->pc = 0x2c05c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c05cc: 0xdfb00000
    ctx->pc = 0x2c05ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c05d0: 0x3e00008
    ctx->pc = 0x2C05D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C05D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C05A4u: goto label_2c05a4;
            case 0x2C05B4u: goto label_2c05b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C05D8u;
}
