#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_SearchDelim
// Address: 0x1859d8 - 0x185ac0
void MPV_SearchDelim_0x1859d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_SearchDelim");


    ctx->pc = 0x1859d8u;

    // 0x1859d8: 0x27bdff80
    ctx->pc = 0x1859d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1859dc: 0x182d
    ctx->pc = 0x1859dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859e0: 0xffb10010
    ctx->pc = 0x1859e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1859e4: 0x80882d
    ctx->pc = 0x1859e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859e8: 0xffb20020
    ctx->pc = 0x1859e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1859ec: 0xffb50050
    ctx->pc = 0x1859ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1859f0: 0x2259021
    ctx->pc = 0x1859f0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1859f4: 0xffbf0070
    ctx->pc = 0x1859f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1859f8: 0xc0a82d
    ctx->pc = 0x1859f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859fc: 0xffb60060
    ctx->pc = 0x1859fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x185a00: 0x232102b
    ctx->pc = 0x185a00u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x185a04: 0xffb40040
    ctx->pc = 0x185a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x185a08: 0xffb30030
    ctx->pc = 0x185a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x185a0c: 0x10400021
    ctx->pc = 0x185A0Cu;
    {
        const bool branch_taken_0x185a0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185A10u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x185a0c) {
            ctx->pc = 0x185A94u;
            goto label_185a94;
        }
    }
    ctx->pc = 0x185A14u;
    // 0x185a14: 0x24130001
    ctx->pc = 0x185a14u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x185a18: 0x24140002
    ctx->pc = 0x185a18u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
    // 0x185a1c: 0x24160003
    ctx->pc = 0x185a1cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 3));
    // 0x185a20: 0x82220000
    ctx->pc = 0x185a20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x185a24: 0x0
    ctx->pc = 0x185a24u;
    // NOP
label_185a28:
    // 0x185a28: 0x10730009
    ctx->pc = 0x185A28u;
    {
        const bool branch_taken_0x185a28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        ctx->pc = 0x185A2Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x185a28) {
            ctx->pc = 0x185A50u;
            goto label_185a50;
        }
    }
    ctx->pc = 0x185A30u;
    // 0x185a30: 0x50600015
    ctx->pc = 0x185A30u;
    {
        const bool branch_taken_0x185a30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x185a30) {
            ctx->pc = 0x185A34u;
            if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 19));
            ctx->pc = 0x185A88u;
            goto label_185a88;
        }
    }
    ctx->pc = 0x185A38u;
    // 0x185a38: 0x10740008
    ctx->pc = 0x185A38u;
    {
        const bool branch_taken_0x185a38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 20));
        if (branch_taken_0x185a38) {
            ctx->pc = 0x185A5Cu;
            goto label_185a5c;
        }
    }
    ctx->pc = 0x185A40u;
    // 0x185a40: 0x1076000a
    ctx->pc = 0x185A40u;
    {
        const bool branch_taken_0x185a40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 22));
        ctx->pc = 0x185A44u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        if (branch_taken_0x185a40) {
            ctx->pc = 0x185A6Cu;
            goto label_185a6c;
        }
    }
    ctx->pc = 0x185A48u;
    // 0x185a48: 0x10000010
    ctx->pc = 0x185A48u;
    {
        const bool branch_taken_0x185a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x185a48) {
            ctx->pc = 0x185A8Cu;
            goto label_185a8c;
        }
    }
    ctx->pc = 0x185A50u;
label_185a50:
    // 0x185a50: 0x280182d
    ctx->pc = 0x185a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a54: 0x1000000c
    ctx->pc = 0x185A54u;
    {
        const bool branch_taken_0x185a54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185A58u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
        if (branch_taken_0x185a54) {
            ctx->pc = 0x185A88u;
            goto label_185a88;
        }
    }
    ctx->pc = 0x185A5Cu;
label_185a5c:
    // 0x185a5c: 0x1453000a
    ctx->pc = 0x185A5Cu;
    {
        const bool branch_taken_0x185a5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x185A60u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
        if (branch_taken_0x185a5c) {
            ctx->pc = 0x185A88u;
            goto label_185a88;
        }
    }
    ctx->pc = 0x185A64u;
    // 0x185a64: 0x10000008
    ctx->pc = 0x185A64u;
    {
        const bool branch_taken_0x185a64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185A68u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x185a64) {
            ctx->pc = 0x185A88u;
            goto label_185a88;
        }
    }
    ctx->pc = 0x185A6Cu;
label_185a6c:
    // 0x185a6c: 0x2630fffc
    ctx->pc = 0x185a6cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x185a70: 0xc061610
    ctx->pc = 0x185A70u;
    SET_GPR_U32(ctx, 31, 0x185A78u);
    ctx->pc = 0x185A74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185A78u; }
        else if (ctx->pc != 0x185A78u) { ctx->pc = 0x185A78u; }
    }
    if (ctx->pc != 0x185A78u) { return; }
    ctx->pc = 0x185A78u;
    // 0x185a78: 0x2a21024
    ctx->pc = 0x185a78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x185a7c: 0x14400006
    ctx->pc = 0x185A7Cu;
    {
        const bool branch_taken_0x185a7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185A80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185a7c) {
            ctx->pc = 0x185A98u;
            goto label_185a98;
        }
    }
    ctx->pc = 0x185A84u;
    // 0x185a84: 0x182d
    ctx->pc = 0x185a84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185a88:
    // 0x185a88: 0x232102b
    ctx->pc = 0x185a88u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_185a8c:
    // 0x185a8c: 0x5440ffe6
    ctx->pc = 0x185A8Cu;
    {
        const bool branch_taken_0x185a8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x185a8c) {
            ctx->pc = 0x185A90u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x185A28u;
            goto label_185a28;
        }
    }
    ctx->pc = 0x185A94u;
label_185a94:
    // 0x185a94: 0x102d
    ctx->pc = 0x185a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185a98:
    // 0x185a98: 0xdfbf0070
    ctx->pc = 0x185a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185a9c: 0xdfb60060
    ctx->pc = 0x185a9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185aa0: 0xdfb50050
    ctx->pc = 0x185aa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185aa4: 0xdfb40040
    ctx->pc = 0x185aa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185aa8: 0xdfb30030
    ctx->pc = 0x185aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185aac: 0xdfb20020
    ctx->pc = 0x185aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185ab0: 0xdfb10010
    ctx->pc = 0x185ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185ab4: 0xdfb00000
    ctx->pc = 0x185ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185ab8: 0x3e00008
    ctx->pc = 0x185AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185ABCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185A28u: goto label_185a28;
            case 0x185A50u: goto label_185a50;
            case 0x185A5Cu: goto label_185a5c;
            case 0x185A6Cu: goto label_185a6c;
            case 0x185A88u: goto label_185a88;
            case 0x185A8Cu: goto label_185a8c;
            case 0x185A94u: goto label_185a94;
            case 0x185A98u: goto label_185a98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x185AC0u;
}
