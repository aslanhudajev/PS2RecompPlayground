#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioExitAnim
// Address: 0x2604a0 - 0x260538
void AudioExitAnim_0x2604a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2604a0u;

    // 0x2604a0: 0x27bdffd0
    ctx->pc = 0x2604a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2604a4: 0xffbf0020
    ctx->pc = 0x2604a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2604a8: 0xffb10010
    ctx->pc = 0x2604a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2604ac: 0xffb00000
    ctx->pc = 0x2604acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2604b0: 0x14800017
    ctx->pc = 0x2604B0u;
    {
        const bool branch_taken_0x2604b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2604B4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2604b0) {
            ctx->pc = 0x260510u;
            goto label_260510;
        }
    }
    ctx->pc = 0x2604B8u;
    // 0x2604b8: 0xc08878c
    ctx->pc = 0x2604B8u;
    SET_GPR_U32(ctx, 31, 0x2604C0u);
    ctx->pc = 0x2604BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604C0u; }
    }
    if (ctx->pc != 0x2604C0u) { return; }
    ctx->pc = 0x2604C0u;
    // 0x2604c0: 0x14400005
    ctx->pc = 0x2604C0u;
    {
        const bool branch_taken_0x2604c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2604C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2604c0) {
            ctx->pc = 0x2604D8u;
            goto label_2604d8;
        }
    }
    ctx->pc = 0x2604C8u;
    // 0x2604c8: 0x220282d
    ctx->pc = 0x2604c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604cc: 0x240600e0
    ctx->pc = 0x2604ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2604d0: 0xc088aa2
    ctx->pc = 0x2604D0u;
    SET_GPR_U32(ctx, 31, 0x2604D8u);
    ctx->pc = 0x2604D4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 118));
    ctx->pc = 0x222A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLOOP_0x222a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604D8u; }
    }
    if (ctx->pc != 0x2604D8u) { return; }
    ctx->pc = 0x2604D8u;
label_2604d8:
    // 0x2604d8: 0xc0887e4
    ctx->pc = 0x2604D8u;
    SET_GPR_U32(ctx, 31, 0x2604E0u);
    ctx->pc = 0x2604DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 118));
    ctx->pc = 0x221F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPriExists_0x221f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604E0u; }
    }
    if (ctx->pc != 0x2604E0u) { return; }
    ctx->pc = 0x2604E0u;
    // 0x2604e0: 0x40802d
    ctx->pc = 0x2604e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604e4: 0x12000010
    ctx->pc = 0x2604E4u;
    {
        const bool branch_taken_0x2604e4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2604E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2604e4) {
            ctx->pc = 0x260528u;
            goto label_260528;
        }
    }
    ctx->pc = 0x2604ECu;
    // 0x2604ec: 0xc088648
    ctx->pc = 0x2604ECu;
    SET_GPR_U32(ctx, 31, 0x2604F4u);
    ctx->pc = 0x2604F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604F4u; }
    }
    if (ctx->pc != 0x2604F4u) { return; }
    ctx->pc = 0x2604F4u;
    // 0x2604f4: 0x200202d
    ctx->pc = 0x2604f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604f8: 0x40282d
    ctx->pc = 0x2604f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2604fc: 0xdfbf0020
    ctx->pc = 0x2604fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260500: 0xdfb10010
    ctx->pc = 0x260500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260504: 0xdfb00000
    ctx->pc = 0x260504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260508: 0x8088850
    ctx->pc = 0x260508u;
    ctx->pc = 0x26050Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x222140u;
    AudioTrackPan_0x222140(rdram, ctx, runtime); return;
    ctx->pc = 0x260510u;
label_260510:
    // 0x260510: 0x24040003
    ctx->pc = 0x260510u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x260514: 0xdfbf0020
    ctx->pc = 0x260514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260518: 0xdfb10010
    ctx->pc = 0x260518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26051c: 0xdfb00000
    ctx->pc = 0x26051cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260520: 0x808870e
    ctx->pc = 0x260520u;
    ctx->pc = 0x260524u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x221C38u;
    AudioSoundKill_0x221c38(rdram, ctx, runtime); return;
    ctx->pc = 0x260528u;
label_260528:
    // 0x260528: 0xdfb10010
    ctx->pc = 0x260528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26052c: 0xdfb00000
    ctx->pc = 0x26052cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260530: 0x3e00008
    ctx->pc = 0x260530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2604D8u: goto label_2604d8;
            case 0x260510u: goto label_260510;
            case 0x260528u: goto label_260528;
            default: break;
        }
        return;
    }
    ctx->pc = 0x260538u;
}
