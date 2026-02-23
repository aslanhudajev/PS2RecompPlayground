#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_IsVbinStIncre
// Address: 0x19dbb0 - 0x19dbd4
void sftim_IsVbinStIncre_0x19dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_IsVbinStIncre");


    ctx->pc = 0x19dbb0u;

    // 0x19dbb0: 0x8ca30278
    ctx->pc = 0x19dbb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x19dbb4: 0x2402ffff
    ctx->pc = 0x19dbb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19dbb8: 0x54620003
    ctx->pc = 0x19DBB8u;
    {
        const bool branch_taken_0x19dbb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x19dbb8) {
            ctx->pc = 0x19DBBCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->pc = 0x19DBC8u;
            goto label_19dbc8;
        }
    }
    ctx->pc = 0x19DBC0u;
    // 0x19dbc0: 0x3e00008
    ctx->pc = 0x19DBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DBC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DBC8u: goto label_19dbc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DBC8u;
label_19dbc8:
    // 0x19dbc8: 0x38420004
    ctx->pc = 0x19dbc8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 4));
    // 0x19dbcc: 0x3e00008
    ctx->pc = 0x19DBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DBD0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DBC8u: goto label_19dbc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DBD4u;
}
