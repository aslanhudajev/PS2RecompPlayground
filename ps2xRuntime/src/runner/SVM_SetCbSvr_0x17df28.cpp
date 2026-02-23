#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_SetCbSvr
// Address: 0x17df28 - 0x17dfd8
void SVM_SetCbSvr_0x17df28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_SetCbSvr");


    ctx->pc = 0x17df28u;

    // 0x17df28: 0x27bdffb0
    ctx->pc = 0x17df28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17df2c: 0xffb30030
    ctx->pc = 0x17df2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17df30: 0xffb20020
    ctx->pc = 0x17df30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17df34: 0xa0982d
    ctx->pc = 0x17df34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df38: 0xffb00000
    ctx->pc = 0x17df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17df3c: 0xc0902d
    ctx->pc = 0x17df3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df40: 0xffb10010
    ctx->pc = 0x17df40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17df44: 0x80802d
    ctx->pc = 0x17df44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df48: 0xffbf0040
    ctx->pc = 0x17df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17df4c: 0xc05f6f6
    ctx->pc = 0x17DF4Cu;
    SET_GPR_U32(ctx, 31, 0x17DF54u);
    ctx->pc = 0x17DF50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF54u; }
        else if (ctx->pc != 0x17DF54u) { ctx->pc = 0x17DF54u; }
    }
    if (ctx->pc != 0x17DF54u) { return; }
    ctx->pc = 0x17DF54u;
    // 0x17df54: 0x3c04002e
    ctx->pc = 0x17df54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)46 << 16));
    // 0x17df58: 0x108140
    ctx->pc = 0x17df58u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 5));
    // 0x17df5c: 0x10000007
    ctx->pc = 0x17DF5Cu;
    {
        const bool branch_taken_0x17df5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DF60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 6880));
        if (branch_taken_0x17df5c) {
            ctx->pc = 0x17DF7Cu;
            goto label_17df7c;
        }
    }
    ctx->pc = 0x17DF64u;
    // 0x17df64: 0x0
    ctx->pc = 0x17df64u;
    // NOP
label_17df68:
    // 0x17df68: 0x2a220004
    ctx->pc = 0x17df68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x17df6c: 0x10400009
    ctx->pc = 0x17DF6Cu;
    {
        const bool branch_taken_0x17df6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DF70u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 6880));
        if (branch_taken_0x17df6c) {
            ctx->pc = 0x17DF94u;
            goto label_17df94;
        }
    }
    ctx->pc = 0x17DF74u;
    // 0x17df74: 0x1110c0
    ctx->pc = 0x17df74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 3));
    // 0x17df78: 0x431021
    ctx->pc = 0x17df78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17df7c:
    // 0x17df7c: 0x2021021
    ctx->pc = 0x17df7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17df80: 0x8c430000
    ctx->pc = 0x17df80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17df84: 0x5460fff8
    ctx->pc = 0x17DF84u;
    {
        const bool branch_taken_0x17df84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x17df84) {
            ctx->pc = 0x17DF88u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x17DF68u;
            goto label_17df68;
        }
    }
    ctx->pc = 0x17DF8Cu;
    // 0x17df8c: 0xac520004
    ctx->pc = 0x17df8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x17df90: 0xac530000
    ctx->pc = 0x17df90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_17df94:
    // 0x17df94: 0x24020004
    ctx->pc = 0x17df94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x17df98: 0x16220003
    ctx->pc = 0x17DF98u;
    {
        const bool branch_taken_0x17df98 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x17DF9Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x17df98) {
            ctx->pc = 0x17DFA8u;
            goto label_17dfa8;
        }
    }
    ctx->pc = 0x17DFA0u;
    // 0x17dfa0: 0xc05f72c
    ctx->pc = 0x17DFA0u;
    SET_GPR_U32(ctx, 31, 0x17DFA8u);
    ctx->pc = 0x17DFA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951104));
    ctx->pc = 0x17DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_CallErr1_0x17dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFA8u; }
        else if (ctx->pc != 0x17DFA8u) { ctx->pc = 0x17DFA8u; }
    }
    if (ctx->pc != 0x17DFA8u) { return; }
    ctx->pc = 0x17DFA8u;
label_17dfa8:
    // 0x17dfa8: 0xc05f700
    ctx->pc = 0x17DFA8u;
    SET_GPR_U32(ctx, 31, 0x17DFB0u);
    ctx->pc = 0x17DC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Unlock_0x17dc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFB0u; }
        else if (ctx->pc != 0x17DFB0u) { ctx->pc = 0x17DFB0u; }
    }
    if (ctx->pc != 0x17DFB0u) { return; }
    ctx->pc = 0x17DFB0u;
    // 0x17dfb0: 0x3a230004
    ctx->pc = 0x17dfb0u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 17), 4));
    // 0x17dfb4: 0x2402ffff
    ctx->pc = 0x17dfb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dfb8: 0x223100b
    ctx->pc = 0x17dfb8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x17dfbc: 0xdfbf0040
    ctx->pc = 0x17dfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17dfc0: 0xdfb30030
    ctx->pc = 0x17dfc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dfc4: 0xdfb20020
    ctx->pc = 0x17dfc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dfc8: 0xdfb10010
    ctx->pc = 0x17dfc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dfcc: 0xdfb00000
    ctx->pc = 0x17dfccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dfd0: 0x3e00008
    ctx->pc = 0x17DFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DFD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DF68u: goto label_17df68;
            case 0x17DF7Cu: goto label_17df7c;
            case 0x17DF94u: goto label_17df94;
            case 0x17DFA8u: goto label_17dfa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DFD8u;
}
