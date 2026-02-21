#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugObjSStep
// Address: 0x2bd680 - 0x2bd8e4
void pbDebugObjSStep_0x2bd680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bd680u;

    // 0x2bd680: 0x27bdff80
    ctx->pc = 0x2bd680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2bd684: 0xffbf0070
    ctx->pc = 0x2bd684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2bd688: 0xffb60060
    ctx->pc = 0x2bd688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2bd68c: 0xffb50050
    ctx->pc = 0x2bd68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2bd690: 0xffb40040
    ctx->pc = 0x2bd690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bd694: 0xffb30030
    ctx->pc = 0x2bd694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bd698: 0xffb20020
    ctx->pc = 0x2bd698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bd69c: 0xffb10010
    ctx->pc = 0x2bd69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bd6a0: 0xffb00000
    ctx->pc = 0x2bd6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bd6a4: 0xa0882d
    ctx->pc = 0x2bd6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd6a8: 0x24020003
    ctx->pc = 0x2bd6a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bd6ac: 0x12220012
    ctx->pc = 0x2BD6ACu;
    {
        const bool branch_taken_0x2bd6ac = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BD6B0u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bd6ac) {
            ctx->pc = 0x2BD6F8u;
            goto label_2bd6f8;
        }
    }
    ctx->pc = 0x2BD6B4u;
    // 0x2bd6b4: 0x2e220004
    ctx->pc = 0x2bd6b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 4));
    // 0x2bd6b8: 0x10400005
    ctx->pc = 0x2BD6B8u;
    {
        const bool branch_taken_0x2bd6b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD6BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bd6b8) {
            ctx->pc = 0x2BD6D0u;
            goto label_2bd6d0;
        }
    }
    ctx->pc = 0x2BD6C0u;
    // 0x2bd6c0: 0x12220008
    ctx->pc = 0x2BD6C0u;
    {
        const bool branch_taken_0x2bd6c0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BD6C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bd6c0) {
            ctx->pc = 0x2BD6E4u;
            goto label_2bd6e4;
        }
    }
    ctx->pc = 0x2BD6C8u;
    // 0x2bd6c8: 0x10000017
    ctx->pc = 0x2BD6C8u;
    {
        const bool branch_taken_0x2bd6c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd6c8) {
            ctx->pc = 0x2BD728u;
            goto label_2bd728;
        }
    }
    ctx->pc = 0x2BD6D0u;
label_2bd6d0:
    // 0x2bd6d0: 0x24020004
    ctx->pc = 0x2bd6d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bd6d4: 0x1222000f
    ctx->pc = 0x2BD6D4u;
    {
        const bool branch_taken_0x2bd6d4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BD6D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bd6d4) {
            ctx->pc = 0x2BD714u;
            goto label_2bd714;
        }
    }
    ctx->pc = 0x2BD6DCu;
    // 0x2bd6dc: 0x10000012
    ctx->pc = 0x2BD6DCu;
    {
        const bool branch_taken_0x2bd6dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd6dc) {
            ctx->pc = 0x2BD728u;
            goto label_2bd728;
        }
    }
    ctx->pc = 0x2BD6E4u;
label_2bd6e4:
    // 0x2bd6e4: 0x8c422740
    ctx->pc = 0x2bd6e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2bd6e8: 0x8c420000
    ctx->pc = 0x2bd6e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd6ec: 0x28420004
    ctx->pc = 0x2bd6ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x2bd6f0: 0x14400073
    ctx->pc = 0x2BD6F0u;
    {
        const bool branch_taken_0x2bd6f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD6F4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2bd6f0) {
            ctx->pc = 0x2BD8C0u;
            goto label_2bd8c0;
        }
    }
    ctx->pc = 0x2BD6F8u;
label_2bd6f8:
    // 0x2bd6f8: 0x3c020037
    ctx->pc = 0x2bd6f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bd6fc: 0x8c422740
    ctx->pc = 0x2bd6fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2bd700: 0x8c420000
    ctx->pc = 0x2bd700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd704: 0x28420003
    ctx->pc = 0x2bd704u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2bd708: 0x1440006d
    ctx->pc = 0x2BD708u;
    {
        const bool branch_taken_0x2bd708 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD70Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2bd708) {
            ctx->pc = 0x2BD8C0u;
            goto label_2bd8c0;
        }
    }
    ctx->pc = 0x2BD710u;
    // 0x2bd710: 0x3c020037
    ctx->pc = 0x2bd710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2bd714:
    // 0x2bd714: 0x8c422740
    ctx->pc = 0x2bd714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2bd718: 0x8c420000
    ctx->pc = 0x2bd718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd71c: 0x28420002
    ctx->pc = 0x2bd71cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x2bd720: 0x14400067
    ctx->pc = 0x2BD720u;
    {
        const bool branch_taken_0x2bd720 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD724u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2bd720) {
            ctx->pc = 0x2BD8C0u;
            goto label_2bd8c0;
        }
    }
    ctx->pc = 0x2BD728u;
label_2bd728:
    // 0x2bd728: 0xc0abc02
    ctx->pc = 0x2BD728u;
    SET_GPR_U32(ctx, 31, 0x2BD730u);
    ctx->pc = 0x2BD72Cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)59 << 16));
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD730u; }
    }
    if (ctx->pc != 0x2BD730u) { return; }
    ctx->pc = 0x2BD730u;
    // 0x2bd730: 0x40a82d
    ctx->pc = 0x2bd730u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd734: 0x3c020037
    ctx->pc = 0x2bd734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bd738: 0x24422630
    ctx->pc = 0x2bd738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9776));
    // 0x2bd73c: 0x111880
    ctx->pc = 0x2bd73cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2bd740: 0x62b021
    ctx->pc = 0x2bd740u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bd744: 0x10000056
    ctx->pc = 0x2BD744u;
    {
        const bool branch_taken_0x2bd744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD748u;
        SET_GPR_U32(ctx, 18, ((uint32_t)59 << 16));
        if (branch_taken_0x2bd744) {
            ctx->pc = 0x2BD8A0u;
            goto label_2bd8a0;
        }
    }
    ctx->pc = 0x2BD74Cu;
    // 0x2bd74c: 0x0
    ctx->pc = 0x2bd74cu;
    // NOP
label_2bd750:
    // 0x2bd750: 0xc0abc02
    ctx->pc = 0x2BD750u;
    SET_GPR_U32(ctx, 31, 0x2BD758u);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD758u; }
    }
    if (ctx->pc != 0x2BD758u) { return; }
    ctx->pc = 0x2BD758u;
    // 0x2bd758: 0x551023
    ctx->pc = 0x2bd758u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2bd75c: 0x3c0323c3
    ctx->pc = 0x2bd75cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)9155 << 16));
    // 0x2bd760: 0x34634600
    ctx->pc = 0x2bd760u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17920));
    // 0x2bd764: 0x62182b
    ctx->pc = 0x2bd764u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bd768: 0x1060004e
    ctx->pc = 0x2BD768u;
    {
        const bool branch_taken_0x2bd768 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD76Cu;
        SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
        if (branch_taken_0x2bd768) {
            ctx->pc = 0x2BD8A4u;
            goto label_2bd8a4;
        }
    }
    ctx->pc = 0x2BD770u;
    // 0x2bd770: 0xc0abc02
    ctx->pc = 0x2BD770u;
    SET_GPR_U32(ctx, 31, 0x2BD778u);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD778u; }
    }
    if (ctx->pc != 0x2BD778u) { return; }
    ctx->pc = 0x2BD778u;
    // 0x2bd778: 0x40a82d
    ctx->pc = 0x2bd778u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd77c: 0x3c04003b
    ctx->pc = 0x2bd77cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd780: 0xc0b4a34
    ctx->pc = 0x2BD780u;
    SET_GPR_U32(ctx, 31, 0x2BD788u);
    ctx->pc = 0x2BD784u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26600));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD788u; }
    }
    if (ctx->pc != 0x2BD788u) { return; }
    ctx->pc = 0x2BD788u;
    // 0x2bd788: 0x3c02003b
    ctx->pc = 0x2bd788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2bd78c: 0x24446808
    ctx->pc = 0x2bd78cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 26632));
    // 0x2bd790: 0x2e220007
    ctx->pc = 0x2bd790u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 7));
    // 0x2bd794: 0x10400003
    ctx->pc = 0x2BD794u;
    {
        const bool branch_taken_0x2bd794 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD798u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2bd794) {
            ctx->pc = 0x2BD7A4u;
            goto label_2bd7a4;
        }
    }
    ctx->pc = 0x2BD79Cu;
    // 0x2bd79c: 0x10000002
    ctx->pc = 0x2BD79Cu;
    {
        const bool branch_taken_0x2bd79c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD7A0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 0)));
        if (branch_taken_0x2bd79c) {
            ctx->pc = 0x2BD7A8u;
            goto label_2bd7a8;
        }
    }
    ctx->pc = 0x2BD7A4u;
label_2bd7a4:
    // 0x2bd7a4: 0x24456818
    ctx->pc = 0x2bd7a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 26648));
label_2bd7a8:
    // 0x2bd7a8: 0xc0b4a34
    ctx->pc = 0x2BD7A8u;
    SET_GPR_U32(ctx, 31, 0x2BD7B0u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7B0u; }
    }
    if (ctx->pc != 0x2BD7B0u) { return; }
    ctx->pc = 0x2BD7B0u;
    // 0x2bd7b0: 0x3c04003b
    ctx->pc = 0x2bd7b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd7b4: 0x24846820
    ctx->pc = 0x2bd7b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26656));
    // 0x2bd7b8: 0xc0b4a34
    ctx->pc = 0x2BD7B8u;
    SET_GPR_U32(ctx, 31, 0x2BD7C0u);
    ctx->pc = 0x2BD7BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7C0u; }
    }
    if (ctx->pc != 0x2BD7C0u) { return; }
    ctx->pc = 0x2BD7C0u;
    // 0x2bd7c0: 0x3c04003b
    ctx->pc = 0x2bd7c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd7c4: 0x24846838
    ctx->pc = 0x2bd7c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26680));
    // 0x2bd7c8: 0xc0b4a34
    ctx->pc = 0x2BD7C8u;
    SET_GPR_U32(ctx, 31, 0x2BD7D0u);
    ctx->pc = 0x2BD7CCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 108)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7D0u; }
    }
    if (ctx->pc != 0x2BD7D0u) { return; }
    ctx->pc = 0x2BD7D0u;
    // 0x2bd7d0: 0x8e820070
    ctx->pc = 0x2bd7d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2bd7d4: 0x8c45002c
    ctx->pc = 0x2bd7d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2bd7d8: 0x50a00005
    ctx->pc = 0x2BD7D8u;
    {
        const bool branch_taken_0x2bd7d8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd7d8) {
            ctx->pc = 0x2BD7DCu;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2BD7F0u;
            goto label_2bd7f0;
        }
    }
    ctx->pc = 0x2BD7E0u;
    // 0x2bd7e0: 0x3c04003b
    ctx->pc = 0x2bd7e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd7e4: 0xc0b4a34
    ctx->pc = 0x2BD7E4u;
    SET_GPR_U32(ctx, 31, 0x2BD7ECu);
    ctx->pc = 0x2BD7E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26704));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7ECu; }
    }
    if (ctx->pc != 0x2BD7ECu) { return; }
    ctx->pc = 0x2BD7ECu;
    // 0x2bd7ec: 0x3c04003b
    ctx->pc = 0x2bd7ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bd7f0:
    // 0x2bd7f0: 0xc0b4a34
    ctx->pc = 0x2BD7F0u;
    SET_GPR_U32(ctx, 31, 0x2BD7F8u);
    ctx->pc = 0x2BD7F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26720));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD7F8u; }
    }
    if (ctx->pc != 0x2BD7F8u) { return; }
    ctx->pc = 0x2BD7F8u;
    // 0x2bd7f8: 0x3c02003b
    ctx->pc = 0x2bd7f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2bd7fc: 0x24446878
    ctx->pc = 0x2bd7fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 26744));
    // 0x2bd800: 0x32020010
    ctx->pc = 0x2bd800u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 16));
    // 0x2bd804: 0x14400002
    ctx->pc = 0x2BD804u;
    {
        const bool branch_taken_0x2bd804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD808u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 26760));
        if (branch_taken_0x2bd804) {
            ctx->pc = 0x2BD810u;
            goto label_2bd810;
        }
    }
    ctx->pc = 0x2BD80Cu;
    // 0x2bd80c: 0x26456890
    ctx->pc = 0x2bd80cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 26768));
label_2bd810:
    // 0x2bd810: 0xc0b4a34
    ctx->pc = 0x2BD810u;
    SET_GPR_U32(ctx, 31, 0x2BD818u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD818u; }
    }
    if (ctx->pc != 0x2BD818u) { return; }
    ctx->pc = 0x2BD818u;
    // 0x2bd818: 0x3c02003b
    ctx->pc = 0x2bd818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2bd81c: 0x24446898
    ctx->pc = 0x2bd81cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 26776));
    // 0x2bd820: 0x32020008
    ctx->pc = 0x2bd820u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8));
    // 0x2bd824: 0x14400002
    ctx->pc = 0x2BD824u;
    {
        const bool branch_taken_0x2bd824 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD828u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 26760));
        if (branch_taken_0x2bd824) {
            ctx->pc = 0x2BD830u;
            goto label_2bd830;
        }
    }
    ctx->pc = 0x2BD82Cu;
    // 0x2bd82c: 0x26456890
    ctx->pc = 0x2bd82cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 26768));
label_2bd830:
    // 0x2bd830: 0xc0b4a34
    ctx->pc = 0x2BD830u;
    SET_GPR_U32(ctx, 31, 0x2BD838u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD838u; }
    }
    if (ctx->pc != 0x2BD838u) { return; }
    ctx->pc = 0x2BD838u;
    // 0x2bd838: 0x3c02003b
    ctx->pc = 0x2bd838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2bd83c: 0x244468a8
    ctx->pc = 0x2bd83cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 26792));
    // 0x2bd840: 0x32020004
    ctx->pc = 0x2bd840u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4));
    // 0x2bd844: 0x14400002
    ctx->pc = 0x2BD844u;
    {
        const bool branch_taken_0x2bd844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD848u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 26760));
        if (branch_taken_0x2bd844) {
            ctx->pc = 0x2BD850u;
            goto label_2bd850;
        }
    }
    ctx->pc = 0x2BD84Cu;
    // 0x2bd84c: 0x26456890
    ctx->pc = 0x2bd84cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 26768));
label_2bd850:
    // 0x2bd850: 0xc0b4a34
    ctx->pc = 0x2BD850u;
    SET_GPR_U32(ctx, 31, 0x2BD858u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD858u; }
    }
    if (ctx->pc != 0x2BD858u) { return; }
    ctx->pc = 0x2BD858u;
    // 0x2bd858: 0x3c02003b
    ctx->pc = 0x2bd858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2bd85c: 0x244468b8
    ctx->pc = 0x2bd85cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 26808));
    // 0x2bd860: 0x32020002
    ctx->pc = 0x2bd860u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 2));
    // 0x2bd864: 0x14400002
    ctx->pc = 0x2BD864u;
    {
        const bool branch_taken_0x2bd864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD868u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 26760));
        if (branch_taken_0x2bd864) {
            ctx->pc = 0x2BD870u;
            goto label_2bd870;
        }
    }
    ctx->pc = 0x2BD86Cu;
    // 0x2bd86c: 0x26456890
    ctx->pc = 0x2bd86cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 26768));
label_2bd870:
    // 0x2bd870: 0xc0b4a34
    ctx->pc = 0x2BD870u;
    SET_GPR_U32(ctx, 31, 0x2BD878u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD878u; }
    }
    if (ctx->pc != 0x2BD878u) { return; }
    ctx->pc = 0x2BD878u;
    // 0x2bd878: 0x32020001
    ctx->pc = 0x2bd878u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
    // 0x2bd87c: 0x14400002
    ctx->pc = 0x2BD87Cu;
    {
        const bool branch_taken_0x2bd87c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD880u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 26760));
        if (branch_taken_0x2bd87c) {
            ctx->pc = 0x2BD888u;
            goto label_2bd888;
        }
    }
    ctx->pc = 0x2BD884u;
    // 0x2bd884: 0x26456890
    ctx->pc = 0x2bd884u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 26768));
label_2bd888:
    // 0x2bd888: 0x3c04003b
    ctx->pc = 0x2bd888u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd88c: 0xc0b4a34
    ctx->pc = 0x2BD88Cu;
    SET_GPR_U32(ctx, 31, 0x2BD894u);
    ctx->pc = 0x2BD890u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26824));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD894u; }
    }
    if (ctx->pc != 0x2BD894u) { return; }
    ctx->pc = 0x2BD894u;
    // 0x2bd894: 0x3c04003b
    ctx->pc = 0x2bd894u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bd898: 0xc0b4a34
    ctx->pc = 0x2BD898u;
    SET_GPR_U32(ctx, 31, 0x2BD8A0u);
    ctx->pc = 0x2BD89Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26840));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD8A0u; }
    }
    if (ctx->pc != 0x2BD8A0u) { return; }
    ctx->pc = 0x2BD8A0u;
label_2bd8a0:
    // 0x2bd8a0: 0x3c06003b
    ctx->pc = 0x2bd8a0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2bd8a4:
    // 0x2bd8a4: 0x24040001
    ctx->pc = 0x2bd8a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd8a8: 0x282d
    ctx->pc = 0x2bd8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd8ac: 0xc0aa02e
    ctx->pc = 0x2BD8ACu;
    SET_GPR_U32(ctx, 31, 0x2BD8B4u);
    ctx->pc = 0x2BD8B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 26568));
    ctx->pc = 0x2A80B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGsSyncPath_0x2a80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD8B4u; }
    }
    if (ctx->pc != 0x2BD8B4u) { return; }
    ctx->pc = 0x2BD8B4u;
    // 0x2bd8b4: 0x40802d
    ctx->pc = 0x2bd8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd8b8: 0x1600ffa5
    ctx->pc = 0x2BD8B8u;
    {
        const bool branch_taken_0x2bd8b8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD8BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2bd8b8) {
            ctx->pc = 0x2BD750u;
            goto label_2bd750;
        }
    }
    ctx->pc = 0x2BD8C0u;
label_2bd8c0:
    // 0x2bd8c0: 0xdfb60060
    ctx->pc = 0x2bd8c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd8c4: 0xdfb50050
    ctx->pc = 0x2bd8c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd8c8: 0xdfb40040
    ctx->pc = 0x2bd8c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd8cc: 0xdfb30030
    ctx->pc = 0x2bd8ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd8d0: 0xdfb20020
    ctx->pc = 0x2bd8d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd8d4: 0xdfb10010
    ctx->pc = 0x2bd8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd8d8: 0xdfb00000
    ctx->pc = 0x2bd8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd8dc: 0x3e00008
    ctx->pc = 0x2BD8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BD6D0u: goto label_2bd6d0;
            case 0x2BD6E4u: goto label_2bd6e4;
            case 0x2BD6F8u: goto label_2bd6f8;
            case 0x2BD714u: goto label_2bd714;
            case 0x2BD728u: goto label_2bd728;
            case 0x2BD750u: goto label_2bd750;
            case 0x2BD7A4u: goto label_2bd7a4;
            case 0x2BD7A8u: goto label_2bd7a8;
            case 0x2BD7F0u: goto label_2bd7f0;
            case 0x2BD810u: goto label_2bd810;
            case 0x2BD830u: goto label_2bd830;
            case 0x2BD850u: goto label_2bd850;
            case 0x2BD870u: goto label_2bd870;
            case 0x2BD888u: goto label_2bd888;
            case 0x2BD8A0u: goto label_2bd8a0;
            case 0x2BD8A4u: goto label_2bd8a4;
            case 0x2BD8C0u: goto label_2bd8c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BD8E4u;
}
