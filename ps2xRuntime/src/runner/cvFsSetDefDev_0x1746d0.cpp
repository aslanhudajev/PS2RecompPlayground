#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsSetDefDev
// Address: 0x1746d0 - 0x17478c
void cvFsSetDefDev_0x1746d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsSetDefDev");


    ctx->pc = 0x1746d0u;

    // 0x1746d0: 0x27bdffd0
    ctx->pc = 0x1746d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1746d4: 0xffb00000
    ctx->pc = 0x1746d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1746d8: 0xffbf0020
    ctx->pc = 0x1746d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1746dc: 0x80802d
    ctx->pc = 0x1746dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1746e0: 0x16000008
    ctx->pc = 0x1746E0u;
    {
        const bool branch_taken_0x1746e0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1746E4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x1746e0) {
            ctx->pc = 0x174704u;
            goto label_174704;
        }
    }
    ctx->pc = 0x1746E8u;
    // 0x1746e8: 0x3c04002c
    ctx->pc = 0x1746e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1746ec: 0xdfbf0020
    ctx->pc = 0x1746ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1746f0: 0xdfb10010
    ctx->pc = 0x1746f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1746f4: 0x2484a4b0
    ctx->pc = 0x1746f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943920));
    // 0x1746f8: 0xdfb00000
    ctx->pc = 0x1746f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1746fc: 0x805d076
    ctx->pc = 0x1746FCu;
    ctx->pc = 0x174700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
    ctx->pc = 0x174704u;
label_174704:
    // 0x174704: 0xc051554
    ctx->pc = 0x174704u;
    SET_GPR_U32(ctx, 31, 0x17470Cu);
    ctx->pc = 0x174708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17470Cu; }
        else if (ctx->pc != 0x17470Cu) { ctx->pc = 0x17470Cu; }
    }
    if (ctx->pc != 0x17470Cu) { return; }
    ctx->pc = 0x17470Cu;
    // 0x17470c: 0x40882d
    ctx->pc = 0x17470cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174710: 0x12200018
    ctx->pc = 0x174710u;
    {
        const bool branch_taken_0x174710 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x174714u;
        SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
        if (branch_taken_0x174710) {
            ctx->pc = 0x174774u;
            goto label_174774;
        }
    }
    ctx->pc = 0x174718u;
    // 0x174718: 0xc05d168
    ctx->pc = 0x174718u;
    SET_GPR_U32(ctx, 31, 0x174720u);
    ctx->pc = 0x17471Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1745A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        toUpperStr_0x1745a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174720u; }
        else if (ctx->pc != 0x174720u) { ctx->pc = 0x174720u; }
    }
    if (ctx->pc != 0x174720u) { return; }
    ctx->pc = 0x174720u;
    // 0x174720: 0x200202d
    ctx->pc = 0x174720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174724: 0xc05d1e4
    ctx->pc = 0x174724u;
    SET_GPR_U32(ctx, 31, 0x17472Cu);
    ctx->pc = 0x174728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174790u;
    {
        const uint32_t __entryPc = ctx->pc;
        isExistDev_0x174790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17472Cu; }
        else if (ctx->pc != 0x17472Cu) { ctx->pc = 0x17472Cu; }
    }
    if (ctx->pc != 0x17472Cu) { return; }
    ctx->pc = 0x17472Cu;
    // 0x17472c: 0x24030001
    ctx->pc = 0x17472cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x174730: 0x1443000a
    ctx->pc = 0x174730u;
    {
        const bool branch_taken_0x174730 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x174734u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x174730) {
            ctx->pc = 0x17475Cu;
            goto label_17475c;
        }
    }
    ctx->pc = 0x174738u;
    // 0x174738: 0x200282d
    ctx->pc = 0x174738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17473c: 0x26260001
    ctx->pc = 0x17473cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1));
    // 0x174740: 0x3c04002e
    ctx->pc = 0x174740u;
    SET_GPR_U32(ctx, 4, ((uint32_t)46 << 16));
    // 0x174744: 0xdfbf0020
    ctx->pc = 0x174744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174748: 0xdfb10010
    ctx->pc = 0x174748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17474c: 0x2484f4e8
    ctx->pc = 0x17474cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964456));
    // 0x174750: 0xdfb00000
    ctx->pc = 0x174750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174754: 0x8050c90
    ctx->pc = 0x174754u;
    ctx->pc = 0x174758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x143240u;
    memcpy_0x143240(rdram, ctx, runtime); return;
    ctx->pc = 0x17475Cu;
label_17475c:
    // 0x17475c: 0xdfbf0020
    ctx->pc = 0x17475cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174760: 0xdfb10010
    ctx->pc = 0x174760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174764: 0x2484a4d8
    ctx->pc = 0x174764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943960));
    // 0x174768: 0xdfb00000
    ctx->pc = 0x174768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17476c: 0x805d076
    ctx->pc = 0x17476Cu;
    ctx->pc = 0x174770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
    ctx->pc = 0x174774u;
label_174774:
    // 0x174774: 0xdfbf0020
    ctx->pc = 0x174774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174778: 0xdfb10010
    ctx->pc = 0x174778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17477c: 0xdfb00000
    ctx->pc = 0x17477cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174780: 0xa040f4e8
    ctx->pc = 0x174780u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964456), (uint8_t)GPR_U32(ctx, 0));
    // 0x174784: 0x3e00008
    ctx->pc = 0x174784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174788u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174704u: goto label_174704;
            case 0x17475Cu: goto label_17475c;
            case 0x174774u: goto label_174774;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17478Cu;
}
