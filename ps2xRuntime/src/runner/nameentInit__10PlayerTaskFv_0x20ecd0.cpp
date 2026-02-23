#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nameentInit__10PlayerTaskFv
// Address: 0x20ecd0 - 0x20ed34
void nameentInit__10PlayerTaskFv_0x20ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nameentInit__10PlayerTaskFv");


    ctx->pc = 0x20ecd0u;

    // 0x20ecd0: 0x27bdfff0
    ctx->pc = 0x20ecd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ecd4: 0x7fbf0000
    ctx->pc = 0x20ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20ecd8: 0x8c831cbc
    ctx->pc = 0x20ecd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20ecdc: 0x3c020027
    ctx->pc = 0x20ecdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20ece0: 0x70803628
    ctx->pc = 0x20ece0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20ece4: 0x24423348
    ctx->pc = 0x20ece4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13128));
    // 0x20ece8: 0xa46000d0
    ctx->pc = 0x20ece8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 208), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ecec: 0xa4600208
    ctx->pc = 0x20ececu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 520), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ecf0: 0xa4600104
    ctx->pc = 0x20ecf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 260), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ecf4: 0xa460023c
    ctx->pc = 0x20ecf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 572), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ecf8: 0xa4600138
    ctx->pc = 0x20ecf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ecfc: 0xa4600270
    ctx->pc = 0x20ecfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 624), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ed00: 0xa460016c
    ctx->pc = 0x20ed00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 364), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ed04: 0xa46002a4
    ctx->pc = 0x20ed04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 676), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ed08: 0xa46001a0
    ctx->pc = 0x20ed08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 416), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ed0c: 0xa46002d8
    ctx->pc = 0x20ed0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ed10: 0xa46001d4
    ctx->pc = 0x20ed10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 468), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ed14: 0xa460030c
    ctx->pc = 0x20ed14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 780), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ed18: 0xa4801cc0
    ctx->pc = 0x20ed18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7360), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ed1c: 0x8c841cb4
    ctx->pc = 0x20ed1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7348)));
    // 0x20ed20: 0xc068fd8
    ctx->pc = 0x20ED20u;
    SET_GPR_U32(ctx, 31, 0x20ED28u);
    ctx->pc = 0x20ED24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED28u; }
        else if (ctx->pc != 0x20ED28u) { ctx->pc = 0x20ED28u; }
    }
    if (ctx->pc != 0x20ED28u) { return; }
    ctx->pc = 0x20ED28u;
    // 0x20ed28: 0x7bbf0000
    ctx->pc = 0x20ed28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ed2c: 0x3e00008
    ctx->pc = 0x20ED2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ED30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20ED34u;
}
