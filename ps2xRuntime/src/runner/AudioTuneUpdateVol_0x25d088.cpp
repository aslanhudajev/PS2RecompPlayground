#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTuneUpdateVol
// Address: 0x25d088 - 0x25d0c8
void AudioTuneUpdateVol_0x25d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d088u;

    // 0x25d088: 0x27bdffe0
    ctx->pc = 0x25d088u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d08c: 0xffbf0010
    ctx->pc = 0x25d08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d090: 0xffb00000
    ctx->pc = 0x25d090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d094: 0x80802d
    ctx->pc = 0x25d094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d098: 0xc0887e4
    ctx->pc = 0x25D098u;
    SET_GPR_U32(ctx, 31, 0x25D0A0u);
    ctx->pc = 0x25D09Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x221F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPriExists_0x221f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D0A0u; }
    }
    if (ctx->pc != 0x25D0A0u) { return; }
    ctx->pc = 0x25D0A0u;
    // 0x25d0a0: 0x10400006
    ctx->pc = 0x25D0A0u;
    {
        const bool branch_taken_0x25d0a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D0A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25d0a0) {
            ctx->pc = 0x25D0BCu;
            goto label_25d0bc;
        }
    }
    ctx->pc = 0x25D0A8u;
    // 0x25d0a8: 0x40202d
    ctx->pc = 0x25d0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0ac: 0x200282d
    ctx->pc = 0x25d0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0b0: 0xdfb00000
    ctx->pc = 0x25d0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d0b4: 0x8088846
    ctx->pc = 0x25D0B4u;
    ctx->pc = 0x25D0B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x222118u;
    AudioTrackMusicVol_0x222118(rdram, ctx, runtime); return;
    ctx->pc = 0x25D0BCu;
label_25d0bc:
    // 0x25d0bc: 0xdfb00000
    ctx->pc = 0x25d0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d0c0: 0x3e00008
    ctx->pc = 0x25D0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D0C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25D0BCu: goto label_25d0bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25D0C8u;
}
