#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_CheckAiff
// Address: 0x166b58 - 0x166bb4
void ADXB_CheckAiff_0x166b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_CheckAiff");


    ctx->pc = 0x166b58u;

    // 0x166b58: 0x27bdffe0
    ctx->pc = 0x166b58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166b5c: 0x3c05002d
    ctx->pc = 0x166b5cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)45 << 16));
    // 0x166b60: 0xffb00000
    ctx->pc = 0x166b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166b64: 0x24a55710
    ctx->pc = 0x166b64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22288));
    // 0x166b68: 0x80802d
    ctx->pc = 0x166b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b6c: 0xffbf0010
    ctx->pc = 0x166b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166b70: 0xc050c6a
    ctx->pc = 0x166B70u;
    SET_GPR_U32(ctx, 31, 0x166B78u);
    ctx->pc = 0x166B74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B78u; }
        else if (ctx->pc != 0x166B78u) { ctx->pc = 0x166B78u; }
    }
    if (ctx->pc != 0x166B78u) { return; }
    ctx->pc = 0x166B78u;
    // 0x166b78: 0x5440000a
    ctx->pc = 0x166B78u;
    {
        const bool branch_taken_0x166b78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x166b78) {
            ctx->pc = 0x166B7Cu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x166BA4u;
            goto label_166ba4;
        }
    }
    ctx->pc = 0x166B80u;
    // 0x166b80: 0x3c05002d
    ctx->pc = 0x166b80u;
    SET_GPR_U32(ctx, 5, ((uint32_t)45 << 16));
    // 0x166b84: 0x26040008
    ctx->pc = 0x166b84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8));
    // 0x166b88: 0x24a55718
    ctx->pc = 0x166b88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22296));
    // 0x166b8c: 0xc050c6a
    ctx->pc = 0x166B8Cu;
    SET_GPR_U32(ctx, 31, 0x166B94u);
    ctx->pc = 0x166B90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166B94u; }
        else if (ctx->pc != 0x166B94u) { ctx->pc = 0x166B94u; }
    }
    if (ctx->pc != 0x166B94u) { return; }
    ctx->pc = 0x166B94u;
    // 0x166b94: 0x40182d
    ctx->pc = 0x166b94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166b98: 0x10600002
    ctx->pc = 0x166B98u;
    {
        const bool branch_taken_0x166b98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x166B9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x166b98) {
            ctx->pc = 0x166BA4u;
            goto label_166ba4;
        }
    }
    ctx->pc = 0x166BA0u;
    // 0x166ba0: 0x102d
    ctx->pc = 0x166ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166ba4:
    // 0x166ba4: 0xdfbf0010
    ctx->pc = 0x166ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166ba8: 0xdfb00000
    ctx->pc = 0x166ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166bac: 0x3e00008
    ctx->pc = 0x166BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166BB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166BA4u: goto label_166ba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166BB4u;
}
