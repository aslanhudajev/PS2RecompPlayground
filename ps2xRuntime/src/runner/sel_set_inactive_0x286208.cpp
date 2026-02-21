#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sel_set_inactive
// Address: 0x286208 - 0x286268
void sel_set_inactive_0x286208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x286208u;

    // 0x286208: 0x302d
    ctx->pc = 0x286208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28620c: 0x240200e8
    ctx->pc = 0x28620cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 232));
    // 0x286210: 0x822018
    ctx->pc = 0x286210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x286214: 0x3c020035
    ctx->pc = 0x286214u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x286218: 0x2442a63c
    ctx->pc = 0x286218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944316));
    // 0x28621c: 0x822021
    ctx->pc = 0x28621cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286220: 0x24080024
    ctx->pc = 0x286220u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 36));
    // 0x286224: 0x2407ffff
    ctx->pc = 0x286224u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
label_286228:
    // 0x286228: 0xc81818
    ctx->pc = 0x286228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28622c: 0x8c820000
    ctx->pc = 0x28622cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286230: 0x621821
    ctx->pc = 0x286230u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286234: 0x8c620000
    ctx->pc = 0x286234u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286238: 0x10400009
    ctx->pc = 0x286238u;
    {
        const bool branch_taken_0x286238 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x286238) {
            ctx->pc = 0x286260u;
            goto label_286260;
        }
    }
    ctx->pc = 0x286240u;
    // 0x286240: 0x8c620004
    ctx->pc = 0x286240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x286244: 0x5445fff8
    ctx->pc = 0x286244u;
    {
        const bool branch_taken_0x286244 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x286244) {
            ctx->pc = 0x286248u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x286228u;
            goto label_286228;
        }
    }
    ctx->pc = 0x28624Cu;
    // 0x28624c: 0x8c620020
    ctx->pc = 0x28624cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x286250: 0x4430001
    ctx->pc = 0x286250u;
    {
        const bool branch_taken_0x286250 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x286250) {
            ctx->pc = 0x286254u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 7));
            ctx->pc = 0x286258u;
            goto label_286258;
        }
    }
    ctx->pc = 0x286258u;
label_286258:
    // 0x286258: 0x1000fff3
    ctx->pc = 0x286258u;
    {
        const bool branch_taken_0x286258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28625Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x286258) {
            ctx->pc = 0x286228u;
            goto label_286228;
        }
    }
    ctx->pc = 0x286260u;
label_286260:
    // 0x286260: 0x3e00008
    ctx->pc = 0x286260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286228u: goto label_286228;
            case 0x286258u: goto label_286258;
            case 0x286260u: goto label_286260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286268u;
}
