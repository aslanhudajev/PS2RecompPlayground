#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioCountDown
// Address: 0x25e170 - 0x25e1a4
void AudioCountDown_0x25e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e170u;

    // 0x25e170: 0x80302d
    ctx->pc = 0x25e170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e174: 0x2cc2000b
    ctx->pc = 0x25e174u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 11));
    // 0x25e178: 0x10400008
    ctx->pc = 0x25E178u;
    {
        const bool branch_taken_0x25e178 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25E17Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x25e178) {
            ctx->pc = 0x25E19Cu;
            goto label_25e19c;
        }
    }
    ctx->pc = 0x25E180u;
    // 0x25e180: 0x2463d540
    ctx->pc = 0x25e180u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956352));
    // 0x25e184: 0x61080
    ctx->pc = 0x25e184u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x25e188: 0x431021
    ctx->pc = 0x25e188u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e18c: 0x8c440000
    ctx->pc = 0x25e18cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e190: 0x240500e0
    ctx->pc = 0x25e190u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e194: 0x8088a94
    ctx->pc = 0x25E194u;
    ctx->pc = 0x25E198u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 21));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x25E19Cu;
label_25e19c:
    // 0x25e19c: 0x3e00008
    ctx->pc = 0x25E19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E19Cu: goto label_25e19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E1A4u;
}
