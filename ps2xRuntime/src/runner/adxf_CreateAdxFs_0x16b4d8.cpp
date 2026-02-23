#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_CreateAdxFs
// Address: 0x16b4d8 - 0x16b534
void adxf_CreateAdxFs_0x16b4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_CreateAdxFs");


    ctx->pc = 0x16b4d8u;

    // 0x16b4d8: 0x27bdfff0
    ctx->pc = 0x16b4d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b4dc: 0xffbf0000
    ctx->pc = 0x16b4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b4e0: 0xc05ad20
    ctx->pc = 0x16B4E0u;
    SET_GPR_U32(ctx, 31, 0x16B4E8u);
    ctx->pc = 0x16B480u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_AllocAdxFs_0x16b480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B4E8u; }
        else if (ctx->pc != 0x16B4E8u) { ctx->pc = 0x16B4E8u; }
    }
    if (ctx->pc != 0x16B4E8u) { return; }
    ctx->pc = 0x16B4E8u;
    // 0x16b4e8: 0x40202d
    ctx->pc = 0x16b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4ec: 0x14800003
    ctx->pc = 0x16B4ECu;
    {
        const bool branch_taken_0x16b4ec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B4F0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16b4ec) {
            ctx->pc = 0x16B4FCu;
            goto label_16b4fc;
        }
    }
    ctx->pc = 0x16B4F4u;
    // 0x16b4f4: 0x1000000c
    ctx->pc = 0x16B4F4u;
    {
        const bool branch_taken_0x16b4f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B4F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b4f4) {
            ctx->pc = 0x16B528u;
            goto label_16b528;
        }
    }
    ctx->pc = 0x16B4FCu;
label_16b4fc:
    // 0x16b4fc: 0x24020200
    ctx->pc = 0x16b4fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x16b500: 0xac82002c
    ctx->pc = 0x16b500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16b504: 0xa0830000
    ctx->pc = 0x16b504u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x16b508: 0x80102d
    ctx->pc = 0x16b508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b50c: 0xa0830001
    ctx->pc = 0x16b50cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x16b510: 0xac800004
    ctx->pc = 0x16b510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x16b514: 0xac800018
    ctx->pc = 0x16b514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x16b518: 0xac80001c
    ctx->pc = 0x16b518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x16b51c: 0xac800020
    ctx->pc = 0x16b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x16b520: 0xa0800002
    ctx->pc = 0x16b520u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16b524: 0xac800008
    ctx->pc = 0x16b524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_16b528:
    // 0x16b528: 0xdfbf0000
    ctx->pc = 0x16b528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b52c: 0x3e00008
    ctx->pc = 0x16B52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B530u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B4FCu: goto label_16b4fc;
            case 0x16B528u: goto label_16b528;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B534u;
}
