#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audIOP
// Address: 0x2233a0 - 0x2234c8
void audIOP_0x2233a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2233a0u;

    // 0x2233a0: 0x27bdffb0
    ctx->pc = 0x2233a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2233a4: 0xffbf0040
    ctx->pc = 0x2233a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2233a8: 0xffb20030
    ctx->pc = 0x2233a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2233ac: 0xffb10020
    ctx->pc = 0x2233acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2233b0: 0xffb00010
    ctx->pc = 0x2233b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2233b4: 0x80882d
    ctx->pc = 0x2233b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233b8: 0xa0902d
    ctx->pc = 0x2233b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233bc: 0xc088c96
    ctx->pc = 0x2233BCu;
    SET_GPR_U32(ctx, 31, 0x2233C4u);
    ctx->pc = 0x2233C0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x223258u;
    {
        const uint32_t __entryPc = ctx->pc;
        aux_update_0x223258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233C4u; }
    }
    if (ctx->pc != 0x2233C4u) { return; }
    ctx->pc = 0x2233C4u;
    // 0x2233c4: 0x3c02003c
    ctx->pc = 0x2233c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2233c8: 0x8c420f68
    ctx->pc = 0x2233c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3944)));
    // 0x2233cc: 0x10400007
    ctx->pc = 0x2233CCu;
    {
        const bool branch_taken_0x2233cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2233D0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2233cc) {
            ctx->pc = 0x2233ECu;
            goto label_2233ec;
        }
    }
    ctx->pc = 0x2233D4u;
    // 0x2233d4: 0x24840b00
    ctx->pc = 0x2233d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2816));
    // 0x2233d8: 0x282d
    ctx->pc = 0x2233d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233dc: 0xc0becc6
    ctx->pc = 0x2233DCu;
    SET_GPR_U32(ctx, 31, 0x2233E4u);
    ctx->pc = 0x2233E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2233E4u; }
    }
    if (ctx->pc != 0x2233E4u) { return; }
    ctx->pc = 0x2233E4u;
    // 0x2233e4: 0x10000032
    ctx->pc = 0x2233E4u;
    {
        const bool branch_taken_0x2233e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2233E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2233e4) {
            ctx->pc = 0x2234B0u;
            goto label_2234b0;
        }
    }
    ctx->pc = 0x2233ECu;
label_2233ec:
    // 0x2233ec: 0x3c030032
    ctx->pc = 0x2233ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2233f0: 0x24020001
    ctx->pc = 0x2233f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2233f4: 0xac6206ec
    ctx->pc = 0x2233f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1772), GPR_U32(ctx, 2));
    // 0x2233f8: 0x202d
    ctx->pc = 0x2233f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233fc: 0xc088cbc
    ctx->pc = 0x2233FCu;
    SET_GPR_U32(ctx, 31, 0x223404u);
    ctx->pc = 0x223400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2232F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitIOP_0x2232f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223404u; }
    }
    if (ctx->pc != 0x223404u) { return; }
    ctx->pc = 0x223404u;
    // 0x223404: 0x40802d
    ctx->pc = 0x223404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223408: 0x16000020
    ctx->pc = 0x223408u;
    {
        const bool branch_taken_0x223408 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x22340Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x223408) {
            ctx->pc = 0x22348Cu;
            goto label_22348c;
        }
    }
    ctx->pc = 0x223410u;
    // 0x223410: 0xc088d72
    ctx->pc = 0x223410u;
    SET_GPR_U32(ctx, 31, 0x223418u);
    ctx->pc = 0x2235C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mput_flush_0x2235c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223418u; }
    }
    if (ctx->pc != 0x223418u) { return; }
    ctx->pc = 0x223418u;
    // 0x223418: 0x10400004
    ctx->pc = 0x223418u;
    {
        const bool branch_taken_0x223418 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22341Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x223418) {
            ctx->pc = 0x22342Cu;
            goto label_22342c;
        }
    }
    ctx->pc = 0x223420u;
    // 0x223420: 0xc088cbc
    ctx->pc = 0x223420u;
    SET_GPR_U32(ctx, 31, 0x223428u);
    ctx->pc = 0x223424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2232F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitIOP_0x2232f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223428u; }
    }
    if (ctx->pc != 0x223428u) { return; }
    ctx->pc = 0x223428u;
    // 0x223428: 0x40802d
    ctx->pc = 0x223428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22342c:
    // 0x22342c: 0x16000017
    ctx->pc = 0x22342Cu;
    {
        const bool branch_taken_0x22342c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x223430u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22342c) {
            ctx->pc = 0x22348Cu;
            goto label_22348c;
        }
    }
    ctx->pc = 0x223434u;
    // 0x223434: 0xc0c0e18
    ctx->pc = 0x223434u;
    SET_GPR_U32(ctx, 31, 0x22343Cu);
    ctx->pc = 0x223438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22343Cu; }
    }
    if (ctx->pc != 0x22343Cu) { return; }
    ctx->pc = 0x22343Cu;
    // 0x22343c: 0xafa00000
    ctx->pc = 0x22343cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x223440: 0x3c04003c
    ctx->pc = 0x223440u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x223444: 0x24840f40
    ctx->pc = 0x223444u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3904));
    // 0x223448: 0x220282d
    ctx->pc = 0x223448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22344c: 0x24060001
    ctx->pc = 0x22344cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x223450: 0x3c07003c
    ctx->pc = 0x223450u;
    SET_GPR_U32(ctx, 7, ((uint32_t)60 << 16));
    // 0x223454: 0x24e70ac0
    ctx->pc = 0x223454u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2752));
    // 0x223458: 0x24080020
    ctx->pc = 0x223458u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x22345c: 0x3c09003c
    ctx->pc = 0x22345cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)60 << 16));
    // 0x223460: 0x25290b00
    ctx->pc = 0x223460u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 2816));
    // 0x223464: 0x240a0020
    ctx->pc = 0x223464u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 32));
    // 0x223468: 0xc0c18aa
    ctx->pc = 0x223468u;
    SET_GPR_U32(ctx, 31, 0x223470u);
    ctx->pc = 0x22346Cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3062A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x3062a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223470u; }
    }
    if (ctx->pc != 0x223470u) { return; }
    ctx->pc = 0x223470u;
    // 0x223470: 0x12400005
    ctx->pc = 0x223470u;
    {
        const bool branch_taken_0x223470 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x223474u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x223470) {
            ctx->pc = 0x223488u;
            goto label_223488;
        }
    }
    ctx->pc = 0x223478u;
    // 0x223478: 0x202d
    ctx->pc = 0x223478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22347c: 0xc088cbc
    ctx->pc = 0x22347Cu;
    SET_GPR_U32(ctx, 31, 0x223484u);
    ctx->pc = 0x223480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2232F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitIOP_0x2232f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223484u; }
    }
    if (ctx->pc != 0x223484u) { return; }
    ctx->pc = 0x223484u;
    // 0x223484: 0x40802d
    ctx->pc = 0x223484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223488:
    // 0x223488: 0x3c020032
    ctx->pc = 0x223488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22348c:
    // 0x22348c: 0x6010007
    ctx->pc = 0x22348Cu;
    {
        const bool branch_taken_0x22348c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x223490u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 1772), GPR_U32(ctx, 0));
        if (branch_taken_0x22348c) {
            ctx->pc = 0x2234ACu;
            goto label_2234ac;
        }
    }
    ctx->pc = 0x223494u;
    // 0x223494: 0x3c04003a
    ctx->pc = 0x223494u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x223498: 0x24846990
    ctx->pc = 0x223498u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27024));
    // 0x22349c: 0x220282d
    ctx->pc = 0x22349cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2234a0: 0xc0b492e
    ctx->pc = 0x2234A0u;
    SET_GPR_U32(ctx, 31, 0x2234A8u);
    ctx->pc = 0x2234A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2234A8u; }
    }
    if (ctx->pc != 0x2234A8u) { return; }
    ctx->pc = 0x2234A8u;
    // 0x2234a8: 0x2410ffff
    ctx->pc = 0x2234a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2234ac:
    // 0x2234ac: 0x200102d
    ctx->pc = 0x2234acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2234b0:
    // 0x2234b0: 0xdfbf0040
    ctx->pc = 0x2234b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2234b4: 0xdfb20030
    ctx->pc = 0x2234b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2234b8: 0xdfb10020
    ctx->pc = 0x2234b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2234bc: 0xdfb00010
    ctx->pc = 0x2234bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2234c0: 0x3e00008
    ctx->pc = 0x2234C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2234C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2233ECu: goto label_2233ec;
            case 0x22342Cu: goto label_22342c;
            case 0x223488u: goto label_223488;
            case 0x22348Cu: goto label_22348c;
            case 0x2234ACu: goto label_2234ac;
            case 0x2234B0u: goto label_2234b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2234C8u;
}
