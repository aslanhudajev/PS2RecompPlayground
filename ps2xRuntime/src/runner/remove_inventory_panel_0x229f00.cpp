#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: remove_inventory_panel
// Address: 0x229f00 - 0x229f88
void remove_inventory_panel_0x229f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x229f00u;

    // 0x229f00: 0x27bdffd0
    ctx->pc = 0x229f00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x229f04: 0xffbf0020
    ctx->pc = 0x229f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x229f08: 0xffb10010
    ctx->pc = 0x229f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x229f0c: 0xffb00000
    ctx->pc = 0x229f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x229f10: 0x80882d
    ctx->pc = 0x229f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229f14: 0x111100
    ctx->pc = 0x229f14u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 4));
    // 0x229f18: 0x3c040032
    ctx->pc = 0x229f18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x229f1c: 0x24841188
    ctx->pc = 0x229f1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4488));
    // 0x229f20: 0x442021
    ctx->pc = 0x229f20u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x229f24: 0xc08a810
    ctx->pc = 0x229F24u;
    SET_GPR_U32(ctx, 31, 0x229F2Cu);
    ctx->pc = 0x229F28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x22A040u;
    {
        const uint32_t __entryPc = ctx->pc;
        nuke_blits_0x22a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229F2Cu; }
    }
    if (ctx->pc != 0x229F2Cu) { return; }
    ctx->pc = 0x229F2Cu;
    // 0x229f2c: 0x24100030
    ctx->pc = 0x229f2cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 48));
    // 0x229f30: 0x2308018
    ctx->pc = 0x229f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229f34: 0x3c040032
    ctx->pc = 0x229f34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x229f38: 0x248410c8
    ctx->pc = 0x229f38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4296));
    // 0x229f3c: 0x2042021
    ctx->pc = 0x229f3cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x229f40: 0xc08a810
    ctx->pc = 0x229F40u;
    SET_GPR_U32(ctx, 31, 0x229F48u);
    ctx->pc = 0x229F44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x22A040u;
    {
        const uint32_t __entryPc = ctx->pc;
        nuke_blits_0x22a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229F48u; }
    }
    if (ctx->pc != 0x229F48u) { return; }
    ctx->pc = 0x229F48u;
    // 0x229f48: 0x3c040032
    ctx->pc = 0x229f48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x229f4c: 0x248411c8
    ctx->pc = 0x229f4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4552));
    // 0x229f50: 0x2042021
    ctx->pc = 0x229f50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x229f54: 0xc08a810
    ctx->pc = 0x229F54u;
    SET_GPR_U32(ctx, 31, 0x229F5Cu);
    ctx->pc = 0x229F58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x22A040u;
    {
        const uint32_t __entryPc = ctx->pc;
        nuke_blits_0x22a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229F5Cu; }
    }
    if (ctx->pc != 0x229F5Cu) { return; }
    ctx->pc = 0x229F5Cu;
    // 0x229f5c: 0x24020024
    ctx->pc = 0x229f5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x229f60: 0x2228818
    ctx->pc = 0x229f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229f64: 0x3c040032
    ctx->pc = 0x229f64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x229f68: 0x24841288
    ctx->pc = 0x229f68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4744));
    // 0x229f6c: 0x2242021
    ctx->pc = 0x229f6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x229f70: 0x24050009
    ctx->pc = 0x229f70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x229f74: 0xdfbf0020
    ctx->pc = 0x229f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229f78: 0xdfb10010
    ctx->pc = 0x229f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229f7c: 0xdfb00000
    ctx->pc = 0x229f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229f80: 0x808a810
    ctx->pc = 0x229F80u;
    ctx->pc = 0x229F84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x22A040u;
    nuke_blits_0x22a040(rdram, ctx, runtime); return;
    ctx->pc = 0x229F88u;
}
