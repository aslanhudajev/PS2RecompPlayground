#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changePlayerMode__10PlayerTaskFii
// Address: 0x20f4d0 - 0x20f50c
void changePlayerMode__10PlayerTaskFii_0x20f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changePlayerMode__10PlayerTaskFii");


    ctx->pc = 0x20f4d0u;

    // 0x20f4d0: 0x27bdfff0
    ctx->pc = 0x20f4d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f4d4: 0x7fbf0000
    ctx->pc = 0x20f4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20f4d8: 0x8c831cbc
    ctx->pc = 0x20f4d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f4dc: 0x70803e28
    ctx->pc = 0x20f4dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20f4e0: 0x10c00007
    ctx->pc = 0x20F4E0u;
    {
        const bool branch_taken_0x20f4e0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F4E4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x20f4e0) {
            ctx->pc = 0x20F500u;
            goto label_20f500;
        }
    }
    ctx->pc = 0x20F4E8u;
    // 0x20f4e8: 0x3c020027
    ctx->pc = 0x20f4e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20f4ec: 0x24423388
    ctx->pc = 0x20f4ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13192));
    // 0x20f4f0: 0x8c450008
    ctx->pc = 0x20f4f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20f4f4: 0x8ce41cb4
    ctx->pc = 0x20f4f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 7348)));
    // 0x20f4f8: 0xc068fd8
    ctx->pc = 0x20F4F8u;
    SET_GPR_U32(ctx, 31, 0x20F500u);
    ctx->pc = 0x20F4FCu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F500u; }
        else if (ctx->pc != 0x20F500u) { ctx->pc = 0x20F500u; }
    }
    if (ctx->pc != 0x20F500u) { return; }
    ctx->pc = 0x20F500u;
label_20f500:
    // 0x20f500: 0x7bbf0000
    ctx->pc = 0x20f500u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f504: 0x3e00008
    ctx->pc = 0x20F504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F508u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F500u: goto label_20f500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F50Cu;
}
