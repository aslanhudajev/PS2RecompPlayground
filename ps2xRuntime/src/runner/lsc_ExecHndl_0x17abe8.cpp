#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: lsc_ExecHndl
// Address: 0x17abe8 - 0x17acb0
void lsc_ExecHndl_0x17abe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("lsc_ExecHndl");


    ctx->pc = 0x17abe8u;

    // 0x17abe8: 0x27bdffc0
    ctx->pc = 0x17abe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17abec: 0x24050001
    ctx->pc = 0x17abecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17abf0: 0xffb00000
    ctx->pc = 0x17abf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17abf4: 0xffbf0030
    ctx->pc = 0x17abf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17abf8: 0x80802d
    ctx->pc = 0x17abf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abfc: 0xffb20020
    ctx->pc = 0x17abfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17ac00: 0xffb10010
    ctx->pc = 0x17ac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17ac04: 0x82020004
    ctx->pc = 0x17ac04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17ac08: 0x10450023
    ctx->pc = 0x17AC08u;
    {
        const bool branch_taken_0x17ac08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x17AC0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x17ac08) {
            ctx->pc = 0x17AC98u;
            goto label_17ac98;
        }
    }
    ctx->pc = 0x17AC10u;
    // 0x17ac10: 0x82120001
    ctx->pc = 0x17ac10u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x17ac14: 0x16420021
    ctx->pc = 0x17AC14u;
    {
        const bool branch_taken_0x17ac14 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x17AC18u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17ac14) {
            ctx->pc = 0x17AC9Cu;
            goto label_17ac9c;
        }
    }
    ctx->pc = 0x17AC1Cu;
    // 0x17ac1c: 0x8e020024
    ctx->pc = 0x17ac1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17ac20: 0x1840001e
    ctx->pc = 0x17AC20u;
    {
        const bool branch_taken_0x17ac20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17AC24u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 112));
        if (branch_taken_0x17ac20) {
            ctx->pc = 0x17AC9Cu;
            goto label_17ac9c;
        }
    }
    ctx->pc = 0x17AC28u;
    // 0x17ac28: 0x8e040020
    ctx->pc = 0x17ac28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17ac2c: 0x41180
    ctx->pc = 0x17ac2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 6));
    // 0x17ac30: 0x2221021
    ctx->pc = 0x17ac30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ac34: 0x8c430000
    ctx->pc = 0x17ac34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ac38: 0x14650005
    ctx->pc = 0x17AC38u;
    {
        const bool branch_taken_0x17ac38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x17AC3Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 6));
        if (branch_taken_0x17ac38) {
            ctx->pc = 0x17AC50u;
            goto label_17ac50;
        }
    }
    ctx->pc = 0x17AC40u;
    // 0x17ac40: 0xc05ea72
    ctx->pc = 0x17AC40u;
    SET_GPR_U32(ctx, 31, 0x17AC48u);
    ctx->pc = 0x17AC44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        lsc_StatRead_0x17a9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC48u; }
        else if (ctx->pc != 0x17AC48u) { ctx->pc = 0x17AC48u; }
    }
    if (ctx->pc != 0x17AC48u) { return; }
    ctx->pc = 0x17AC48u;
    // 0x17ac48: 0x8e040020
    ctx->pc = 0x17ac48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17ac4c: 0x41180
    ctx->pc = 0x17ac4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 6));
label_17ac50:
    // 0x17ac50: 0x2221021
    ctx->pc = 0x17ac50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ac54: 0x8c430000
    ctx->pc = 0x17ac54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ac58: 0x14720005
    ctx->pc = 0x17AC58u;
    {
        const bool branch_taken_0x17ac58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 18));
        ctx->pc = 0x17AC5Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 6));
        if (branch_taken_0x17ac58) {
            ctx->pc = 0x17AC70u;
            goto label_17ac70;
        }
    }
    ctx->pc = 0x17AC60u;
    // 0x17ac60: 0xc05ea9c
    ctx->pc = 0x17AC60u;
    SET_GPR_U32(ctx, 31, 0x17AC68u);
    ctx->pc = 0x17AC64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17AA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        lsc_StatEnd_0x17aa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC68u; }
        else if (ctx->pc != 0x17AC68u) { ctx->pc = 0x17AC68u; }
    }
    if (ctx->pc != 0x17AC68u) { return; }
    ctx->pc = 0x17AC68u;
    // 0x17ac68: 0x8e040020
    ctx->pc = 0x17ac68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17ac6c: 0x41180
    ctx->pc = 0x17ac6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 6));
label_17ac70:
    // 0x17ac70: 0x2221021
    ctx->pc = 0x17ac70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ac74: 0x8c430000
    ctx->pc = 0x17ac74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ac78: 0x14600008
    ctx->pc = 0x17AC78u;
    {
        const bool branch_taken_0x17ac78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17AC7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17ac78) {
            ctx->pc = 0x17AC9Cu;
            goto label_17ac9c;
        }
    }
    ctx->pc = 0x17AC80u;
    // 0x17ac80: 0x200202d
    ctx->pc = 0x17ac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac84: 0xdfb20020
    ctx->pc = 0x17ac84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ac88: 0xdfb10010
    ctx->pc = 0x17ac88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ac8c: 0xdfb00000
    ctx->pc = 0x17ac8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ac90: 0x805ea2a
    ctx->pc = 0x17AC90u;
    ctx->pc = 0x17AC94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x17A8A8u;
    lsc_StatWait_0x17a8a8(rdram, ctx, runtime); return;
    ctx->pc = 0x17AC98u;
label_17ac98:
    // 0x17ac98: 0xdfbf0030
    ctx->pc = 0x17ac98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17ac9c:
    // 0x17ac9c: 0xdfb20020
    ctx->pc = 0x17ac9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aca0: 0xdfb10010
    ctx->pc = 0x17aca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aca4: 0xdfb00000
    ctx->pc = 0x17aca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aca8: 0x3e00008
    ctx->pc = 0x17ACA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ACACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AC50u: goto label_17ac50;
            case 0x17AC70u: goto label_17ac70;
            case 0x17AC98u: goto label_17ac98;
            case 0x17AC9Cu: goto label_17ac9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17ACB0u;
}
