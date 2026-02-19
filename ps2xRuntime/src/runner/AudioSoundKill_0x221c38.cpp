#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSoundKill
// Address: 0x221c38 - 0x221d0c
void AudioSoundKill_0x221c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221c38u;

    // 0x221c38: 0x27bdffd0
    ctx->pc = 0x221c38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221c3c: 0xffbf0020
    ctx->pc = 0x221c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x221c40: 0xffb10010
    ctx->pc = 0x221c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x221c44: 0xffb00000
    ctx->pc = 0x221c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221c48: 0x80882d
    ctx->pc = 0x221c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c4c: 0x802d
    ctx->pc = 0x221c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c50: 0x202d
    ctx->pc = 0x221c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c54: 0x3c020032
    ctx->pc = 0x221c54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221c58: 0x2448fe38
    ctx->pc = 0x221c58u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294966840));
    // 0x221c5c: 0x24070014
    ctx->pc = 0x221c5cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 20));
    // 0x221c60: 0x3c020032
    ctx->pc = 0x221c60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221c64: 0x2446fe3c
    ctx->pc = 0x221c64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294966844));
    // 0x221c68: 0x24050001
    ctx->pc = 0x221c68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x221c6c: 0x871818
    ctx->pc = 0x221c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_221c70:
    // 0x221c70: 0x681021
    ctx->pc = 0x221c70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x221c74: 0x8c420000
    ctx->pc = 0x221c74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221c78: 0x54510007
    ctx->pc = 0x221C78u;
    {
        const bool branch_taken_0x221c78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x221c78) {
            ctx->pc = 0x221C7Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x221C98u;
            goto label_221c98;
        }
    }
    ctx->pc = 0x221C80u;
    // 0x221c80: 0x661021
    ctx->pc = 0x221c80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x221c84: 0x8c420000
    ctx->pc = 0x221c84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221c88: 0x10400002
    ctx->pc = 0x221C88u;
    {
        const bool branch_taken_0x221c88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221C8Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
        if (branch_taken_0x221c88) {
            ctx->pc = 0x221C94u;
            goto label_221c94;
        }
    }
    ctx->pc = 0x221C90u;
    // 0x221c90: 0x2028025
    ctx->pc = 0x221c90u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_221c94:
    // 0x221c94: 0x24840001
    ctx->pc = 0x221c94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_221c98:
    // 0x221c98: 0x2882000c
    ctx->pc = 0x221c98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 12));
    // 0x221c9c: 0x1440fff4
    ctx->pc = 0x221C9Cu;
    {
        const bool branch_taken_0x221c9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221CA0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221c9c) {
            ctx->pc = 0x221C70u;
            goto label_221c70;
        }
    }
    ctx->pc = 0x221CA4u;
    // 0x221ca4: 0x12000004
    ctx->pc = 0x221CA4u;
    {
        const bool branch_taken_0x221ca4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x221CA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x221ca4) {
            ctx->pc = 0x221CB8u;
            goto label_221cb8;
        }
    }
    ctx->pc = 0x221CACu;
    // 0x221cac: 0xc0886ae
    ctx->pc = 0x221CACu;
    SET_GPR_U32(ctx, 31, 0x221CB4u);
    ctx->pc = 0x221CB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackKill_0x221ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CB4u; }
    }
    if (ctx->pc != 0x221CB4u) { return; }
    ctx->pc = 0x221CB4u;
    // 0x221cb4: 0x202d
    ctx->pc = 0x221cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221cb8:
    // 0x221cb8: 0x3c020032
    ctx->pc = 0x221cb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221cbc: 0x2446ff28
    ctx->pc = 0x221cbcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967080));
    // 0x221cc0: 0x24050038
    ctx->pc = 0x221cc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 56));
    // 0x221cc4: 0x851018
    ctx->pc = 0x221cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_221cc8:
    // 0x221cc8: 0x461821
    ctx->pc = 0x221cc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x221ccc: 0x8c620000
    ctx->pc = 0x221cccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x221cd0: 0x54510005
    ctx->pc = 0x221CD0u;
    {
        const bool branch_taken_0x221cd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x221cd0) {
            ctx->pc = 0x221CD4u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x221CE8u;
            goto label_221ce8;
        }
    }
    ctx->pc = 0x221CD8u;
    // 0x221cd8: 0x8c620004
    ctx->pc = 0x221cd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x221cdc: 0x54400001
    ctx->pc = 0x221CDCu;
    {
        const bool branch_taken_0x221cdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x221cdc) {
            ctx->pc = 0x221CE0u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
            ctx->pc = 0x221CE4u;
            goto label_221ce4;
        }
    }
    ctx->pc = 0x221CE4u;
label_221ce4:
    // 0x221ce4: 0x24840001
    ctx->pc = 0x221ce4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_221ce8:
    // 0x221ce8: 0x28820020
    ctx->pc = 0x221ce8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
    // 0x221cec: 0x1440fff6
    ctx->pc = 0x221CECu;
    {
        const bool branch_taken_0x221cec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221CF0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221cec) {
            ctx->pc = 0x221CC8u;
            goto label_221cc8;
        }
    }
    ctx->pc = 0x221CF4u;
    // 0x221cf4: 0x200102d
    ctx->pc = 0x221cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cf8: 0xdfbf0020
    ctx->pc = 0x221cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221cfc: 0xdfb10010
    ctx->pc = 0x221cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221d00: 0xdfb00000
    ctx->pc = 0x221d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221d04: 0x3e00008
    ctx->pc = 0x221D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221D08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221C70u: goto label_221c70;
            case 0x221C94u: goto label_221c94;
            case 0x221C98u: goto label_221c98;
            case 0x221CB8u: goto label_221cb8;
            case 0x221CC8u: goto label_221cc8;
            case 0x221CE4u: goto label_221ce4;
            case 0x221CE8u: goto label_221ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221D0Cu;
}
