#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_charicmp
// Address: 0x1793f0 - 0x179440
void htci_charicmp_0x1793f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_charicmp");


    ctx->pc = 0x1793f0u;

    // 0x1793f0: 0x27bdffd0
    ctx->pc = 0x1793f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1793f4: 0x42600
    ctx->pc = 0x1793f4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x1793f8: 0xffb10010
    ctx->pc = 0x1793f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1793fc: 0x42603
    ctx->pc = 0x1793fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x179400: 0x58e00
    ctx->pc = 0x179400u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 5), 24));
    // 0x179404: 0xffb00000
    ctx->pc = 0x179404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179408: 0xffbf0020
    ctx->pc = 0x179408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17940c: 0xc05e4f6
    ctx->pc = 0x17940Cu;
    SET_GPR_U32(ctx, 31, 0x179414u);
    ctx->pc = 0x179410u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    ctx->pc = 0x1793D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        conv_cmp_0x1793d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179414u; }
        else if (ctx->pc != 0x179414u) { ctx->pc = 0x179414u; }
    }
    if (ctx->pc != 0x179414u) { return; }
    ctx->pc = 0x179414u;
    // 0x179414: 0x40802d
    ctx->pc = 0x179414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179418: 0xc05e4f6
    ctx->pc = 0x179418u;
    SET_GPR_U32(ctx, 31, 0x179420u);
    ctx->pc = 0x17941Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1793D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        conv_cmp_0x1793d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179420u; }
        else if (ctx->pc != 0x179420u) { ctx->pc = 0x179420u; }
    }
    if (ctx->pc != 0x179420u) { return; }
    ctx->pc = 0x179420u;
    // 0x179420: 0x2028026
    ctx->pc = 0x179420u;
    SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x179424: 0xdfbf0020
    ctx->pc = 0x179424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179428: 0x2402ffff
    ctx->pc = 0x179428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17942c: 0xdfb10010
    ctx->pc = 0x17942cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179430: 0x10100a
    ctx->pc = 0x179430u;
    if (GPR_U32(ctx, 16) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x179434: 0xdfb00000
    ctx->pc = 0x179434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179438: 0x3e00008
    ctx->pc = 0x179438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17943Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179440u;
}
