#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_audio
// Address: 0x280bc0 - 0x280c48
void set_audio_0x280bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280bc0u;

    // 0x280bc0: 0x27bdffd0
    ctx->pc = 0x280bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280bc4: 0xffbf0020
    ctx->pc = 0x280bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x280bc8: 0xffb10010
    ctx->pc = 0x280bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x280bcc: 0xffb00000
    ctx->pc = 0x280bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280bd0: 0x80802d
    ctx->pc = 0x280bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bd4: 0xc0a02c4
    ctx->pc = 0x280BD4u;
    SET_GPR_U32(ctx, 31, 0x280BDCu);
    ctx->pc = 0x280BD8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x280B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_int_0x280b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280BDCu; }
    }
    if (ctx->pc != 0x280BDCu) { return; }
    ctx->pc = 0x280BDCu;
    // 0x280bdc: 0x8e020000
    ctx->pc = 0x280bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x280be0: 0x10510014
    ctx->pc = 0x280BE0u;
    {
        const bool branch_taken_0x280be0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x280BE4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x280be0) {
            ctx->pc = 0x280C34u;
            goto label_280c34;
        }
    }
    ctx->pc = 0x280BE8u;
    // 0x280be8: 0x3c020035
    ctx->pc = 0x280be8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x280bec: 0x8c429b94
    ctx->pc = 0x280becu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941588)));
    // 0x280bf0: 0x30430001
    ctx->pc = 0x280bf0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x280bf4: 0xac83fd58
    ctx->pc = 0x280bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966616), GPR_U32(ctx, 3));
    // 0x280bf8: 0x3c030032
    ctx->pc = 0x280bf8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x280bfc: 0x21043
    ctx->pc = 0x280bfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x280c00: 0x30420001
    ctx->pc = 0x280c00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x280c04: 0x10400003
    ctx->pc = 0x280C04u;
    {
        const bool branch_taken_0x280c04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x280C08u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966620), GPR_U32(ctx, 2));
        if (branch_taken_0x280c04) {
            ctx->pc = 0x280C14u;
            goto label_280c14;
        }
    }
    ctx->pc = 0x280C0Cu;
    // 0x280c0c: 0xc09733e
    ctx->pc = 0x280C0Cu;
    SET_GPR_U32(ctx, 31, 0x280C14u);
    ctx->pc = 0x25CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStop_0x25ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C14u; }
    }
    if (ctx->pc != 0x280C14u) { return; }
    ctx->pc = 0x280C14u;
label_280c14:
    // 0x280c14: 0x3c020032
    ctx->pc = 0x280c14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x280c18: 0x8c42fd58
    ctx->pc = 0x280c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x280c1c: 0x10400006
    ctx->pc = 0x280C1Cu;
    {
        const bool branch_taken_0x280c1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x280C20u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x280c1c) {
            ctx->pc = 0x280C38u;
            goto label_280c38;
        }
    }
    ctx->pc = 0x280C24u;
    // 0x280c24: 0xdfb10010
    ctx->pc = 0x280c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280c28: 0xdfb00000
    ctx->pc = 0x280c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280c2c: 0x809710c
    ctx->pc = 0x280C2Cu;
    ctx->pc = 0x280C30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x25C430u;
    AudioStopAll_0x25c430(rdram, ctx, runtime); return;
    ctx->pc = 0x280C34u;
label_280c34:
    // 0x280c34: 0xdfbf0020
    ctx->pc = 0x280c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_280c38:
    // 0x280c38: 0xdfb10010
    ctx->pc = 0x280c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280c3c: 0xdfb00000
    ctx->pc = 0x280c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280c40: 0x3e00008
    ctx->pc = 0x280C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280C44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280C14u: goto label_280c14;
            case 0x280C34u: goto label_280c34;
            case 0x280C38u: goto label_280c38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280C48u;
}
