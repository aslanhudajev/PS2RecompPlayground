#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: read_SYNCH_gun1__14SwitchMgrClassFv
// Address: 0x1ef290 - 0x1ef324
void read_SYNCH_gun1__14SwitchMgrClassFv_0x1ef290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("read_SYNCH_gun1__14SwitchMgrClassFv");


    ctx->pc = 0x1ef290u;

    // 0x1ef290: 0x3c030050
    ctx->pc = 0x1ef290u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ef294: 0x2467dc40
    ctx->pc = 0x1ef294u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294958144));
    // 0x1ef298: 0x3c030051
    ctx->pc = 0x1ef298u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1ef29c: 0x70002e28
    ctx->pc = 0x1ef29cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef2a0: 0x24684f40
    ctx->pc = 0x1ef2a0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 20288));
label_1ef2a4:
    // 0x1ef2a4: 0x90e40000
    ctx->pc = 0x1ef2a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ef2a8: 0x24030006
    ctx->pc = 0x1ef2a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ef2ac: 0x14830015
    ctx->pc = 0x1EF2ACu;
    {
        const bool branch_taken_0x1ef2ac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1EF2B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ef2ac) {
            ctx->pc = 0x1EF304u;
            goto label_1ef304;
        }
    }
    ctx->pc = 0x1EF2B4u;
    // 0x1ef2b4: 0x95040004
    ctx->pc = 0x1ef2b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ef2b8: 0x24030001
    ctx->pc = 0x1ef2b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef2bc: 0x10830004
    ctx->pc = 0x1EF2BCu;
    {
        const bool branch_taken_0x1ef2bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EF2C0u;
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
        if (branch_taken_0x1ef2bc) {
            ctx->pc = 0x1EF2D0u;
            goto label_1ef2d0;
        }
    }
    ctx->pc = 0x1EF2C4u;
    // 0x1ef2c4: 0x1480000a
    ctx->pc = 0x1EF2C4u;
    {
        const bool branch_taken_0x1ef2c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ef2c4) {
            ctx->pc = 0x1EF2F0u;
            goto label_1ef2f0;
        }
    }
    ctx->pc = 0x1EF2CCu;
    // 0x1ef2cc: 0x0
    ctx->pc = 0x1ef2ccu;
    // NOP
label_1ef2d0:
    // 0x1ef2d0: 0x90e30001
    ctx->pc = 0x1ef2d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1ef2d4: 0x10600004
    ctx->pc = 0x1EF2D4u;
    {
        const bool branch_taken_0x1ef2d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF2D8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ef2d4) {
            ctx->pc = 0x1EF2E8u;
            goto label_1ef2e8;
        }
    }
    ctx->pc = 0x1EF2DCu;
    // 0x1ef2dc: 0xa4e4000a
    ctx->pc = 0x1ef2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ef2e0: 0xa4e6000c
    ctx->pc = 0x1ef2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ef2e4: 0x0
    ctx->pc = 0x1ef2e4u;
    // NOP
label_1ef2e8:
    // 0x1ef2e8: 0x10000007
    ctx->pc = 0x1EF2E8u;
    {
        const bool branch_taken_0x1ef2e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF2ECu;
        WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ef2e8) {
            ctx->pc = 0x1EF308u;
            goto label_1ef308;
        }
    }
    ctx->pc = 0x1EF2F0u;
label_1ef2f0:
    // 0x1ef2f0: 0xa0e00001
    ctx->pc = 0x1ef2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef2f4: 0xa4e4000a
    ctx->pc = 0x1ef2f4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ef2f8: 0x10000003
    ctx->pc = 0x1EF2F8u;
    {
        const bool branch_taken_0x1ef2f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF2FCu;
        WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 6));
        if (branch_taken_0x1ef2f8) {
            ctx->pc = 0x1EF308u;
            goto label_1ef308;
        }
    }
    ctx->pc = 0x1EF300u;
    // 0x1ef300: 0x24030001
    ctx->pc = 0x1ef300u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1ef304:
    // 0x1ef304: 0xa0e30001
    ctx->pc = 0x1ef304u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
label_1ef308:
    // 0x1ef308: 0x24a50001
    ctx->pc = 0x1ef308u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ef30c: 0x28a30002
    ctx->pc = 0x1ef30cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 2));
    // 0x1ef310: 0x24e7001a
    ctx->pc = 0x1ef310u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 26));
    // 0x1ef314: 0x1460ffe3
    ctx->pc = 0x1EF314u;
    {
        const bool branch_taken_0x1ef314 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EF318u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 32));
        if (branch_taken_0x1ef314) {
            ctx->pc = 0x1EF2A4u;
            goto label_1ef2a4;
        }
    }
    ctx->pc = 0x1EF31Cu;
    // 0x1ef31c: 0x3e00008
    ctx->pc = 0x1EF31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF2A4u: goto label_1ef2a4;
            case 0x1EF2D0u: goto label_1ef2d0;
            case 0x1EF2E8u: goto label_1ef2e8;
            case 0x1EF2F0u: goto label_1ef2f0;
            case 0x1EF304u: goto label_1ef304;
            case 0x1EF308u: goto label_1ef308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF324u;
}
