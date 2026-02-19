#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayWorldSound
// Address: 0x25c4e8 - 0x25c54c
void PlayWorldSound_0x25c4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25c4e8u;

    // 0x25c4e8: 0x27bdfff0
    ctx->pc = 0x25c4e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c4ec: 0xffbf0000
    ctx->pc = 0x25c4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c4f0: 0x4800013
    ctx->pc = 0x25C4F0u;
    {
        const bool branch_taken_0x25c4f0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25C4F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25c4f0) {
            ctx->pc = 0x25C540u;
            goto label_25c540;
        }
    }
    ctx->pc = 0x25C4F8u;
    // 0x25c4f8: 0x3c020034
    ctx->pc = 0x25c4f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c4fc: 0x8c43e7c0
    ctx->pc = 0x25c4fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x25c500: 0x24020018
    ctx->pc = 0x25c500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x25c504: 0x821018
    ctx->pc = 0x25c504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25c508: 0x8c63002c
    ctx->pc = 0x25c508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x25c50c: 0x432021
    ctx->pc = 0x25c50cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c510: 0x8c820010
    ctx->pc = 0x25c510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25c514: 0x4430003
    ctx->pc = 0x25C514u;
    {
        const bool branch_taken_0x25c514 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x25c514) {
            ctx->pc = 0x25C518u;
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->pc = 0x25C524u;
            goto label_25c524;
        }
    }
    ctx->pc = 0x25C51Cu;
    // 0x25c51c: 0x10000008
    ctx->pc = 0x25C51Cu;
    {
        const bool branch_taken_0x25c51c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C520u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25c51c) {
            ctx->pc = 0x25C540u;
            goto label_25c540;
        }
    }
    ctx->pc = 0x25C524u;
label_25c524:
    // 0x25c524: 0x50c00001
    ctx->pc = 0x25C524u;
    {
        const bool branch_taken_0x25c524 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x25c524) {
            ctx->pc = 0x25C528u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
            ctx->pc = 0x25C52Cu;
            goto label_25c52c;
        }
    }
    ctx->pc = 0x25C52Cu;
label_25c52c:
    // 0x25c52c: 0x84870016
    ctx->pc = 0x25c52cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x25c530: 0x50e00001
    ctx->pc = 0x25C530u;
    {
        const bool branch_taken_0x25c530 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x25c530) {
            ctx->pc = 0x25C534u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 126));
            ctx->pc = 0x25C538u;
            goto label_25c538;
        }
    }
    ctx->pc = 0x25C538u;
label_25c538:
    // 0x25c538: 0xc088a62
    ctx->pc = 0x25C538u;
    SET_GPR_U32(ctx, 31, 0x25C540u);
    ctx->pc = 0x25C53Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->pc = 0x222988u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX3_0x222988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C540u; }
    }
    if (ctx->pc != 0x25C540u) { return; }
    ctx->pc = 0x25C540u;
label_25c540:
    // 0x25c540: 0xdfbf0000
    ctx->pc = 0x25c540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c544: 0x3e00008
    ctx->pc = 0x25C544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C548u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C524u: goto label_25c524;
            case 0x25C52Cu: goto label_25c52c;
            case 0x25C538u: goto label_25c538;
            case 0x25C540u: goto label_25c540;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25C54Cu;
}
