#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_stream_stop
// Address: 0x223e90 - 0x223ed0
void aud_stream_stop_0x223e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223e90u;

    // 0x223e90: 0x27bdffe0
    ctx->pc = 0x223e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223e94: 0xffbf0010
    ctx->pc = 0x223e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223e98: 0xffb00000
    ctx->pc = 0x223e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223e9c: 0xc088cb6
    ctx->pc = 0x223E9Cu;
    SET_GPR_U32(ctx, 31, 0x223EA4u);
    ctx->pc = 0x223EA0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223EA4u; }
    }
    if (ctx->pc != 0x223EA4u) { return; }
    ctx->pc = 0x223EA4u;
    // 0x223ea4: 0x2404000c
    ctx->pc = 0x223ea4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x223ea8: 0xc088ce8
    ctx->pc = 0x223EA8u;
    SET_GPR_U32(ctx, 31, 0x223EB0u);
    ctx->pc = 0x223EACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223EB0u; }
    }
    if (ctx->pc != 0x223EB0u) { return; }
    ctx->pc = 0x223EB0u;
    // 0x223eb0: 0x4400002
    ctx->pc = 0x223EB0u;
    {
        const bool branch_taken_0x223eb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x223EB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x223eb0) {
            ctx->pc = 0x223EBCu;
            goto label_223ebc;
        }
    }
    ctx->pc = 0x223EB8u;
    // 0x223eb8: 0x8c500b00
    ctx->pc = 0x223eb8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 2816)));
label_223ebc:
    // 0x223ebc: 0x200102d
    ctx->pc = 0x223ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ec0: 0xdfbf0010
    ctx->pc = 0x223ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223ec4: 0xdfb00000
    ctx->pc = 0x223ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223ec8: 0x3e00008
    ctx->pc = 0x223EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223ECCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223EBCu: goto label_223ebc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223ED0u;
}
