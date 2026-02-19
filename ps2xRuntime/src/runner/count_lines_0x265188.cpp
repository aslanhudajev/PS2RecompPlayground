#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: count_lines
// Address: 0x265188 - 0x2651c4
void count_lines_0x265188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x265188u;

    // 0x265188: 0x282d
    ctx->pc = 0x265188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26518c: 0x3c02003c
    ctx->pc = 0x26518cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x265190: 0x24443388
    ctx->pc = 0x265190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13192));
    // 0x265194: 0x80423388
    ctx->pc = 0x265194u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 13192)));
    // 0x265198: 0x18400008
    ctx->pc = 0x265198u;
    {
        const bool branch_taken_0x265198 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26519Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x265198) {
            ctx->pc = 0x2651BCu;
            goto label_2651bc;
        }
    }
    ctx->pc = 0x2651A0u;
label_2651a0:
    // 0x2651a0: 0x24a30001
    ctx->pc = 0x2651a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2651a4: 0x3842000a
    ctx->pc = 0x2651a4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 10));
    // 0x2651a8: 0x62280a
    ctx->pc = 0x2651a8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x2651ac: 0x80820000
    ctx->pc = 0x2651acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2651b0: 0x24840001
    ctx->pc = 0x2651b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2651b4: 0x1c40fffa
    ctx->pc = 0x2651B4u;
    {
        const bool branch_taken_0x2651b4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2651b4) {
            ctx->pc = 0x2651A0u;
            goto label_2651a0;
        }
    }
    ctx->pc = 0x2651BCu;
label_2651bc:
    // 0x2651bc: 0x3e00008
    ctx->pc = 0x2651BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2651C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2651A0u: goto label_2651a0;
            case 0x2651BCu: goto label_2651bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2651C4u;
}
