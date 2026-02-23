#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryColli__13EntryDatClassFi
// Address: 0x219ac0 - 0x219af4
void entryColli__13EntryDatClassFi_0x219ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryColli__13EntryDatClassFi");


    ctx->pc = 0x219ac0u;

    // 0x219ac0: 0x27bdfff0
    ctx->pc = 0x219ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219ac4: 0x7fbf0000
    ctx->pc = 0x219ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x219ac8: 0x84831002
    ctx->pc = 0x219ac8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x219acc: 0x24020019
    ctx->pc = 0x219accu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
    // 0x219ad0: 0x31900
    ctx->pc = 0x219ad0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x219ad4: 0x831821
    ctx->pc = 0x219ad4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x219ad8: 0xac620000
    ctx->pc = 0x219ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x219adc: 0xac650008
    ctx->pc = 0x219adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x219ae0: 0xc0864f0
    ctx->pc = 0x219AE0u;
    SET_GPR_U32(ctx, 31, 0x219AE8u);
    ctx->pc = 0x219AE4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AE8u; }
        else if (ctx->pc != 0x219AE8u) { ctx->pc = 0x219AE8u; }
    }
    if (ctx->pc != 0x219AE8u) { return; }
    ctx->pc = 0x219AE8u;
    // 0x219ae8: 0x7bbf0000
    ctx->pc = 0x219ae8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219aec: 0x3e00008
    ctx->pc = 0x219AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219AF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219AF4u;
}
