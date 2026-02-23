#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _initSeqAgain
// Address: 0x164258 - 0x164268
void _initSeqAgain_0x164258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_initSeqAgain");


    ctx->pc = 0x164258u;

    // 0x164258: 0x3c020023
    ctx->pc = 0x164258u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16425c: 0x24040001
    ctx->pc = 0x16425cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x164260: 0x8057fda
    ctx->pc = 0x164260u;
    ctx->pc = 0x164264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945520), GPR_U32(ctx, 0));
    ctx->pc = 0x15FF68u;
    _ipuSetMPEG1_0x15ff68(rdram, ctx, runtime); return;
    ctx->pc = 0x164268u;
}
