#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitMbTypePpic
// Address: 0x18a8d8 - 0x18a9fc
void mpvvlc_InitMbTypePpic_0x18a8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitMbTypePpic");


    ctx->pc = 0x18a8d8u;

    // 0x18a8d8: 0x3c020024
    ctx->pc = 0x18a8d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18a8dc: 0x24041106
    ctx->pc = 0x18a8dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4358));
    // 0x18a8e0: 0x24421f78
    ctx->pc = 0x18a8e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8056));
    // 0x18a8e4: 0x182d
    ctx->pc = 0x18a8e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a8e8:
    // 0x18a8e8: 0xa4440000
    ctx->pc = 0x18a8e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a8ec: 0x2463ffff
    ctx->pc = 0x18a8ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18a8f0: 0x24420002
    ctx->pc = 0x18a8f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18a8f4: 0x0
    ctx->pc = 0x18a8f4u;
    // NOP
    // 0x18a8f8: 0x0
    ctx->pc = 0x18a8f8u;
    // NOP
    // 0x18a8fc: 0x461fffa
    ctx->pc = 0x18A8FCu;
    {
        const bool branch_taken_0x18a8fc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18a8fc) {
            ctx->pc = 0x18A8E8u;
            goto label_18a8e8;
        }
    }
    ctx->pc = 0x18A904u;
    // 0x18a904: 0x24041205
    ctx->pc = 0x18a904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4613));
    // 0x18a908: 0x182d
    ctx->pc = 0x18a908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a90c: 0x0
    ctx->pc = 0x18a90cu;
    // NOP
label_18a910:
    // 0x18a910: 0xa4440000
    ctx->pc = 0x18a910u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a914: 0x2463ffff
    ctx->pc = 0x18a914u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18a918: 0x24420002
    ctx->pc = 0x18a918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18a91c: 0x0
    ctx->pc = 0x18a91cu;
    // NOP
    // 0x18a920: 0x0
    ctx->pc = 0x18a920u;
    // NOP
    // 0x18a924: 0x461fffa
    ctx->pc = 0x18A924u;
    {
        const bool branch_taken_0x18a924 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18a924) {
            ctx->pc = 0x18A910u;
            goto label_18a910;
        }
    }
    ctx->pc = 0x18A92Cu;
    // 0x18a92c: 0x24041a05
    ctx->pc = 0x18a92cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6661));
    // 0x18a930: 0x182d
    ctx->pc = 0x18a930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a934: 0x0
    ctx->pc = 0x18a934u;
    // NOP
label_18a938:
    // 0x18a938: 0xa4440000
    ctx->pc = 0x18a938u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a93c: 0x2463ffff
    ctx->pc = 0x18a93cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18a940: 0x24420002
    ctx->pc = 0x18a940u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18a944: 0x0
    ctx->pc = 0x18a944u;
    // NOP
    // 0x18a948: 0x0
    ctx->pc = 0x18a948u;
    // NOP
    // 0x18a94c: 0x461fffa
    ctx->pc = 0x18A94Cu;
    {
        const bool branch_taken_0x18a94c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18a94c) {
            ctx->pc = 0x18A938u;
            goto label_18a938;
        }
    }
    ctx->pc = 0x18A954u;
    // 0x18a954: 0x24040105
    ctx->pc = 0x18a954u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 261));
    // 0x18a958: 0x182d
    ctx->pc = 0x18a958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a95c: 0x0
    ctx->pc = 0x18a95cu;
    // NOP
label_18a960:
    // 0x18a960: 0xa4440000
    ctx->pc = 0x18a960u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a964: 0x2463ffff
    ctx->pc = 0x18a964u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18a968: 0x24420002
    ctx->pc = 0x18a968u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18a96c: 0x0
    ctx->pc = 0x18a96cu;
    // NOP
    // 0x18a970: 0x0
    ctx->pc = 0x18a970u;
    // NOP
    // 0x18a974: 0x461fffa
    ctx->pc = 0x18A974u;
    {
        const bool branch_taken_0x18a974 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18a974) {
            ctx->pc = 0x18A960u;
            goto label_18a960;
        }
    }
    ctx->pc = 0x18A97Cu;
    // 0x18a97c: 0x24040803
    ctx->pc = 0x18a97cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2051));
    // 0x18a980: 0x24030003
    ctx->pc = 0x18a980u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a984: 0x0
    ctx->pc = 0x18a984u;
    // NOP
label_18a988:
    // 0x18a988: 0xa4440000
    ctx->pc = 0x18a988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a98c: 0x2463ffff
    ctx->pc = 0x18a98cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18a990: 0x24420002
    ctx->pc = 0x18a990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18a994: 0x0
    ctx->pc = 0x18a994u;
    // NOP
    // 0x18a998: 0x0
    ctx->pc = 0x18a998u;
    // NOP
    // 0x18a99c: 0x461fffa
    ctx->pc = 0x18A99Cu;
    {
        const bool branch_taken_0x18a99c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18a99c) {
            ctx->pc = 0x18A988u;
            goto label_18a988;
        }
    }
    ctx->pc = 0x18A9A4u;
    // 0x18a9a4: 0x24040202
    ctx->pc = 0x18a9a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 514));
    // 0x18a9a8: 0x24030007
    ctx->pc = 0x18a9a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18a9ac: 0x0
    ctx->pc = 0x18a9acu;
    // NOP
label_18a9b0:
    // 0x18a9b0: 0xa4440000
    ctx->pc = 0x18a9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a9b4: 0x2463ffff
    ctx->pc = 0x18a9b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18a9b8: 0x24420002
    ctx->pc = 0x18a9b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18a9bc: 0x0
    ctx->pc = 0x18a9bcu;
    // NOP
    // 0x18a9c0: 0x0
    ctx->pc = 0x18a9c0u;
    // NOP
    // 0x18a9c4: 0x461fffa
    ctx->pc = 0x18A9C4u;
    {
        const bool branch_taken_0x18a9c4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18a9c4) {
            ctx->pc = 0x18A9B0u;
            goto label_18a9b0;
        }
    }
    ctx->pc = 0x18A9CCu;
    // 0x18a9cc: 0x24040a01
    ctx->pc = 0x18a9ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2561));
    // 0x18a9d0: 0x2403000f
    ctx->pc = 0x18a9d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18a9d4: 0x0
    ctx->pc = 0x18a9d4u;
    // NOP
label_18a9d8:
    // 0x18a9d8: 0xa4440000
    ctx->pc = 0x18a9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a9dc: 0x2463ffff
    ctx->pc = 0x18a9dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18a9e0: 0x24420002
    ctx->pc = 0x18a9e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18a9e4: 0x0
    ctx->pc = 0x18a9e4u;
    // NOP
    // 0x18a9e8: 0x0
    ctx->pc = 0x18a9e8u;
    // NOP
    // 0x18a9ec: 0x461fffa
    ctx->pc = 0x18A9ECu;
    {
        const bool branch_taken_0x18a9ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18a9ec) {
            ctx->pc = 0x18A9D8u;
            goto label_18a9d8;
        }
    }
    ctx->pc = 0x18A9F4u;
    // 0x18a9f4: 0x3e00008
    ctx->pc = 0x18A9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A8E8u: goto label_18a8e8;
            case 0x18A910u: goto label_18a910;
            case 0x18A938u: goto label_18a938;
            case 0x18A960u: goto label_18a960;
            case 0x18A988u: goto label_18a988;
            case 0x18A9B0u: goto label_18a9b0;
            case 0x18A9D8u: goto label_18a9d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A9FCu;
}
