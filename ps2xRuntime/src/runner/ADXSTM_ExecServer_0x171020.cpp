#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_ExecServer
// Address: 0x171020 - 0x171080
void ADXSTM_ExecServer_0x171020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_ExecServer");


    ctx->pc = 0x171020u;

    // 0x171020: 0x27bdffc0
    ctx->pc = 0x171020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x171024: 0xffb20020
    ctx->pc = 0x171024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x171028: 0xffb10010
    ctx->pc = 0x171028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17102c: 0x24120001
    ctx->pc = 0x17102cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171030: 0xffb00000
    ctx->pc = 0x171030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171034: 0xffbf0030
    ctx->pc = 0x171034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x171038: 0xc05a4e4
    ctx->pc = 0x171038u;
    SET_GPR_U32(ctx, 31, 0x171040u);
    ctx->pc = 0x17103Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 39));
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171040u; }
        else if (ctx->pc != 0x171040u) { ctx->pc = 0x171040u; }
    }
    if (ctx->pc != 0x171040u) { return; }
    ctx->pc = 0x171040u;
    // 0x171040: 0x3c020023
    ctx->pc = 0x171040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x171044: 0x24507bc0
    ctx->pc = 0x171044u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 31680));
label_171048:
    // 0x171048: 0x82020000
    ctx->pc = 0x171048u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17104c: 0x54520004
    ctx->pc = 0x17104Cu;
    {
        const bool branch_taken_0x17104c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x17104c) {
            ctx->pc = 0x171050u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x171060u;
            goto label_171060;
        }
    }
    ctx->pc = 0x171054u;
    // 0x171054: 0xc05c400
    ctx->pc = 0x171054u;
    SET_GPR_U32(ctx, 31, 0x17105Cu);
    ctx->pc = 0x171058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171000u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTMF_ExecHndl_0x171000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17105Cu; }
        else if (ctx->pc != 0x17105Cu) { ctx->pc = 0x17105Cu; }
    }
    if (ctx->pc != 0x17105Cu) { return; }
    ctx->pc = 0x17105Cu;
    // 0x17105c: 0x2631ffff
    ctx->pc = 0x17105cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_171060:
    // 0x171060: 0x621fff9
    ctx->pc = 0x171060u;
    {
        const bool branch_taken_0x171060 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x171064u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x171060) {
            ctx->pc = 0x171048u;
            goto label_171048;
        }
    }
    ctx->pc = 0x171068u;
    // 0x171068: 0xdfbf0030
    ctx->pc = 0x171068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17106c: 0xdfb20020
    ctx->pc = 0x17106cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171070: 0xdfb10010
    ctx->pc = 0x171070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171074: 0xdfb00000
    ctx->pc = 0x171074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171078: 0x805a4f0
    ctx->pc = 0x171078u;
    ctx->pc = 0x17107Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
    ctx->pc = 0x171080u;
}
