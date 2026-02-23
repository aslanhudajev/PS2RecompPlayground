#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__15OneSkinMgrClassFv
// Address: 0x1fcda0 - 0x1fce68
void init__15OneSkinMgrClassFv_0x1fcda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__15OneSkinMgrClassFv");


    ctx->pc = 0x1fcda0u;

    // 0x1fcda0: 0x3c030051
    ctx->pc = 0x1fcda0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1fcda4: 0x24632270
    ctx->pc = 0x1fcda4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8816));
    // 0x1fcda8: 0xac83000c
    ctx->pc = 0x1fcda8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1fcdac: 0x70003628
    ctx->pc = 0x1fcdacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fcdb0:
    // 0x1fcdb0: 0x8c85000c
    ctx->pc = 0x1fcdb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fcdb4: 0x24c60001
    ctx->pc = 0x1fcdb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fcdb8: 0x28c3004a
    ctx->pc = 0x1fcdb8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 74));
    // 0x1fcdbc: 0xaca00000
    ctx->pc = 0x1fcdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1fcdc0: 0x8c85000c
    ctx->pc = 0x1fcdc0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fcdc4: 0x24a5000c
    ctx->pc = 0x1fcdc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12));
    // 0x1fcdc8: 0x1460fff9
    ctx->pc = 0x1FCDC8u;
    {
        const bool branch_taken_0x1fcdc8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FCDCCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x1fcdc8) {
            ctx->pc = 0x1FCDB0u;
            goto label_1fcdb0;
        }
    }
    ctx->pc = 0x1FCDD0u;
    // 0x1fcdd0: 0x3c030027
    ctx->pc = 0x1fcdd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1fcdd4: 0x2465ddf0
    ctx->pc = 0x1fcdd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294958576));
    // 0x1fcdd8: 0x3c030051
    ctx->pc = 0x1fcdd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1fcddc: 0x246625f0
    ctx->pc = 0x1fcddcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 9712));
    // 0x1fcde0: 0x3c030052
    ctx->pc = 0x1fcde0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x1fcde4: 0x70004628
    ctx->pc = 0x1fcde4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fcde8: 0x246794d0
    ctx->pc = 0x1fcde8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294939856));
label_1fcdec:
    // 0x1fcdec: 0x8ca40000
    ctx->pc = 0x1fcdecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fcdf0: 0x24030003
    ctx->pc = 0x1fcdf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fcdf4: 0x50830007
    ctx->pc = 0x1FCDF4u;
    {
        const bool branch_taken_0x1fcdf4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1fcdf4) {
            ctx->pc = 0x1FCDF8u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
            ctx->pc = 0x1FCE14u;
            goto label_1fce14;
        }
    }
    ctx->pc = 0x1FCDFCu;
    // 0x1fcdfc: 0x24030001
    ctx->pc = 0x1fcdfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fce00: 0x10830003
    ctx->pc = 0x1FCE00u;
    {
        const bool branch_taken_0x1fce00 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1fce00) {
            ctx->pc = 0x1FCE10u;
            goto label_1fce10;
        }
    }
    ctx->pc = 0x1FCE08u;
    // 0x1fce08: 0xacc00000
    ctx->pc = 0x1fce08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1fce0c: 0xa0e00000
    ctx->pc = 0x1fce0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_1fce10:
    // 0x1fce10: 0x25080001
    ctx->pc = 0x1fce10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1fce14:
    // 0x1fce14: 0x2903038e
    ctx->pc = 0x1fce14u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), 910));
    // 0x1fce18: 0x24a50004
    ctx->pc = 0x1fce18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fce1c: 0x24c60004
    ctx->pc = 0x1fce1cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1fce20: 0x1460fff2
    ctx->pc = 0x1FCE20u;
    {
        const bool branch_taken_0x1fce20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FCE24u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1fce20) {
            ctx->pc = 0x1FCDECu;
            goto label_1fcdec;
        }
    }
    ctx->pc = 0x1FCE28u;
    // 0x1fce28: 0x3c030052
    ctx->pc = 0x1fce28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x1fce2c: 0x70002e28
    ctx->pc = 0x1fce2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fce30: 0x24649860
    ctx->pc = 0x1fce30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294940768));
label_1fce34:
    // 0x1fce34: 0x24030003
    ctx->pc = 0x1fce34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fce38: 0x50a30006
    ctx->pc = 0x1FCE38u;
    {
        const bool branch_taken_0x1fce38 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1fce38) {
            ctx->pc = 0x1FCE3Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x1FCE54u;
            goto label_1fce54;
        }
    }
    ctx->pc = 0x1FCE40u;
    // 0x1fce40: 0x24030001
    ctx->pc = 0x1fce40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fce44: 0x10a30002
    ctx->pc = 0x1FCE44u;
    {
        const bool branch_taken_0x1fce44 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1fce44) {
            ctx->pc = 0x1FCE50u;
            goto label_1fce50;
        }
    }
    ctx->pc = 0x1FCE4Cu;
    // 0x1fce4c: 0xa0800000
    ctx->pc = 0x1fce4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1fce50:
    // 0x1fce50: 0x24a50001
    ctx->pc = 0x1fce50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1fce54:
    // 0x1fce54: 0x28a30034
    ctx->pc = 0x1fce54u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 52));
    // 0x1fce58: 0x1460fff6
    ctx->pc = 0x1FCE58u;
    {
        const bool branch_taken_0x1fce58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FCE5Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1fce58) {
            ctx->pc = 0x1FCE34u;
            goto label_1fce34;
        }
    }
    ctx->pc = 0x1FCE60u;
    // 0x1fce60: 0x3e00008
    ctx->pc = 0x1FCE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCDB0u: goto label_1fcdb0;
            case 0x1FCDECu: goto label_1fcdec;
            case 0x1FCE10u: goto label_1fce10;
            case 0x1FCE14u: goto label_1fce14;
            case 0x1FCE34u: goto label_1fce34;
            case 0x1FCE50u: goto label_1fce50;
            case 0x1FCE54u: goto label_1fce54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FCE68u;
}
