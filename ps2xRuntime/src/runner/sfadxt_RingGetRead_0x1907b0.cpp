#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_RingGetRead
// Address: 0x1907b0 - 0x1907f8
void sfadxt_RingGetRead_0x1907b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_RingGetRead");


    ctx->pc = 0x1907b0u;

    // 0x1907b0: 0x27bdffb0
    ctx->pc = 0x1907b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1907b4: 0xffb10030
    ctx->pc = 0x1907b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1907b8: 0xffb00020
    ctx->pc = 0x1907b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1907bc: 0xa0882d
    ctx->pc = 0x1907bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907c0: 0xffbf0040
    ctx->pc = 0x1907c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1907c4: 0xc0802d
    ctx->pc = 0x1907c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907c8: 0x3a0302d
    ctx->pc = 0x1907c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907cc: 0xc064754
    ctx->pc = 0x1907CCu;
    SET_GPR_U32(ctx, 31, 0x1907D4u);
    ctx->pc = 0x1907D0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 17604)));
    ctx->pc = 0x191D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingGetRead_0x191d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1907D4u; }
        else if (ctx->pc != 0x1907D4u) { ctx->pc = 0x1907D4u; }
    }
    if (ctx->pc != 0x1907D4u) { return; }
    ctx->pc = 0x1907D4u;
    // 0x1907d4: 0x8fa40000
    ctx->pc = 0x1907d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1907d8: 0x8fa30004
    ctx->pc = 0x1907d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1907dc: 0xae240000
    ctx->pc = 0x1907dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1907e0: 0xae030000
    ctx->pc = 0x1907e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1907e4: 0xdfbf0040
    ctx->pc = 0x1907e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1907e8: 0xdfb10030
    ctx->pc = 0x1907e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1907ec: 0xdfb00020
    ctx->pc = 0x1907ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1907f0: 0x3e00008
    ctx->pc = 0x1907F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1907F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1907F8u;
}
