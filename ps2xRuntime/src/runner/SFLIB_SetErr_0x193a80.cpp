#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFLIB_SetErr
// Address: 0x193a80 - 0x193af8
void SFLIB_SetErr_0x193a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFLIB_SetErr");


    ctx->pc = 0x193a80u;

    // 0x193a80: 0x27bdffc0
    ctx->pc = 0x193a80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x193a84: 0xffb00010
    ctx->pc = 0x193a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x193a88: 0x80802d
    ctx->pc = 0x193a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a8c: 0xffb10020
    ctx->pc = 0x193a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x193a90: 0xffbf0030
    ctx->pc = 0x193a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x193a94: 0xa0882d
    ctx->pc = 0x193a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a98: 0xc064f3a
    ctx->pc = 0x193A98u;
    SET_GPR_U32(ctx, 31, 0x193AA0u);
    ctx->pc = 0x193A9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AA0u; }
        else if (ctx->pc != 0x193AA0u) { ctx->pc = 0x193AA0u; }
    }
    if (ctx->pc != 0x193AA0u) { return; }
    ctx->pc = 0x193AA0u;
    // 0x193aa0: 0x16000007
    ctx->pc = 0x193AA0u;
    {
        const bool branch_taken_0x193aa0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x193AA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2432));
        if (branch_taken_0x193aa0) {
            ctx->pc = 0x193AC0u;
            goto label_193ac0;
        }
    }
    ctx->pc = 0x193AA8u;
    // 0x193aa8: 0x3c040026
    ctx->pc = 0x193aa8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x193aac: 0x220282d
    ctx->pc = 0x193aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ab0: 0xc064ebe
    ctx->pc = 0x193AB0u;
    SET_GPR_U32(ctx, 31, 0x193AB8u);
    ctx->pc = 0x193AB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958804));
    ctx->pc = 0x193AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_SetErrSub_0x193af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AB8u; }
        else if (ctx->pc != 0x193AB8u) { ctx->pc = 0x193AB8u; }
    }
    if (ctx->pc != 0x193AB8u) { return; }
    ctx->pc = 0x193AB8u;
    // 0x193ab8: 0x10000007
    ctx->pc = 0x193AB8u;
    {
        const bool branch_taken_0x193ab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x193ab8) {
            ctx->pc = 0x193AD8u;
            goto label_193ad8;
        }
    }
    ctx->pc = 0x193AC0u;
label_193ac0:
    // 0x193ac0: 0xc064ebe
    ctx->pc = 0x193AC0u;
    SET_GPR_U32(ctx, 31, 0x193AC8u);
    ctx->pc = 0x193AC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_SetErrSub_0x193af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AC8u; }
        else if (ctx->pc != 0x193AC8u) { ctx->pc = 0x193AC8u; }
    }
    if (ctx->pc != 0x193AC8u) { return; }
    ctx->pc = 0x193AC8u;
    // 0x193ac8: 0x8e020040
    ctx->pc = 0x193ac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x193acc: 0x18400002
    ctx->pc = 0x193ACCu;
    {
        const bool branch_taken_0x193acc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x193AD0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x193acc) {
            ctx->pc = 0x193AD8u;
            goto label_193ad8;
        }
    }
    ctx->pc = 0x193AD4u;
    // 0x193ad4: 0xae020040
    ctx->pc = 0x193ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_193ad8:
    // 0x193ad8: 0xc064f44
    ctx->pc = 0x193AD8u;
    SET_GPR_U32(ctx, 31, 0x193AE0u);
    ctx->pc = 0x193ADCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AE0u; }
        else if (ctx->pc != 0x193AE0u) { ctx->pc = 0x193AE0u; }
    }
    if (ctx->pc != 0x193AE0u) { return; }
    ctx->pc = 0x193AE0u;
    // 0x193ae0: 0x220102d
    ctx->pc = 0x193ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ae4: 0xdfbf0030
    ctx->pc = 0x193ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193ae8: 0xdfb10020
    ctx->pc = 0x193ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193aec: 0xdfb00010
    ctx->pc = 0x193aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193af0: 0x3e00008
    ctx->pc = 0x193AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193AF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193AC0u: goto label_193ac0;
            case 0x193AD8u: goto label_193ad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193AF8u;
}
