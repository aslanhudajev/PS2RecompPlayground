#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioStoneGate
// Address: 0x260288 - 0x26036c
void AudioStoneGate_0x260288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260288u;

    // 0x260288: 0x27bdffd0
    ctx->pc = 0x260288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26028c: 0xffbf0020
    ctx->pc = 0x26028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x260290: 0xffb10010
    ctx->pc = 0x260290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x260294: 0xffb00000
    ctx->pc = 0x260294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260298: 0x80802d
    ctx->pc = 0x260298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26029c: 0x3c020032
    ctx->pc = 0x26029cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2602a0: 0x8c42080c
    ctx->pc = 0x2602a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x2602a4: 0x14400005
    ctx->pc = 0x2602A4u;
    {
        const bool branch_taken_0x2602a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2602A8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2602a4) {
            ctx->pc = 0x2602BCu;
            goto label_2602bc;
        }
    }
    ctx->pc = 0x2602ACu;
    // 0x2602ac: 0x3c020032
    ctx->pc = 0x2602acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2602b0: 0x8c420810
    ctx->pc = 0x2602b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x2602b4: 0x10400002
    ctx->pc = 0x2602B4u;
    {
        const bool branch_taken_0x2602b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2602b4) {
            ctx->pc = 0x2602C0u;
            goto label_2602c0;
        }
    }
    ctx->pc = 0x2602BCu;
label_2602bc:
    // 0x2602bc: 0x802d
    ctx->pc = 0x2602bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2602c0:
    // 0x2602c0: 0x16000018
    ctx->pc = 0x2602C0u;
    {
        const bool branch_taken_0x2602c0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2602C4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
        if (branch_taken_0x2602c0) {
            ctx->pc = 0x260324u;
            goto label_260324;
        }
    }
    ctx->pc = 0x2602C8u;
    // 0x2602c8: 0xc08878c
    ctx->pc = 0x2602C8u;
    SET_GPR_U32(ctx, 31, 0x2602D0u);
    ctx->pc = 0x2602CCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 27));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2602D0u; }
    }
    if (ctx->pc != 0x2602D0u) { return; }
    ctx->pc = 0x2602D0u;
    // 0x2602d0: 0x14400006
    ctx->pc = 0x2602D0u;
    {
        const bool branch_taken_0x2602d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2602D4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
        if (branch_taken_0x2602d0) {
            ctx->pc = 0x2602ECu;
            goto label_2602ec;
        }
    }
    ctx->pc = 0x2602D8u;
    // 0x2602d8: 0x3484001b
    ctx->pc = 0x2602d8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 27));
    // 0x2602dc: 0x220282d
    ctx->pc = 0x2602dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2602e0: 0x240600e0
    ctx->pc = 0x2602e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2602e4: 0xc088aa2
    ctx->pc = 0x2602E4u;
    SET_GPR_U32(ctx, 31, 0x2602ECu);
    ctx->pc = 0x2602E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 117));
    ctx->pc = 0x222A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLOOP_0x222a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2602ECu; }
    }
    if (ctx->pc != 0x2602ECu) { return; }
    ctx->pc = 0x2602ECu;
label_2602ec:
    // 0x2602ec: 0xc0887e4
    ctx->pc = 0x2602ECu;
    SET_GPR_U32(ctx, 31, 0x2602F4u);
    ctx->pc = 0x2602F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 117));
    ctx->pc = 0x221F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPriExists_0x221f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2602F4u; }
    }
    if (ctx->pc != 0x2602F4u) { return; }
    ctx->pc = 0x2602F4u;
    // 0x2602f4: 0x40802d
    ctx->pc = 0x2602f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2602f8: 0x12000018
    ctx->pc = 0x2602F8u;
    {
        const bool branch_taken_0x2602f8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2602FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2602f8) {
            ctx->pc = 0x26035Cu;
            goto label_26035c;
        }
    }
    ctx->pc = 0x260300u;
    // 0x260300: 0xc088648
    ctx->pc = 0x260300u;
    SET_GPR_U32(ctx, 31, 0x260308u);
    ctx->pc = 0x260304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260308u; }
    }
    if (ctx->pc != 0x260308u) { return; }
    ctx->pc = 0x260308u;
    // 0x260308: 0x200202d
    ctx->pc = 0x260308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26030c: 0x40282d
    ctx->pc = 0x26030cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260310: 0xdfbf0020
    ctx->pc = 0x260310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260314: 0xdfb10010
    ctx->pc = 0x260314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260318: 0xdfb00000
    ctx->pc = 0x260318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26031c: 0x8088850
    ctx->pc = 0x26031Cu;
    ctx->pc = 0x260320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x222140u;
    AudioTrackPan_0x222140(rdram, ctx, runtime); return;
    ctx->pc = 0x260324u;
label_260324:
    // 0x260324: 0xc08870e
    ctx->pc = 0x260324u;
    SET_GPR_U32(ctx, 31, 0x26032Cu);
    ctx->pc = 0x260328u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 27));
    ctx->pc = 0x221C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundKill_0x221c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26032Cu; }
    }
    if (ctx->pc != 0x26032Cu) { return; }
    ctx->pc = 0x26032Cu;
    // 0x26032c: 0x2a020002
    ctx->pc = 0x26032cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x260330: 0x1440000a
    ctx->pc = 0x260330u;
    {
        const bool branch_taken_0x260330 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260334u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x260330) {
            ctx->pc = 0x26035Cu;
            goto label_26035c;
        }
    }
    ctx->pc = 0x260338u;
    // 0x260338: 0x3c040027
    ctx->pc = 0x260338u;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x26033c: 0x3484001c
    ctx->pc = 0x26033cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 28));
    // 0x260340: 0x220282d
    ctx->pc = 0x260340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260344: 0x240600e0
    ctx->pc = 0x260344u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x260348: 0x24070012
    ctx->pc = 0x260348u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 18));
    // 0x26034c: 0xdfb10010
    ctx->pc = 0x26034cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260350: 0xdfb00000
    ctx->pc = 0x260350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260354: 0x8088a26
    ctx->pc = 0x260354u;
    ctx->pc = 0x260358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x26035Cu;
label_26035c:
    // 0x26035c: 0xdfb10010
    ctx->pc = 0x26035cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260360: 0xdfb00000
    ctx->pc = 0x260360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260364: 0x3e00008
    ctx->pc = 0x260364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260368u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2602BCu: goto label_2602bc;
            case 0x2602C0u: goto label_2602c0;
            case 0x2602ECu: goto label_2602ec;
            case 0x260324u: goto label_260324;
            case 0x26035Cu: goto label_26035c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26036Cu;
}
