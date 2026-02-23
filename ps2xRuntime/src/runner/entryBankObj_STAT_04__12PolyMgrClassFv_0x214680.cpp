#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankObj_STAT_04__12PolyMgrClassFv
// Address: 0x214680 - 0x2146ac
void entryBankObj_STAT_04__12PolyMgrClassFv_0x214680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankObj_STAT_04__12PolyMgrClassFv");


    ctx->pc = 0x214680u;

    // 0x214680: 0x8f838cf8
    ctx->pc = 0x214680u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x214684: 0x3c010091
    ctx->pc = 0x214684u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214688: 0xa42019a8
    ctx->pc = 0x214688u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 6568), (uint16_t)GPR_U32(ctx, 0));
    // 0x21468c: 0x3c010091
    ctx->pc = 0x21468cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214690: 0x24050008
    ctx->pc = 0x214690u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x214694: 0x24020001
    ctx->pc = 0x214694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x214698: 0x24630008
    ctx->pc = 0x214698u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x21469c: 0xac2319a4
    ctx->pc = 0x21469cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6564), GPR_U32(ctx, 3));
    // 0x2146a0: 0x8c830000
    ctx->pc = 0x2146a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2146a4: 0x3e00008
    ctx->pc = 0x2146A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2146A8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2146ACu;
}
