#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SWITCH_MENM__13EventCtrlTaskFv
// Address: 0x1e4ba0 - 0x1e4c14
void SWITCH_MENM__13EventCtrlTaskFv_0x1e4ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SWITCH_MENM__13EventCtrlTaskFv");


    ctx->pc = 0x1e4ba0u;

    // 0x1e4ba0: 0x8c83000c
    ctx->pc = 0x1e4ba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4ba4: 0x70004628
    ctx->pc = 0x1e4ba4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e4ba8: 0x2409ffff
    ctx->pc = 0x1e4ba8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4bac: 0x24630004
    ctx->pc = 0x1e4bacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e4bb0: 0xac83000c
    ctx->pc = 0x1e4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1e4bb4: 0x8c83000c
    ctx->pc = 0x1e4bb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4bb8: 0x8c670000
    ctx->pc = 0x1e4bb8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4bbc: 0x0
    ctx->pc = 0x1e4bbcu;
    // NOP
    // 0x1e4bc0: 0x71201e28
    ctx->pc = 0x1e4bc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1e4bc4: 0x71203628
    ctx->pc = 0x1e4bc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_1e4bc8:
    // 0x1e4bc8: 0x8c85000c
    ctx->pc = 0x1e4bc8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4bcc: 0x24a50004
    ctx->pc = 0x1e4bccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e4bd0: 0xac85000c
    ctx->pc = 0x1e4bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1e4bd4: 0x8c85000c
    ctx->pc = 0x1e4bd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4bd8: 0x8caa0000
    ctx->pc = 0x1e4bd8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4bdc: 0x11460006
    ctx->pc = 0x1E4BDCu;
    {
        const bool branch_taken_0x1e4bdc = (GPR_U32(ctx, 10) == GPR_U32(ctx, 6));
        ctx->pc = 0x1E4BE0u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x1e4bdc) {
            ctx->pc = 0x1E4BF8u;
            goto label_1e4bf8;
        }
    }
    ctx->pc = 0x1E4BE4u;
    // 0x1e4be4: 0x87858c28
    ctx->pc = 0x1e4be4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937640)));
    // 0x1e4be8: 0x14a90003
    ctx->pc = 0x1E4BE8u;
    {
        const bool branch_taken_0x1e4be8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 9));
        if (branch_taken_0x1e4be8) {
            ctx->pc = 0x1E4BF8u;
            goto label_1e4bf8;
        }
    }
    ctx->pc = 0x1E4BF0u;
    // 0x1e4bf0: 0x10000003
    ctx->pc = 0x1E4BF0u;
    {
        const bool branch_taken_0x1e4bf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4BF4u;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e4bf0) {
            ctx->pc = 0x1E4C00u;
            goto label_1e4c00;
        }
    }
    ctx->pc = 0x1E4BF8u;
label_1e4bf8:
    // 0x1e4bf8: 0x1543fff3
    ctx->pc = 0x1E4BF8u;
    {
        const bool branch_taken_0x1e4bf8 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e4bf8) {
            ctx->pc = 0x1E4BC8u;
            goto label_1e4bc8;
        }
    }
    ctx->pc = 0x1E4C00u;
label_1e4c00:
    // 0x1e4c00: 0x15000002
    ctx->pc = 0x1E4C00u;
    {
        const bool branch_taken_0x1e4c00 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e4c00) {
            ctx->pc = 0x1E4C0Cu;
            goto label_1e4c0c;
        }
    }
    ctx->pc = 0x1E4C08u;
    // 0x1e4c08: 0x70e04628
    ctx->pc = 0x1e4c08u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1e4c0c:
    // 0x1e4c0c: 0x3e00008
    ctx->pc = 0x1E4C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4C10u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4BC8u: goto label_1e4bc8;
            case 0x1E4BF8u: goto label_1e4bf8;
            case 0x1E4C00u: goto label_1e4c00;
            case 0x1E4C0Cu: goto label_1e4c0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4C14u;
}
