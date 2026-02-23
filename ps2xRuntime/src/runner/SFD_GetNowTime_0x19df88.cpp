#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetNowTime
// Address: 0x19df88 - 0x19dff0
void SFD_GetNowTime_0x19df88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetNowTime");


    ctx->pc = 0x19df88u;

    // 0x19df88: 0x27bdffc0
    ctx->pc = 0x19df88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19df8c: 0xffb00000
    ctx->pc = 0x19df8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19df90: 0xffb20020
    ctx->pc = 0x19df90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19df94: 0x80802d
    ctx->pc = 0x19df94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df98: 0xffb10010
    ctx->pc = 0x19df98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19df9c: 0xc0902d
    ctx->pc = 0x19df9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfa0: 0xffbf0030
    ctx->pc = 0x19dfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19dfa4: 0xc064f1e
    ctx->pc = 0x19DFA4u;
    SET_GPR_U32(ctx, 31, 0x19DFACu);
    ctx->pc = 0x19DFA8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DFACu; }
        else if (ctx->pc != 0x19DFACu) { ctx->pc = 0x19DFACu; }
    }
    if (ctx->pc != 0x19DFACu) { return; }
    ctx->pc = 0x19DFACu;
    // 0x19dfac: 0x10400006
    ctx->pc = 0x19DFACu;
    {
        const bool branch_taken_0x19dfac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DFB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19dfac) {
            ctx->pc = 0x19DFC8u;
            goto label_19dfc8;
        }
    }
    ctx->pc = 0x19DFB4u;
    // 0x19dfb4: 0x3c05ff00
    ctx->pc = 0x19dfb4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19dfb8: 0xc064ea0
    ctx->pc = 0x19DFB8u;
    SET_GPR_U32(ctx, 31, 0x19DFC0u);
    ctx->pc = 0x19DFBCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 296));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DFC0u; }
        else if (ctx->pc != 0x19DFC0u) { ctx->pc = 0x19DFC0u; }
    }
    if (ctx->pc != 0x19DFC0u) { return; }
    ctx->pc = 0x19DFC0u;
    // 0x19dfc0: 0x10000006
    ctx->pc = 0x19DFC0u;
    {
        const bool branch_taken_0x19dfc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DFC4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19dfc0) {
            ctx->pc = 0x19DFDCu;
            goto label_19dfdc;
        }
    }
    ctx->pc = 0x19DFC8u;
label_19dfc8:
    // 0x19dfc8: 0x200202d
    ctx->pc = 0x19dfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfcc: 0x220282d
    ctx->pc = 0x19dfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfd0: 0xc0677fc
    ctx->pc = 0x19DFD0u;
    SET_GPR_U32(ctx, 31, 0x19DFD8u);
    ctx->pc = 0x19DFD4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetNowTime_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DFD8u; }
        else if (ctx->pc != 0x19DFD8u) { ctx->pc = 0x19DFD8u; }
    }
    if (ctx->pc != 0x19DFD8u) { return; }
    ctx->pc = 0x19DFD8u;
    // 0x19dfd8: 0xdfbf0030
    ctx->pc = 0x19dfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19dfdc:
    // 0x19dfdc: 0xdfb20020
    ctx->pc = 0x19dfdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dfe0: 0xdfb10010
    ctx->pc = 0x19dfe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dfe4: 0xdfb00000
    ctx->pc = 0x19dfe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dfe8: 0x3e00008
    ctx->pc = 0x19DFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DFECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DFC8u: goto label_19dfc8;
            case 0x19DFDCu: goto label_19dfdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DFF0u;
}
