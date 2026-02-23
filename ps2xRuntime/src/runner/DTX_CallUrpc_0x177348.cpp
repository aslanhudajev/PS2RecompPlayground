#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTX_CallUrpc
// Address: 0x177348 - 0x17744c
void DTX_CallUrpc_0x177348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTX_CallUrpc");


    ctx->pc = 0x177348u;

    // 0x177348: 0x27bdffa0
    ctx->pc = 0x177348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17734c: 0xa0602d
    ctx->pc = 0x17734cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177350: 0xffb30040
    ctx->pc = 0x177350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x177354: 0x582d
    ctx->pc = 0x177354u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177358: 0xffb00010
    ctx->pc = 0x177358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17735c: 0xe0982d
    ctx->pc = 0x17735cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177360: 0xffbf0050
    ctx->pc = 0x177360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x177364: 0x100802d
    ctx->pc = 0x177364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177368: 0xffb20030
    ctx->pc = 0x177368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17736c: 0x18c00013
    ctx->pc = 0x17736Cu;
    {
        const bool branch_taken_0x17736c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x177370u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        if (branch_taken_0x17736c) {
            ctx->pc = 0x1773BCu;
            goto label_1773bc;
        }
    }
    ctx->pc = 0x177374u;
    // 0x177374: 0x24890400
    ctx->pc = 0x177374u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 4), 1024));
    // 0x177378: 0x3c07002e
    ctx->pc = 0x177378u;
    SET_GPR_U32(ctx, 7, ((uint32_t)46 << 16));
    // 0x17737c: 0x3c0d0024
    ctx->pc = 0x17737cu;
    SET_GPR_U32(ctx, 13, ((uint32_t)36 << 16));
    // 0x177380: 0x64080
    ctx->pc = 0x177380u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), 2));
    // 0x177384: 0x3c12002e
    ctx->pc = 0x177384u;
    SET_GPR_U32(ctx, 18, ((uint32_t)46 << 16));
    // 0x177388: 0x105080
    ctx->pc = 0x177388u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 16), 2));
    // 0x17738c: 0x0
    ctx->pc = 0x17738cu;
    // NOP
label_177390:
    // 0x177390: 0xb1080
    ctx->pc = 0x177390u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), 2));
    // 0x177394: 0x24e3f640
    ctx->pc = 0x177394u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294964800));
    // 0x177398: 0x4c2021
    ctx->pc = 0x177398u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x17739c: 0x256b0001
    ctx->pc = 0x17739cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x1773a0: 0x8c850000
    ctx->pc = 0x1773a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1773a4: 0x431021
    ctx->pc = 0x1773a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1773a8: 0x166182a
    ctx->pc = 0x1773a8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 6)));
    // 0x1773ac: 0x1460fff8
    ctx->pc = 0x1773ACu;
    {
        const bool branch_taken_0x1773ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1773B0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x1773ac) {
            ctx->pc = 0x177390u;
            goto label_177390;
        }
    }
    ctx->pc = 0x1773B4u;
    // 0x1773b4: 0x10000008
    ctx->pc = 0x1773B4u;
    {
        const bool branch_taken_0x1773b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1773B8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 4294965056));
        if (branch_taken_0x1773b4) {
            ctx->pc = 0x1773D8u;
            goto label_1773d8;
        }
    }
    ctx->pc = 0x1773BCu;
label_1773bc:
    // 0x1773bc: 0x24890400
    ctx->pc = 0x1773bcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 4), 1024));
    // 0x1773c0: 0x64080
    ctx->pc = 0x1773c0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1773c4: 0x3c07002e
    ctx->pc = 0x1773c4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)46 << 16));
    // 0x1773c8: 0x3c0d0024
    ctx->pc = 0x1773c8u;
    SET_GPR_U32(ctx, 13, ((uint32_t)36 << 16));
    // 0x1773cc: 0x3c12002e
    ctx->pc = 0x1773ccu;
    SET_GPR_U32(ctx, 18, ((uint32_t)46 << 16));
    // 0x1773d0: 0x105080
    ctx->pc = 0x1773d0u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1773d4: 0x2651f740
    ctx->pc = 0x1773d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 4294965056));
label_1773d8:
    // 0x1773d8: 0x120282d
    ctx->pc = 0x1773d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773dc: 0x25a48ff0
    ctx->pc = 0x1773dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 13), 4294938608));
    // 0x1773e0: 0x24e7f640
    ctx->pc = 0x1773e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294964800));
    // 0x1773e4: 0xafa00000
    ctx->pc = 0x1773e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1773e8: 0x302d
    ctx->pc = 0x1773e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773ec: 0x220482d
    ctx->pc = 0x1773ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773f0: 0xc055e72
    ctx->pc = 0x1773F0u;
    SET_GPR_U32(ctx, 31, 0x1773F8u);
    ctx->pc = 0x1773F4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773F8u; }
        else if (ctx->pc != 0x1773F8u) { ctx->pc = 0x1773F8u; }
    }
    if (ctx->pc != 0x1773F8u) { return; }
    ctx->pc = 0x1773F8u;
    // 0x1773f8: 0x1a00000d
    ctx->pc = 0x1773F8u;
    {
        const bool branch_taken_0x1773f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1773FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294965056)));
        if (branch_taken_0x1773f8) {
            ctx->pc = 0x177430u;
            goto label_177430;
        }
    }
    ctx->pc = 0x177400u;
    // 0x177400: 0x260382d
    ctx->pc = 0x177400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177404: 0x220482d
    ctx->pc = 0x177404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177408: 0x200582d
    ctx->pc = 0x177408u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17740c: 0x0
    ctx->pc = 0x17740cu;
    // NOP
label_177410:
    // 0x177410: 0x8d220000
    ctx->pc = 0x177410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x177414: 0x256bffff
    ctx->pc = 0x177414u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x177418: 0x25290004
    ctx->pc = 0x177418u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
    // 0x17741c: 0xace20000
    ctx->pc = 0x17741cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x177420: 0x24e70004
    ctx->pc = 0x177420u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x177424: 0x1560fffa
    ctx->pc = 0x177424u;
    {
        const bool branch_taken_0x177424 = (GPR_U32(ctx, 11) != GPR_U32(ctx, 0));
        if (branch_taken_0x177424) {
            ctx->pc = 0x177410u;
            goto label_177410;
        }
    }
    ctx->pc = 0x17742Cu;
    // 0x17742c: 0x8e42f740
    ctx->pc = 0x17742cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294965056)));
label_177430:
    // 0x177430: 0xdfbf0050
    ctx->pc = 0x177430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177434: 0xdfb30040
    ctx->pc = 0x177434u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177438: 0xdfb20030
    ctx->pc = 0x177438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17743c: 0xdfb10020
    ctx->pc = 0x17743cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177440: 0xdfb00010
    ctx->pc = 0x177440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177444: 0x3e00008
    ctx->pc = 0x177444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177448u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177390u: goto label_177390;
            case 0x1773BCu: goto label_1773bc;
            case 0x1773D8u: goto label_1773d8;
            case 0x177410u: goto label_177410;
            case 0x177430u: goto label_177430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17744Cu;
}
