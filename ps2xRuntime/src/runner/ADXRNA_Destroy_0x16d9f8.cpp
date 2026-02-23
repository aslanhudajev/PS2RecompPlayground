#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_Destroy
// Address: 0x16d9f8 - 0x16da30
void ADXRNA_Destroy_0x16d9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_Destroy");


    ctx->pc = 0x16d9f8u;

    // 0x16d9f8: 0x27bdffe0
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d9fc: 0x282d
    ctx->pc = 0x16d9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da00: 0xffb00000
    ctx->pc = 0x16da00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16da04: 0xffbf0010
    ctx->pc = 0x16da04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16da08: 0xc05ee28
    ctx->pc = 0x16DA08u;
    SET_GPR_U32(ctx, 31, 0x16DA10u);
    ctx->pc = 0x16DA0Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17B8A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_SetPlaySw_0x17b8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA10u; }
        else if (ctx->pc != 0x16DA10u) { ctx->pc = 0x16DA10u; }
    }
    if (ctx->pc != 0x16DA10u) { return; }
    ctx->pc = 0x16DA10u;
    // 0x16da10: 0x200202d
    ctx->pc = 0x16da10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da14: 0xc05ede6
    ctx->pc = 0x16DA14u;
    SET_GPR_U32(ctx, 31, 0x16DA1Cu);
    ctx->pc = 0x16DA18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17B798u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_SetTransSw_0x17b798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA1Cu; }
        else if (ctx->pc != 0x16DA1Cu) { ctx->pc = 0x16DA1Cu; }
    }
    if (ctx->pc != 0x16DA1Cu) { return; }
    ctx->pc = 0x16DA1Cu;
    // 0x16da1c: 0x200202d
    ctx->pc = 0x16da1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da20: 0xdfbf0010
    ctx->pc = 0x16da20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16da24: 0xdfb00000
    ctx->pc = 0x16da24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16da28: 0x805ed96
    ctx->pc = 0x16DA28u;
    ctx->pc = 0x16DA2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B658u;
    PS2RNA_Destroy_0x17b658(rdram, ctx, runtime); return;
    ctx->pc = 0x16DA30u;
}
