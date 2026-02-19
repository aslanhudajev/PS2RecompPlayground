#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSetVolMusic
// Address: 0x2205c8 - 0x220638
void AudioSetVolMusic_0x2205c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2205c8u;

    // 0x2205c8: 0x27bdffe0
    ctx->pc = 0x2205c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2205cc: 0xffbf0010
    ctx->pc = 0x2205ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2205d0: 0xffb00000
    ctx->pc = 0x2205d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2205d4: 0x80302d
    ctx->pc = 0x2205d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205d8: 0x3c100032
    ctx->pc = 0x2205d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x2205dc: 0x4c10007
    ctx->pc = 0x2205DCu;
    {
        const bool branch_taken_0x2205dc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2205E0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294966632), GPR_U32(ctx, 6));
        if (branch_taken_0x2205dc) {
            ctx->pc = 0x2205FCu;
            goto label_2205fc;
        }
    }
    ctx->pc = 0x2205E4u;
    // 0x2205e4: 0x3c04003a
    ctx->pc = 0x2205e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2205e8: 0x248465d8
    ctx->pc = 0x2205e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26072));
    // 0x2205ec: 0xc0b492e
    ctx->pc = 0x2205ECu;
    SET_GPR_U32(ctx, 31, 0x2205F4u);
    ctx->pc = 0x2205F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2205F4u; }
    }
    if (ctx->pc != 0x2205F4u) { return; }
    ctx->pc = 0x2205F4u;
    // 0x2205f4: 0x1000000b
    ctx->pc = 0x2205F4u;
    {
        const bool branch_taken_0x2205f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2205F8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294966632), GPR_U32(ctx, 0));
        if (branch_taken_0x2205f4) {
            ctx->pc = 0x220624u;
            goto label_220624;
        }
    }
    ctx->pc = 0x2205FCu;
label_2205fc:
    // 0x2205fc: 0x8e02fd68
    ctx->pc = 0x2205fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966632)));
    // 0x220600: 0x28420100
    ctx->pc = 0x220600u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 256));
    // 0x220604: 0x14400008
    ctx->pc = 0x220604u;
    {
        const bool branch_taken_0x220604 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x220604) {
            ctx->pc = 0x220628u;
            goto label_220628;
        }
    }
    ctx->pc = 0x22060Cu;
    // 0x22060c: 0x3c04003a
    ctx->pc = 0x22060cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x220610: 0x24846608
    ctx->pc = 0x220610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26120));
    // 0x220614: 0xc0b492e
    ctx->pc = 0x220614u;
    SET_GPR_U32(ctx, 31, 0x22061Cu);
    ctx->pc = 0x220618u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22061Cu; }
    }
    if (ctx->pc != 0x22061Cu) { return; }
    ctx->pc = 0x22061Cu;
    // 0x22061c: 0x240200ff
    ctx->pc = 0x22061cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x220620: 0xae02fd68
    ctx->pc = 0x220620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966632), GPR_U32(ctx, 2));
label_220624:
    // 0x220624: 0x24020001
    ctx->pc = 0x220624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_220628:
    // 0x220628: 0xdfbf0010
    ctx->pc = 0x220628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22062c: 0xdfb00000
    ctx->pc = 0x22062cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220630: 0x3e00008
    ctx->pc = 0x220630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220634u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2205FCu: goto label_2205fc;
            case 0x220624u: goto label_220624;
            case 0x220628u: goto label_220628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220638u;
}
