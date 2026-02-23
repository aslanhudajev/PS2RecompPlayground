#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ratio
// Address: 0x1443b8 - 0x144478
void _ratio_0x1443b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_ratio");


    ctx->pc = 0x1443b8u;

    // 0x1443b8: 0x27bdffb0
    ctx->pc = 0x1443b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1443bc: 0xffb10020
    ctx->pc = 0x1443bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1443c0: 0xffb00010
    ctx->pc = 0x1443c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1443c4: 0xa0882d
    ctx->pc = 0x1443c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1443c8: 0x80802d
    ctx->pc = 0x1443c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1443cc: 0xffb20030
    ctx->pc = 0x1443ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1443d0: 0xffbf0040
    ctx->pc = 0x1443d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1443d4: 0xc05102e
    ctx->pc = 0x1443D4u;
    SET_GPR_U32(ctx, 31, 0x1443DCu);
    ctx->pc = 0x1443D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1440B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x1440b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1443DCu; }
        else if (ctx->pc != 0x1443DCu) { ctx->pc = 0x1443DCu; }
    }
    if (ctx->pc != 0x1443DCu) { return; }
    ctx->pc = 0x1443DCu;
    // 0x1443dc: 0x40902d
    ctx->pc = 0x1443dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1443e0: 0x220202d
    ctx->pc = 0x1443e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1443e4: 0xc05102e
    ctx->pc = 0x1443E4u;
    SET_GPR_U32(ctx, 31, 0x1443ECu);
    ctx->pc = 0x1443E8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x1440B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x1440b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1443ECu; }
        else if (ctx->pc != 0x1443ECu) { ctx->pc = 0x1443ECu; }
    }
    if (ctx->pc != 0x1443ECu) { return; }
    ctx->pc = 0x1443ECu;
    // 0x1443ec: 0x8e030010
    ctx->pc = 0x1443ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1443f0: 0x40302d
    ctx->pc = 0x1443f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1443f4: 0x8e240010
    ctx->pc = 0x1443f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1443f8: 0x8fa20000
    ctx->pc = 0x1443f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1443fc: 0x8fa50004
    ctx->pc = 0x1443fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x144400: 0x641823
    ctx->pc = 0x144400u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144404: 0x31940
    ctx->pc = 0x144404u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x144408: 0x451023
    ctx->pc = 0x144408u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14440c: 0x431021
    ctx->pc = 0x14440cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144410: 0x18400009
    ctx->pc = 0x144410u;
    {
        const bool branch_taken_0x144410 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x144414u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 20));
        if (branch_taken_0x144410) {
            ctx->pc = 0x144438u;
            goto label_144438;
        }
    }
    ctx->pc = 0x144418u;
    // 0x144418: 0x12183f
    ctx->pc = 0x144418u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x14441c: 0x621821
    ctx->pc = 0x14441cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144420: 0x3c04ffff
    ctx->pc = 0x144420u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x144424: 0x4203e
    ctx->pc = 0x144424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x144428: 0x3183c
    ctx->pc = 0x144428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14442c: 0x2449024
    ctx->pc = 0x14442cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x144430: 0x10000008
    ctx->pc = 0x144430u;
    {
        const bool branch_taken_0x144430 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144434u;
        SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        if (branch_taken_0x144430) {
            ctx->pc = 0x144454u;
            goto label_144454;
        }
    }
    ctx->pc = 0x144438u;
label_144438:
    // 0x144438: 0x6183f
    ctx->pc = 0x144438u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x14443c: 0x621823
    ctx->pc = 0x14443cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144440: 0x3c04ffff
    ctx->pc = 0x144440u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x144444: 0x4203e
    ctx->pc = 0x144444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x144448: 0x3183c
    ctx->pc = 0x144448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14444c: 0xc43024
    ctx->pc = 0x14444cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x144450: 0xc33025
    ctx->pc = 0x144450u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_144454:
    // 0x144454: 0x240202d
    ctx->pc = 0x144454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144458: 0xc052d62
    ctx->pc = 0x144458u;
    SET_GPR_U32(ctx, 31, 0x144460u);
    ctx->pc = 0x14445Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144460u; }
        else if (ctx->pc != 0x144460u) { ctx->pc = 0x144460u; }
    }
    if (ctx->pc != 0x144460u) { return; }
    ctx->pc = 0x144460u;
    // 0x144460: 0xdfbf0040
    ctx->pc = 0x144460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144464: 0xdfb20030
    ctx->pc = 0x144464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144468: 0xdfb10020
    ctx->pc = 0x144468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14446c: 0xdfb00010
    ctx->pc = 0x14446cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144470: 0x3e00008
    ctx->pc = 0x144470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144474u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144438u: goto label_144438;
            case 0x144454u: goto label_144454;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144478u;
}
