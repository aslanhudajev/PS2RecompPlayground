#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPriKill
// Address: 0x221d10 - 0x221dc8
void AudioPriKill_0x221d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221d10u;

    // 0x221d10: 0x27bdffd0
    ctx->pc = 0x221d10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221d14: 0xffbf0020
    ctx->pc = 0x221d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x221d18: 0xffb10010
    ctx->pc = 0x221d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x221d1c: 0xffb00000
    ctx->pc = 0x221d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221d20: 0x80882d
    ctx->pc = 0x221d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d24: 0x802d
    ctx->pc = 0x221d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d28: 0x202d
    ctx->pc = 0x221d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d2c: 0x24050014
    ctx->pc = 0x221d2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    // 0x221d30: 0x3c020032
    ctx->pc = 0x221d30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221d34: 0x2447fe3c
    ctx->pc = 0x221d34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294966844));
    // 0x221d38: 0x24030001
    ctx->pc = 0x221d38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x221d3c: 0x853018
    ctx->pc = 0x221d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_221d40:
    // 0x221d40: 0xc71021
    ctx->pc = 0x221d40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x221d44: 0x8c420000
    ctx->pc = 0x221d44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221d48: 0x54510004
    ctx->pc = 0x221D48u;
    {
        const bool branch_taken_0x221d48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x221d48) {
            ctx->pc = 0x221D4Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x221D5Cu;
            goto label_221d5c;
        }
    }
    ctx->pc = 0x221D50u;
    // 0x221d50: 0x831004
    ctx->pc = 0x221d50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x221d54: 0x2028025
    ctx->pc = 0x221d54u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x221d58: 0x24840001
    ctx->pc = 0x221d58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_221d5c:
    // 0x221d5c: 0x2882000c
    ctx->pc = 0x221d5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 12));
    // 0x221d60: 0x1440fff7
    ctx->pc = 0x221D60u;
    {
        const bool branch_taken_0x221d60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221D64u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221d60) {
            ctx->pc = 0x221D40u;
            goto label_221d40;
        }
    }
    ctx->pc = 0x221D68u;
    // 0x221d68: 0x12000004
    ctx->pc = 0x221D68u;
    {
        const bool branch_taken_0x221d68 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x221D6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x221d68) {
            ctx->pc = 0x221D7Cu;
            goto label_221d7c;
        }
    }
    ctx->pc = 0x221D70u;
    // 0x221d70: 0xc0886ae
    ctx->pc = 0x221D70u;
    SET_GPR_U32(ctx, 31, 0x221D78u);
    ctx->pc = 0x221D74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackKill_0x221ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D78u; }
    }
    if (ctx->pc != 0x221D78u) { return; }
    ctx->pc = 0x221D78u;
    // 0x221d78: 0x202d
    ctx->pc = 0x221d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221d7c:
    // 0x221d7c: 0x3c020032
    ctx->pc = 0x221d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221d80: 0x2446ff28
    ctx->pc = 0x221d80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967080));
    // 0x221d84: 0x24050038
    ctx->pc = 0x221d84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 56));
    // 0x221d88: 0x851018
    ctx->pc = 0x221d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221d8c: 0x0
    ctx->pc = 0x221d8cu;
    // NOP
label_221d90:
    // 0x221d90: 0x461821
    ctx->pc = 0x221d90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x221d94: 0x8c620004
    ctx->pc = 0x221d94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x221d98: 0x50510001
    ctx->pc = 0x221D98u;
    {
        const bool branch_taken_0x221d98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x221d98) {
            ctx->pc = 0x221D9Cu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
            ctx->pc = 0x221DA0u;
            goto label_221da0;
        }
    }
    ctx->pc = 0x221DA0u;
label_221da0:
    // 0x221da0: 0x24840001
    ctx->pc = 0x221da0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x221da4: 0x28820020
    ctx->pc = 0x221da4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
    // 0x221da8: 0x1440fff9
    ctx->pc = 0x221DA8u;
    {
        const bool branch_taken_0x221da8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221DACu;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221da8) {
            ctx->pc = 0x221D90u;
            goto label_221d90;
        }
    }
    ctx->pc = 0x221DB0u;
    // 0x221db0: 0x200102d
    ctx->pc = 0x221db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221db4: 0xdfbf0020
    ctx->pc = 0x221db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221db8: 0xdfb10010
    ctx->pc = 0x221db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221dbc: 0xdfb00000
    ctx->pc = 0x221dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221dc0: 0x3e00008
    ctx->pc = 0x221DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221DC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221D40u: goto label_221d40;
            case 0x221D5Cu: goto label_221d5c;
            case 0x221D7Cu: goto label_221d7c;
            case 0x221D90u: goto label_221d90;
            case 0x221DA0u: goto label_221da0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221DC8u;
}
