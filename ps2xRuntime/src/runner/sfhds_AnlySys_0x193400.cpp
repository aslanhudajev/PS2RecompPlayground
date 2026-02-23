#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_AnlySys
// Address: 0x193400 - 0x1934b4
void sfhds_AnlySys_0x193400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_AnlySys");


    ctx->pc = 0x193400u;

    // 0x193400: 0x27bdffd0
    ctx->pc = 0x193400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193404: 0xffb10010
    ctx->pc = 0x193404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x193408: 0xa0882d
    ctx->pc = 0x193408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19340c: 0xffb00000
    ctx->pc = 0x19340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193410: 0x80802d
    ctx->pc = 0x193410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193414: 0x3c05001a
    ctx->pc = 0x193414u;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x193418: 0xffbf0020
    ctx->pc = 0x193418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19341c: 0xc064dd0
    ctx->pc = 0x19341Cu;
    SET_GPR_U32(ctx, 31, 0x193424u);
    ctx->pc = 0x193420u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 960));
    ctx->pc = 0x193740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallN_0x193740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193424u; }
        else if (ctx->pc != 0x193424u) { ctx->pc = 0x193424u; }
    }
    if (ctx->pc != 0x193424u) { return; }
    ctx->pc = 0x193424u;
    // 0x193424: 0x3c05001a
    ctx->pc = 0x193424u;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x193428: 0xae220000
    ctx->pc = 0x193428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x19342c: 0x200202d
    ctx->pc = 0x19342cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193430: 0xc064dd0
    ctx->pc = 0x193430u;
    SET_GPR_U32(ctx, 31, 0x193438u);
    ctx->pc = 0x193434u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1032));
    ctx->pc = 0x193740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallN_0x193740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193438u; }
        else if (ctx->pc != 0x193438u) { ctx->pc = 0x193438u; }
    }
    if (ctx->pc != 0x193438u) { return; }
    ctx->pc = 0x193438u;
    // 0x193438: 0x3c05001a
    ctx->pc = 0x193438u;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x19343c: 0xae220004
    ctx->pc = 0x19343cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x193440: 0x200202d
    ctx->pc = 0x193440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193444: 0xc064dd0
    ctx->pc = 0x193444u;
    SET_GPR_U32(ctx, 31, 0x19344Cu);
    ctx->pc = 0x193448u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1112));
    ctx->pc = 0x193740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallN_0x193740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19344Cu; }
        else if (ctx->pc != 0x19344Cu) { ctx->pc = 0x19344Cu; }
    }
    if (ctx->pc != 0x19344Cu) { return; }
    ctx->pc = 0x19344Cu;
    // 0x19344c: 0x3c05001a
    ctx->pc = 0x19344cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x193450: 0xae220008
    ctx->pc = 0x193450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x193454: 0x200202d
    ctx->pc = 0x193454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193458: 0xc064dd0
    ctx->pc = 0x193458u;
    SET_GPR_U32(ctx, 31, 0x193460u);
    ctx->pc = 0x19345Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1192));
    ctx->pc = 0x193740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallN_0x193740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193460u; }
        else if (ctx->pc != 0x193460u) { ctx->pc = 0x193460u; }
    }
    if (ctx->pc != 0x193460u) { return; }
    ctx->pc = 0x193460u;
    // 0x193460: 0x3c05001a
    ctx->pc = 0x193460u;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x193464: 0xae22000c
    ctx->pc = 0x193464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x193468: 0x200202d
    ctx->pc = 0x193468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19346c: 0xc064dd0
    ctx->pc = 0x19346Cu;
    SET_GPR_U32(ctx, 31, 0x193474u);
    ctx->pc = 0x193470u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1376));
    ctx->pc = 0x193740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallN_0x193740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193474u; }
        else if (ctx->pc != 0x193474u) { ctx->pc = 0x193474u; }
    }
    if (ctx->pc != 0x193474u) { return; }
    ctx->pc = 0x193474u;
    // 0x193474: 0x3c05001a
    ctx->pc = 0x193474u;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x193478: 0xae220010
    ctx->pc = 0x193478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x19347c: 0x200202d
    ctx->pc = 0x19347cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193480: 0xc064dd0
    ctx->pc = 0x193480u;
    SET_GPR_U32(ctx, 31, 0x193488u);
    ctx->pc = 0x193484u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1456));
    ctx->pc = 0x193740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallN_0x193740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193488u; }
        else if (ctx->pc != 0x193488u) { ctx->pc = 0x193488u; }
    }
    if (ctx->pc != 0x193488u) { return; }
    ctx->pc = 0x193488u;
    // 0x193488: 0x3c05001a
    ctx->pc = 0x193488u;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x19348c: 0xae220014
    ctx->pc = 0x19348cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x193490: 0x200202d
    ctx->pc = 0x193490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193494: 0xc064dd0
    ctx->pc = 0x193494u;
    SET_GPR_U32(ctx, 31, 0x19349Cu);
    ctx->pc = 0x193498u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1536));
    ctx->pc = 0x193740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallN_0x193740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19349Cu; }
        else if (ctx->pc != 0x19349Cu) { ctx->pc = 0x19349Cu; }
    }
    if (ctx->pc != 0x19349Cu) { return; }
    ctx->pc = 0x19349Cu;
    // 0x19349c: 0xae220018
    ctx->pc = 0x19349cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1934a0: 0xdfbf0020
    ctx->pc = 0x1934a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1934a4: 0xdfb10010
    ctx->pc = 0x1934a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1934a8: 0xdfb00000
    ctx->pc = 0x1934a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1934ac: 0x3e00008
    ctx->pc = 0x1934ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1934B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1934B4u;
}
