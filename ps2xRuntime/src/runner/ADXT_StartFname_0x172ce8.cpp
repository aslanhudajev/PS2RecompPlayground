#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_StartFname
// Address: 0x172ce8 - 0x172d64
void ADXT_StartFname_0x172ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_StartFname");


    ctx->pc = 0x172ce8u;

    // 0x172ce8: 0x27bdffd0
    ctx->pc = 0x172ce8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172cec: 0x8f828260
    ctx->pc = 0x172cecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x172cf0: 0xffb00000
    ctx->pc = 0x172cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172cf4: 0x80802d
    ctx->pc = 0x172cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cf8: 0xffb10010
    ctx->pc = 0x172cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x172cfc: 0xffbf0020
    ctx->pc = 0x172cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172d00: 0xc05c73a
    ctx->pc = 0x172D00u;
    SET_GPR_U32(ctx, 31, 0x172D08u);
    ctx->pc = 0x172D04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D08u; }
        else if (ctx->pc != 0x172D08u) { ctx->pc = 0x172D08u; }
    }
    if (ctx->pc != 0x172D08u) { return; }
    ctx->pc = 0x172D08u;
    // 0x172d08: 0xc05a4e4
    ctx->pc = 0x172D08u;
    SET_GPR_U32(ctx, 31, 0x172D10u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D10u; }
        else if (ctx->pc != 0x172D10u) { ctx->pc = 0x172D10u; }
    }
    if (ctx->pc != 0x172D10u) { return; }
    ctx->pc = 0x172D10u;
    // 0x172d10: 0x8e050010
    ctx->pc = 0x172d10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x172d14: 0xc05c298
    ctx->pc = 0x172D14u;
    SET_GPR_U32(ctx, 31, 0x172D1Cu);
    ctx->pc = 0x172D18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_OpenFname_0x170a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D1Cu; }
        else if (ctx->pc != 0x172D1Cu) { ctx->pc = 0x172D1Cu; }
    }
    if (ctx->pc != 0x172D1Cu) { return; }
    ctx->pc = 0x172D1Cu;
    // 0x172d1c: 0x14400009
    ctx->pc = 0x172D1Cu;
    {
        const bool branch_taken_0x172d1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172D20u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x172d1c) {
            ctx->pc = 0x172D44u;
            goto label_172d44;
        }
    }
    ctx->pc = 0x172D24u;
    // 0x172d24: 0xc05a4f0
    ctx->pc = 0x172D24u;
    SET_GPR_U32(ctx, 31, 0x172D2Cu);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D2Cu; }
        else if (ctx->pc != 0x172D2Cu) { ctx->pc = 0x172D2Cu; }
    }
    if (ctx->pc != 0x172D2Cu) { return; }
    ctx->pc = 0x172D2Cu;
    // 0x172d2c: 0x3c04002c
    ctx->pc = 0x172d2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x172d30: 0x220282d
    ctx->pc = 0x172d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d34: 0xc05a868
    ctx->pc = 0x172D34u;
    SET_GPR_U32(ctx, 31, 0x172D3Cu);
    ctx->pc = 0x172D38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943464));
    ctx->pc = 0x16A1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc2_0x16a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D3Cu; }
        else if (ctx->pc != 0x172D3Cu) { ctx->pc = 0x172D3Cu; }
    }
    if (ctx->pc != 0x172D3Cu) { return; }
    ctx->pc = 0x172D3Cu;
    // 0x172d3c: 0x10000005
    ctx->pc = 0x172D3Cu;
    {
        const bool branch_taken_0x172d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172D40u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x172d3c) {
            ctx->pc = 0x172D54u;
            goto label_172d54;
        }
    }
    ctx->pc = 0x172D44u;
label_172d44:
    // 0x172d44: 0xc05c692
    ctx->pc = 0x172D44u;
    SET_GPR_U32(ctx, 31, 0x172D4Cu);
    ctx->pc = 0x172D48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_start_stm_0x171a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172D4Cu; }
        else if (ctx->pc != 0x172D4Cu) { ctx->pc = 0x172D4Cu; }
    }
    if (ctx->pc != 0x172D4Cu) { return; }
    ctx->pc = 0x172D4Cu;
    // 0x172d4c: 0xa2000098
    ctx->pc = 0x172d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x172d50: 0xdfbf0020
    ctx->pc = 0x172d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172d54:
    // 0x172d54: 0xdfb10010
    ctx->pc = 0x172d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172d58: 0xdfb00000
    ctx->pc = 0x172d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172d5c: 0x805a4f0
    ctx->pc = 0x172D5Cu;
    ctx->pc = 0x172D60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
    ctx->pc = 0x172D64u;
}
