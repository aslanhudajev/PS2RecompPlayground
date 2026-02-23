#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fptosi
// Address: 0x14c518 - 0x14c5a4
void fptosi_0x14c518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fptosi");


    ctx->pc = 0x14c518u;

    // 0x14c518: 0x27bdffd0
    ctx->pc = 0x14c518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c51c: 0xffbf0020
    ctx->pc = 0x14c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c520: 0x27a40010
    ctx->pc = 0x14c520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x14c524: 0xe7ac0010
    ctx->pc = 0x14c524u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14c528: 0xc052f06
    ctx->pc = 0x14C528u;
    SET_GPR_U32(ctx, 31, 0x14C530u);
    ctx->pc = 0x14C52Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C530u; }
        else if (ctx->pc != 0x14C530u) { ctx->pc = 0x14C530u; }
    }
    if (ctx->pc != 0x14C530u) { return; }
    ctx->pc = 0x14C530u;
    // 0x14c530: 0x8fa30000
    ctx->pc = 0x14c530u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c534: 0x38620002
    ctx->pc = 0x14c534u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x14c538: 0x10400003
    ctx->pc = 0x14C538u;
    {
        const bool branch_taken_0x14c538 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C53Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x14c538) {
            ctx->pc = 0x14C548u;
            goto label_14c548;
        }
    }
    ctx->pc = 0x14C540u;
    // 0x14c540: 0x10400003
    ctx->pc = 0x14C540u;
    {
        const bool branch_taken_0x14c540 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C544u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x14c540) {
            ctx->pc = 0x14C550u;
            goto label_14c550;
        }
    }
    ctx->pc = 0x14C548u;
label_14c548:
    // 0x14c548: 0x10000013
    ctx->pc = 0x14C548u;
    {
        const bool branch_taken_0x14c548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C54Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14c548) {
            ctx->pc = 0x14C598u;
            goto label_14c598;
        }
    }
    ctx->pc = 0x14C550u;
label_14c550:
    // 0x14c550: 0x10400005
    ctx->pc = 0x14C550u;
    {
        const bool branch_taken_0x14c550 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C554u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x14c550) {
            ctx->pc = 0x14C568u;
            goto label_14c568;
        }
    }
    ctx->pc = 0x14C558u;
    // 0x14c558: 0x480fffb
    ctx->pc = 0x14C558u;
    {
        const bool branch_taken_0x14c558 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x14C55Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
        if (branch_taken_0x14c558) {
            ctx->pc = 0x14C548u;
            goto label_14c548;
        }
    }
    ctx->pc = 0x14C560u;
    // 0x14c560: 0x14400007
    ctx->pc = 0x14C560u;
    {
        const bool branch_taken_0x14c560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14C564u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x14c560) {
            ctx->pc = 0x14C580u;
            goto label_14c580;
        }
    }
    ctx->pc = 0x14C568u;
label_14c568:
    // 0x14c568: 0x8fa30004
    ctx->pc = 0x14c568u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14c56c: 0x3c027fff
    ctx->pc = 0x14c56cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x14c570: 0x3442ffff
    ctx->pc = 0x14c570u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x14c574: 0x3c048000
    ctx->pc = 0x14c574u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x14c578: 0x10000007
    ctx->pc = 0x14C578u;
    {
        const bool branch_taken_0x14c578 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14C57Cu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x14c578) {
            ctx->pc = 0x14C598u;
            goto label_14c598;
        }
    }
    ctx->pc = 0x14C580u;
label_14c580:
    // 0x14c580: 0x8fa2000c
    ctx->pc = 0x14c580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x14c584: 0x641823
    ctx->pc = 0x14c584u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c588: 0x8fa50004
    ctx->pc = 0x14c588u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14c58c: 0x621006
    ctx->pc = 0x14c58cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x14c590: 0x22023
    ctx->pc = 0x14c590u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14c594: 0x85100b
    ctx->pc = 0x14c594u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_14c598:
    // 0x14c598: 0xdfbf0020
    ctx->pc = 0x14c598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c59c: 0x3e00008
    ctx->pc = 0x14C59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C5A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C548u: goto label_14c548;
            case 0x14C550u: goto label_14c550;
            case 0x14C568u: goto label_14c568;
            case 0x14C580u: goto label_14c580;
            case 0x14C598u: goto label_14c598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C5A4u;
}
