#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSetVolSfx
// Address: 0x220638 - 0x2206a8
void AudioSetVolSfx_0x220638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220638u;

    // 0x220638: 0x27bdffe0
    ctx->pc = 0x220638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22063c: 0xffbf0010
    ctx->pc = 0x22063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x220640: 0xffb00000
    ctx->pc = 0x220640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220644: 0x80302d
    ctx->pc = 0x220644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220648: 0x3c100032
    ctx->pc = 0x220648u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x22064c: 0x4c10007
    ctx->pc = 0x22064Cu;
    {
        const bool branch_taken_0x22064c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x220650u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294966628), GPR_U32(ctx, 6));
        if (branch_taken_0x22064c) {
            ctx->pc = 0x22066Cu;
            goto label_22066c;
        }
    }
    ctx->pc = 0x220654u;
    // 0x220654: 0x3c04003a
    ctx->pc = 0x220654u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x220658: 0x24846640
    ctx->pc = 0x220658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26176));
    // 0x22065c: 0xc0b492e
    ctx->pc = 0x22065Cu;
    SET_GPR_U32(ctx, 31, 0x220664u);
    ctx->pc = 0x220660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220664u; }
    }
    if (ctx->pc != 0x220664u) { return; }
    ctx->pc = 0x220664u;
    // 0x220664: 0x1000000b
    ctx->pc = 0x220664u;
    {
        const bool branch_taken_0x220664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220668u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294966628), GPR_U32(ctx, 0));
        if (branch_taken_0x220664) {
            ctx->pc = 0x220694u;
            goto label_220694;
        }
    }
    ctx->pc = 0x22066Cu;
label_22066c:
    // 0x22066c: 0x8e02fd64
    ctx->pc = 0x22066cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966628)));
    // 0x220670: 0x28420100
    ctx->pc = 0x220670u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 256));
    // 0x220674: 0x14400008
    ctx->pc = 0x220674u;
    {
        const bool branch_taken_0x220674 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220678u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x220674) {
            ctx->pc = 0x220698u;
            goto label_220698;
        }
    }
    ctx->pc = 0x22067Cu;
    // 0x22067c: 0x3c04003a
    ctx->pc = 0x22067cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x220680: 0x24846670
    ctx->pc = 0x220680u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26224));
    // 0x220684: 0xc0b492e
    ctx->pc = 0x220684u;
    SET_GPR_U32(ctx, 31, 0x22068Cu);
    ctx->pc = 0x220688u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22068Cu; }
    }
    if (ctx->pc != 0x22068Cu) { return; }
    ctx->pc = 0x22068Cu;
    // 0x22068c: 0x240200ff
    ctx->pc = 0x22068cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x220690: 0xae02fd64
    ctx->pc = 0x220690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966628), GPR_U32(ctx, 2));
label_220694:
    // 0x220694: 0x24020001
    ctx->pc = 0x220694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_220698:
    // 0x220698: 0xdfbf0010
    ctx->pc = 0x220698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22069c: 0xdfb00000
    ctx->pc = 0x22069cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2206a0: 0x3e00008
    ctx->pc = 0x2206A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2206A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22066Cu: goto label_22066c;
            case 0x220694u: goto label_220694;
            case 0x220698u: goto label_220698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2206A8u;
}
