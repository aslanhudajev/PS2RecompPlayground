#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioClearTracks
// Address: 0x221b88 - 0x221c38
void AudioClearTracks_0x221b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221b88u;

    // 0x221b88: 0x27bdffe0
    ctx->pc = 0x221b88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221b8c: 0xffbf0010
    ctx->pc = 0x221b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221b90: 0xffb00000
    ctx->pc = 0x221b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221b94: 0x80802d
    ctx->pc = 0x221b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b98: 0x202d
    ctx->pc = 0x221b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b9c: 0x282d
    ctx->pc = 0x221b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ba0: 0x3c020032
    ctx->pc = 0x221ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221ba4: 0x2448fe38
    ctx->pc = 0x221ba4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294966840));
    // 0x221ba8: 0x24060014
    ctx->pc = 0x221ba8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    // 0x221bac: 0x24030001
    ctx->pc = 0x221bacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x221bb0: 0xa63818
    ctx->pc = 0x221bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221bb4: 0x0
    ctx->pc = 0x221bb4u;
    // NOP
label_221bb8:
    // 0x221bb8: 0xe81021
    ctx->pc = 0x221bb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x221bbc: 0x84420002
    ctx->pc = 0x221bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x221bc0: 0x54500004
    ctx->pc = 0x221BC0u;
    {
        const bool branch_taken_0x221bc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x221bc0) {
            ctx->pc = 0x221BC4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x221BD4u;
            goto label_221bd4;
        }
    }
    ctx->pc = 0x221BC8u;
    // 0x221bc8: 0xa31004
    ctx->pc = 0x221bc8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x221bcc: 0x822025
    ctx->pc = 0x221bccu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x221bd0: 0x24a50001
    ctx->pc = 0x221bd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_221bd4:
    // 0x221bd4: 0x28a2000c
    ctx->pc = 0x221bd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 12));
    // 0x221bd8: 0x1440fff7
    ctx->pc = 0x221BD8u;
    {
        const bool branch_taken_0x221bd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221BDCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221bd8) {
            ctx->pc = 0x221BB8u;
            goto label_221bb8;
        }
    }
    ctx->pc = 0x221BE0u;
    // 0x221be0: 0x10800004
    ctx->pc = 0x221BE0u;
    {
        const bool branch_taken_0x221be0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x221BE4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x221be0) {
            ctx->pc = 0x221BF4u;
            goto label_221bf4;
        }
    }
    ctx->pc = 0x221BE8u;
    // 0x221be8: 0xc0886ae
    ctx->pc = 0x221BE8u;
    SET_GPR_U32(ctx, 31, 0x221BF0u);
    ctx->pc = 0x221AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackKill_0x221ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BF0u; }
    }
    if (ctx->pc != 0x221BF0u) { return; }
    ctx->pc = 0x221BF0u;
    // 0x221bf0: 0x282d
    ctx->pc = 0x221bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221bf4:
    // 0x221bf4: 0x3c020032
    ctx->pc = 0x221bf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221bf8: 0x2446ff28
    ctx->pc = 0x221bf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967080));
    // 0x221bfc: 0x24040038
    ctx->pc = 0x221bfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 56));
    // 0x221c00: 0xa41018
    ctx->pc = 0x221c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221c04: 0x0
    ctx->pc = 0x221c04u;
    // NOP
label_221c08:
    // 0x221c08: 0x461821
    ctx->pc = 0x221c08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x221c0c: 0x84620002
    ctx->pc = 0x221c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x221c10: 0x50500001
    ctx->pc = 0x221C10u;
    {
        const bool branch_taken_0x221c10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        if (branch_taken_0x221c10) {
            ctx->pc = 0x221C14u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
            ctx->pc = 0x221C18u;
            goto label_221c18;
        }
    }
    ctx->pc = 0x221C18u;
label_221c18:
    // 0x221c18: 0x24a50001
    ctx->pc = 0x221c18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x221c1c: 0x28a20020
    ctx->pc = 0x221c1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x221c20: 0x5440fff9
    ctx->pc = 0x221C20u;
    {
        const bool branch_taken_0x221c20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x221c20) {
            ctx->pc = 0x221C24u;
            { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x221C08u;
            goto label_221c08;
        }
    }
    ctx->pc = 0x221C28u;
    // 0x221c28: 0xdfbf0010
    ctx->pc = 0x221c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221c2c: 0xdfb00000
    ctx->pc = 0x221c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221c30: 0x3e00008
    ctx->pc = 0x221C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221C34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221BB8u: goto label_221bb8;
            case 0x221BD4u: goto label_221bd4;
            case 0x221BF4u: goto label_221bf4;
            case 0x221C08u: goto label_221c08;
            case 0x221C18u: goto label_221c18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221C38u;
}
