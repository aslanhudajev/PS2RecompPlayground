#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlExecVint
// Address: 0x1af710 - 0x1af7ac
void nlExecVint_0x1af710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlExecVint");


    ctx->pc = 0x1af710u;

    // 0x1af710: 0x27bdfff0
    ctx->pc = 0x1af710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af714: 0x7fbf0000
    ctx->pc = 0x1af714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1af718: 0x8f828ad4
    ctx->pc = 0x1af718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x1af71c: 0x8f838a0c
    ctx->pc = 0x1af71cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x1af720: 0x1043001d
    ctx->pc = 0x1AF720u;
    {
        const bool branch_taken_0x1af720 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AF724u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1af720) {
            ctx->pc = 0x1AF798u;
            goto label_1af798;
        }
    }
    ctx->pc = 0x1AF728u;
    // 0x1af728: 0xaf838ad4
    ctx->pc = 0x1af728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937300), GPR_U32(ctx, 3));
    // 0x1af72c: 0x30620001
    ctx->pc = 0x1af72cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x1af730: 0x3c011200
    ctx->pc = 0x1af730u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4608 << 16));
    // 0x1af734: 0xdc231000
    ctx->pc = 0x1af734u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4096)));
    // 0x1af738: 0x31b7a
    ctx->pc = 0x1af738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 13);
    // 0x1af73c: 0x601827
    ctx->pc = 0x1af73cu;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1af740: 0x30630001
    ctx->pc = 0x1af740u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1af744: 0x3183c
    ctx->pc = 0x1af744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1af748: 0x10400004
    ctx->pc = 0x1AF748u;
    {
        const bool branch_taken_0x1af748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF74Cu;
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        if (branch_taken_0x1af748) {
            ctx->pc = 0x1AF75Cu;
            goto label_1af75c;
        }
    }
    ctx->pc = 0x1AF750u;
    // 0x1af750: 0x3c020030
    ctx->pc = 0x1af750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1af754: 0x10000003
    ctx->pc = 0x1AF754u;
    {
        const bool branch_taken_0x1af754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF758u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14432));
        if (branch_taken_0x1af754) {
            ctx->pc = 0x1AF764u;
            goto label_1af764;
        }
    }
    ctx->pc = 0x1AF75Cu;
label_1af75c:
    // 0x1af75c: 0x3c020030
    ctx->pc = 0x1af75cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1af760: 0x24443770
    ctx->pc = 0x1af760u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14192));
label_1af764:
    // 0x1af764: 0x33c3c
    ctx->pc = 0x1af764u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1af768: 0x24050800
    ctx->pc = 0x1af768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1af76c: 0x73c3f
    ctx->pc = 0x1af76cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1af770: 0xc054f84
    ctx->pc = 0x1AF770u;
    SET_GPR_U32(ctx, 31, 0x1AF778u);
    ctx->pc = 0x1AF774u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x153E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetHalfOffset_0x153e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF778u; }
        else if (ctx->pc != 0x1AF778u) { ctx->pc = 0x1AF778u; }
    }
    if (ctx->pc != 0x1AF778u) { return; }
    ctx->pc = 0x1AF778u;
    // 0x1af778: 0xc0552d8
    ctx->pc = 0x1AF778u;
    SET_GPR_U32(ctx, 31, 0x1AF780u);
    ctx->pc = 0x1AF77Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF780u; }
        else if (ctx->pc != 0x1AF780u) { ctx->pc = 0x1AF780u; }
    }
    if (ctx->pc != 0x1AF780u) { return; }
    ctx->pc = 0x1AF780u;
    // 0x1af780: 0x8f858a0c
    ctx->pc = 0x1af780u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x1af784: 0x3c020030
    ctx->pc = 0x1af784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1af788: 0xc054da6
    ctx->pc = 0x1AF788u;
    SET_GPR_U32(ctx, 31, 0x1AF790u);
    ctx->pc = 0x1AF78Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14096));
    ctx->pc = 0x153698u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSwapDBuff_0x153698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF790u; }
        else if (ctx->pc != 0x1AF790u) { ctx->pc = 0x1AF790u; }
    }
    if (ctx->pc != 0x1AF790u) { return; }
    ctx->pc = 0x1AF790u;
    // 0x1af790: 0x10000004
    ctx->pc = 0x1AF790u;
    {
        const bool branch_taken_0x1af790 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AF794u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1af790) {
            ctx->pc = 0x1AF7A4u;
            goto label_1af7a4;
        }
    }
    ctx->pc = 0x1AF798u;
label_1af798:
    // 0x1af798: 0xc0552d8
    ctx->pc = 0x1AF798u;
    SET_GPR_U32(ctx, 31, 0x1AF7A0u);
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF7A0u; }
        else if (ctx->pc != 0x1AF7A0u) { ctx->pc = 0x1AF7A0u; }
    }
    if (ctx->pc != 0x1AF7A0u) { return; }
    ctx->pc = 0x1AF7A0u;
    // 0x1af7a0: 0x7bbf0000
    ctx->pc = 0x1af7a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1af7a4:
    // 0x1af7a4: 0x3e00008
    ctx->pc = 0x1AF7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF7A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF75Cu: goto label_1af75c;
            case 0x1AF764u: goto label_1af764;
            case 0x1AF798u: goto label_1af798;
            case 0x1AF7A4u: goto label_1af7a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF7ACu;
}
