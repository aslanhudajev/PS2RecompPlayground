#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_CntupHnVbIn
// Address: 0x19da78 - 0x19dae4
void sftim_CntupHnVbIn_0x19da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_CntupHnVbIn");


    ctx->pc = 0x19da78u;

    // 0x19da78: 0x27bdffd0
    ctx->pc = 0x19da78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19da7c: 0xffb10010
    ctx->pc = 0x19da7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19da80: 0x80882d
    ctx->pc = 0x19da80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da84: 0xffb00000
    ctx->pc = 0x19da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19da88: 0xffbf0020
    ctx->pc = 0x19da88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19da8c: 0xc0676ba
    ctx->pc = 0x19DA8Cu;
    SET_GPR_U32(ctx, 31, 0x19DA94u);
    ctx->pc = 0x19DA90u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2708));
    ctx->pc = 0x19DAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_IsTimeIncre_0x19dae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA94u; }
        else if (ctx->pc != 0x19DA94u) { ctx->pc = 0x19DA94u; }
    }
    if (ctx->pc != 0x19DA94u) { return; }
    ctx->pc = 0x19DA94u;
    // 0x19da94: 0x10400006
    ctx->pc = 0x19DA94u;
    {
        const bool branch_taken_0x19da94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DA98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19da94) {
            ctx->pc = 0x19DAB0u;
            goto label_19dab0;
        }
    }
    ctx->pc = 0x19DA9Cu;
    // 0x19da9c: 0x8e020254
    ctx->pc = 0x19da9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x19daa0: 0x8e030258
    ctx->pc = 0x19daa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x19daa4: 0x431021
    ctx->pc = 0x19daa4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19daa8: 0xae020254
    ctx->pc = 0x19daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x19daac: 0x220202d
    ctx->pc = 0x19daacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19dab0:
    // 0x19dab0: 0xc0676ec
    ctx->pc = 0x19DAB0u;
    SET_GPR_U32(ctx, 31, 0x19DAB8u);
    ctx->pc = 0x19DAB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DBB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_IsVbinStIncre_0x19dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DAB8u; }
        else if (ctx->pc != 0x19DAB8u) { ctx->pc = 0x19DAB8u; }
    }
    if (ctx->pc != 0x19DAB8u) { return; }
    ctx->pc = 0x19DAB8u;
    // 0x19dab8: 0x10400006
    ctx->pc = 0x19DAB8u;
    {
        const bool branch_taken_0x19dab8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DABCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19dab8) {
            ctx->pc = 0x19DAD4u;
            goto label_19dad4;
        }
    }
    ctx->pc = 0x19DAC0u;
    // 0x19dac0: 0x8e020278
    ctx->pc = 0x19dac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x19dac4: 0x8e030258
    ctx->pc = 0x19dac4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x19dac8: 0x431021
    ctx->pc = 0x19dac8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19dacc: 0xae020278
    ctx->pc = 0x19daccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
    // 0x19dad0: 0xdfbf0020
    ctx->pc = 0x19dad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19dad4:
    // 0x19dad4: 0xdfb10010
    ctx->pc = 0x19dad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dad8: 0xdfb00000
    ctx->pc = 0x19dad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dadc: 0x3e00008
    ctx->pc = 0x19DADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DAE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DAB0u: goto label_19dab0;
            case 0x19DAD4u: goto label_19dad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DAE4u;
}
