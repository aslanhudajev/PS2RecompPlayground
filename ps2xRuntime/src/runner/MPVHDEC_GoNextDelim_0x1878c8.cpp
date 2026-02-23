#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVHDEC_GoNextDelim
// Address: 0x1878c8 - 0x187970
void MPVHDEC_GoNextDelim_0x1878c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVHDEC_GoNextDelim");


    ctx->pc = 0x1878c8u;

    // 0x1878c8: 0x27bdffb0
    ctx->pc = 0x1878c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1878cc: 0xffb30030
    ctx->pc = 0x1878ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1878d0: 0xffb20020
    ctx->pc = 0x1878d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1878d4: 0xc0982d
    ctx->pc = 0x1878d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878d8: 0xffb10010
    ctx->pc = 0x1878d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1878dc: 0x80902d
    ctx->pc = 0x1878dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878e0: 0xffb00000
    ctx->pc = 0x1878e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1878e4: 0xa0882d
    ctx->pc = 0x1878e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878e8: 0xffbf0040
    ctx->pc = 0x1878e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1878ec: 0x3c06ffff
    ctx->pc = 0x1878ecu;
    SET_GPR_U32(ctx, 6, ((uint32_t)65535 << 16));
    // 0x1878f0: 0x34c6ffff
    ctx->pc = 0x1878f0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
    // 0x1878f4: 0x8e440000
    ctx->pc = 0x1878f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1878f8: 0xc061676
    ctx->pc = 0x1878F8u;
    SET_GPR_U32(ctx, 31, 0x187900u);
    ctx->pc = 0x1878FCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1859D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SearchDelim_0x1859d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187900u; }
        else if (ctx->pc != 0x187900u) { ctx->pc = 0x187900u; }
    }
    if (ctx->pc != 0x187900u) { return; }
    ctx->pc = 0x187900u;
    // 0x187900: 0x40802d
    ctx->pc = 0x187900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187904: 0x16000005
    ctx->pc = 0x187904u;
    {
        const bool branch_taken_0x187904 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x187908u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x187904) {
            ctx->pc = 0x18791Cu;
            goto label_18791c;
        }
    }
    ctx->pc = 0x18790Cu;
    // 0x18790c: 0x8e250000
    ctx->pc = 0x18790cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187910: 0x8e440000
    ctx->pc = 0x187910u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187914: 0x10000007
    ctx->pc = 0x187914u;
    {
        const bool branch_taken_0x187914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187918u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x187914) {
            ctx->pc = 0x187934u;
            goto label_187934;
        }
    }
    ctx->pc = 0x18791Cu;
label_18791c:
    // 0x18791c: 0xc061610
    ctx->pc = 0x18791Cu;
    SET_GPR_U32(ctx, 31, 0x187924u);
    ctx->pc = 0x187920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187924u; }
        else if (ctx->pc != 0x187924u) { ctx->pc = 0x187924u; }
    }
    if (ctx->pc != 0x187924u) { return; }
    ctx->pc = 0x187924u;
    // 0x187924: 0x8e440000
    ctx->pc = 0x187924u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187928: 0x40182d
    ctx->pc = 0x187928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18792c: 0x8e220000
    ctx->pc = 0x18792cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187930: 0x2042823
    ctx->pc = 0x187930u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_187934:
    // 0x187934: 0x451023
    ctx->pc = 0x187934u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x187938: 0x852021
    ctx->pc = 0x187938u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18793c: 0xae220000
    ctx->pc = 0x18793cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x187940: 0x60102d
    ctx->pc = 0x187940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187944: 0xae440000
    ctx->pc = 0x187944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x187948: 0x8e630000
    ctx->pc = 0x187948u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18794c: 0xdfbf0040
    ctx->pc = 0x18794cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187950: 0x651821
    ctx->pc = 0x187950u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x187954: 0xdfb20020
    ctx->pc = 0x187954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187958: 0xae630000
    ctx->pc = 0x187958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x18795c: 0xdfb30030
    ctx->pc = 0x18795cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187960: 0xdfb10010
    ctx->pc = 0x187960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187964: 0xdfb00000
    ctx->pc = 0x187964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187968: 0x3e00008
    ctx->pc = 0x187968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18796Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18791Cu: goto label_18791c;
            case 0x187934u: goto label_187934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187970u;
}
