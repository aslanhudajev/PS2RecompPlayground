#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJX_Reset
// Address: 0x17db88 - 0x17dbd8
void SJX_Reset_0x17db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJX_Reset");


    ctx->pc = 0x17db88u;

    // 0x17db88: 0x27bdffe0
    ctx->pc = 0x17db88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17db8c: 0x80402d
    ctx->pc = 0x17db8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db90: 0xffbf0010
    ctx->pc = 0x17db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17db94: 0x3a0282d
    ctx->pc = 0x17db94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db98: 0x24040002
    ctx->pc = 0x17db98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17db9c: 0x24060002
    ctx->pc = 0x17db9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17dba0: 0x95030002
    ctx->pc = 0x17dba0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x17dba4: 0x382d
    ctx->pc = 0x17dba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dba8: 0x8d090010
    ctx->pc = 0x17dba8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x17dbac: 0x24630001
    ctx->pc = 0x17dbacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x17dbb0: 0x31400
    ctx->pc = 0x17dbb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 16));
    // 0x17dbb4: 0xafa90000
    ctx->pc = 0x17dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x17dbb8: 0xa5030002
    ctx->pc = 0x17dbb8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dbbc: 0x21403
    ctx->pc = 0x17dbbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x17dbc0: 0xafa20004
    ctx->pc = 0x17dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17dbc4: 0xc05dcd2
    ctx->pc = 0x17DBC4u;
    SET_GPR_U32(ctx, 31, 0x17DBCCu);
    ctx->pc = 0x17DBC8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBCCu; }
        else if (ctx->pc != 0x17DBCCu) { ctx->pc = 0x17DBCCu; }
    }
    if (ctx->pc != 0x17DBCCu) { return; }
    ctx->pc = 0x17DBCCu;
    // 0x17dbcc: 0xdfbf0010
    ctx->pc = 0x17dbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dbd0: 0x3e00008
    ctx->pc = 0x17DBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DBD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DBD8u;
}
