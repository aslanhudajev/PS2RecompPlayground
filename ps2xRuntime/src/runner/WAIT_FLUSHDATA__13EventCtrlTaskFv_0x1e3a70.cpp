#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_FLUSHDATA__13EventCtrlTaskFv
// Address: 0x1e3a70 - 0x1e3ac4
void WAIT_FLUSHDATA__13EventCtrlTaskFv_0x1e3a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_FLUSHDATA__13EventCtrlTaskFv");


    ctx->pc = 0x1e3a70u;

    // 0x1e3a70: 0x27bdffe0
    ctx->pc = 0x1e3a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3a74: 0x7fbf0010
    ctx->pc = 0x1e3a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3a78: 0x7fb00000
    ctx->pc = 0x1e3a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3a7c: 0x70808628
    ctx->pc = 0x1e3a7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3a80: 0x3c020051
    ctx->pc = 0x1e3a80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3a84: 0xc086370
    ctx->pc = 0x1E3A84u;
    SET_GPR_U32(ctx, 31, 0x1E3A8Cu);
    ctx->pc = 0x1E3A88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemain__13EntryDatClassFv_0x218dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A8Cu; }
        else if (ctx->pc != 0x1E3A8Cu) { ctx->pc = 0x1E3A8Cu; }
    }
    if (ctx->pc != 0x1E3A8Cu) { return; }
    ctx->pc = 0x1E3A8Cu;
    // 0x1e3a8c: 0x10400006
    ctx->pc = 0x1E3A8Cu;
    {
        const bool branch_taken_0x1e3a8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e3a8c) {
            ctx->pc = 0x1E3AA8u;
            goto label_1e3aa8;
        }
    }
    ctx->pc = 0x1E3A94u;
    // 0x1e3a94: 0x3c020050
    ctx->pc = 0x1e3a94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e3a98: 0xc07cf10
    ctx->pc = 0x1E3A98u;
    SET_GPR_U32(ctx, 31, 0x1E3AA0u);
    ctx->pc = 0x1E3A9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        reqPauseUntilAllDataEntry__13PauseMgrClassFv_0x1f3c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AA0u; }
        else if (ctx->pc != 0x1E3AA0u) { ctx->pc = 0x1E3AA0u; }
    }
    if (ctx->pc != 0x1E3AA0u) { return; }
    ctx->pc = 0x1E3AA0u;
    // 0x1e3aa0: 0x24030001
    ctx->pc = 0x1e3aa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3aa4: 0xa6030006
    ctx->pc = 0x1e3aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_1e3aa8:
    // 0x1e3aa8: 0x8e03000c
    ctx->pc = 0x1e3aa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3aac: 0x24630004
    ctx->pc = 0x1e3aacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e3ab0: 0xae03000c
    ctx->pc = 0x1e3ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3ab4: 0x7bbf0010
    ctx->pc = 0x1e3ab4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3ab8: 0x7bb00000
    ctx->pc = 0x1e3ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3abc: 0x3e00008
    ctx->pc = 0x1E3ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3AC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3AA8u: goto label_1e3aa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3AC4u;
}
