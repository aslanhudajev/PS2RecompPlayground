#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREEOSKNAME__13EventCtrlTaskFv
// Address: 0x1e4430 - 0x1e44ac
void FREEOSKNAME__13EventCtrlTaskFv_0x1e4430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREEOSKNAME__13EventCtrlTaskFv");


    ctx->pc = 0x1e4430u;

    // 0x1e4430: 0x27bdffc0
    ctx->pc = 0x1e4430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e4434: 0x7fbf0030
    ctx->pc = 0x1e4434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e4438: 0x7fb20020
    ctx->pc = 0x1e4438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e443c: 0x7fb10010
    ctx->pc = 0x1e443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4440: 0x7fb00000
    ctx->pc = 0x1e4440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4444: 0x70808628
    ctx->pc = 0x1e4444u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4448: 0x70008e28
    ctx->pc = 0x1e4448u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e444c: 0x10000008
    ctx->pc = 0x1E444Cu;
    {
        const bool branch_taken_0x1e444c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4450u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e444c) {
            ctx->pc = 0x1E4470u;
            goto label_1e4470;
        }
    }
    ctx->pc = 0x1E4454u;
label_1e4454:
    // 0x1e4454: 0x8ca50004
    ctx->pc = 0x1e4454u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e4458: 0x3c020051
    ctx->pc = 0x1e4458u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e445c: 0xc086620
    ctx->pc = 0x1E445Cu;
    SET_GPR_U32(ctx, 31, 0x1E4464u);
    ctx->pc = 0x1E4460u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219880u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeOskName__13EntryDatClassFi_0x219880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4464u; }
        else if (ctx->pc != 0x1E4464u) { ctx->pc = 0x1E4464u; }
    }
    if (ctx->pc != 0x1E4464u) { return; }
    ctx->pc = 0x1E4464u;
    // 0x1e4464: 0x26520004
    ctx->pc = 0x1e4464u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e4468: 0x26310001
    ctx->pc = 0x1e4468u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e446c: 0x0
    ctx->pc = 0x1e446cu;
    // NOP
label_1e4470:
    // 0x1e4470: 0x8e05000c
    ctx->pc = 0x1e4470u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4474: 0x2403ffff
    ctx->pc = 0x1e4474u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4478: 0xb22021
    ctx->pc = 0x1e4478u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1e447c: 0x8c840004
    ctx->pc = 0x1e447cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e4480: 0x1483fff4
    ctx->pc = 0x1E4480u;
    {
        const bool branch_taken_0x1e4480 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E4484u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x1e4480) {
            ctx->pc = 0x1E4454u;
            goto label_1e4454;
        }
    }
    ctx->pc = 0x1E4488u;
    // 0x1e4488: 0x31880
    ctx->pc = 0x1e4488u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e448c: 0xa31821
    ctx->pc = 0x1e448cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e4490: 0xae03000c
    ctx->pc = 0x1e4490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4494: 0x7bbf0030
    ctx->pc = 0x1e4494u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4498: 0x7bb20020
    ctx->pc = 0x1e4498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e449c: 0x7bb10010
    ctx->pc = 0x1e449cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e44a0: 0x7bb00000
    ctx->pc = 0x1e44a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e44a4: 0x3e00008
    ctx->pc = 0x1E44A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E44A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4454u: goto label_1e4454;
            case 0x1E4470u: goto label_1e4470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E44ACu;
}
