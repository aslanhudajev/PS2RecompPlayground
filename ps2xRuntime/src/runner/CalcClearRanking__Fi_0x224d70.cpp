#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CalcClearRanking__Fi
// Address: 0x224d70 - 0x224dd0
void CalcClearRanking__Fi_0x224d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CalcClearRanking__Fi");


    ctx->pc = 0x224d70u;

    // 0x224d70: 0x3c010050
    ctx->pc = 0x224d70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224d74: 0x8c23dd28
    ctx->pc = 0x224d74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294958376)));
    // 0x224d78: 0x10600008
    ctx->pc = 0x224D78u;
    {
        const bool branch_taken_0x224d78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x224D7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x224d78) {
            ctx->pc = 0x224D9Cu;
            goto label_224d9c;
        }
    }
    ctx->pc = 0x224D80u;
    // 0x224d80: 0x3c010050
    ctx->pc = 0x224d80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x224d84: 0x8c23e070
    ctx->pc = 0x224d84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294959216)));
    // 0x224d88: 0x10600004
    ctx->pc = 0x224D88u;
    {
        const bool branch_taken_0x224d88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x224d88) {
            ctx->pc = 0x224D9Cu;
            goto label_224d9c;
        }
    }
    ctx->pc = 0x224D90u;
    // 0x224d90: 0x3c03002c
    ctx->pc = 0x224d90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x224d94: 0x10000003
    ctx->pc = 0x224D94u;
    {
        const bool branch_taken_0x224d94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224D98u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8880));
        if (branch_taken_0x224d94) {
            ctx->pc = 0x224DA4u;
            goto label_224da4;
        }
    }
    ctx->pc = 0x224D9Cu;
label_224d9c:
    // 0x224d9c: 0x3c03002c
    ctx->pc = 0x224d9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x224da0: 0x24632290
    ctx->pc = 0x224da0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8848));
label_224da4:
    // 0x224da4: 0x10000002
    ctx->pc = 0x224DA4u;
    {
        const bool branch_taken_0x224da4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224DA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 28));
        if (branch_taken_0x224da4) {
            ctx->pc = 0x224DB0u;
            goto label_224db0;
        }
    }
    ctx->pc = 0x224DACu;
label_224dac:
    // 0x224dac: 0x2442ffff
    ctx->pc = 0x224dacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_224db0:
    // 0x224db0: 0x18400005
    ctx->pc = 0x224DB0u;
    {
        const bool branch_taken_0x224db0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x224db0) {
            ctx->pc = 0x224DC8u;
            goto label_224dc8;
        }
    }
    ctx->pc = 0x224DB8u;
    // 0x224db8: 0x8ca30000
    ctx->pc = 0x224db8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x224dbc: 0x83182a
    ctx->pc = 0x224dbcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x224dc0: 0x5460fffa
    ctx->pc = 0x224DC0u;
    {
        const bool branch_taken_0x224dc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x224dc0) {
            ctx->pc = 0x224DC4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967292));
            ctx->pc = 0x224DACu;
            goto label_224dac;
        }
    }
    ctx->pc = 0x224DC8u;
label_224dc8:
    // 0x224dc8: 0x3e00008
    ctx->pc = 0x224DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224D9Cu: goto label_224d9c;
            case 0x224DA4u: goto label_224da4;
            case 0x224DACu: goto label_224dac;
            case 0x224DB0u: goto label_224db0;
            case 0x224DC8u: goto label_224dc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224DD0u;
}
