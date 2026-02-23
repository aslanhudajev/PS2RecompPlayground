#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpvd_ReadParPr
// Address: 0x198dc0 - 0x198dec
void sfmpvd_ReadParPr_0x198dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpvd_ReadParPr");


    ctx->pc = 0x198dc0u;

    // 0x198dc0: 0x28a50008
    ctx->pc = 0x198dc0u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 8));
    // 0x198dc4: 0x50a00003
    ctx->pc = 0x198DC4u;
    {
        const bool branch_taken_0x198dc4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x198dc4) {
            ctx->pc = 0x198DC8u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
            ctx->pc = 0x198DD4u;
            goto label_198dd4;
        }
    }
    ctx->pc = 0x198DCCu;
    // 0x198dcc: 0x3e00008
    ctx->pc = 0x198DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198DD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198DD4u: goto label_198dd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198DD4u;
label_198dd4:
    // 0x198dd4: 0x102d
    ctx->pc = 0x198dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198dd8: 0x32102
    ctx->pc = 0x198dd8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 3), 4));
    // 0x198ddc: 0x3063000f
    ctx->pc = 0x198ddcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x198de0: 0xacc40000
    ctx->pc = 0x198de0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x198de4: 0x3e00008
    ctx->pc = 0x198DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198DE8u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198DD4u: goto label_198dd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198DECu;
}
