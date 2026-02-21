#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_stop_all_sounds
// Address: 0x223e18 - 0x223e50
void aud_stop_all_sounds_0x223e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223e18u;

    // 0x223e18: 0x27bdffe0
    ctx->pc = 0x223e18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223e1c: 0xffbf0010
    ctx->pc = 0x223e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223e20: 0xc088cb6
    ctx->pc = 0x223E20u;
    SET_GPR_U32(ctx, 31, 0x223E28u);
    ctx->pc = 0x223E24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E28u; }
    }
    if (ctx->pc != 0x223E28u) { return; }
    ctx->pc = 0x223E28u;
    // 0x223e28: 0x2404000d
    ctx->pc = 0x223e28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x223e2c: 0xc088ce8
    ctx->pc = 0x223E2Cu;
    SET_GPR_U32(ctx, 31, 0x223E34u);
    ctx->pc = 0x223E30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E34u; }
    }
    if (ctx->pc != 0x223E34u) { return; }
    ctx->pc = 0x223E34u;
    // 0x223e34: 0xc088d32
    ctx->pc = 0x223E34u;
    SET_GPR_U32(ctx, 31, 0x223E3Cu);
    ctx->pc = 0x223E38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2234C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mput_reset_0x2234c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E3Cu; }
    }
    if (ctx->pc != 0x223E3Cu) { return; }
    ctx->pc = 0x223E3Cu;
    // 0x223e3c: 0x200102d
    ctx->pc = 0x223e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e40: 0xdfbf0010
    ctx->pc = 0x223e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223e44: 0xdfb00000
    ctx->pc = 0x223e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223e48: 0x3e00008
    ctx->pc = 0x223E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223E4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223E50u;
}
