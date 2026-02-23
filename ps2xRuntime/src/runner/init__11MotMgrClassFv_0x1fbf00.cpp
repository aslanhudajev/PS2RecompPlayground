#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__11MotMgrClassFv
// Address: 0x1fbf00 - 0x1fbf78
void init__11MotMgrClassFv_0x1fbf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__11MotMgrClassFv");


    ctx->pc = 0x1fbf00u;

    // 0x1fbf00: 0x2403005f
    ctx->pc = 0x1fbf00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 95));
    // 0x1fbf04: 0x3c010051
    ctx->pc = 0x1fbf04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1fbf08: 0xa4231dda
    ctx->pc = 0x1fbf08u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 7642), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fbf0c: 0x3c010051
    ctx->pc = 0x1fbf0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1fbf10: 0xa420224c
    ctx->pc = 0x1fbf10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8780), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fbf14: 0x2403ffff
    ctx->pc = 0x1fbf14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbf18: 0x3c010051
    ctx->pc = 0x1fbf18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1fbf1c: 0xa423224e
    ctx->pc = 0x1fbf1cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8782), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fbf20: 0x3c030050
    ctx->pc = 0x1fbf20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1fbf24: 0x24650e30
    ctx->pc = 0x1fbf24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 3632));
    // 0x1fbf28: 0x70002628
    ctx->pc = 0x1fbf28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fbf2c:
    // 0x1fbf2c: 0x24840001
    ctx->pc = 0x1fbf2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fbf30: 0xaca00000
    ctx->pc = 0x1fbf30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1fbf34: 0x288321f3
    ctx->pc = 0x1fbf34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 8691));
    // 0x1fbf38: 0x24a50008
    ctx->pc = 0x1fbf38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1fbf3c: 0x0
    ctx->pc = 0x1fbf3cu;
    // NOP
    // 0x1fbf40: 0x1460fffa
    ctx->pc = 0x1FBF40u;
    {
        const bool branch_taken_0x1fbf40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fbf40) {
            ctx->pc = 0x1FBF2Cu;
            goto label_1fbf2c;
        }
    }
    ctx->pc = 0x1FBF48u;
    // 0x1fbf48: 0x3c030051
    ctx->pc = 0x1fbf48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1fbf4c: 0x24641dd0
    ctx->pc = 0x1fbf4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 7632));
    // 0x1fbf50: 0x70002e28
    ctx->pc = 0x1fbf50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fbf54:
    // 0x1fbf54: 0x24a50001
    ctx->pc = 0x1fbf54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fbf58: 0xac800000
    ctx->pc = 0x1fbf58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fbf5c: 0x28a30060
    ctx->pc = 0x1fbf5cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 96));
    // 0x1fbf60: 0x2484000c
    ctx->pc = 0x1fbf60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1fbf64: 0x0
    ctx->pc = 0x1fbf64u;
    // NOP
    // 0x1fbf68: 0x1460fffa
    ctx->pc = 0x1FBF68u;
    {
        const bool branch_taken_0x1fbf68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fbf68) {
            ctx->pc = 0x1FBF54u;
            goto label_1fbf54;
        }
    }
    ctx->pc = 0x1FBF70u;
    // 0x1fbf70: 0x3e00008
    ctx->pc = 0x1FBF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FBF2Cu: goto label_1fbf2c;
            case 0x1FBF54u: goto label_1fbf54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FBF78u;
}
