#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_selected_blit
// Address: 0x285568 - 0x2855d4
void set_selected_blit_0x285568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x285568u;

    // 0x285568: 0x27bdffe0
    ctx->pc = 0x285568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28556c: 0xffbf0010
    ctx->pc = 0x28556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x285570: 0xffb00000
    ctx->pc = 0x285570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285574: 0x80802d
    ctx->pc = 0x285574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285578: 0x30a20007
    ctx->pc = 0x285578u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 7));
    // 0x28557c: 0x21080
    ctx->pc = 0x28557cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x285580: 0x3c090032
    ctx->pc = 0x285580u;
    SET_GPR_U32(ctx, 9, ((uint32_t)50 << 16));
    // 0x285584: 0x25291428
    ctx->pc = 0x285584u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5160));
    // 0x285588: 0x24050002
    ctx->pc = 0x285588u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x28558c: 0x302d
    ctx->pc = 0x28558cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285590: 0x382d
    ctx->pc = 0x285590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285594: 0x3c08003b
    ctx->pc = 0x285594u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x285598: 0x2508d168
    ctx->pc = 0x285598u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955368));
    // 0x28559c: 0xc0a139c
    ctx->pc = 0x28559Cu;
    SET_GPR_U32(ctx, 31, 0x2855A4u);
    ctx->pc = 0x2855A0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2855A4u; }
    }
    if (ctx->pc != 0x2855A4u) { return; }
    ctx->pc = 0x2855A4u;
    // 0x2855a4: 0x3c02003c
    ctx->pc = 0x2855a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2855a8: 0x24423b88
    ctx->pc = 0x2855a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15240));
    // 0x2855ac: 0x24030084
    ctx->pc = 0x2855acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 132));
    // 0x2855b0: 0x2038018
    ctx->pc = 0x2855b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2855b4: 0x501021
    ctx->pc = 0x2855b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2855b8: 0x8c440018
    ctx->pc = 0x2855b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2855bc: 0x2405ffff
    ctx->pc = 0x2855bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2855c0: 0x24060140
    ctx->pc = 0x2855c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2855c4: 0xdfbf0010
    ctx->pc = 0x2855c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2855c8: 0xdfb00000
    ctx->pc = 0x2855c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2855cc: 0x80b0cf6
    ctx->pc = 0x2855CCu;
    ctx->pc = 0x2855D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2C33D8u;
    MBBlitSetSize_0x2c33d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2855D4u;
}
