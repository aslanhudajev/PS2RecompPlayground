#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: updateEntryStat__15OverlayMgrClassFii
// Address: 0x2021a0 - 0x20222c
void updateEntryStat__15OverlayMgrClassFii_0x2021a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("updateEntryStat__15OverlayMgrClassFii");


    ctx->pc = 0x2021a0u;

label_2021a0:
    // 0x2021a0: 0x2ca1000e
    ctx->pc = 0x2021a0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 5), 14));
label_2021a4:
    // 0x2021a4: 0x10200007
label_2021a8:
    if (ctx->pc == 0x2021A8u) {
        ctx->pc = 0x2021A8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        ctx->pc = 0x2021ACu;
        goto label_2021ac;
    }
    ctx->pc = 0x2021A4u;
    {
        const bool branch_taken_0x2021a4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x2021A8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x2021a4) {
            ctx->pc = 0x2021C4u;
            goto label_2021c4;
        }
    }
    ctx->pc = 0x2021ACu;
label_2021ac:
    // 0x2021ac: 0x246702c0
    ctx->pc = 0x2021acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 704));
label_2021b0:
    // 0x2021b0: 0x51880
    ctx->pc = 0x2021b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_2021b4:
    // 0x2021b4: 0x671821
    ctx->pc = 0x2021b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2021b8:
    // 0x2021b8: 0x8c630000
    ctx->pc = 0x2021b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2021bc:
    // 0x2021bc: 0x600008
label_2021c0:
    if (ctx->pc == 0x2021C0u) {
        ctx->pc = 0x2021C4u;
        goto label_2021c4;
    }
    ctx->pc = 0x2021BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2021A0u: goto label_2021a0;
            case 0x2021A4u: goto label_2021a4;
            case 0x2021A8u: goto label_2021a8;
            case 0x2021ACu: goto label_2021ac;
            case 0x2021B0u: goto label_2021b0;
            case 0x2021B4u: goto label_2021b4;
            case 0x2021B8u: goto label_2021b8;
            case 0x2021BCu: goto label_2021bc;
            case 0x2021C0u: goto label_2021c0;
            case 0x2021C4u: goto label_2021c4;
            case 0x2021C8u: goto label_2021c8;
            case 0x2021CCu: goto label_2021cc;
            case 0x2021D0u: goto label_2021d0;
            case 0x2021D4u: goto label_2021d4;
            case 0x2021D8u: goto label_2021d8;
            case 0x2021DCu: goto label_2021dc;
            case 0x2021E0u: goto label_2021e0;
            case 0x2021E4u: goto label_2021e4;
            case 0x2021E8u: goto label_2021e8;
            case 0x2021ECu: goto label_2021ec;
            case 0x2021F0u: goto label_2021f0;
            case 0x2021F4u: goto label_2021f4;
            case 0x2021F8u: goto label_2021f8;
            case 0x2021FCu: goto label_2021fc;
            case 0x202200u: goto label_202200;
            case 0x202204u: goto label_202204;
            case 0x202208u: goto label_202208;
            case 0x20220Cu: goto label_20220c;
            case 0x202210u: goto label_202210;
            case 0x202214u: goto label_202214;
            case 0x202218u: goto label_202218;
            case 0x20221Cu: goto label_20221c;
            case 0x202220u: goto label_202220;
            case 0x202224u: goto label_202224;
            case 0x202228u: goto label_202228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2021C4u;
label_2021c4:
    // 0x2021c4: 0xa080000a
    ctx->pc = 0x2021c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
label_2021c8:
    // 0x2021c8: 0xa080000b
    ctx->pc = 0x2021c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
label_2021cc:
    // 0x2021cc: 0xa080000c
    ctx->pc = 0x2021ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
label_2021d0:
    // 0x2021d0: 0xa080000d
    ctx->pc = 0x2021d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
label_2021d4:
    // 0x2021d4: 0xa0800002
    ctx->pc = 0x2021d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_2021d8:
    // 0x2021d8: 0x851821
    ctx->pc = 0x2021d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2021dc:
    // 0x2021dc: 0xa0800003
    ctx->pc = 0x2021dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_2021e0:
    // 0x2021e0: 0x10000010
label_2021e4:
    if (ctx->pc == 0x2021E4u) {
        ctx->pc = 0x2021E4u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x2021E8u;
        goto label_2021e8;
    }
    ctx->pc = 0x2021E0u;
    {
        const bool branch_taken_0x2021e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2021E4u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x2021e0) {
            ctx->pc = 0x202224u;
            goto label_202224;
        }
    }
    ctx->pc = 0x2021E8u;
label_2021e8:
    // 0x2021e8: 0xa0800001
    ctx->pc = 0x2021e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_2021ec:
    // 0x2021ec: 0xa080000a
    ctx->pc = 0x2021ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
label_2021f0:
    // 0x2021f0: 0xa080000b
    ctx->pc = 0x2021f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
label_2021f4:
    // 0x2021f4: 0xa080000c
    ctx->pc = 0x2021f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
label_2021f8:
    // 0x2021f8: 0xa080000d
    ctx->pc = 0x2021f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
label_2021fc:
    // 0x2021fc: 0xa0800004
    ctx->pc = 0x2021fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
label_202200:
    // 0x202200: 0xa0800005
    ctx->pc = 0x202200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
label_202204:
    // 0x202204: 0xa0800006
    ctx->pc = 0x202204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
label_202208:
    // 0x202208: 0xa0800007
    ctx->pc = 0x202208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
label_20220c:
    // 0x20220c: 0xa0800008
    ctx->pc = 0x20220cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
label_202210:
    // 0x202210: 0xa0800009
    ctx->pc = 0x202210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
label_202214:
    // 0x202214: 0xa0800002
    ctx->pc = 0x202214u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_202218:
    // 0x202218: 0x851821
    ctx->pc = 0x202218u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20221c:
    // 0x20221c: 0xa0800003
    ctx->pc = 0x20221cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_202220:
    // 0x202220: 0xa0660000
    ctx->pc = 0x202220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_202224:
    // 0x202224: 0x3e00008
label_202228:
    if (ctx->pc == 0x202228u) {
        ctx->pc = 0x20222Cu;
        goto label_fallthrough_0x202224;
    }
    ctx->pc = 0x202224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2021A0u: goto label_2021a0;
            case 0x2021A4u: goto label_2021a4;
            case 0x2021A8u: goto label_2021a8;
            case 0x2021ACu: goto label_2021ac;
            case 0x2021B0u: goto label_2021b0;
            case 0x2021B4u: goto label_2021b4;
            case 0x2021B8u: goto label_2021b8;
            case 0x2021BCu: goto label_2021bc;
            case 0x2021C0u: goto label_2021c0;
            case 0x2021C4u: goto label_2021c4;
            case 0x2021C8u: goto label_2021c8;
            case 0x2021CCu: goto label_2021cc;
            case 0x2021D0u: goto label_2021d0;
            case 0x2021D4u: goto label_2021d4;
            case 0x2021D8u: goto label_2021d8;
            case 0x2021DCu: goto label_2021dc;
            case 0x2021E0u: goto label_2021e0;
            case 0x2021E4u: goto label_2021e4;
            case 0x2021E8u: goto label_2021e8;
            case 0x2021ECu: goto label_2021ec;
            case 0x2021F0u: goto label_2021f0;
            case 0x2021F4u: goto label_2021f4;
            case 0x2021F8u: goto label_2021f8;
            case 0x2021FCu: goto label_2021fc;
            case 0x202200u: goto label_202200;
            case 0x202204u: goto label_202204;
            case 0x202208u: goto label_202208;
            case 0x20220Cu: goto label_20220c;
            case 0x202210u: goto label_202210;
            case 0x202214u: goto label_202214;
            case 0x202218u: goto label_202218;
            case 0x20221Cu: goto label_20221c;
            case 0x202220u: goto label_202220;
            case 0x202224u: goto label_202224;
            case 0x202228u: goto label_202228;
            default: break;
        }
        return;
    }
label_fallthrough_0x202224:
    ctx->pc = 0x20222Cu;
}
