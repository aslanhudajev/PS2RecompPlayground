#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_BuildAudio
// Address: 0x19f158 - 0x19f1f0
void sftrn_BuildAudio_0x19f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_BuildAudio");


    ctx->pc = 0x19f158u;

    // 0x19f158: 0x27bdffd0
    ctx->pc = 0x19f158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f15c: 0x24060003
    ctx->pc = 0x19f15cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f160: 0xffb10010
    ctx->pc = 0x19f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f164: 0xffb00000
    ctx->pc = 0x19f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f168: 0x80882d
    ctx->pc = 0x19f168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f16c: 0xa0802d
    ctx->pc = 0x19f16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f170: 0xffbf0020
    ctx->pc = 0x19f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f174: 0xc067c9c
    ctx->pc = 0x19F174u;
    SET_GPR_U32(ctx, 31, 0x19F17Cu);
    ctx->pc = 0x19F178u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnBufTrn_0x19f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F17Cu; }
        else if (ctx->pc != 0x19F17Cu) { ctx->pc = 0x19F17Cu; }
    }
    if (ctx->pc != 0x19F17Cu) { return; }
    ctx->pc = 0x19F17Cu;
    // 0x19f17c: 0x220202d
    ctx->pc = 0x19f17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f180: 0x24050003
    ctx->pc = 0x19f180u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f184: 0xc067c80
    ctx->pc = 0x19F184u;
    SET_GPR_U32(ctx, 31, 0x19F18Cu);
    ctx->pc = 0x19F188u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x19F200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnTrnBuf0_0x19f200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F18Cu; }
        else if (ctx->pc != 0x19F18Cu) { ctx->pc = 0x19F18Cu; }
    }
    if (ctx->pc != 0x19F18Cu) { return; }
    ctx->pc = 0x19F18Cu;
    // 0x19f18c: 0x8e020014
    ctx->pc = 0x19f18cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19f190: 0x10400010
    ctx->pc = 0x19F190u;
    {
        const bool branch_taken_0x19f190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F194u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f190) {
            ctx->pc = 0x19F1D4u;
            goto label_19f1d4;
        }
    }
    ctx->pc = 0x19F198u;
    // 0x19f198: 0x24050004
    ctx->pc = 0x19f198u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f19c: 0xc067c9c
    ctx->pc = 0x19F19Cu;
    SET_GPR_U32(ctx, 31, 0x19F1A4u);
    ctx->pc = 0x19F1A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x19F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnBufTrn_0x19f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1A4u; }
        else if (ctx->pc != 0x19F1A4u) { ctx->pc = 0x19F1A4u; }
    }
    if (ctx->pc != 0x19F1A4u) { return; }
    ctx->pc = 0x19F1A4u;
    // 0x19f1a4: 0x220202d
    ctx->pc = 0x19f1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1a8: 0x24050005
    ctx->pc = 0x19f1a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x19f1ac: 0xc067c80
    ctx->pc = 0x19F1ACu;
    SET_GPR_U32(ctx, 31, 0x19F1B4u);
    ctx->pc = 0x19F1B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19F200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnTrnBuf0_0x19f200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1B4u; }
        else if (ctx->pc != 0x19F1B4u) { ctx->pc = 0x19F1B4u; }
    }
    if (ctx->pc != 0x19F1B4u) { return; }
    ctx->pc = 0x19F1B4u;
    // 0x19f1b4: 0x220202d
    ctx->pc = 0x19f1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1b8: 0xdfbf0020
    ctx->pc = 0x19f1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f1bc: 0xdfb10010
    ctx->pc = 0x19f1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f1c0: 0x24050006
    ctx->pc = 0x19f1c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19f1c4: 0xdfb00000
    ctx->pc = 0x19f1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f1c8: 0x24060007
    ctx->pc = 0x19f1c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x19f1cc: 0x8067c9c
    ctx->pc = 0x19F1CCu;
    ctx->pc = 0x19F1D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19F270u;
    sftrn_ConnBufTrn_0x19f270(rdram, ctx, runtime); return;
    ctx->pc = 0x19F1D4u;
label_19f1d4:
    // 0x19f1d4: 0xdfbf0020
    ctx->pc = 0x19f1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f1d8: 0xdfb10010
    ctx->pc = 0x19f1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f1dc: 0x24050004
    ctx->pc = 0x19f1dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f1e0: 0xdfb00000
    ctx->pc = 0x19f1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f1e4: 0x24060007
    ctx->pc = 0x19f1e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x19f1e8: 0x8067c9c
    ctx->pc = 0x19F1E8u;
    ctx->pc = 0x19F1ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19F270u;
    sftrn_ConnBufTrn_0x19f270(rdram, ctx, runtime); return;
    ctx->pc = 0x19F1F0u;
}
