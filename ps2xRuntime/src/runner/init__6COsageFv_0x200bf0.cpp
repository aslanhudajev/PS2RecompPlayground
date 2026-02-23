#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__6COsageFv
// Address: 0x200bf0 - 0x200cac
void init__6COsageFv_0x200bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__6COsageFv");


    ctx->pc = 0x200bf0u;

    // 0x200bf0: 0x27bdffb0
    ctx->pc = 0x200bf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x200bf4: 0x7fbf0040
    ctx->pc = 0x200bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x200bf8: 0x7fb30030
    ctx->pc = 0x200bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x200bfc: 0x7fb20020
    ctx->pc = 0x200bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x200c00: 0x7fb10010
    ctx->pc = 0x200c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200c04: 0x7fb00000
    ctx->pc = 0x200c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x200c08: 0x70809628
    ctx->pc = 0x200c08u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x200c0c: 0x70008628
    ctx->pc = 0x200c0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x200c10: 0x72408e28
    ctx->pc = 0x200c10u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_200c14:
    // 0x200c14: 0xc080100
    ctx->pc = 0x200C14u;
    SET_GPR_U32(ctx, 31, 0x200C1Cu);
    ctx->pc = 0x200C18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1088));
    ctx->pc = 0x200400u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CChainFv_0x200400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C1Cu; }
        else if (ctx->pc != 0x200C1Cu) { ctx->pc = 0x200C1Cu; }
    }
    if (ctx->pc != 0x200C1Cu) { return; }
    ctx->pc = 0x200C1Cu;
    // 0x200c1c: 0xc080100
    ctx->pc = 0x200C1Cu;
    SET_GPR_U32(ctx, 31, 0x200C24u);
    ctx->pc = 0x200C20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x200400u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CChainFv_0x200400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C24u; }
        else if (ctx->pc != 0x200C24u) { ctx->pc = 0x200C24u; }
    }
    if (ctx->pc != 0x200C24u) { return; }
    ctx->pc = 0x200C24u;
    // 0x200c24: 0x26100001
    ctx->pc = 0x200c24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x200c28: 0x2a020008
    ctx->pc = 0x200c28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x200c2c: 0x1440fff9
    ctx->pc = 0x200C2Cu;
    {
        const bool branch_taken_0x200c2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x200C30u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 136));
        if (branch_taken_0x200c2c) {
            ctx->pc = 0x200C14u;
            goto label_200c14;
        }
    }
    ctx->pc = 0x200C34u;
    // 0x200c34: 0x70008e28
    ctx->pc = 0x200c34u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x200c38: 0x72408628
    ctx->pc = 0x200c38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_200c3c:
    // 0x200c3c: 0x26230001
    ctx->pc = 0x200c3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x200c40: 0x31100
    ctx->pc = 0x200c40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x200c44: 0x431021
    ctx->pc = 0x200c44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200c48: 0x210c0
    ctx->pc = 0x200c48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x200c4c: 0x2429821
    ctx->pc = 0x200c4cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x200c50: 0x3c023f00
    ctx->pc = 0x200c50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x200c54: 0x44826000
    ctx->pc = 0x200c54u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x200c58: 0x26040440
    ctx->pc = 0x200c58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1088));
    // 0x200c5c: 0xc080164
    ctx->pc = 0x200C5Cu;
    SET_GPR_U32(ctx, 31, 0x200C64u);
    ctx->pc = 0x200C60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 1088));
    ctx->pc = 0x200590u;
    {
        const uint32_t __entryPc = ctx->pc;
        setLink__6CChainFP6CChainf_0x200590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C64u; }
        else if (ctx->pc != 0x200C64u) { ctx->pc = 0x200C64u; }
    }
    if (ctx->pc != 0x200C64u) { return; }
    ctx->pc = 0x200C64u;
    // 0x200c64: 0x3c023f00
    ctx->pc = 0x200c64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x200c68: 0x44826000
    ctx->pc = 0x200c68u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x200c6c: 0x72602e28
    ctx->pc = 0x200c6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x200c70: 0xc080164
    ctx->pc = 0x200C70u;
    SET_GPR_U32(ctx, 31, 0x200C78u);
    ctx->pc = 0x200C74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x200590u;
    {
        const uint32_t __entryPc = ctx->pc;
        setLink__6CChainFP6CChainf_0x200590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C78u; }
        else if (ctx->pc != 0x200C78u) { ctx->pc = 0x200C78u; }
    }
    if (ctx->pc != 0x200C78u) { return; }
    ctx->pc = 0x200C78u;
    // 0x200c78: 0x26310001
    ctx->pc = 0x200c78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x200c7c: 0x2a230007
    ctx->pc = 0x200c7cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 7));
    // 0x200c80: 0x1460ffee
    ctx->pc = 0x200C80u;
    {
        const bool branch_taken_0x200c80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x200C84u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 136));
        if (branch_taken_0x200c80) {
            ctx->pc = 0x200C3Cu;
            goto label_200c3c;
        }
    }
    ctx->pc = 0x200C88u;
    // 0x200c88: 0x24030001
    ctx->pc = 0x200c88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x200c8c: 0xae430880
    ctx->pc = 0x200c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2176), GPR_U32(ctx, 3));
    // 0x200c90: 0x7bbf0040
    ctx->pc = 0x200c90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200c94: 0x7bb30030
    ctx->pc = 0x200c94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200c98: 0x7bb20020
    ctx->pc = 0x200c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200c9c: 0x7bb10010
    ctx->pc = 0x200c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200ca0: 0x7bb00000
    ctx->pc = 0x200ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200ca4: 0x3e00008
    ctx->pc = 0x200CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200CA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200C14u: goto label_200c14;
            case 0x200C3Cu: goto label_200c3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200CACu;
}
