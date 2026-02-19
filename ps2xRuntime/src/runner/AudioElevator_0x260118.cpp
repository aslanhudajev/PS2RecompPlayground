#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioElevator
// Address: 0x260118 - 0x260284
void AudioElevator_0x260118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260118u;

    // 0x260118: 0x27bdff90
    ctx->pc = 0x260118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26011c: 0xffbf0060
    ctx->pc = 0x26011cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x260120: 0xffb50050
    ctx->pc = 0x260120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x260124: 0xffb40040
    ctx->pc = 0x260124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x260128: 0xffb30030
    ctx->pc = 0x260128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26012c: 0xffb20020
    ctx->pc = 0x26012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x260130: 0xffb10010
    ctx->pc = 0x260130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x260134: 0xffb00000
    ctx->pc = 0x260134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260138: 0x80882d
    ctx->pc = 0x260138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26013c: 0xa0902d
    ctx->pc = 0x26013cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260140: 0xa02d
    ctx->pc = 0x260140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260144: 0x621000a
    ctx->pc = 0x260144u;
    {
        const bool branch_taken_0x260144 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x260148u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 115));
        if (branch_taken_0x260144) {
            ctx->pc = 0x260170u;
            goto label_260170;
        }
    }
    ctx->pc = 0x26014Cu;
    // 0x26014c: 0xc0887e4
    ctx->pc = 0x26014Cu;
    SET_GPR_U32(ctx, 31, 0x260154u);
    ctx->pc = 0x260150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 115));
    ctx->pc = 0x221F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPriExists_0x221f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260154u; }
    }
    if (ctx->pc != 0x260154u) { return; }
    ctx->pc = 0x260154u;
    // 0x260154: 0x40802d
    ctx->pc = 0x260154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260158: 0x12000041
    ctx->pc = 0x260158u;
    {
        const bool branch_taken_0x260158 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x26015Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260158) {
            ctx->pc = 0x260260u;
            goto label_260260;
        }
    }
    ctx->pc = 0x260160u;
    // 0x260160: 0xc0886ae
    ctx->pc = 0x260160u;
    SET_GPR_U32(ctx, 31, 0x260168u);
    ctx->pc = 0x260164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackKill_0x221ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260168u; }
    }
    if (ctx->pc != 0x260168u) { return; }
    ctx->pc = 0x260168u;
    // 0x260168: 0x1000003d
    ctx->pc = 0x260168u;
    {
        const bool branch_taken_0x260168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26016Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260168) {
            ctx->pc = 0x260260u;
            goto label_260260;
        }
    }
    ctx->pc = 0x260170u;
label_260170:
    // 0x260170: 0x2cc20006
    ctx->pc = 0x260170u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 6));
    // 0x260174: 0x14400003
    ctx->pc = 0x260174u;
    {
        const bool branch_taken_0x260174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260178u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x260174) {
            ctx->pc = 0x260184u;
            goto label_260184;
        }
    }
    ctx->pc = 0x26017Cu;
label_26017c:
    // 0x26017c: 0x10000038
    ctx->pc = 0x26017Cu;
    {
        const bool branch_taken_0x26017c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260180u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26017c) {
            ctx->pc = 0x260260u;
            goto label_260260;
        }
    }
    ctx->pc = 0x260184u;
label_260184:
    // 0x260184: 0x24422b18
    ctx->pc = 0x260184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11032));
    // 0x260188: 0x620c0
    ctx->pc = 0x260188u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 3));
    // 0x26018c: 0x821821
    ctx->pc = 0x26018cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x260190: 0x8c700000
    ctx->pc = 0x260190u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260194: 0x441021
    ctx->pc = 0x260194u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x260198: 0x600fff8
    ctx->pc = 0x260198u;
    {
        const bool branch_taken_0x260198 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x26019Cu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        if (branch_taken_0x260198) {
            ctx->pc = 0x26017Cu;
            goto label_26017c;
        }
    }
    ctx->pc = 0x2601A0u;
    // 0x2601a0: 0x660fff6
    ctx->pc = 0x2601A0u;
    {
        const bool branch_taken_0x2601a0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2601A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2601a0) {
            ctx->pc = 0x26017Cu;
            goto label_26017c;
        }
    }
    ctx->pc = 0x2601A8u;
    // 0x2601a8: 0x8c42080c
    ctx->pc = 0x2601a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x2601ac: 0x54400005
    ctx->pc = 0x2601ACu;
    {
        const bool branch_taken_0x2601ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2601ac) {
            ctx->pc = 0x2601B0u;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2601C4u;
            goto label_2601c4;
        }
    }
    ctx->pc = 0x2601B4u;
    // 0x2601b4: 0x3c020032
    ctx->pc = 0x2601b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2601b8: 0x8c420810
    ctx->pc = 0x2601b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x2601bc: 0x54400001
    ctx->pc = 0x2601BCu;
    {
        const bool branch_taken_0x2601bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2601bc) {
            ctx->pc = 0x2601C0u;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2601C4u;
            goto label_2601c4;
        }
    }
    ctx->pc = 0x2601C4u;
label_2601c4:
    // 0x2601c4: 0x16200017
    ctx->pc = 0x2601C4u;
    {
        const bool branch_taken_0x2601c4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2601c4) {
            ctx->pc = 0x260224u;
            goto label_260224;
        }
    }
    ctx->pc = 0x2601CCu;
    // 0x2601cc: 0xc08878c
    ctx->pc = 0x2601CCu;
    SET_GPR_U32(ctx, 31, 0x2601D4u);
    ctx->pc = 0x2601D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2601D4u; }
    }
    if (ctx->pc != 0x2601D4u) { return; }
    ctx->pc = 0x2601D4u;
    // 0x2601d4: 0x14400007
    ctx->pc = 0x2601D4u;
    {
        const bool branch_taken_0x2601d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2601D8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2601d4) {
            ctx->pc = 0x2601F4u;
            goto label_2601f4;
        }
    }
    ctx->pc = 0x2601DCu;
    // 0x2601dc: 0x200202d
    ctx->pc = 0x2601dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2601e0: 0x240282d
    ctx->pc = 0x2601e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2601e4: 0x240600e0
    ctx->pc = 0x2601e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2601e8: 0xc088aa2
    ctx->pc = 0x2601E8u;
    SET_GPR_U32(ctx, 31, 0x2601F0u);
    ctx->pc = 0x2601ECu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLOOP_0x222a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2601F0u; }
    }
    if (ctx->pc != 0x2601F0u) { return; }
    ctx->pc = 0x2601F0u;
    // 0x2601f0: 0x24140002
    ctx->pc = 0x2601f0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
label_2601f4:
    // 0x2601f4: 0xc0887e4
    ctx->pc = 0x2601F4u;
    SET_GPR_U32(ctx, 31, 0x2601FCu);
    ctx->pc = 0x2601F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPriExists_0x221f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2601FCu; }
    }
    if (ctx->pc != 0x2601FCu) { return; }
    ctx->pc = 0x2601FCu;
    // 0x2601fc: 0x40802d
    ctx->pc = 0x2601fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260200: 0x12000017
    ctx->pc = 0x260200u;
    {
        const bool branch_taken_0x260200 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x260204u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260200) {
            ctx->pc = 0x260260u;
            goto label_260260;
        }
    }
    ctx->pc = 0x260208u;
    // 0x260208: 0xc088648
    ctx->pc = 0x260208u;
    SET_GPR_U32(ctx, 31, 0x260210u);
    ctx->pc = 0x26020Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260210u; }
    }
    if (ctx->pc != 0x260210u) { return; }
    ctx->pc = 0x260210u;
    // 0x260210: 0x200202d
    ctx->pc = 0x260210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260214: 0xc088850
    ctx->pc = 0x260214u;
    SET_GPR_U32(ctx, 31, 0x26021Cu);
    ctx->pc = 0x260218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222140u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackPan_0x222140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26021Cu; }
    }
    if (ctx->pc != 0x26021Cu) { return; }
    ctx->pc = 0x26021Cu;
    // 0x26021c: 0x10000010
    ctx->pc = 0x26021Cu;
    {
        const bool branch_taken_0x26021c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260220u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26021c) {
            ctx->pc = 0x260260u;
            goto label_260260;
        }
    }
    ctx->pc = 0x260224u;
label_260224:
    // 0x260224: 0xc08878c
    ctx->pc = 0x260224u;
    SET_GPR_U32(ctx, 31, 0x26022Cu);
    ctx->pc = 0x260228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26022Cu; }
    }
    if (ctx->pc != 0x26022Cu) { return; }
    ctx->pc = 0x26022Cu;
    // 0x26022c: 0x1040000c
    ctx->pc = 0x26022Cu;
    {
        const bool branch_taken_0x26022c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x260230u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26022c) {
            ctx->pc = 0x260260u;
            goto label_260260;
        }
    }
    ctx->pc = 0x260234u;
    // 0x260234: 0xc08870e
    ctx->pc = 0x260234u;
    SET_GPR_U32(ctx, 31, 0x26023Cu);
    ctx->pc = 0x260238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundKill_0x221c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26023Cu; }
    }
    if (ctx->pc != 0x26023Cu) { return; }
    ctx->pc = 0x26023Cu;
    // 0x26023c: 0x2a220002
    ctx->pc = 0x26023cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
    // 0x260240: 0x14400007
    ctx->pc = 0x260240u;
    {
        const bool branch_taken_0x260240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260244u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260240) {
            ctx->pc = 0x260260u;
            goto label_260260;
        }
    }
    ctx->pc = 0x260248u;
    // 0x260248: 0x260202d
    ctx->pc = 0x260248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26024c: 0x240282d
    ctx->pc = 0x26024cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260250: 0x240600e0
    ctx->pc = 0x260250u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x260254: 0xc088a26
    ctx->pc = 0x260254u;
    SET_GPR_U32(ctx, 31, 0x26025Cu);
    ctx->pc = 0x260258u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 68));
    ctx->pc = 0x222898u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX_0x222898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26025Cu; }
    }
    if (ctx->pc != 0x26025Cu) { return; }
    ctx->pc = 0x26025Cu;
    // 0x26025c: 0x280102d
    ctx->pc = 0x26025cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260260:
    // 0x260260: 0xdfbf0060
    ctx->pc = 0x260260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260264: 0xdfb50050
    ctx->pc = 0x260264u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260268: 0xdfb40040
    ctx->pc = 0x260268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26026c: 0xdfb30030
    ctx->pc = 0x26026cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260270: 0xdfb20020
    ctx->pc = 0x260270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260274: 0xdfb10010
    ctx->pc = 0x260274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260278: 0xdfb00000
    ctx->pc = 0x260278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26027c: 0x3e00008
    ctx->pc = 0x26027Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260280u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260170u: goto label_260170;
            case 0x26017Cu: goto label_26017c;
            case 0x260184u: goto label_260184;
            case 0x2601C4u: goto label_2601c4;
            case 0x2601F4u: goto label_2601f4;
            case 0x260224u: goto label_260224;
            case 0x260260u: goto label_260260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x260284u;
}
