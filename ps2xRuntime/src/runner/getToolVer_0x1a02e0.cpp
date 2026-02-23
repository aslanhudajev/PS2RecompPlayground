#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getToolVer
// Address: 0x1a02e0 - 0x1a0340
void getToolVer_0x1a02e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getToolVer");


    ctx->pc = 0x1a02e0u;

    // 0x1a02e0: 0x27bdffd0
    ctx->pc = 0x1a02e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a02e4: 0xffb00000
    ctx->pc = 0x1a02e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a02e8: 0xa0802d
    ctx->pc = 0x1a02e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02ec: 0xffb10010
    ctx->pc = 0x1a02ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a02f0: 0x3c05002c
    ctx->pc = 0x1a02f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x1a02f4: 0xc0882d
    ctx->pc = 0x1a02f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02f8: 0xffbf0020
    ctx->pc = 0x1a02f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a02fc: 0xc0516ec
    ctx->pc = 0x1A02FCu;
    SET_GPR_U32(ctx, 31, 0x1A0304u);
    ctx->pc = 0x1A0300u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956904));
    ctx->pc = 0x145BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strstr_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0304u; }
        else if (ctx->pc != 0x1A0304u) { ctx->pc = 0x1A0304u; }
    }
    if (ctx->pc != 0x1A0304u) { return; }
    ctx->pc = 0x1A0304u;
    // 0x1a0304: 0x14400003
    ctx->pc = 0x1A0304u;
    {
        const bool branch_taken_0x1a0304 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A0308u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x1a0304) {
            ctx->pc = 0x1A0314u;
            goto label_1a0314;
        }
    }
    ctx->pc = 0x1A030Cu;
    // 0x1a030c: 0x10000007
    ctx->pc = 0x1A030Cu;
    {
        const bool branch_taken_0x1a030c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0310u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a030c) {
            ctx->pc = 0x1A032Cu;
            goto label_1a032c;
        }
    }
    ctx->pc = 0x1A0314u;
label_1a0314:
    // 0x1a0314: 0xc0680d0
    ctx->pc = 0x1A0314u;
    SET_GPR_U32(ctx, 31, 0x1A031Cu);
    ctx->pc = 0x1A0318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0340u;
    {
        const uint32_t __entryPc = ctx->pc;
        convAsciiToDigit_0x1a0340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A031Cu; }
        else if (ctx->pc != 0x1A031Cu) { ctx->pc = 0x1A031Cu; }
    }
    if (ctx->pc != 0x1A031Cu) { return; }
    ctx->pc = 0x1A031Cu;
    // 0x1a031c: 0x24440001
    ctx->pc = 0x1a031cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a0320: 0xc0680d0
    ctx->pc = 0x1A0320u;
    SET_GPR_U32(ctx, 31, 0x1A0328u);
    ctx->pc = 0x1A0324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0340u;
    {
        const uint32_t __entryPc = ctx->pc;
        convAsciiToDigit_0x1a0340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0328u; }
        else if (ctx->pc != 0x1A0328u) { ctx->pc = 0x1A0328u; }
    }
    if (ctx->pc != 0x1A0328u) { return; }
    ctx->pc = 0x1A0328u;
    // 0x1a0328: 0x24020001
    ctx->pc = 0x1a0328u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a032c:
    // 0x1a032c: 0xdfbf0020
    ctx->pc = 0x1a032cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0330: 0xdfb10010
    ctx->pc = 0x1a0330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0334: 0xdfb00000
    ctx->pc = 0x1a0334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0338: 0x3e00008
    ctx->pc = 0x1A0338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A033Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0314u: goto label_1a0314;
            case 0x1A032Cu: goto label_1a032c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0340u;
}
