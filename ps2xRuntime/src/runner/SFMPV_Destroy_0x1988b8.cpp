#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPV_Destroy
// Address: 0x1988b8 - 0x198920
void SFMPV_Destroy_0x1988b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPV_Destroy");


    ctx->pc = 0x1988b8u;

    // 0x1988b8: 0x27bdffd0
    ctx->pc = 0x1988b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1988bc: 0xffb00000
    ctx->pc = 0x1988bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1988c0: 0xffbf0020
    ctx->pc = 0x1988c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1988c4: 0x80802d
    ctx->pc = 0x1988c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988c8: 0xffb10010
    ctx->pc = 0x1988c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1988cc: 0x8e113740
    ctx->pc = 0x1988ccu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 14144)));
    // 0x1988d0: 0x1220000e
    ctx->pc = 0x1988D0u;
    {
        const bool branch_taken_0x1988d0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1988D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1988d0) {
            ctx->pc = 0x19890Cu;
            goto label_19890c;
        }
    }
    ctx->pc = 0x1988D8u;
    // 0x1988d8: 0xc066896
    ctx->pc = 0x1988D8u;
    SET_GPR_U32(ctx, 31, 0x1988E0u);
    ctx->pc = 0x1988DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A258u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_Destroy_0x19a258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988E0u; }
        else if (ctx->pc != 0x1988E0u) { ctx->pc = 0x1988E0u; }
    }
    if (ctx->pc != 0x1988E0u) { return; }
    ctx->pc = 0x1988E0u;
    // 0x1988e0: 0xc066248
    ctx->pc = 0x1988E0u;
    SET_GPR_U32(ctx, 31, 0x1988E8u);
    ctx->pc = 0x1988E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_DestroySub_0x198920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988E8u; }
        else if (ctx->pc != 0x1988E8u) { ctx->pc = 0x1988E8u; }
    }
    if (ctx->pc != 0x1988E8u) { return; }
    ctx->pc = 0x1988E8u;
    // 0x1988e8: 0x10400006
    ctx->pc = 0x1988E8u;
    {
        const bool branch_taken_0x1988e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1988ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1988e8) {
            ctx->pc = 0x198904u;
            goto label_198904;
        }
    }
    ctx->pc = 0x1988F0u;
    // 0x1988f0: 0x3c05ff00
    ctx->pc = 0x1988f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1988f4: 0xc064ea0
    ctx->pc = 0x1988F4u;
    SET_GPR_U32(ctx, 31, 0x1988FCu);
    ctx->pc = 0x1988F8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3852));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988FCu; }
        else if (ctx->pc != 0x1988FCu) { ctx->pc = 0x1988FCu; }
    }
    if (ctx->pc != 0x1988FCu) { return; }
    ctx->pc = 0x1988FCu;
    // 0x1988fc: 0x10000004
    ctx->pc = 0x1988FCu;
    {
        const bool branch_taken_0x1988fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198900u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1988fc) {
            ctx->pc = 0x198910u;
            goto label_198910;
        }
    }
    ctx->pc = 0x198904u;
label_198904:
    // 0x198904: 0xae003740
    ctx->pc = 0x198904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14144), GPR_U32(ctx, 0));
    // 0x198908: 0x102d
    ctx->pc = 0x198908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19890c:
    // 0x19890c: 0xdfbf0020
    ctx->pc = 0x19890cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198910:
    // 0x198910: 0xdfb10010
    ctx->pc = 0x198910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198914: 0xdfb00000
    ctx->pc = 0x198914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198918: 0x3e00008
    ctx->pc = 0x198918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19891Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198904u: goto label_198904;
            case 0x19890Cu: goto label_19890c;
            case 0x198910u: goto label_198910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198920u;
}
