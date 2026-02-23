#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_AllocAdxFs
// Address: 0x16b480 - 0x16b4d4
void adxf_AllocAdxFs_0x16b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_AllocAdxFs");


    ctx->pc = 0x16b480u;

    // 0x16b480: 0x3c060023
    ctx->pc = 0x16b480u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x16b484: 0x382d
    ctx->pc = 0x16b484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b488: 0x80c2b598
    ctx->pc = 0x16b488u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294948248)));
    // 0x16b48c: 0x24c3b598
    ctx->pc = 0x16b48cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294948248));
    // 0x16b490: 0x14400003
    ctx->pc = 0x16B490u;
    {
        const bool branch_taken_0x16b490 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B494u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b490) {
            ctx->pc = 0x16B4A0u;
            goto label_16b4a0;
        }
    }
    ctx->pc = 0x16B498u;
    // 0x16b498: 0x1000000c
    ctx->pc = 0x16B498u;
    {
        const bool branch_taken_0x16b498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B49Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b498) {
            ctx->pc = 0x16B4CCu;
            goto label_16b4cc;
        }
    }
    ctx->pc = 0x16B4A0u;
label_16b4a0:
    // 0x16b4a0: 0x24a50001
    ctx->pc = 0x16b4a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_16b4a4:
    // 0x16b4a4: 0x28a20010
    ctx->pc = 0x16b4a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 16));
    // 0x16b4a8: 0x10400008
    ctx->pc = 0x16B4A8u;
    {
        const bool branch_taken_0x16b4a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B4ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 312));
        if (branch_taken_0x16b4a8) {
            ctx->pc = 0x16B4CCu;
            goto label_16b4cc;
        }
    }
    ctx->pc = 0x16B4B0u;
    // 0x16b4b0: 0x24c4b598
    ctx->pc = 0x16b4b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 4294948248));
    // 0x16b4b4: 0xa21018
    ctx->pc = 0x16b4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x16b4b8: 0x441021
    ctx->pc = 0x16b4b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16b4bc: 0x80430000
    ctx->pc = 0x16b4bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b4c0: 0x1460fff8
    ctx->pc = 0x16B4C0u;
    {
        const bool branch_taken_0x16b4c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B4C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x16b4c0) {
            ctx->pc = 0x16B4A4u;
            goto label_16b4a4;
        }
    }
    ctx->pc = 0x16B4C8u;
    // 0x16b4c8: 0x40382d
    ctx->pc = 0x16b4c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b4cc:
    // 0x16b4cc: 0x3e00008
    ctx->pc = 0x16B4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B4D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B4A0u: goto label_16b4a0;
            case 0x16B4A4u: goto label_16b4a4;
            case 0x16B4CCu: goto label_16b4cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B4D4u;
}
