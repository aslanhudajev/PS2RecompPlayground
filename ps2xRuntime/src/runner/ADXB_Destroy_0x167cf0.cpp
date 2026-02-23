#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_Destroy
// Address: 0x167cf0 - 0x167d30
void ADXB_Destroy_0x167cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_Destroy");


    ctx->pc = 0x167cf0u;

    // 0x167cf0: 0x27bdffe0
    ctx->pc = 0x167cf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167cf4: 0xffb00000
    ctx->pc = 0x167cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167cf8: 0x80802d
    ctx->pc = 0x167cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cfc: 0x12000008
    ctx->pc = 0x167CFCu;
    {
        const bool branch_taken_0x167cfc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x167D00u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x167cfc) {
            ctx->pc = 0x167D20u;
            goto label_167d20;
        }
    }
    ctx->pc = 0x167D04u;
    // 0x167d04: 0xc05cfe2
    ctx->pc = 0x167D04u;
    SET_GPR_U32(ctx, 31, 0x167D0Cu);
    ctx->pc = 0x167D08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_Destroy_0x173f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D0Cu; }
        else if (ctx->pc != 0x167D0Cu) { ctx->pc = 0x167D0Cu; }
    }
    if (ctx->pc != 0x167D0Cu) { return; }
    ctx->pc = 0x167D0Cu;
    // 0x167d0c: 0x200202d
    ctx->pc = 0x167d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d10: 0x282d
    ctx->pc = 0x167d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d14: 0xc050cfe
    ctx->pc = 0x167D14u;
    SET_GPR_U32(ctx, 31, 0x167D1Cu);
    ctx->pc = 0x167D18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 184));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167D1Cu; }
        else if (ctx->pc != 0x167D1Cu) { ctx->pc = 0x167D1Cu; }
    }
    if (ctx->pc != 0x167D1Cu) { return; }
    ctx->pc = 0x167D1Cu;
    // 0x167d1c: 0xa6000000
    ctx->pc = 0x167d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_167d20:
    // 0x167d20: 0xdfbf0010
    ctx->pc = 0x167d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167d24: 0xdfb00000
    ctx->pc = 0x167d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167d28: 0x3e00008
    ctx->pc = 0x167D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167D2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167D20u: goto label_167d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167D30u;
}
