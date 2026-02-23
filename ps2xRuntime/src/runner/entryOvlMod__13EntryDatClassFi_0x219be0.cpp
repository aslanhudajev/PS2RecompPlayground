#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOvlMod__13EntryDatClassFi
// Address: 0x219be0 - 0x219c14
void entryOvlMod__13EntryDatClassFi_0x219be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOvlMod__13EntryDatClassFi");


    ctx->pc = 0x219be0u;

    // 0x219be0: 0x27bdfff0
    ctx->pc = 0x219be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219be4: 0x7fbf0000
    ctx->pc = 0x219be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x219be8: 0x84831002
    ctx->pc = 0x219be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x219bec: 0x2402001e
    ctx->pc = 0x219becu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x219bf0: 0x31900
    ctx->pc = 0x219bf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x219bf4: 0x831821
    ctx->pc = 0x219bf4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x219bf8: 0xac620000
    ctx->pc = 0x219bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x219bfc: 0xac650008
    ctx->pc = 0x219bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x219c00: 0xc0864f0
    ctx->pc = 0x219C00u;
    SET_GPR_U32(ctx, 31, 0x219C08u);
    ctx->pc = 0x219C04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C08u; }
        else if (ctx->pc != 0x219C08u) { ctx->pc = 0x219C08u; }
    }
    if (ctx->pc != 0x219C08u) { return; }
    ctx->pc = 0x219C08u;
    // 0x219c08: 0x7bbf0000
    ctx->pc = 0x219c08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219c0c: 0x3e00008
    ctx->pc = 0x219C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219C10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219C14u;
}
