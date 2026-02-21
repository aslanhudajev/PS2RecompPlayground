#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSetStereo
// Address: 0x2206a8 - 0x2206e0
void AudioSetStereo_0x2206a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2206a8u;

    // 0x2206a8: 0x27bdfff0
    ctx->pc = 0x2206a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2206ac: 0xffbf0000
    ctx->pc = 0x2206acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2206b0: 0x3c020032
    ctx->pc = 0x2206b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2206b4: 0x8c42fd58
    ctx->pc = 0x2206b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x2206b8: 0x14400006
    ctx->pc = 0x2206B8u;
    {
        const bool branch_taken_0x2206b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2206BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2206b8) {
            ctx->pc = 0x2206D4u;
            goto label_2206d4;
        }
    }
    ctx->pc = 0x2206C0u;
    // 0x2206c0: 0x3c030032
    ctx->pc = 0x2206c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2206c4: 0x2c820001
    ctx->pc = 0x2206c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 1));
    // 0x2206c8: 0xc088e46
    ctx->pc = 0x2206C8u;
    SET_GPR_U32(ctx, 31, 0x2206D0u);
    ctx->pc = 0x2206CCu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966676), GPR_U32(ctx, 2));
    ctx->pc = 0x223918u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_set_output_mode_0x223918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2206D0u; }
    }
    if (ctx->pc != 0x2206D0u) { return; }
    ctx->pc = 0x2206D0u;
    // 0x2206d0: 0x24020001
    ctx->pc = 0x2206d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2206d4:
    // 0x2206d4: 0xdfbf0000
    ctx->pc = 0x2206d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2206d8: 0x3e00008
    ctx->pc = 0x2206D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2206DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2206D4u: goto label_2206d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2206E0u;
}
