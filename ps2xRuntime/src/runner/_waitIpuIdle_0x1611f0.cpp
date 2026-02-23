#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _waitIpuIdle
// Address: 0x1611f0 - 0x161294
void _waitIpuIdle_0x1611f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_waitIpuIdle");


    ctx->pc = 0x1611f0u;

    // 0x1611f0: 0x27bdffb0
    ctx->pc = 0x1611f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1611f4: 0x3c021000
    ctx->pc = 0x1611f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1611f8: 0xffbf0040
    ctx->pc = 0x1611f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1611fc: 0x34422010
    ctx->pc = 0x1611fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x161200: 0xffb30030
    ctx->pc = 0x161200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x161204: 0x3c048000
    ctx->pc = 0x161204u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x161208: 0xffb20020
    ctx->pc = 0x161208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16120c: 0x34844000
    ctx->pc = 0x16120cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x161210: 0xffb10010
    ctx->pc = 0x161210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x161214: 0x282d
    ctx->pc = 0x161214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161218: 0xffb00000
    ctx->pc = 0x161218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16121c: 0x8c430000
    ctx->pc = 0x16121cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161220: 0x3c028000
    ctx->pc = 0x161220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x161224: 0x641824
    ctx->pc = 0x161224u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161228: 0x14620014
    ctx->pc = 0x161228u;
    {
        const bool branch_taken_0x161228 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16122Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x161228) {
            ctx->pc = 0x16127Cu;
            goto label_16127c;
        }
    }
    ctx->pc = 0x161230u;
    // 0x161230: 0x3c111000
    ctx->pc = 0x161230u;
    SET_GPR_U32(ctx, 17, ((uint32_t)4096 << 16));
    // 0x161234: 0x3c108000
    ctx->pc = 0x161234u;
    SET_GPR_U32(ctx, 16, ((uint32_t)32768 << 16));
    // 0x161238: 0x3c130023
    ctx->pc = 0x161238u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x16123c: 0x36312010
    ctx->pc = 0x16123cu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 8208));
    // 0x161240: 0x36104000
    ctx->pc = 0x161240u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 16384));
    // 0x161244: 0x3c128000
    ctx->pc = 0x161244u;
    SET_GPR_U32(ctx, 18, ((uint32_t)32768 << 16));
    // 0x161248: 0xa0102d
    ctx->pc = 0x161248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16124c: 0x0
    ctx->pc = 0x16124cu;
    // NOP
label_161250:
    // 0x161250: 0x28421389
    ctx->pc = 0x161250u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x161254: 0x14400004
    ctx->pc = 0x161254u;
    {
        const bool branch_taken_0x161254 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161258u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x161254) {
            ctx->pc = 0x161268u;
            goto label_161268;
        }
    }
    ctx->pc = 0x16125Cu;
    // 0x16125c: 0xc058f00
    ctx->pc = 0x16125Cu;
    SET_GPR_U32(ctx, 31, 0x161264u);
    ctx->pc = 0x161260u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294943260)));
    ctx->pc = 0x163C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x163c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161264u; }
        else if (ctx->pc != 0x161264u) { ctx->pc = 0x161264u; }
    }
    if (ctx->pc != 0x161264u) { return; }
    ctx->pc = 0x161264u;
    // 0x161264: 0x282d
    ctx->pc = 0x161264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161268:
    // 0x161268: 0x8e220000
    ctx->pc = 0x161268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16126c: 0x501024
    ctx->pc = 0x16126cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x161270: 0x1052fff7
    ctx->pc = 0x161270u;
    {
        const bool branch_taken_0x161270 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x161274u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161270) {
            ctx->pc = 0x161250u;
            goto label_161250;
        }
    }
    ctx->pc = 0x161278u;
    // 0x161278: 0xdfbf0040
    ctx->pc = 0x161278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16127c:
    // 0x16127c: 0xdfb30030
    ctx->pc = 0x16127cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161280: 0xdfb20020
    ctx->pc = 0x161280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161284: 0xdfb10010
    ctx->pc = 0x161284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161288: 0xdfb00000
    ctx->pc = 0x161288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16128c: 0x3e00008
    ctx->pc = 0x16128Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161290u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161250u: goto label_161250;
            case 0x161268u: goto label_161268;
            case 0x16127Cu: goto label_16127c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161294u;
}
