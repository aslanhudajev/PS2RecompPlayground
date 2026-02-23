#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_InitUoSjBuf
// Address: 0x191a18 - 0x191a58
void sfbuf_InitUoSjBuf_0x191a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_InitUoSjBuf");


    ctx->pc = 0x191a18u;

    // 0x191a18: 0x24020388
    ctx->pc = 0x191a18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x191a1c: 0x27bdffe0
    ctx->pc = 0x191a1cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191a20: 0xe21818
    ctx->pc = 0x191a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x191a24: 0xffb00000
    ctx->pc = 0x191a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x191a28: 0xffbf0010
    ctx->pc = 0x191a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x191a2c: 0x24050003
    ctx->pc = 0x191a2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x191a30: 0x24060001
    ctx->pc = 0x191a30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x191a34: 0x648021
    ctx->pc = 0x191a34u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x191a38: 0x200202d
    ctx->pc = 0x191a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a3c: 0xc064696
    ctx->pc = 0x191A3Cu;
    SET_GPR_U32(ctx, 31, 0x191A44u);
    ctx->pc = 0x191A40u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x191A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_InitBufData_0x191a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A44u; }
        else if (ctx->pc != 0x191A44u) { ctx->pc = 0x191A44u; }
    }
    if (ctx->pc != 0x191A44u) { return; }
    ctx->pc = 0x191A44u;
    // 0x191a44: 0x200202d
    ctx->pc = 0x191a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a48: 0xdfbf0010
    ctx->pc = 0x191a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191a4c: 0xdfb00000
    ctx->pc = 0x191a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191a50: 0x806469e
    ctx->pc = 0x191A50u;
    ctx->pc = 0x191A54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x191A78u;
    sfbuf_InitUoSj_0x191a78(rdram, ctx, runtime); return;
    ctx->pc = 0x191A58u;
}
