#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMEM_AddWrite
// Address: 0x193dc0 - 0x193de8
void SFMEM_AddWrite_0x193dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMEM_AddWrite");


    ctx->pc = 0x193dc0u;

    // 0x193dc0: 0x27bdfff0
    ctx->pc = 0x193dc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193dc4: 0xa0102d
    ctx->pc = 0x193dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193dc8: 0xffbf0000
    ctx->pc = 0x193dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193dcc: 0xc0382d
    ctx->pc = 0x193dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193dd0: 0x40302d
    ctx->pc = 0x193dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193dd4: 0xc064796
    ctx->pc = 0x193DD4u;
    SET_GPR_U32(ctx, 31, 0x193DDCu);
    ctx->pc = 0x193DD8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12328)));
    ctx->pc = 0x191E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingAddWrite_0x191e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193DDCu; }
        else if (ctx->pc != 0x193DDCu) { ctx->pc = 0x193DDCu; }
    }
    if (ctx->pc != 0x193DDCu) { return; }
    ctx->pc = 0x193DDCu;
    // 0x193ddc: 0xdfbf0000
    ctx->pc = 0x193ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193de0: 0x3e00008
    ctx->pc = 0x193DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193DE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193DE8u;
}
