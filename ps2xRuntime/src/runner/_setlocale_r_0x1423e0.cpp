#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _setlocale_r
// Address: 0x1423e0 - 0x142464
void _setlocale_r_0x1423e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_setlocale_r");


    ctx->pc = 0x1423e0u;

    // 0x1423e0: 0x27bdffb0
    ctx->pc = 0x1423e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1423e4: 0xffb20020
    ctx->pc = 0x1423e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1423e8: 0xffb10010
    ctx->pc = 0x1423e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1423ec: 0xa0902d
    ctx->pc = 0x1423ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423f0: 0xffb00000
    ctx->pc = 0x1423f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1423f4: 0x80882d
    ctx->pc = 0x1423f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423f8: 0xffbf0040
    ctx->pc = 0x1423f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1423fc: 0xc0802d
    ctx->pc = 0x1423fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142400: 0x1200000f
    ctx->pc = 0x142400u;
    {
        const bool branch_taken_0x142400 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x142404u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        if (branch_taken_0x142400) {
            ctx->pc = 0x142440u;
            goto label_142440;
        }
    }
    ctx->pc = 0x142408u;
    // 0x142408: 0x3c13002b
    ctx->pc = 0x142408u;
    SET_GPR_U32(ctx, 19, ((uint32_t)43 << 16));
    // 0x14240c: 0x200202d
    ctx->pc = 0x14240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142410: 0xc0514bc
    ctx->pc = 0x142410u;
    SET_GPR_U32(ctx, 31, 0x142418u);
    ctx->pc = 0x142414u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 28512));
    ctx->pc = 0x1452F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x1452f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142418u; }
        else if (ctx->pc != 0x142418u) { ctx->pc = 0x142418u; }
    }
    if (ctx->pc != 0x142418u) { return; }
    ctx->pc = 0x142418u;
    // 0x142418: 0x10400006
    ctx->pc = 0x142418u;
    {
        const bool branch_taken_0x142418 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14241Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)43 << 16));
        if (branch_taken_0x142418) {
            ctx->pc = 0x142434u;
            goto label_142434;
        }
    }
    ctx->pc = 0x142420u;
    // 0x142420: 0x200202d
    ctx->pc = 0x142420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142424: 0xc0514bc
    ctx->pc = 0x142424u;
    SET_GPR_U32(ctx, 31, 0x14242Cu);
    ctx->pc = 0x142428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28496));
    ctx->pc = 0x1452F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x1452f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14242Cu; }
        else if (ctx->pc != 0x14242Cu) { ctx->pc = 0x14242Cu; }
    }
    if (ctx->pc != 0x14242Cu) { return; }
    ctx->pc = 0x14242Cu;
    // 0x14242c: 0x14400006
    ctx->pc = 0x14242Cu;
    {
        const bool branch_taken_0x14242c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x142430u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14242c) {
            ctx->pc = 0x142448u;
            goto label_142448;
        }
    }
    ctx->pc = 0x142434u;
label_142434:
    // 0x142434: 0xae300034
    ctx->pc = 0x142434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x142438: 0x10000002
    ctx->pc = 0x142438u;
    {
        const bool branch_taken_0x142438 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14243Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        if (branch_taken_0x142438) {
            ctx->pc = 0x142444u;
            goto label_142444;
        }
    }
    ctx->pc = 0x142440u;
label_142440:
    // 0x142440: 0x3c13002b
    ctx->pc = 0x142440u;
    SET_GPR_U32(ctx, 19, ((uint32_t)43 << 16));
label_142444:
    // 0x142444: 0x26626f60
    ctx->pc = 0x142444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 28512));
label_142448:
    // 0x142448: 0xdfbf0040
    ctx->pc = 0x142448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14244c: 0xdfb30030
    ctx->pc = 0x14244cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142450: 0xdfb20020
    ctx->pc = 0x142450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142454: 0xdfb10010
    ctx->pc = 0x142454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142458: 0xdfb00000
    ctx->pc = 0x142458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14245c: 0x3e00008
    ctx->pc = 0x14245Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142460u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142434u: goto label_142434;
            case 0x142440u: goto label_142440;
            case 0x142444u: goto label_142444;
            case 0x142448u: goto label_142448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142464u;
}
