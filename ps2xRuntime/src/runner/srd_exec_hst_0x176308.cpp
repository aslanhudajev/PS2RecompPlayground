#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: srd_exec_hst
// Address: 0x176308 - 0x1763bc
void srd_exec_hst_0x176308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("srd_exec_hst");


    ctx->pc = 0x176308u;

    // 0x176308: 0x27bdffc0
    ctx->pc = 0x176308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17630c: 0x24030001
    ctx->pc = 0x17630cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x176310: 0xffb10020
    ctx->pc = 0x176310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x176314: 0xffb00010
    ctx->pc = 0x176314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x176318: 0x3c110024
    ctx->pc = 0x176318u;
    SET_GPR_U32(ctx, 17, ((uint32_t)36 << 16));
    // 0x17631c: 0xffbf0030
    ctx->pc = 0x17631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x176320: 0x26308770
    ctx->pc = 0x176320u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294936432));
    // 0x176324: 0x8e020004
    ctx->pc = 0x176324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176328: 0x1443000e
    ctx->pc = 0x176328u;
    {
        const bool branch_taken_0x176328 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17632Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x176328) {
            ctx->pc = 0x176364u;
            goto label_176364;
        }
    }
    ctx->pc = 0x176330u;
    // 0x176330: 0x8e040018
    ctx->pc = 0x176330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x176334: 0x8e05001c
    ctx->pc = 0x176334u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x176338: 0xc0563ce
    ctx->pc = 0x176338u;
    SET_GPR_U32(ctx, 31, 0x176340u);
    ctx->pc = 0x17633Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->pc = 0x158F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x158f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176340u; }
        else if (ctx->pc != 0x176340u) { ctx->pc = 0x176340u; }
    }
    if (ctx->pc != 0x176340u) { return; }
    ctx->pc = 0x176340u;
    // 0x176340: 0x40182d
    ctx->pc = 0x176340u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176344: 0x4610003
    ctx->pc = 0x176344u;
    {
        const bool branch_taken_0x176344 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x176348u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x176344) {
            ctx->pc = 0x176354u;
            goto label_176354;
        }
    }
    ctx->pc = 0x17634Cu;
    // 0x17634c: 0x24020009
    ctx->pc = 0x17634cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x176350: 0xae030024
    ctx->pc = 0x176350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_176354:
    // 0x176354: 0xae020004
    ctx->pc = 0x176354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x176358: 0x26308770
    ctx->pc = 0x176358u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294936432));
    // 0x17635c: 0x24030002
    ctx->pc = 0x17635cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x176360: 0x8e020004
    ctx->pc = 0x176360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_176364:
    // 0x176364: 0x14430011
    ctx->pc = 0x176364u;
    {
        const bool branch_taken_0x176364 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x176368u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x176364) {
            ctx->pc = 0x1763ACu;
            goto label_1763ac;
        }
    }
    ctx->pc = 0x17636Cu;
    // 0x17636c: 0x8e040018
    ctx->pc = 0x17636cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x176370: 0x24050001
    ctx->pc = 0x176370u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x176374: 0xc05651a
    ctx->pc = 0x176374u;
    SET_GPR_U32(ctx, 31, 0x17637Cu);
    ctx->pc = 0x176378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x159468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceIoctl_0x159468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17637Cu; }
        else if (ctx->pc != 0x17637Cu) { ctx->pc = 0x17637Cu; }
    }
    if (ctx->pc != 0x17637Cu) { return; }
    ctx->pc = 0x17637Cu;
    // 0x17637c: 0x4410006
    ctx->pc = 0x17637Cu;
    {
        const bool branch_taken_0x17637c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x176380u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17637c) {
            ctx->pc = 0x176398u;
            goto label_176398;
        }
    }
    ctx->pc = 0x176384u;
    // 0x176384: 0x24030009
    ctx->pc = 0x176384u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x176388: 0x2402ffff
    ctx->pc = 0x176388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17638c: 0xae020024
    ctx->pc = 0x17638cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x176390: 0x10000005
    ctx->pc = 0x176390u;
    {
        const bool branch_taken_0x176390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176394u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x176390) {
            ctx->pc = 0x1763A8u;
            goto label_1763a8;
        }
    }
    ctx->pc = 0x176398u;
label_176398:
    // 0x176398: 0x14400004
    ctx->pc = 0x176398u;
    {
        const bool branch_taken_0x176398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17639Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x176398) {
            ctx->pc = 0x1763ACu;
            goto label_1763ac;
        }
    }
    ctx->pc = 0x1763A0u;
    // 0x1763a0: 0x24020003
    ctx->pc = 0x1763a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1763a4: 0xae020004
    ctx->pc = 0x1763a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1763a8:
    // 0x1763a8: 0xdfbf0030
    ctx->pc = 0x1763a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1763ac:
    // 0x1763ac: 0xdfb10020
    ctx->pc = 0x1763acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1763b0: 0xdfb00010
    ctx->pc = 0x1763b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1763b4: 0x3e00008
    ctx->pc = 0x1763B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1763B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176354u: goto label_176354;
            case 0x176364u: goto label_176364;
            case 0x176398u: goto label_176398;
            case 0x1763A8u: goto label_1763a8;
            case 0x1763ACu: goto label_1763ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1763BCu;
}
