#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterGrabPlayer
// Address: 0x29c198 - 0x29c248
void CritterGrabPlayer_0x29c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29c198u;

    // 0x29c198: 0x27bdffb0
    ctx->pc = 0x29c198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29c19c: 0xffbf0040
    ctx->pc = 0x29c19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29c1a0: 0xffb30030
    ctx->pc = 0x29c1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29c1a4: 0xffb20020
    ctx->pc = 0x29c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29c1a8: 0xffb10010
    ctx->pc = 0x29c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29c1ac: 0xffb00000
    ctx->pc = 0x29c1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c1b0: 0x80802d
    ctx->pc = 0x29c1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1b4: 0x86020134
    ctx->pc = 0x29c1b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x29c1b8: 0x441001c
    ctx->pc = 0x29C1B8u;
    {
        const bool branch_taken_0x29c1b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29C1BCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29c1b8) {
            ctx->pc = 0x29C22Cu;
            goto label_29c22c;
        }
    }
    ctx->pc = 0x29C1C0u;
    // 0x29c1c0: 0x200202d
    ctx->pc = 0x29c1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1c4: 0x240282d
    ctx->pc = 0x29c1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1c8: 0xc0a6f12
    ctx->pc = 0x29C1C8u;
    SET_GPR_U32(ctx, 31, 0x29C1D0u);
    ctx->pc = 0x29C1CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29BC48u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNodePlayerCollide_0x29bc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1D0u; }
    }
    if (ctx->pc != 0x29C1D0u) { return; }
    ctx->pc = 0x29C1D0u;
    // 0x29c1d0: 0x40882d
    ctx->pc = 0x29c1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1d4: 0x6200015
    ctx->pc = 0x29C1D4u;
    {
        const bool branch_taken_0x29c1d4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x29C1D8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x29c1d4) {
            ctx->pc = 0x29C22Cu;
            goto label_29c22c;
        }
    }
    ctx->pc = 0x29C1DCu;
    // 0x29c1dc: 0x2231818
    ctx->pc = 0x29c1dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29c1e0: 0x3c020032
    ctx->pc = 0x29c1e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29c1e4: 0x24421bc0
    ctx->pc = 0x29c1e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29c1e8: 0x629821
    ctx->pc = 0x29c1e8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c1ec: 0x260202d
    ctx->pc = 0x29c1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1f0: 0x8e0500dc
    ctx->pc = 0x29c1f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x29c1f4: 0xc08db5c
    ctx->pc = 0x29C1F4u;
    SET_GPR_U32(ctx, 31, 0x29C1FCu);
    ctx->pc = 0x29C1F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 32));
    ctx->pc = 0x236D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerSetGrabbed_0x236d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1FCu; }
    }
    if (ctx->pc != 0x29C1FCu) { return; }
    ctx->pc = 0x29C1FCu;
    // 0x29c1fc: 0xa6110134
    ctx->pc = 0x29c1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 17));
    // 0x29c200: 0x86450042
    ctx->pc = 0x29c200u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x29c204: 0x4a00008
    ctx->pc = 0x29C204u;
    {
        const bool branch_taken_0x29c204 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x29C208u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29c204) {
            ctx->pc = 0x29C228u;
            goto label_29c228;
        }
    }
    ctx->pc = 0x29C20Cu;
    // 0x29c20c: 0x302d
    ctx->pc = 0x29c20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c210: 0x382d
    ctx->pc = 0x29c210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c214: 0xc0a50f4
    ctx->pc = 0x29C214u;
    SET_GPR_U32(ctx, 31, 0x29C21Cu);
    ctx->pc = 0x29C218u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2943D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoSfx_0x2943d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C21Cu; }
    }
    if (ctx->pc != 0x29C21Cu) { return; }
    ctx->pc = 0x29C21Cu;
    // 0x29c21c: 0x40202d
    ctx->pc = 0x29c21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c220: 0xc09f732
    ctx->pc = 0x29C220u;
    SET_GPR_U32(ctx, 31, 0x29C228u);
    ctx->pc = 0x29C224u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 128)));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C228u; }
    }
    if (ctx->pc != 0x29C228u) { return; }
    ctx->pc = 0x29C228u;
label_29c228:
    // 0x29c228: 0x220102d
    ctx->pc = 0x29c228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c22c:
    // 0x29c22c: 0xdfbf0040
    ctx->pc = 0x29c22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c230: 0xdfb30030
    ctx->pc = 0x29c230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c234: 0xdfb20020
    ctx->pc = 0x29c234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c238: 0xdfb10010
    ctx->pc = 0x29c238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c23c: 0xdfb00000
    ctx->pc = 0x29c23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c240: 0x3e00008
    ctx->pc = 0x29C240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C244u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29C228u: goto label_29c228;
            case 0x29C22Cu: goto label_29c22c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29C248u;
}
