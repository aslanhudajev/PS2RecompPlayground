#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_CallTrEntry
// Address: 0x19ed88 - 0x19ee0c
void sftrn_CallTrEntry_0x19ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_CallTrEntry");


    ctx->pc = 0x19ed88u;

label_19ed88:
    // 0x19ed88: 0x27bdffc0
    ctx->pc = 0x19ed88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_19ed8c:
    // 0x19ed8c: 0x182d
    ctx->pc = 0x19ed8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ed90:
    // 0x19ed90: 0xffb20020
    ctx->pc = 0x19ed90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19ed94:
    // 0x19ed94: 0xffb10010
    ctx->pc = 0x19ed94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19ed98:
    // 0x19ed98: 0x59080
    ctx->pc = 0x19ed98u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 5), 2));
label_19ed9c:
    // 0x19ed9c: 0xffb00000
    ctx->pc = 0x19ed9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19eda0:
    // 0x19eda0: 0x882d
    ctx->pc = 0x19eda0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eda4:
    // 0x19eda4: 0xffbf0030
    ctx->pc = 0x19eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19eda8:
    // 0x19eda8: 0x10000002
label_19edac:
    if (ctx->pc == 0x19EDACu) {
        ctx->pc = 0x19EDACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19EDB0u;
        goto label_19edb0;
    }
    ctx->pc = 0x19EDA8u;
    {
        const bool branch_taken_0x19eda8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EDACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19eda8) {
            ctx->pc = 0x19EDB4u;
            goto label_19edb4;
        }
    }
    ctx->pc = 0x19EDB0u;
label_19edb0:
    // 0x19edb0: 0x26310001
    ctx->pc = 0x19edb0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_19edb4:
    // 0x19edb4: 0x2a22000f
    ctx->pc = 0x19edb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 15));
label_19edb8:
    // 0x19edb8: 0x1040000e
label_19edbc:
    if (ctx->pc == 0x19EDBCu) {
        ctx->pc = 0x19EDBCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x19EDC0u;
        goto label_19edc0;
    }
    ctx->pc = 0x19EDB8u;
    {
        const bool branch_taken_0x19edb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EDBCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19edb8) {
            ctx->pc = 0x19EDF4u;
            goto label_19edf4;
        }
    }
    ctx->pc = 0x19EDC0u;
label_19edc0:
    // 0x19edc0: 0x8e020000
    ctx->pc = 0x19edc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19edc4:
    // 0x19edc4: 0x1040000b
label_19edc8:
    if (ctx->pc == 0x19EDC8u) {
        ctx->pc = 0x19EDC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19EDCCu;
        goto label_19edcc;
    }
    ctx->pc = 0x19EDC4u;
    {
        const bool branch_taken_0x19edc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EDC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19edc4) {
            ctx->pc = 0x19EDF4u;
            goto label_19edf4;
        }
    }
    ctx->pc = 0x19EDCCu;
label_19edcc:
    // 0x19edcc: 0x2421821
    ctx->pc = 0x19edccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_19edd0:
    // 0x19edd0: 0x8c620000
    ctx->pc = 0x19edd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19edd4:
    // 0x19edd4: 0x282d
    ctx->pc = 0x19edd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19edd8:
    // 0x19edd8: 0x302d
    ctx->pc = 0x19edd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eddc:
    // 0x19eddc: 0x40f809
label_19ede0:
    if (ctx->pc == 0x19EDE0u) {
        ctx->pc = 0x19EDE0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19EDE4u;
        goto label_19ede4;
    }
    ctx->pc = 0x19EDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19EDE4u);
        ctx->pc = 0x19EDE0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19ED88u: goto label_19ed88;
            case 0x19ED8Cu: goto label_19ed8c;
            case 0x19ED90u: goto label_19ed90;
            case 0x19ED94u: goto label_19ed94;
            case 0x19ED98u: goto label_19ed98;
            case 0x19ED9Cu: goto label_19ed9c;
            case 0x19EDA0u: goto label_19eda0;
            case 0x19EDA4u: goto label_19eda4;
            case 0x19EDA8u: goto label_19eda8;
            case 0x19EDACu: goto label_19edac;
            case 0x19EDB0u: goto label_19edb0;
            case 0x19EDB4u: goto label_19edb4;
            case 0x19EDB8u: goto label_19edb8;
            case 0x19EDBCu: goto label_19edbc;
            case 0x19EDC0u: goto label_19edc0;
            case 0x19EDC4u: goto label_19edc4;
            case 0x19EDC8u: goto label_19edc8;
            case 0x19EDCCu: goto label_19edcc;
            case 0x19EDD0u: goto label_19edd0;
            case 0x19EDD4u: goto label_19edd4;
            case 0x19EDD8u: goto label_19edd8;
            case 0x19EDDCu: goto label_19eddc;
            case 0x19EDE0u: goto label_19ede0;
            case 0x19EDE4u: goto label_19ede4;
            case 0x19EDE8u: goto label_19ede8;
            case 0x19EDECu: goto label_19edec;
            case 0x19EDF0u: goto label_19edf0;
            case 0x19EDF4u: goto label_19edf4;
            case 0x19EDF8u: goto label_19edf8;
            case 0x19EDFCu: goto label_19edfc;
            case 0x19EE00u: goto label_19ee00;
            case 0x19EE04u: goto label_19ee04;
            case 0x19EE08u: goto label_19ee08;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            const uint32_t __entryPc = ctx->pc;
            if (jumpTarget == 0x195968u) {
                SET_GPR_U32(ctx, 2, 0u);
                ctx->pc = 0x19EDE4u;
            } else {
                auto targetFn = runtime->lookupFunction(jumpTarget);
                targetFn(rdram, ctx, runtime);
            }
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19EDE4u; }
            if (ctx->pc != 0x19EDE4u) { return; }
        }
    }
    ctx->pc = 0x19EDE4u;
label_19ede4:
    // 0x19ede4: 0x40182d
    ctx->pc = 0x19ede4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ede8:
    // 0x19ede8: 0x1060fff1
label_19edec:
    if (ctx->pc == 0x19EDECu) {
        ctx->pc = 0x19EDECu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x19EDF0u;
        goto label_19edf0;
    }
    ctx->pc = 0x19EDE8u;
    {
        const bool branch_taken_0x19ede8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EDECu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x19ede8) {
            ctx->pc = 0x19EDB0u;
            goto label_19edb0;
        }
    }
    ctx->pc = 0x19EDF0u;
label_19edf0:
    // 0x19edf0: 0xdfbf0030
    ctx->pc = 0x19edf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19edf4:
    // 0x19edf4: 0x60102d
    ctx->pc = 0x19edf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19edf8:
    // 0x19edf8: 0xdfb20020
    ctx->pc = 0x19edf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19edfc:
    // 0x19edfc: 0xdfb10010
    ctx->pc = 0x19edfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ee00:
    // 0x19ee00: 0xdfb00000
    ctx->pc = 0x19ee00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ee04:
    // 0x19ee04: 0x3e00008
label_19ee08:
    if (ctx->pc == 0x19EE08u) {
        ctx->pc = 0x19EE08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x19EE0Cu;
        goto label_fallthrough_0x19ee04;
    }
    ctx->pc = 0x19EE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EE08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19ED88u: goto label_19ed88;
            case 0x19ED8Cu: goto label_19ed8c;
            case 0x19ED90u: goto label_19ed90;
            case 0x19ED94u: goto label_19ed94;
            case 0x19ED98u: goto label_19ed98;
            case 0x19ED9Cu: goto label_19ed9c;
            case 0x19EDA0u: goto label_19eda0;
            case 0x19EDA4u: goto label_19eda4;
            case 0x19EDA8u: goto label_19eda8;
            case 0x19EDACu: goto label_19edac;
            case 0x19EDB0u: goto label_19edb0;
            case 0x19EDB4u: goto label_19edb4;
            case 0x19EDB8u: goto label_19edb8;
            case 0x19EDBCu: goto label_19edbc;
            case 0x19EDC0u: goto label_19edc0;
            case 0x19EDC4u: goto label_19edc4;
            case 0x19EDC8u: goto label_19edc8;
            case 0x19EDCCu: goto label_19edcc;
            case 0x19EDD0u: goto label_19edd0;
            case 0x19EDD4u: goto label_19edd4;
            case 0x19EDD8u: goto label_19edd8;
            case 0x19EDDCu: goto label_19eddc;
            case 0x19EDE0u: goto label_19ede0;
            case 0x19EDE4u: goto label_19ede4;
            case 0x19EDE8u: goto label_19ede8;
            case 0x19EDECu: goto label_19edec;
            case 0x19EDF0u: goto label_19edf0;
            case 0x19EDF4u: goto label_19edf4;
            case 0x19EDF8u: goto label_19edf8;
            case 0x19EDFCu: goto label_19edfc;
            case 0x19EE00u: goto label_19ee00;
            case 0x19EE04u: goto label_19ee04;
            case 0x19EE08u: goto label_19ee08;
            default: break;
        }
        return;
    }
label_fallthrough_0x19ee04:
    ctx->pc = 0x19EE0Cu;
}
