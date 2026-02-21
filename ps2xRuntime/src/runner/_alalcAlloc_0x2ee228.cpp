#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _alalcAlloc
// Address: 0x2ee228 - 0x2ee290
void _alalcAlloc_0x2ee228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee228u;

    // 0x2ee228: 0x27bdfff0
    ctx->pc = 0x2ee228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee22c: 0x80382d
    ctx->pc = 0x2ee22cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee230: 0xffbf0000
    ctx->pc = 0x2ee230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee234: 0x50c00001
    ctx->pc = 0x2EE234u;
    {
        const bool branch_taken_0x2ee234 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ee234) {
            ctx->pc = 0x2EE238u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2EE23Cu;
            goto label_2ee23c;
        }
    }
    ctx->pc = 0x2EE23Cu;
label_2ee23c:
    // 0x2ee23c: 0x8ce20008
    ctx->pc = 0x2ee23cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2ee240: 0x8ce40004
    ctx->pc = 0x2ee240u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2ee244: 0x461021
    ctx->pc = 0x2ee244u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ee248: 0x8ce30000
    ctx->pc = 0x2ee248u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ee24c: 0x2442ffff
    ctx->pc = 0x2ee24cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ee250: 0x46001b
    ctx->pc = 0x2ee250u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 6) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x2ee254: 0x641821
    ctx->pc = 0x2ee254u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee258: 0x1012
    ctx->pc = 0x2ee258u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x2ee25c: 0x461018
    ctx->pc = 0x2ee25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ee260: 0x452021
    ctx->pc = 0x2ee260u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ee264: 0x64182b
    ctx->pc = 0x2ee264u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee268: 0x54600003
    ctx->pc = 0x2EE268u;
    {
        const bool branch_taken_0x2ee268 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ee268) {
            ctx->pc = 0x2EE26Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
            ctx->pc = 0x2EE278u;
            goto label_2ee278;
        }
    }
    ctx->pc = 0x2EE270u;
    // 0x2ee270: 0x10000004
    ctx->pc = 0x2EE270u;
    {
        const bool branch_taken_0x2ee270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE274u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x2ee270) {
            ctx->pc = 0x2EE284u;
            goto label_2ee284;
        }
    }
    ctx->pc = 0x2EE278u;
label_2ee278:
    // 0x2ee278: 0xc0bba56
    ctx->pc = 0x2EE278u;
    SET_GPR_U32(ctx, 31, 0x2EE280u);
    ctx->pc = 0x2EE27Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941976));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE280u; }
    }
    if (ctx->pc != 0x2EE280u) { return; }
    ctx->pc = 0x2EE280u;
    // 0x2ee280: 0x102d
    ctx->pc = 0x2ee280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee284:
    // 0x2ee284: 0xdfbf0000
    ctx->pc = 0x2ee284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee288: 0x3e00008
    ctx->pc = 0x2EE288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE28Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE23Cu: goto label_2ee23c;
            case 0x2EE278u: goto label_2ee278;
            case 0x2EE284u: goto label_2ee284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EE290u;
}
