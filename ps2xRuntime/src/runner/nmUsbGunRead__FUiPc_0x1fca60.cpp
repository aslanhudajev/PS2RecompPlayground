#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nmUsbGunRead__FUiPc
// Address: 0x1fca60 - 0x1fcae0
void nmUsbGunRead__FUiPc_0x1fca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nmUsbGunRead__FUiPc");


    ctx->pc = 0x1fca60u;

    // 0x1fca60: 0x27bdffd0
    ctx->pc = 0x1fca60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fca64: 0x7fbf0020
    ctx->pc = 0x1fca64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fca68: 0x7fb00010
    ctx->pc = 0x1fca68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fca6c: 0x3c010052
    ctx->pc = 0x1fca6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fca70: 0xa0249480
    ctx->pc = 0x1fca70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939776), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fca74: 0x3c020052
    ctx->pc = 0x1fca74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fca78: 0x70a08628
    ctx->pc = 0x1fca78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fca7c: 0xc055eee
    ctx->pc = 0x1FCA7Cu;
    SET_GPR_U32(ctx, 31, 0x1FCA84u);
    ctx->pc = 0x1FCA80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939712));
    ctx->pc = 0x157BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x157bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA84u; }
        else if (ctx->pc != 0x1FCA84u) { ctx->pc = 0x1FCA84u; }
    }
    if (ctx->pc != 0x1FCA84u) { return; }
    ctx->pc = 0x1FCA84u;
    // 0x1fca84: 0x10400004
    ctx->pc = 0x1FCA84u;
    {
        const bool branch_taken_0x1fca84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fca84) {
            ctx->pc = 0x1FCA98u;
            goto label_1fca98;
        }
    }
    ctx->pc = 0x1FCA8Cu;
    // 0x1fca8c: 0x3c020027
    ctx->pc = 0x1fca8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fca90: 0xc05114a
    ctx->pc = 0x1FCA90u;
    SET_GPR_U32(ctx, 31, 0x1FCA98u);
    ctx->pc = 0x1FCA94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954832));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA98u; }
        else if (ctx->pc != 0x1FCA98u) { ctx->pc = 0x1FCA98u; }
    }
    if (ctx->pc != 0x1FCA98u) { return; }
    ctx->pc = 0x1FCA98u;
label_1fca98:
    // 0x1fca98: 0x3c020052
    ctx->pc = 0x1fca98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fca9c: 0x24479480
    ctx->pc = 0x1fca9cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294939776));
    // 0x1fcaa0: 0x3c020052
    ctx->pc = 0x1fcaa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fcaa4: 0x24080020
    ctx->pc = 0x1fcaa4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fcaa8: 0x72004e28
    ctx->pc = 0x1fcaa8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1fcaac: 0x24449440
    ctx->pc = 0x1fcaacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x1fcab0: 0x24050002
    ctx->pc = 0x1fcab0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fcab4: 0x24060001
    ctx->pc = 0x1fcab4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcab8: 0x71005628
    ctx->pc = 0x1fcab8u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1fcabc: 0x70005e28
    ctx->pc = 0x1fcabcu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fcac0: 0xc055e72
    ctx->pc = 0x1FCAC0u;
    SET_GPR_U32(ctx, 31, 0x1FCAC8u);
    ctx->pc = 0x1FCAC4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCAC8u; }
        else if (ctx->pc != 0x1FCAC8u) { ctx->pc = 0x1FCAC8u; }
    }
    if (ctx->pc != 0x1FCAC8u) { return; }
    ctx->pc = 0x1FCAC8u;
    // 0x1fcac8: 0x50400001
    ctx->pc = 0x1FCAC8u;
    {
        const bool branch_taken_0x1fcac8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fcac8) {
            ctx->pc = 0x1FCACCu;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1FCAD0u;
            goto label_1fcad0;
        }
    }
    ctx->pc = 0x1FCAD0u;
label_1fcad0:
    // 0x1fcad0: 0x7bbf0020
    ctx->pc = 0x1fcad0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcad4: 0x7bb00010
    ctx->pc = 0x1fcad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcad8: 0x3e00008
    ctx->pc = 0x1FCAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCADCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCA98u: goto label_1fca98;
            case 0x1FCAD0u: goto label_1fcad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FCAE0u;
}
