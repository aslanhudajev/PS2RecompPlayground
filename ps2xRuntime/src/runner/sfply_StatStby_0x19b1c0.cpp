#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_StatStby
// Address: 0x19b1c0 - 0x19b25c
void sfply_StatStby_0x19b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_StatStby");


    ctx->pc = 0x19b1c0u;

    // 0x19b1c0: 0x27bdffd0
    ctx->pc = 0x19b1c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b1c4: 0x24020003
    ctx->pc = 0x19b1c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x19b1c8: 0xffb00000
    ctx->pc = 0x19b1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b1cc: 0xffbf0020
    ctx->pc = 0x19b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b1d0: 0x80802d
    ctx->pc = 0x19b1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1d4: 0xffb10010
    ctx->pc = 0x19b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19b1d8: 0x8e030044
    ctx->pc = 0x19b1d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x19b1dc: 0x10620011
    ctx->pc = 0x19B1DCu;
    {
        const bool branch_taken_0x19b1dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19B1E0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 64)));
        if (branch_taken_0x19b1dc) {
            ctx->pc = 0x19B224u;
            goto label_19b224;
        }
    }
    ctx->pc = 0x19B1E4u;
    // 0x19b1e4: 0x28620004
    ctx->pc = 0x19b1e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x19b1e8: 0x10400005
    ctx->pc = 0x19B1E8u;
    {
        const bool branch_taken_0x19b1e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B1ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x19b1e8) {
            ctx->pc = 0x19B200u;
            goto label_19b200;
        }
    }
    ctx->pc = 0x19B1F0u;
    // 0x19b1f0: 0x1062000a
    ctx->pc = 0x19B1F0u;
    {
        const bool branch_taken_0x19b1f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19B1F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b1f0) {
            ctx->pc = 0x19B21Cu;
            goto label_19b21c;
        }
    }
    ctx->pc = 0x19B1F8u;
    // 0x19b1f8: 0x10000014
    ctx->pc = 0x19B1F8u;
    {
        const bool branch_taken_0x19b1f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B1FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19b1f8) {
            ctx->pc = 0x19B24Cu;
            goto label_19b24c;
        }
    }
    ctx->pc = 0x19B200u;
label_19b200:
    // 0x19b200: 0x24020004
    ctx->pc = 0x19b200u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b204: 0x10620009
    ctx->pc = 0x19B204u;
    {
        const bool branch_taken_0x19b204 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19B208u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x19b204) {
            ctx->pc = 0x19B22Cu;
            goto label_19b22c;
        }
    }
    ctx->pc = 0x19B20Cu;
    // 0x19b20c: 0x10620007
    ctx->pc = 0x19B20Cu;
    {
        const bool branch_taken_0x19b20c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19B210u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b20c) {
            ctx->pc = 0x19B22Cu;
            goto label_19b22c;
        }
    }
    ctx->pc = 0x19B214u;
    // 0x19b214: 0x1000000d
    ctx->pc = 0x19B214u;
    {
        const bool branch_taken_0x19b214 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B218u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19b214) {
            ctx->pc = 0x19B24Cu;
            goto label_19b24c;
        }
    }
    ctx->pc = 0x19B21Cu;
label_19b21c:
    // 0x19b21c: 0x10000009
    ctx->pc = 0x19B21Cu;
    {
        const bool branch_taken_0x19b21c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B220u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x19b21c) {
            ctx->pc = 0x19B244u;
            goto label_19b244;
        }
    }
    ctx->pc = 0x19B224u;
label_19b224:
    // 0x19b224: 0x10000007
    ctx->pc = 0x19B224u;
    {
        const bool branch_taken_0x19b224 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B228u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x19b224) {
            ctx->pc = 0x19B244u;
            goto label_19b244;
        }
    }
    ctx->pc = 0x19B22Cu;
label_19b22c:
    // 0x19b22c: 0xc066cb2
    ctx->pc = 0x19B22Cu;
    SET_GPR_U32(ctx, 31, 0x19B234u);
    ctx->pc = 0x19B230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_IsStartSync_0x19b2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B234u; }
        else if (ctx->pc != 0x19B234u) { ctx->pc = 0x19B234u; }
    }
    if (ctx->pc != 0x19B234u) { return; }
    ctx->pc = 0x19B234u;
    // 0x19b234: 0x10400003
    ctx->pc = 0x19B234u;
    {
        const bool branch_taken_0x19b234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B238u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b234) {
            ctx->pc = 0x19B244u;
            goto label_19b244;
        }
    }
    ctx->pc = 0x19B23Cu;
    // 0x19b23c: 0xc066ef6
    ctx->pc = 0x19B23Cu;
    SET_GPR_U32(ctx, 31, 0x19B244u);
    ctx->pc = 0x19B240u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x19BBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_TrStart_0x19bbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B244u; }
        else if (ctx->pc != 0x19B244u) { ctx->pc = 0x19B244u; }
    }
    if (ctx->pc != 0x19B244u) { return; }
    ctx->pc = 0x19B244u;
label_19b244:
    // 0x19b244: 0x220102d
    ctx->pc = 0x19b244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b248: 0xdfbf0020
    ctx->pc = 0x19b248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b24c:
    // 0x19b24c: 0xdfb10010
    ctx->pc = 0x19b24cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b250: 0xdfb00000
    ctx->pc = 0x19b250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b254: 0x3e00008
    ctx->pc = 0x19B254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B258u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B200u: goto label_19b200;
            case 0x19B21Cu: goto label_19b21c;
            case 0x19B224u: goto label_19b224;
            case 0x19B22Cu: goto label_19b22c;
            case 0x19B244u: goto label_19b244;
            case 0x19B24Cu: goto label_19b24c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B25Cu;
}
