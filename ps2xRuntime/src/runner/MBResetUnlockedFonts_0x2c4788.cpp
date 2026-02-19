#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBResetUnlockedFonts
// Address: 0x2c4788 - 0x2c47c0
void MBResetUnlockedFonts_0x2c4788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c4788u;

    // 0x2c4788: 0x3c03003d
    ctx->pc = 0x2c4788u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c478c: 0x3c02003d
    ctx->pc = 0x2c478cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4790: 0x2442b938
    ctx->pc = 0x2c4790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949176));
    // 0x2c4794: 0x42080
    ctx->pc = 0x2c4794u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c4798: 0x822021
    ctx->pc = 0x2c4798u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c479c: 0x8c62b89c
    ctx->pc = 0x2c479cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294949020)));
    // 0x2c47a0: 0x8c840000
    ctx->pc = 0x2c47a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c47a4: 0x10440004
    ctx->pc = 0x2C47A4u;
    {
        const bool branch_taken_0x2c47a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x2C47A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c47a4) {
            ctx->pc = 0x2C47B8u;
            goto label_2c47b8;
        }
    }
    ctx->pc = 0x2C47ACu;
    // 0x2c47ac: 0xac64b89c
    ctx->pc = 0x2c47acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949020), GPR_U32(ctx, 4));
    // 0x2c47b0: 0x3c030038
    ctx->pc = 0x2c47b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c47b4: 0xac62b134
    ctx->pc = 0x2c47b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947124), GPR_U32(ctx, 2));
label_2c47b8:
    // 0x2c47b8: 0x80b11c4
    ctx->pc = 0x2C47B8u;
    ctx->pc = 0x2C4710u;
    MBResetFontData_0x2c4710(rdram, ctx, runtime); return;
    ctx->pc = 0x2C47C0u;
}
