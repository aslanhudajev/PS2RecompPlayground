#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_02__11MotMgrClassFP11DATAENT_REQ
// Address: 0x1fc2c0 - 0x1fc3a0
void entryExec_STAT_02__11MotMgrClassFP11DATAENT_REQ_0x1fc2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_02__11MotMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fc2c0u;

    // 0x1fc2c0: 0x8ca50008
    ctx->pc = 0x1fc2c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fc2c4: 0x3c030050
    ctx->pc = 0x1fc2c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1fc2c8: 0x24680e30
    ctx->pc = 0x1fc2c8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 3632));
    // 0x1fc2cc: 0x3c020051
    ctx->pc = 0x1fc2ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1fc2d0: 0x24441dd0
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7632));
    // 0x1fc2d4: 0x3c0101fc
    ctx->pc = 0x1fc2d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1fc2d8: 0x51840
    ctx->pc = 0x1fc2d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fc2dc: 0x651821
    ctx->pc = 0x1fc2dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fc2e0: 0x31880
    ctx->pc = 0x1fc2e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc2e4: 0x831821
    ctx->pc = 0x1fc2e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fc2e8: 0x52080
    ctx->pc = 0x1fc2e8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fc2ec: 0x810821
    ctx->pc = 0x1fc2ecu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1fc2f0: 0x8c2afc9c
    ctx->pc = 0x1fc2f0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 1), 4294966428)));
    // 0x1fc2f4: 0x3c049fff
    ctx->pc = 0x1fc2f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40959 << 16));
    // 0x1fc2f8: 0x70001628
    ctx->pc = 0x1fc2f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc2fc: 0x3486ffff
    ctx->pc = 0x1fc2fcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 4), 65535));
    // 0x1fc300: 0x10000017
    ctx->pc = 0x1FC300u;
    {
        const bool branch_taken_0x1fc300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC304u;
        SET_GPR_U32(ctx, 5, ((uint32_t)49152 << 16));
        if (branch_taken_0x1fc300) {
            ctx->pc = 0x1FC360u;
            goto label_1fc360;
        }
    }
    ctx->pc = 0x1FC308u;
label_1fc308:
    // 0x1fc308: 0x8c279424
    ctx->pc = 0x1fc308u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294939684)));
    // 0x1fc30c: 0x85490000
    ctx->pc = 0x1fc30cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1fc310: 0x24420001
    ctx->pc = 0x1fc310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc314: 0x3c010052
    ctx->pc = 0x1fc314u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc318: 0x8c249428
    ctx->pc = 0x1fc318u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939688)));
    // 0x1fc31c: 0x948c0
    ctx->pc = 0x1fc31cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 3));
    // 0x1fc320: 0x1094821
    ctx->pc = 0x1fc320u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1fc324: 0x254a0002
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 2));
    // 0x1fc328: 0x8c840000
    ctx->pc = 0x1fc328u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc32c: 0x3c010052
    ctx->pc = 0x1fc32cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc330: 0xe42021
    ctx->pc = 0x1fc330u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1fc334: 0xad240004
    ctx->pc = 0x1fc334u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
    // 0x1fc338: 0x8d240000
    ctx->pc = 0x1fc338u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc33c: 0x862024
    ctx->pc = 0x1fc33cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1fc340: 0xad240000
    ctx->pc = 0x1fc340u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x1fc344: 0x8d240000
    ctx->pc = 0x1fc344u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc348: 0x852025
    ctx->pc = 0x1fc348u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fc34c: 0xad240000
    ctx->pc = 0x1fc34cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x1fc350: 0x8c249428
    ctx->pc = 0x1fc350u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939688)));
    // 0x1fc354: 0x24840004
    ctx->pc = 0x1fc354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1fc358: 0x3c010052
    ctx->pc = 0x1fc358u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc35c: 0xac249428
    ctx->pc = 0x1fc35cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939688), GPR_U32(ctx, 4));
label_1fc360:
    // 0x1fc360: 0x3c010052
    ctx->pc = 0x1fc360u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc364: 0x8c24942c
    ctx->pc = 0x1fc364u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939692)));
    // 0x1fc368: 0x44202a
    ctx->pc = 0x1fc368u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x1fc36c: 0x1480ffe6
    ctx->pc = 0x1FC36Cu;
    {
        const bool branch_taken_0x1fc36c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FC370u;
        SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
        if (branch_taken_0x1fc36c) {
            ctx->pc = 0x1FC308u;
            goto label_1fc308;
        }
    }
    ctx->pc = 0x1FC374u;
    // 0x1fc374: 0x8c660000
    ctx->pc = 0x1fc374u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc378: 0x3c029fff
    ctx->pc = 0x1fc378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40959 << 16));
    // 0x1fc37c: 0x3445ffff
    ctx->pc = 0x1fc37cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1fc380: 0x3c04c000
    ctx->pc = 0x1fc380u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49152 << 16));
    // 0x1fc384: 0x2402ffff
    ctx->pc = 0x1fc384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc388: 0xc52824
    ctx->pc = 0x1fc388u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1fc38c: 0xac650000
    ctx->pc = 0x1fc38cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1fc390: 0x8c650000
    ctx->pc = 0x1fc390u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc394: 0xa42025
    ctx->pc = 0x1fc394u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fc398: 0x3e00008
    ctx->pc = 0x1FC398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC39Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FC308u: goto label_1fc308;
            case 0x1FC360u: goto label_1fc360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FC3A0u;
}
