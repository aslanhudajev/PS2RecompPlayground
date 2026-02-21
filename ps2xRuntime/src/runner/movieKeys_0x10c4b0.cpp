#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: movieKeys
// Address: 0x10c4b0 - 0x10c528
void movieKeys_0x10c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10c4b0u;

    // 0x10c4b0: 0x8f8283f8
    ctx->pc = 0x10c4b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x10c4b4: 0x27bdffe0
    ctx->pc = 0x10c4b4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c4b8: 0xffbf0010
    ctx->pc = 0x10c4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c4bc: 0x24420001
    ctx->pc = 0x10c4bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x10c4c0: 0xafa00000
    ctx->pc = 0x10c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10c4c4: 0xafa00004
    ctx->pc = 0x10c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x10c4c8: 0x2843007d
    ctx->pc = 0x10c4c8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 125));
    // 0x10c4cc: 0xafa00008
    ctx->pc = 0x10c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x10c4d0: 0xafa0000c
    ctx->pc = 0x10c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x10c4d4: 0xaf8283f8
    ctx->pc = 0x10c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935544), GPR_U32(ctx, 2));
    // 0x10c4d8: 0x14600010
    ctx->pc = 0x10C4D8u;
    {
        const bool branch_taken_0x10c4d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10C4DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10c4d8) {
            ctx->pc = 0x10C51Cu;
            goto label_10c51c;
        }
    }
    ctx->pc = 0x10C4E0u;
    // 0x10c4e0: 0x8f828408
    ctx->pc = 0x10c4e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935560)));
    // 0x10c4e4: 0x1440000d
    ctx->pc = 0x10C4E4u;
    {
        const bool branch_taken_0x10c4e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10C4E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10c4e4) {
            ctx->pc = 0x10C51Cu;
            goto label_10c51c;
        }
    }
    ctx->pc = 0x10C4ECu;
    // 0x10c4ec: 0x3a0202d
    ctx->pc = 0x10c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c4f0: 0x37a50004
    ctx->pc = 0x10c4f0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    // 0x10c4f4: 0x37a60008
    ctx->pc = 0x10c4f4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 8));
    // 0x10c4f8: 0xc043024
    ctx->pc = 0x10C4F8u;
    SET_GPR_U32(ctx, 31, 0x10C500u);
    ctx->pc = 0x10C4FCu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x10C090u;
    {
        const uint32_t __entryPc = ctx->pc;
        mypad_read_0x10c090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C500u; }
    }
    if (ctx->pc != 0x10C500u) { return; }
    ctx->pc = 0x10C500u;
    // 0x10c500: 0x40182d
    ctx->pc = 0x10c500u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c504: 0x30620040
    ctx->pc = 0x10c504u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 64));
    // 0x10c508: 0x14400004
    ctx->pc = 0x10C508u;
    {
        const bool branch_taken_0x10c508 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10C50Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10c508) {
            ctx->pc = 0x10C51Cu;
            goto label_10c51c;
        }
    }
    ctx->pc = 0x10C510u;
    // 0x10c510: 0x30620900
    ctx->pc = 0x10c510u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2304));
    // 0x10c514: 0x38420900
    ctx->pc = 0x10c514u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2304));
    // 0x10c518: 0x2c420001
    ctx->pc = 0x10c518u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_10c51c:
    // 0x10c51c: 0xdfbf0010
    ctx->pc = 0x10c51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c520: 0x3e00008
    ctx->pc = 0x10C520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C524u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10C51Cu: goto label_10c51c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10C528u;
}
