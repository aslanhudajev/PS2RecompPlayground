#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_ChkPrmGfr
// Address: 0x16c090 - 0x16c108
void adxf_ChkPrmGfr_0x16c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_ChkPrmGfr");


    ctx->pc = 0x16c090u;

    // 0x16c090: 0x27bdfff0
    ctx->pc = 0x16c090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c094: 0x2c820100
    ctx->pc = 0x16c094u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 256));
    // 0x16c098: 0x14400004
    ctx->pc = 0x16C098u;
    {
        const bool branch_taken_0x16c098 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C09Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16c098) {
            ctx->pc = 0x16C0ACu;
            goto label_16c0ac;
        }
    }
    ctx->pc = 0x16C0A0u;
    // 0x16c0a0: 0x3c04002c
    ctx->pc = 0x16c0a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16c0a4: 0x10000012
    ctx->pc = 0x16C0A4u;
    {
        const bool branch_taken_0x16c0a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C0A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940544));
        if (branch_taken_0x16c0a4) {
            ctx->pc = 0x16C0F0u;
            goto label_16c0f0;
        }
    }
    ctx->pc = 0x16C0ACu;
label_16c0ac:
    // 0x16c0ac: 0x3c020023
    ctx->pc = 0x16c0acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16c0b0: 0x41880
    ctx->pc = 0x16c0b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x16c0b4: 0x2442c918
    ctx->pc = 0x16c0b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953240));
    // 0x16c0b8: 0x621821
    ctx->pc = 0x16c0b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c0bc: 0x8c620000
    ctx->pc = 0x16c0bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c0c0: 0x14400003
    ctx->pc = 0x16C0C0u;
    {
        const bool branch_taken_0x16c0c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C0C4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16c0c0) {
            ctx->pc = 0x16C0D0u;
            goto label_16c0d0;
        }
    }
    ctx->pc = 0x16C0C8u;
    // 0x16c0c8: 0x10000009
    ctx->pc = 0x16C0C8u;
    {
        const bool branch_taken_0x16c0c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C0CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940544));
        if (branch_taken_0x16c0c8) {
            ctx->pc = 0x16C0F0u;
            goto label_16c0f0;
        }
    }
    ctx->pc = 0x16C0D0u;
label_16c0d0:
    // 0x16c0d0: 0x4a00006
    ctx->pc = 0x16C0D0u;
    {
        const bool branch_taken_0x16c0d0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16C0D4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16c0d0) {
            ctx->pc = 0x16C0ECu;
            goto label_16c0ec;
        }
    }
    ctx->pc = 0x16C0D8u;
    // 0x16c0d8: 0x8c420008
    ctx->pc = 0x16c0d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c0dc: 0xa2102a
    ctx->pc = 0x16c0dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x16c0e0: 0x14400006
    ctx->pc = 0x16C0E0u;
    {
        const bool branch_taken_0x16c0e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C0E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c0e0) {
            ctx->pc = 0x16C0FCu;
            goto label_16c0fc;
        }
    }
    ctx->pc = 0x16C0E8u;
    // 0x16c0e8: 0x3c04002c
    ctx->pc = 0x16c0e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_16c0ec:
    // 0x16c0ec: 0x248497a8
    ctx->pc = 0x16c0ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940584));
label_16c0f0:
    // 0x16c0f0: 0xc05a854
    ctx->pc = 0x16C0F0u;
    SET_GPR_U32(ctx, 31, 0x16C0F8u);
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0F8u; }
        else if (ctx->pc != 0x16C0F8u) { ctx->pc = 0x16C0F8u; }
    }
    if (ctx->pc != 0x16C0F8u) { return; }
    ctx->pc = 0x16C0F8u;
    // 0x16c0f8: 0x2402fffd
    ctx->pc = 0x16c0f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
label_16c0fc:
    // 0x16c0fc: 0xdfbf0000
    ctx->pc = 0x16c0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c100: 0x3e00008
    ctx->pc = 0x16C100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C104u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C0ACu: goto label_16c0ac;
            case 0x16C0D0u: goto label_16c0d0;
            case 0x16C0ECu: goto label_16c0ec;
            case 0x16C0F0u: goto label_16c0f0;
            case 0x16C0FCu: goto label_16c0fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C108u;
}
