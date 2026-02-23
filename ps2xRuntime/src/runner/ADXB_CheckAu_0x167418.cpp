#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_CheckAu
// Address: 0x167418 - 0x16746c
void ADXB_CheckAu_0x167418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_CheckAu");


    ctx->pc = 0x167418u;

    // 0x167418: 0x27bdffe0
    ctx->pc = 0x167418u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16741c: 0x3c05002d
    ctx->pc = 0x16741cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)45 << 16));
    // 0x167420: 0xffb00000
    ctx->pc = 0x167420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167424: 0x24a55720
    ctx->pc = 0x167424u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22304));
    // 0x167428: 0x80802d
    ctx->pc = 0x167428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16742c: 0xffbf0010
    ctx->pc = 0x16742cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167430: 0xc050c6a
    ctx->pc = 0x167430u;
    SET_GPR_U32(ctx, 31, 0x167438u);
    ctx->pc = 0x167434u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167438u; }
        else if (ctx->pc != 0x167438u) { ctx->pc = 0x167438u; }
    }
    if (ctx->pc != 0x167438u) { return; }
    ctx->pc = 0x167438u;
    // 0x167438: 0x10400007
    ctx->pc = 0x167438u;
    {
        const bool branch_taken_0x167438 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16743Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)45 << 16));
        if (branch_taken_0x167438) {
            ctx->pc = 0x167458u;
            goto label_167458;
        }
    }
    ctx->pc = 0x167440u;
    // 0x167440: 0x200202d
    ctx->pc = 0x167440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167444: 0x24a55728
    ctx->pc = 0x167444u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22312));
    // 0x167448: 0xc050c6a
    ctx->pc = 0x167448u;
    SET_GPR_U32(ctx, 31, 0x167450u);
    ctx->pc = 0x16744Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167450u; }
        else if (ctx->pc != 0x167450u) { ctx->pc = 0x167450u; }
    }
    if (ctx->pc != 0x167450u) { return; }
    ctx->pc = 0x167450u;
    // 0x167450: 0x14400002
    ctx->pc = 0x167450u;
    {
        const bool branch_taken_0x167450 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x167454u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167450) {
            ctx->pc = 0x16745Cu;
            goto label_16745c;
        }
    }
    ctx->pc = 0x167458u;
label_167458:
    // 0x167458: 0x24020001
    ctx->pc = 0x167458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16745c:
    // 0x16745c: 0xdfbf0010
    ctx->pc = 0x16745cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167460: 0xdfb00000
    ctx->pc = 0x167460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167464: 0x3e00008
    ctx->pc = 0x167464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167458u: goto label_167458;
            case 0x16745Cu: goto label_16745c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16746Cu;
}
