#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetSfreq
// Address: 0x172200 - 0x172234
void ADXT_GetSfreq_0x172200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetSfreq");


    ctx->pc = 0x172200u;

    // 0x172200: 0x27bdfff0
    ctx->pc = 0x172200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172204: 0xffbf0000
    ctx->pc = 0x172204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172208: 0x80820001
    ctx->pc = 0x172208u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x17220c: 0x28420002
    ctx->pc = 0x17220cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x172210: 0x14400005
    ctx->pc = 0x172210u;
    {
        const bool branch_taken_0x172210 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172214u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172210) {
            ctx->pc = 0x172228u;
            goto label_172228;
        }
    }
    ctx->pc = 0x172218u;
    // 0x172218: 0xc05b9dc
    ctx->pc = 0x172218u;
    SET_GPR_U32(ctx, 31, 0x172220u);
    ctx->pc = 0x17221Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x16E770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetSfreq_0x16e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172220u; }
        else if (ctx->pc != 0x172220u) { ctx->pc = 0x172220u; }
    }
    if (ctx->pc != 0x172220u) { return; }
    ctx->pc = 0x172220u;
    // 0x172220: 0x10000002
    ctx->pc = 0x172220u;
    {
        const bool branch_taken_0x172220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172224u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x172220) {
            ctx->pc = 0x17222Cu;
            goto label_17222c;
        }
    }
    ctx->pc = 0x172228u;
label_172228:
    // 0x172228: 0xdfbf0000
    ctx->pc = 0x172228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17222c:
    // 0x17222c: 0x3e00008
    ctx->pc = 0x17222Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172230u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172228u: goto label_172228;
            case 0x17222Cu: goto label_17222c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172234u;
}
