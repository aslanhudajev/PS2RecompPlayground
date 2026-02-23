#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_AddHnVbIn
// Address: 0x19e668 - 0x19e6ac
void sftim_AddHnVbIn_0x19e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_AddHnVbIn");


    ctx->pc = 0x19e668u;

    // 0x19e668: 0x27bdffe0
    ctx->pc = 0x19e668u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e66c: 0x3c020026
    ctx->pc = 0x19e66cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19e670: 0xffb00000
    ctx->pc = 0x19e670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e674: 0x24900a94
    ctx->pc = 0x19e674u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 2708));
    // 0x19e678: 0xffbf0010
    ctx->pc = 0x19e678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e67c: 0xc063132
    ctx->pc = 0x19E67Cu;
    SET_GPR_U32(ctx, 31, 0x19E684u);
    ctx->pc = 0x19E680u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958832)));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E684u; }
        else if (ctx->pc != 0x19E684u) { ctx->pc = 0x19E684u; }
    }
    if (ctx->pc != 0x19E684u) { return; }
    ctx->pc = 0x19E684u;
    // 0x19e684: 0x8e040254
    ctx->pc = 0x19e684u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x19e688: 0xdfbf0010
    ctx->pc = 0x19e688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e68c: 0x822021
    ctx->pc = 0x19e68cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19e690: 0xae040254
    ctx->pc = 0x19e690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 4));
    // 0x19e694: 0x8e030278
    ctx->pc = 0x19e694u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x19e698: 0x621821
    ctx->pc = 0x19e698u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e69c: 0xae030278
    ctx->pc = 0x19e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
    // 0x19e6a0: 0xdfb00000
    ctx->pc = 0x19e6a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e6a4: 0x3e00008
    ctx->pc = 0x19E6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E6A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E6ACu;
}
