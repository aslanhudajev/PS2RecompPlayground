#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_death_sound
// Address: 0x25d190 - 0x25d20c
void do_death_sound_0x25d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d190u;

    // 0x25d190: 0x27bdffd0
    ctx->pc = 0x25d190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d194: 0xffbf0020
    ctx->pc = 0x25d194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25d198: 0xffb10010
    ctx->pc = 0x25d198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25d19c: 0xffb00000
    ctx->pc = 0x25d19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d1a0: 0x80882d
    ctx->pc = 0x25d1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1a4: 0xc08878c
    ctx->pc = 0x25D1A4u;
    SET_GPR_U32(ctx, 31, 0x25D1ACu);
    ctx->pc = 0x25D1A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 102));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D1ACu; }
    }
    if (ctx->pc != 0x25D1ACu) { return; }
    ctx->pc = 0x25D1ACu;
    // 0x25d1ac: 0x14400005
    ctx->pc = 0x25D1ACu;
    {
        const bool branch_taken_0x25d1ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D1B0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 102));
        if (branch_taken_0x25d1ac) {
            ctx->pc = 0x25D1C4u;
            goto label_25d1c4;
        }
    }
    ctx->pc = 0x25D1B4u;
    // 0x25d1b4: 0x220282d
    ctx->pc = 0x25d1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1b8: 0x2406007f
    ctx->pc = 0x25d1b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25d1bc: 0xc088aa2
    ctx->pc = 0x25D1BCu;
    SET_GPR_U32(ctx, 31, 0x25D1C4u);
    ctx->pc = 0x25D1C0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 111));
    ctx->pc = 0x222A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLOOP_0x222a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D1C4u; }
    }
    if (ctx->pc != 0x25D1C4u) { return; }
    ctx->pc = 0x25D1C4u;
label_25d1c4:
    // 0x25d1c4: 0xc0887e4
    ctx->pc = 0x25D1C4u;
    SET_GPR_U32(ctx, 31, 0x25D1CCu);
    ctx->pc = 0x25D1C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 111));
    ctx->pc = 0x221F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPriExists_0x221f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D1CCu; }
    }
    if (ctx->pc != 0x25D1CCu) { return; }
    ctx->pc = 0x25D1CCu;
    // 0x25d1cc: 0x40802d
    ctx->pc = 0x25d1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1d0: 0x1200000a
    ctx->pc = 0x25D1D0u;
    {
        const bool branch_taken_0x25d1d0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D1D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x25d1d0) {
            ctx->pc = 0x25D1FCu;
            goto label_25d1fc;
        }
    }
    ctx->pc = 0x25D1D8u;
    // 0x25d1d8: 0xc088648
    ctx->pc = 0x25D1D8u;
    SET_GPR_U32(ctx, 31, 0x25D1E0u);
    ctx->pc = 0x25D1DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D1E0u; }
    }
    if (ctx->pc != 0x25D1E0u) { return; }
    ctx->pc = 0x25D1E0u;
    // 0x25d1e0: 0x200202d
    ctx->pc = 0x25d1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1e4: 0x40282d
    ctx->pc = 0x25d1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1e8: 0xdfbf0020
    ctx->pc = 0x25d1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d1ec: 0xdfb10010
    ctx->pc = 0x25d1ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d1f0: 0xdfb00000
    ctx->pc = 0x25d1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d1f4: 0x8088850
    ctx->pc = 0x25D1F4u;
    ctx->pc = 0x25D1F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x222140u;
    AudioTrackPan_0x222140(rdram, ctx, runtime); return;
    ctx->pc = 0x25D1FCu;
label_25d1fc:
    // 0x25d1fc: 0xdfb10010
    ctx->pc = 0x25d1fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d200: 0xdfb00000
    ctx->pc = 0x25d200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d204: 0x3e00008
    ctx->pc = 0x25D204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D208u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25D1C4u: goto label_25d1c4;
            case 0x25D1FCu: goto label_25d1fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25D20Cu;
}
