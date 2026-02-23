#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__15CamPathMgrClassFv
// Address: 0x1cbee0 - 0x1cbf58
void init__15CamPathMgrClassFv_0x1cbee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__15CamPathMgrClassFv");


    ctx->pc = 0x1cbee0u;

    // 0x1cbee0: 0x24030012
    ctx->pc = 0x1cbee0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1cbee4: 0x3c010030
    ctx->pc = 0x1cbee4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cbee8: 0xa423658e
    ctx->pc = 0x1cbee8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 25998), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cbeec: 0x3c010030
    ctx->pc = 0x1cbeecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cbef0: 0xa42066ac
    ctx->pc = 0x1cbef0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26284), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cbef4: 0x2403ffff
    ctx->pc = 0x1cbef4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cbef8: 0x3c010030
    ctx->pc = 0x1cbef8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cbefc: 0xa42366ae
    ctx->pc = 0x1cbefcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26286), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cbf00: 0x3c030030
    ctx->pc = 0x1cbf00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1cbf04: 0x246566b0
    ctx->pc = 0x1cbf04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 26288));
    // 0x1cbf08: 0x70002628
    ctx->pc = 0x1cbf08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cbf0c:
    // 0x1cbf0c: 0x24840001
    ctx->pc = 0x1cbf0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cbf10: 0xaca00000
    ctx->pc = 0x1cbf10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1cbf14: 0x288302b6
    ctx->pc = 0x1cbf14u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 694));
    // 0x1cbf18: 0x24a50008
    ctx->pc = 0x1cbf18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1cbf1c: 0x0
    ctx->pc = 0x1cbf1cu;
    // NOP
    // 0x1cbf20: 0x1460fffa
    ctx->pc = 0x1CBF20u;
    {
        const bool branch_taken_0x1cbf20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cbf20) {
            ctx->pc = 0x1CBF0Cu;
            goto label_1cbf0c;
        }
    }
    ctx->pc = 0x1CBF28u;
    // 0x1cbf28: 0x3c030030
    ctx->pc = 0x1cbf28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1cbf2c: 0x24646580
    ctx->pc = 0x1cbf2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 25984));
    // 0x1cbf30: 0x70002e28
    ctx->pc = 0x1cbf30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cbf34:
    // 0x1cbf34: 0x24a50001
    ctx->pc = 0x1cbf34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cbf38: 0xac800000
    ctx->pc = 0x1cbf38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1cbf3c: 0x28a30013
    ctx->pc = 0x1cbf3cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 19));
    // 0x1cbf40: 0x24840010
    ctx->pc = 0x1cbf40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cbf44: 0x0
    ctx->pc = 0x1cbf44u;
    // NOP
    // 0x1cbf48: 0x1460fffa
    ctx->pc = 0x1CBF48u;
    {
        const bool branch_taken_0x1cbf48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cbf48) {
            ctx->pc = 0x1CBF34u;
            goto label_1cbf34;
        }
    }
    ctx->pc = 0x1CBF50u;
    // 0x1cbf50: 0x3e00008
    ctx->pc = 0x1CBF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBF54u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBF0Cu: goto label_1cbf0c;
            case 0x1CBF34u: goto label_1cbf34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBF58u;
}
