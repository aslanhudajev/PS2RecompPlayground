#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndInit1st
// Address: 0x1ace70 - 0x1acefc
void nlsndInit1st_0x1ace70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndInit1st");


    ctx->pc = 0x1ace70u;

    // 0x1ace70: 0x27bdfff0
    ctx->pc = 0x1ace70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ace74: 0x7fbf0000
    ctx->pc = 0x1ace74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1ace78:
    // 0x1ace78: 0x3c020030
    ctx->pc = 0x1ace78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ace7c: 0x24445af0
    ctx->pc = 0x1ace7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23280));
    // 0x1ace80: 0x3c020001
    ctx->pc = 0x1ace80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1ace84: 0x34452345
    ctx->pc = 0x1ace84u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 9029));
    // 0x1ace88: 0xc055dfe
    ctx->pc = 0x1ACE88u;
    SET_GPR_U32(ctx, 31, 0x1ACE90u);
    ctx->pc = 0x1ACE8Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1577F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1577f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE90u; }
        else if (ctx->pc != 0x1ACE90u) { ctx->pc = 0x1ACE90u; }
    }
    if (ctx->pc != 0x1ACE90u) { return; }
    ctx->pc = 0x1ACE90u;
    // 0x1ace90: 0x4410007
    ctx->pc = 0x1ACE90u;
    {
        const bool branch_taken_0x1ace90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ACE94u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10000));
        if (branch_taken_0x1ace90) {
            ctx->pc = 0x1ACEB0u;
            goto label_1aceb0;
        }
    }
    ctx->pc = 0x1ACE98u;
    // 0x1ace98: 0x3c020026
    ctx->pc = 0x1ace98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1ace9c: 0xc05114a
    ctx->pc = 0x1ACE9Cu;
    SET_GPR_U32(ctx, 31, 0x1ACEA4u);
    ctx->pc = 0x1ACEA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964912));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEA4u; }
        else if (ctx->pc != 0x1ACEA4u) { ctx->pc = 0x1ACEA4u; }
    }
    if (ctx->pc != 0x1ACEA4u) { return; }
    ctx->pc = 0x1ACEA4u;
label_1acea4:
    // 0x1acea4: 0x1000ffff
    ctx->pc = 0x1ACEA4u;
    {
        const bool branch_taken_0x1acea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1acea4) {
            ctx->pc = 0x1ACEA4u;
            goto label_1acea4;
        }
    }
    ctx->pc = 0x1ACEACu;
    // 0x1aceac: 0x24042710
    ctx->pc = 0x1aceacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10000));
label_1aceb0:
    // 0x1aceb0: 0x70801e28
    ctx->pc = 0x1aceb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1aceb4: 0x2484ffff
    ctx->pc = 0x1aceb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1aceb8: 0x0
    ctx->pc = 0x1aceb8u;
    // NOP
    // 0x1acebc: 0x0
    ctx->pc = 0x1acebcu;
    // NOP
    // 0x1acec0: 0x0
    ctx->pc = 0x1acec0u;
    // NOP
    // 0x1acec4: 0x1460fffa
    ctx->pc = 0x1ACEC4u;
    {
        const bool branch_taken_0x1acec4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1acec4) {
            ctx->pc = 0x1ACEB0u;
            goto label_1aceb0;
        }
    }
    ctx->pc = 0x1ACECCu;
    // 0x1acecc: 0x3c010030
    ctx->pc = 0x1aceccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aced0: 0x8c235b14
    ctx->pc = 0x1aced0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 23316)));
    // 0x1aced4: 0x14600006
    ctx->pc = 0x1ACED4u;
    {
        const bool branch_taken_0x1aced4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aced4) {
            ctx->pc = 0x1ACEF0u;
            goto label_1acef0;
        }
    }
    ctx->pc = 0x1ACEDCu;
    // 0x1acedc: 0x3c020026
    ctx->pc = 0x1acedcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1acee0: 0xc05114a
    ctx->pc = 0x1ACEE0u;
    SET_GPR_U32(ctx, 31, 0x1ACEE8u);
    ctx->pc = 0x1ACEE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964944));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEE8u; }
        else if (ctx->pc != 0x1ACEE8u) { ctx->pc = 0x1ACEE8u; }
    }
    if (ctx->pc != 0x1ACEE8u) { return; }
    ctx->pc = 0x1ACEE8u;
    // 0x1acee8: 0x1000ffe3
    ctx->pc = 0x1ACEE8u;
    {
        const bool branch_taken_0x1acee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1acee8) {
            ctx->pc = 0x1ACE78u;
            goto label_1ace78;
        }
    }
    ctx->pc = 0x1ACEF0u;
label_1acef0:
    // 0x1acef0: 0x7bbf0000
    ctx->pc = 0x1acef0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acef4: 0x3e00008
    ctx->pc = 0x1ACEF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACEF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACE78u: goto label_1ace78;
            case 0x1ACEA4u: goto label_1acea4;
            case 0x1ACEB0u: goto label_1aceb0;
            case 0x1ACEF0u: goto label_1acef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ACEFCu;
}
