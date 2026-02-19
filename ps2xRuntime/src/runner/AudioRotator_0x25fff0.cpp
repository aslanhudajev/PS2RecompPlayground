#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioRotator
// Address: 0x25fff0 - 0x260118
void AudioRotator_0x25fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fff0u;

    // 0x25fff0: 0x27bdffb0
    ctx->pc = 0x25fff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25fff4: 0xffbf0040
    ctx->pc = 0x25fff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25fff8: 0xffb30030
    ctx->pc = 0x25fff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25fffc: 0xffb20020
    ctx->pc = 0x25fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x260000: 0xffb10010
    ctx->pc = 0x260000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x260004: 0xffb00000
    ctx->pc = 0x260004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260008: 0x80882d
    ctx->pc = 0x260008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26000c: 0xa0902d
    ctx->pc = 0x26000cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260010: 0x3c020034
    ctx->pc = 0x260010u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260014: 0x2442dbd8
    ctx->pc = 0x260014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958040));
    // 0x260018: 0x3c030034
    ctx->pc = 0x260018u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26001c: 0x8c63e7f0
    ctx->pc = 0x26001cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294961136)));
    // 0x260020: 0x31880
    ctx->pc = 0x260020u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x260024: 0x621021
    ctx->pc = 0x260024u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260028: 0x8c500000
    ctx->pc = 0x260028u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26002c: 0x3c020034
    ctx->pc = 0x26002cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260030: 0x2442dc10
    ctx->pc = 0x260030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x260034: 0x621821
    ctx->pc = 0x260034u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260038: 0x3c020032
    ctx->pc = 0x260038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26003c: 0x8c42080c
    ctx->pc = 0x26003cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x260040: 0x14400005
    ctx->pc = 0x260040u;
    {
        const bool branch_taken_0x260040 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260044u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x260040) {
            ctx->pc = 0x260058u;
            goto label_260058;
        }
    }
    ctx->pc = 0x260048u;
    // 0x260048: 0x3c020032
    ctx->pc = 0x260048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26004c: 0x8c420810
    ctx->pc = 0x26004cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x260050: 0x10400002
    ctx->pc = 0x260050u;
    {
        const bool branch_taken_0x260050 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x260050) {
            ctx->pc = 0x26005Cu;
            goto label_26005c;
        }
    }
    ctx->pc = 0x260058u;
label_260058:
    // 0x260058: 0x882d
    ctx->pc = 0x260058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26005c:
    // 0x26005c: 0x16200019
    ctx->pc = 0x26005Cu;
    {
        const bool branch_taken_0x26005c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x26005c) {
            ctx->pc = 0x2600C4u;
            goto label_2600c4;
        }
    }
    ctx->pc = 0x260064u;
    // 0x260064: 0xc08878c
    ctx->pc = 0x260064u;
    SET_GPR_U32(ctx, 31, 0x26006Cu);
    ctx->pc = 0x260068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26006Cu; }
    }
    if (ctx->pc != 0x26006Cu) { return; }
    ctx->pc = 0x26006Cu;
    // 0x26006c: 0x14400005
    ctx->pc = 0x26006Cu;
    {
        const bool branch_taken_0x26006c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260070u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26006c) {
            ctx->pc = 0x260084u;
            goto label_260084;
        }
    }
    ctx->pc = 0x260074u;
    // 0x260074: 0x240282d
    ctx->pc = 0x260074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260078: 0x240600e0
    ctx->pc = 0x260078u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x26007c: 0xc088aa2
    ctx->pc = 0x26007Cu;
    SET_GPR_U32(ctx, 31, 0x260084u);
    ctx->pc = 0x260080u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 114));
    ctx->pc = 0x222A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLOOP_0x222a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260084u; }
    }
    if (ctx->pc != 0x260084u) { return; }
    ctx->pc = 0x260084u;
label_260084:
    // 0x260084: 0xc0887e4
    ctx->pc = 0x260084u;
    SET_GPR_U32(ctx, 31, 0x26008Cu);
    ctx->pc = 0x260088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 114));
    ctx->pc = 0x221F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPriExists_0x221f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26008Cu; }
    }
    if (ctx->pc != 0x26008Cu) { return; }
    ctx->pc = 0x26008Cu;
    // 0x26008c: 0x40802d
    ctx->pc = 0x26008cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260090: 0x1200001b
    ctx->pc = 0x260090u;
    {
        const bool branch_taken_0x260090 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x260094u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x260090) {
            ctx->pc = 0x260100u;
            goto label_260100;
        }
    }
    ctx->pc = 0x260098u;
    // 0x260098: 0xc088648
    ctx->pc = 0x260098u;
    SET_GPR_U32(ctx, 31, 0x2600A0u);
    ctx->pc = 0x26009Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2600A0u; }
    }
    if (ctx->pc != 0x2600A0u) { return; }
    ctx->pc = 0x2600A0u;
    // 0x2600a0: 0x200202d
    ctx->pc = 0x2600a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2600a4: 0x40282d
    ctx->pc = 0x2600a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2600a8: 0xdfbf0040
    ctx->pc = 0x2600a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2600ac: 0xdfb30030
    ctx->pc = 0x2600acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2600b0: 0xdfb20020
    ctx->pc = 0x2600b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2600b4: 0xdfb10010
    ctx->pc = 0x2600b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2600b8: 0xdfb00000
    ctx->pc = 0x2600b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2600bc: 0x8088850
    ctx->pc = 0x2600BCu;
    ctx->pc = 0x2600C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x222140u;
    AudioTrackPan_0x222140(rdram, ctx, runtime); return;
    ctx->pc = 0x2600C4u;
label_2600c4:
    // 0x2600c4: 0xc08870e
    ctx->pc = 0x2600C4u;
    SET_GPR_U32(ctx, 31, 0x2600CCu);
    ctx->pc = 0x2600C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundKill_0x221c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2600CCu; }
    }
    if (ctx->pc != 0x2600CCu) { return; }
    ctx->pc = 0x2600CCu;
    // 0x2600cc: 0x2a220002
    ctx->pc = 0x2600ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
    // 0x2600d0: 0x1440000b
    ctx->pc = 0x2600D0u;
    {
        const bool branch_taken_0x2600d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2600D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2600d0) {
            ctx->pc = 0x260100u;
            goto label_260100;
        }
    }
    ctx->pc = 0x2600D8u;
    // 0x2600d8: 0x260202d
    ctx->pc = 0x2600d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2600dc: 0x240282d
    ctx->pc = 0x2600dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2600e0: 0x240600e0
    ctx->pc = 0x2600e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2600e4: 0x382d
    ctx->pc = 0x2600e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2600e8: 0xdfb30030
    ctx->pc = 0x2600e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2600ec: 0xdfb20020
    ctx->pc = 0x2600ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2600f0: 0xdfb10010
    ctx->pc = 0x2600f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2600f4: 0xdfb00000
    ctx->pc = 0x2600f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2600f8: 0x8088a26
    ctx->pc = 0x2600F8u;
    ctx->pc = 0x2600FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260100u;
label_260100:
    // 0x260100: 0xdfb30030
    ctx->pc = 0x260100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260104: 0xdfb20020
    ctx->pc = 0x260104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260108: 0xdfb10010
    ctx->pc = 0x260108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26010c: 0xdfb00000
    ctx->pc = 0x26010cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260110: 0x3e00008
    ctx->pc = 0x260110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260114u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260058u: goto label_260058;
            case 0x26005Cu: goto label_26005c;
            case 0x260084u: goto label_260084;
            case 0x2600C4u: goto label_2600c4;
            case 0x260100u: goto label_260100;
            default: break;
        }
        return;
    }
    ctx->pc = 0x260118u;
}
