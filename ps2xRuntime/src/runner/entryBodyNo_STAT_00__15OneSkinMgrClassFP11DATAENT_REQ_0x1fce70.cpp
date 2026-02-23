#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBodyNo_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fce70 - 0x1fcf10
void entryBodyNo_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ_0x1fce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBodyNo_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fce70u;

    // 0x1fce70: 0x27bdffe0
    ctx->pc = 0x1fce70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fce74: 0x7fbf0010
    ctx->pc = 0x1fce74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fce78: 0x7fb00000
    ctx->pc = 0x1fce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fce7c: 0x8ca30008
    ctx->pc = 0x1fce7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fce80: 0x3c010052
    ctx->pc = 0x1fce80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fce84: 0x3c020027
    ctx->pc = 0x1fce84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fce88: 0x244223f0
    ctx->pc = 0x1fce88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9200));
    // 0x1fce8c: 0xac2394a8
    ctx->pc = 0x1fce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939816), GPR_U32(ctx, 3));
    // 0x1fce90: 0x3c010052
    ctx->pc = 0x1fce90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fce94: 0x8c2394a8
    ctx->pc = 0x1fce94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939816)));
    // 0x1fce98: 0x31880
    ctx->pc = 0x1fce98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fce9c: 0x431021
    ctx->pc = 0x1fce9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcea0: 0x8c420000
    ctx->pc = 0x1fcea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcea4: 0x3c010052
    ctx->pc = 0x1fcea4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcea8: 0xac2294a0
    ctx->pc = 0x1fcea8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939808), GPR_U32(ctx, 2));
    // 0x1fceac: 0x3c010052
    ctx->pc = 0x1fceacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fceb0: 0x8c2294a0
    ctx->pc = 0x1fceb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939808)));
    // 0x1fceb4: 0x14400003
    ctx->pc = 0x1FCEB4u;
    {
        const bool branch_taken_0x1fceb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FCEB8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fceb4) {
            ctx->pc = 0x1FCEC4u;
            goto label_1fcec4;
        }
    }
    ctx->pc = 0x1FCEBCu;
    // 0x1fcebc: 0x10000010
    ctx->pc = 0x1FCEBCu;
    {
        const bool branch_taken_0x1fcebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FCEC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1fcebc) {
            ctx->pc = 0x1FCF00u;
            goto label_1fcf00;
        }
    }
    ctx->pc = 0x1FCEC4u;
label_1fcec4:
    // 0x1fcec4: 0x3c010052
    ctx->pc = 0x1fcec4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcec8: 0xc07f9ec
    ctx->pc = 0x1FCEC8u;
    SET_GPR_U32(ctx, 31, 0x1FCED0u);
    ctx->pc = 0x1FCECCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939816)));
    ctx->pc = 0x1FE7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        tbl_set__15OneSkinMgrClassFi_0x1fe7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCED0u; }
        else if (ctx->pc != 0x1FCED0u) { ctx->pc = 0x1FCED0u; }
    }
    if (ctx->pc != 0x1FCED0u) { return; }
    ctx->pc = 0x1FCED0u;
    // 0x1fced0: 0x3c010052
    ctx->pc = 0x1fced0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fced4: 0x8c2494a0
    ctx->pc = 0x1fced4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939808)));
    // 0x1fced8: 0x2403ffff
    ctx->pc = 0x1fced8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcedc: 0x24020001
    ctx->pc = 0x1fcedcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcee0: 0x8c840008
    ctx->pc = 0x1fcee0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fcee4: 0x3c010052
    ctx->pc = 0x1fcee4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcee8: 0xac2494a4
    ctx->pc = 0x1fcee8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939812), GPR_U32(ctx, 4));
    // 0x1fceec: 0x3c010052
    ctx->pc = 0x1fceecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcef0: 0xac2094ac
    ctx->pc = 0x1fcef0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939820), GPR_U32(ctx, 0));
    // 0x1fcef4: 0x3c010052
    ctx->pc = 0x1fcef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcef8: 0xac2394c8
    ctx->pc = 0x1fcef8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939848), GPR_U32(ctx, 3));
    // 0x1fcefc: 0xae02000c
    ctx->pc = 0x1fcefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1fcf00:
    // 0x1fcf00: 0x7bbf0010
    ctx->pc = 0x1fcf00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcf04: 0x7bb00000
    ctx->pc = 0x1fcf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcf08: 0x3e00008
    ctx->pc = 0x1FCF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCF0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCEC4u: goto label_1fcec4;
            case 0x1FCF00u: goto label_1fcf00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FCF10u;
}
