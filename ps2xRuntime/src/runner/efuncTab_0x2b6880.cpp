#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncTab
// Address: 0x2b6880 - 0x2b68dc
void efuncTab_0x2b6880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b6880u;

    // 0x2b6880: 0x27bdffe0
    ctx->pc = 0x2b6880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6884: 0xffbf0010
    ctx->pc = 0x2b6884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6888: 0xffb00000
    ctx->pc = 0x2b6888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b688c: 0x8c900000
    ctx->pc = 0x2b688cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b6890: 0xc0ad1a2
    ctx->pc = 0x2B6890u;
    SET_GPR_U32(ctx, 31, 0x2B6898u);
    ctx->pc = 0x2B6894u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6898u; }
    }
    if (ctx->pc != 0x2B6898u) { return; }
    ctx->pc = 0x2B6898u;
    // 0x2b6898: 0x3c030037
    ctx->pc = 0x2b6898u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2b689c: 0x8c6320ac
    ctx->pc = 0x2b689cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8364)));
    // 0x2b68a0: 0x8c630044
    ctx->pc = 0x2b68a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2b68a4: 0x431023
    ctx->pc = 0x2b68a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b68a8: 0x2403ffff
    ctx->pc = 0x2b68a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b68ac: 0x62182a
    ctx->pc = 0x2b68acu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2b68b0: 0x3100a
    ctx->pc = 0x2b68b0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x2b68b4: 0x24030040
    ctx->pc = 0x2b68b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b68b8: 0xae030000
    ctx->pc = 0x2b68b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b68bc: 0x3c030037
    ctx->pc = 0x2b68bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2b68c0: 0x24632130
    ctx->pc = 0x2b68c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8496));
    // 0x2b68c4: 0xae030010
    ctx->pc = 0x2b68c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2b68c8: 0xae020014
    ctx->pc = 0x2b68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2b68cc: 0xdfbf0010
    ctx->pc = 0x2b68ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b68d0: 0xdfb00000
    ctx->pc = 0x2b68d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b68d4: 0x3e00008
    ctx->pc = 0x2B68D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B68D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B68DCu;
}
