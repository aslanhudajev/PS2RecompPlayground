#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioGeneratorDies
// Address: 0x261048 - 0x2610b4
void AudioGeneratorDies_0x261048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261048u;

    // 0x261048: 0x80382d
    ctx->pc = 0x261048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26104c: 0x3c030034
    ctx->pc = 0x26104cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x261050: 0x2463e1e0
    ctx->pc = 0x261050u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959584));
    // 0x261054: 0x3c020034
    ctx->pc = 0x261054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261058: 0x8c44e7f0
    ctx->pc = 0x261058u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x26105c: 0x41080
    ctx->pc = 0x26105cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x261060: 0x431021
    ctx->pc = 0x261060u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261064: 0x8c460000
    ctx->pc = 0x261064u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261068: 0x2402000a
    ctx->pc = 0x261068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x26106c: 0x14820006
    ctx->pc = 0x26106Cu;
    {
        const bool branch_taken_0x26106c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x261070u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x26106c) {
            ctx->pc = 0x261088u;
            goto label_261088;
        }
    }
    ctx->pc = 0x261074u;
    // 0x261074: 0x3c03002c
    ctx->pc = 0x261074u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x261078: 0x34630025
    ctx->pc = 0x261078u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 37));
    // 0x26107c: 0x38a20018
    ctx->pc = 0x26107cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 24));
    // 0x261080: 0x62300a
    ctx->pc = 0x261080u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x261084: 0x3c020036
    ctx->pc = 0x261084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_261088:
    // 0x261088: 0x8c42d934
    ctx->pc = 0x261088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x26108c: 0x4410007
    ctx->pc = 0x26108Cu;
    {
        const bool branch_taken_0x26108c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26108c) {
            ctx->pc = 0x2610ACu;
            goto label_2610ac;
        }
    }
    ctx->pc = 0x261094u;
    // 0x261094: 0x4c00005
    ctx->pc = 0x261094u;
    {
        const bool branch_taken_0x261094 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x261098u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x261094) {
            ctx->pc = 0x2610ACu;
            goto label_2610ac;
        }
    }
    ctx->pc = 0x26109Cu;
    // 0x26109c: 0xe0282d
    ctx->pc = 0x26109cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2610a0: 0x2406007f
    ctx->pc = 0x2610a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x2610a4: 0x8088a26
    ctx->pc = 0x2610A4u;
    ctx->pc = 0x2610A8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 81));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x2610ACu;
label_2610ac:
    // 0x2610ac: 0x3e00008
    ctx->pc = 0x2610ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261088u: goto label_261088;
            case 0x2610ACu: goto label_2610ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2610B4u;
}
