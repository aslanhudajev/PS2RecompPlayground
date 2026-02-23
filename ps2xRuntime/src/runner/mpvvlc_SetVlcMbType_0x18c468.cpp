#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_SetVlcMbType
// Address: 0x18c468 - 0x18c4c8
void mpvvlc_SetVlcMbType_0x18c468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_SetVlcMbType");


    ctx->pc = 0x18c468u;

    // 0x18c468: 0x27bdffe0
    ctx->pc = 0x18c468u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c46c: 0x3c020024
    ctx->pc = 0x18c46cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c470: 0xffb00000
    ctx->pc = 0x18c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18c474: 0x3c050024
    ctx->pc = 0x18c474u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18c478: 0x2490ffc0
    ctx->pc = 0x18c478u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x18c47c: 0xffbf0010
    ctx->pc = 0x18c47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18c480: 0xac501a40
    ctx->pc = 0x18c480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6720), GPR_U32(ctx, 16));
    // 0x18c484: 0x200202d
    ctx->pc = 0x18c484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c488: 0x24a51f78
    ctx->pc = 0x18c488u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8056));
    // 0x18c48c: 0xc0601b2
    ctx->pc = 0x18C48Cu;
    SET_GPR_U32(ctx, 31, 0x18C494u);
    ctx->pc = 0x18C490u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C494u; }
        else if (ctx->pc != 0x18C494u) { ctx->pc = 0x18C494u; }
    }
    if (ctx->pc != 0x18C494u) { return; }
    ctx->pc = 0x18C494u;
    // 0x18c494: 0x2610ff80
    ctx->pc = 0x18c494u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x18c498: 0x3c020024
    ctx->pc = 0x18c498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c49c: 0x3c050024
    ctx->pc = 0x18c49cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18c4a0: 0xac501a44
    ctx->pc = 0x18c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6724), GPR_U32(ctx, 16));
    // 0x18c4a4: 0x200202d
    ctx->pc = 0x18c4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4a8: 0x24a51fb8
    ctx->pc = 0x18c4a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8120));
    // 0x18c4ac: 0xc0601b2
    ctx->pc = 0x18C4ACu;
    SET_GPR_U32(ctx, 31, 0x18C4B4u);
    ctx->pc = 0x18C4B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C4B4u; }
        else if (ctx->pc != 0x18C4B4u) { ctx->pc = 0x18C4B4u; }
    }
    if (ctx->pc != 0x18C4B4u) { return; }
    ctx->pc = 0x18C4B4u;
    // 0x18c4b4: 0x200102d
    ctx->pc = 0x18c4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4b8: 0xdfbf0010
    ctx->pc = 0x18c4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c4bc: 0xdfb00000
    ctx->pc = 0x18c4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c4c0: 0x3e00008
    ctx->pc = 0x18C4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C4C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C4C8u;
}
