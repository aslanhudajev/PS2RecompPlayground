#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _hi0bits
// Address: 0x143800 - 0x143884
void _hi0bits_0x143800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_hi0bits");


    ctx->pc = 0x143800u;

    // 0x143800: 0x3c02ffff
    ctx->pc = 0x143800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x143804: 0x821024
    ctx->pc = 0x143804u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x143808: 0x14400003
    ctx->pc = 0x143808u;
    {
        const bool branch_taken_0x143808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14380Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143808) {
            ctx->pc = 0x143818u;
            goto label_143818;
        }
    }
    ctx->pc = 0x143810u;
    // 0x143810: 0x24050010
    ctx->pc = 0x143810u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x143814: 0x42400
    ctx->pc = 0x143814u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
label_143818:
    // 0x143818: 0x3c02ff00
    ctx->pc = 0x143818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x14381c: 0x821024
    ctx->pc = 0x14381cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x143820: 0x14400003
    ctx->pc = 0x143820u;
    {
        const bool branch_taken_0x143820 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x143820) {
            ctx->pc = 0x143830u;
            goto label_143830;
        }
    }
    ctx->pc = 0x143828u;
    // 0x143828: 0x24a50008
    ctx->pc = 0x143828u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x14382c: 0x42200
    ctx->pc = 0x14382cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
label_143830:
    // 0x143830: 0x3c02f000
    ctx->pc = 0x143830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61440 << 16));
    // 0x143834: 0x821024
    ctx->pc = 0x143834u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x143838: 0x14400003
    ctx->pc = 0x143838u;
    {
        const bool branch_taken_0x143838 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x143838) {
            ctx->pc = 0x143848u;
            goto label_143848;
        }
    }
    ctx->pc = 0x143840u;
    // 0x143840: 0x24a50004
    ctx->pc = 0x143840u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x143844: 0x42100
    ctx->pc = 0x143844u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
label_143848:
    // 0x143848: 0x3c02c000
    ctx->pc = 0x143848u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
    // 0x14384c: 0x821024
    ctx->pc = 0x14384cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x143850: 0x14400003
    ctx->pc = 0x143850u;
    {
        const bool branch_taken_0x143850 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x143850) {
            ctx->pc = 0x143860u;
            goto label_143860;
        }
    }
    ctx->pc = 0x143858u;
    // 0x143858: 0x24a50002
    ctx->pc = 0x143858u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x14385c: 0x42080
    ctx->pc = 0x14385cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_143860:
    // 0x143860: 0x4800005
    ctx->pc = 0x143860u;
    {
        const bool branch_taken_0x143860 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x143864u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
        if (branch_taken_0x143860) {
            ctx->pc = 0x143878u;
            goto label_143878;
        }
    }
    ctx->pc = 0x143868u;
    // 0x143868: 0x24a50001
    ctx->pc = 0x143868u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x14386c: 0x831824
    ctx->pc = 0x14386cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x143870: 0x10600002
    ctx->pc = 0x143870u;
    {
        const bool branch_taken_0x143870 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x143874u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x143870) {
            ctx->pc = 0x14387Cu;
            goto label_14387c;
        }
    }
    ctx->pc = 0x143878u;
label_143878:
    // 0x143878: 0xa0102d
    ctx->pc = 0x143878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14387c:
    // 0x14387c: 0x3e00008
    ctx->pc = 0x14387Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143818u: goto label_143818;
            case 0x143830u: goto label_143830;
            case 0x143848u: goto label_143848;
            case 0x143860u: goto label_143860;
            case 0x143878u: goto label_143878;
            case 0x14387Cu: goto label_14387c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143884u;
}
