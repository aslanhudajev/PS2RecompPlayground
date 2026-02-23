#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ExecSvrFuncId
// Address: 0x17e290 - 0x17e32c
void SVM_ExecSvrFuncId_0x17e290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ExecSvrFuncId");


    ctx->pc = 0x17e290u;

label_17e290:
    // 0x17e290: 0x27bdffc0
    ctx->pc = 0x17e290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_17e294:
    // 0x17e294: 0xffb00000
    ctx->pc = 0x17e294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17e298:
    // 0x17e298: 0xffb20020
    ctx->pc = 0x17e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17e29c:
    // 0x17e29c: 0xa0802d
    ctx->pc = 0x17e29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17e2a0:
    // 0x17e2a0: 0xffb10010
    ctx->pc = 0x17e2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17e2a4:
    // 0x17e2a4: 0x902d
    ctx->pc = 0x17e2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e2a8:
    // 0x17e2a8: 0xffbf0030
    ctx->pc = 0x17e2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17e2ac:
    // 0x17e2ac: 0x2e020004
    ctx->pc = 0x17e2acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 4));
label_17e2b0:
    // 0x17e2b0: 0x14400004
label_17e2b4:
    if (ctx->pc == 0x17E2B4u) {
        ctx->pc = 0x17E2B4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E2B8u;
        goto label_17e2b8;
    }
    ctx->pc = 0x17E2B0u;
    {
        const bool branch_taken_0x17e2b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E2B4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e2b0) {
            ctx->pc = 0x17E2C4u;
            goto label_17e2c4;
        }
    }
    ctx->pc = 0x17E2B8u;
label_17e2b8:
    // 0x17e2b8: 0x3c04002c
    ctx->pc = 0x17e2b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17e2bc:
    // 0x17e2bc: 0xc05f72c
label_17e2c0:
    if (ctx->pc == 0x17E2C0u) {
        ctx->pc = 0x17E2C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951264));
        ctx->pc = 0x17E2C4u;
        goto label_17e2c4;
    }
    ctx->pc = 0x17E2BCu;
    SET_GPR_U32(ctx, 31, 0x17E2C4u);
    ctx->pc = 0x17E2C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951264));
    ctx->pc = 0x17DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_CallErr1_0x17dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2C4u; }
        else if (ctx->pc != 0x17E2C4u) { ctx->pc = 0x17E2C4u; }
    }
    if (ctx->pc != 0x17E2C4u) { return; }
    ctx->pc = 0x17E2C4u;
label_17e2c4:
    // 0x17e2c4: 0x6200003
label_17e2c8:
    if (ctx->pc == 0x17E2C8u) {
        ctx->pc = 0x17E2C8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 7));
        ctx->pc = 0x17E2CCu;
        goto label_17e2cc;
    }
    ctx->pc = 0x17E2C4u;
    {
        const bool branch_taken_0x17e2c4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x17E2C8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 7));
        if (branch_taken_0x17e2c4) {
            ctx->pc = 0x17E2D4u;
            goto label_17e2d4;
        }
    }
    ctx->pc = 0x17E2CCu;
label_17e2cc:
    // 0x17e2cc: 0x14400005
label_17e2d0:
    if (ctx->pc == 0x17E2D0u) {
        ctx->pc = 0x17E2D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
        ctx->pc = 0x17E2D4u;
        goto label_17e2d4;
    }
    ctx->pc = 0x17E2CCu;
    {
        const bool branch_taken_0x17e2cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E2D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
        if (branch_taken_0x17e2cc) {
            ctx->pc = 0x17E2E4u;
            goto label_17e2e4;
        }
    }
    ctx->pc = 0x17E2D4u;
label_17e2d4:
    // 0x17e2d4: 0x3c04002c
    ctx->pc = 0x17e2d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17e2d8:
    // 0x17e2d8: 0xc05f72c
label_17e2dc:
    if (ctx->pc == 0x17E2DCu) {
        ctx->pc = 0x17E2DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951304));
        ctx->pc = 0x17E2E0u;
        goto label_17e2e0;
    }
    ctx->pc = 0x17E2D8u;
    SET_GPR_U32(ctx, 31, 0x17E2E0u);
    ctx->pc = 0x17E2DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951304));
    ctx->pc = 0x17DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_CallErr1_0x17dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2E0u; }
        else if (ctx->pc != 0x17E2E0u) { ctx->pc = 0x17E2E0u; }
    }
    if (ctx->pc != 0x17E2E0u) { return; }
    ctx->pc = 0x17E2E0u;
label_17e2e0:
    // 0x17e2e0: 0x3c02002e
    ctx->pc = 0x17e2e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
label_17e2e4:
    // 0x17e2e4: 0x1018c0
    ctx->pc = 0x17e2e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
label_17e2e8:
    // 0x17e2e8: 0x24421ae0
    ctx->pc = 0x17e2e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6880));
label_17e2ec:
    // 0x17e2ec: 0x112140
    ctx->pc = 0x17e2ecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 5));
label_17e2f0:
    // 0x17e2f0: 0x621821
    ctx->pc = 0x17e2f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17e2f4:
    // 0x17e2f4: 0x831021
    ctx->pc = 0x17e2f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17e2f8:
    // 0x17e2f8: 0x8c430000
    ctx->pc = 0x17e2f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e2fc:
    // 0x17e2fc: 0x50600005
label_17e300:
    if (ctx->pc == 0x17E300u) {
        ctx->pc = 0x17E300u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E304u;
        goto label_17e304;
    }
    ctx->pc = 0x17E2FCu;
    {
        const bool branch_taken_0x17e2fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x17e2fc) {
            ctx->pc = 0x17E300u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17E314u;
            goto label_17e314;
        }
    }
    ctx->pc = 0x17E304u;
label_17e304:
    // 0x17e304: 0x60f809
label_17e308:
    if (ctx->pc == 0x17E308u) {
        ctx->pc = 0x17E308u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x17E30Cu;
        goto label_17e30c;
    }
    ctx->pc = 0x17E304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17E30Cu);
        ctx->pc = 0x17E308u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E290u: goto label_17e290;
            case 0x17E294u: goto label_17e294;
            case 0x17E298u: goto label_17e298;
            case 0x17E29Cu: goto label_17e29c;
            case 0x17E2A0u: goto label_17e2a0;
            case 0x17E2A4u: goto label_17e2a4;
            case 0x17E2A8u: goto label_17e2a8;
            case 0x17E2ACu: goto label_17e2ac;
            case 0x17E2B0u: goto label_17e2b0;
            case 0x17E2B4u: goto label_17e2b4;
            case 0x17E2B8u: goto label_17e2b8;
            case 0x17E2BCu: goto label_17e2bc;
            case 0x17E2C0u: goto label_17e2c0;
            case 0x17E2C4u: goto label_17e2c4;
            case 0x17E2C8u: goto label_17e2c8;
            case 0x17E2CCu: goto label_17e2cc;
            case 0x17E2D0u: goto label_17e2d0;
            case 0x17E2D4u: goto label_17e2d4;
            case 0x17E2D8u: goto label_17e2d8;
            case 0x17E2DCu: goto label_17e2dc;
            case 0x17E2E0u: goto label_17e2e0;
            case 0x17E2E4u: goto label_17e2e4;
            case 0x17E2E8u: goto label_17e2e8;
            case 0x17E2ECu: goto label_17e2ec;
            case 0x17E2F0u: goto label_17e2f0;
            case 0x17E2F4u: goto label_17e2f4;
            case 0x17E2F8u: goto label_17e2f8;
            case 0x17E2FCu: goto label_17e2fc;
            case 0x17E300u: goto label_17e300;
            case 0x17E304u: goto label_17e304;
            case 0x17E308u: goto label_17e308;
            case 0x17E30Cu: goto label_17e30c;
            case 0x17E310u: goto label_17e310;
            case 0x17E314u: goto label_17e314;
            case 0x17E318u: goto label_17e318;
            case 0x17E31Cu: goto label_17e31c;
            case 0x17E320u: goto label_17e320;
            case 0x17E324u: goto label_17e324;
            case 0x17E328u: goto label_17e328;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17E30Cu; }
            if (ctx->pc != 0x17E30Cu) { return; }
        }
    }
    ctx->pc = 0x17E30Cu;
label_17e30c:
    // 0x17e30c: 0x40902d
    ctx->pc = 0x17e30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e310:
    // 0x17e310: 0x240102d
    ctx->pc = 0x17e310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17e314:
    // 0x17e314: 0xdfbf0030
    ctx->pc = 0x17e314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17e318:
    // 0x17e318: 0xdfb20020
    ctx->pc = 0x17e318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17e31c:
    // 0x17e31c: 0xdfb10010
    ctx->pc = 0x17e31cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17e320:
    // 0x17e320: 0xdfb00000
    ctx->pc = 0x17e320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e324:
    // 0x17e324: 0x3e00008
label_17e328:
    if (ctx->pc == 0x17E328u) {
        ctx->pc = 0x17E328u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17E32Cu;
        goto label_fallthrough_0x17e324;
    }
    ctx->pc = 0x17E324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E328u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E290u: goto label_17e290;
            case 0x17E294u: goto label_17e294;
            case 0x17E298u: goto label_17e298;
            case 0x17E29Cu: goto label_17e29c;
            case 0x17E2A0u: goto label_17e2a0;
            case 0x17E2A4u: goto label_17e2a4;
            case 0x17E2A8u: goto label_17e2a8;
            case 0x17E2ACu: goto label_17e2ac;
            case 0x17E2B0u: goto label_17e2b0;
            case 0x17E2B4u: goto label_17e2b4;
            case 0x17E2B8u: goto label_17e2b8;
            case 0x17E2BCu: goto label_17e2bc;
            case 0x17E2C0u: goto label_17e2c0;
            case 0x17E2C4u: goto label_17e2c4;
            case 0x17E2C8u: goto label_17e2c8;
            case 0x17E2CCu: goto label_17e2cc;
            case 0x17E2D0u: goto label_17e2d0;
            case 0x17E2D4u: goto label_17e2d4;
            case 0x17E2D8u: goto label_17e2d8;
            case 0x17E2DCu: goto label_17e2dc;
            case 0x17E2E0u: goto label_17e2e0;
            case 0x17E2E4u: goto label_17e2e4;
            case 0x17E2E8u: goto label_17e2e8;
            case 0x17E2ECu: goto label_17e2ec;
            case 0x17E2F0u: goto label_17e2f0;
            case 0x17E2F4u: goto label_17e2f4;
            case 0x17E2F8u: goto label_17e2f8;
            case 0x17E2FCu: goto label_17e2fc;
            case 0x17E300u: goto label_17e300;
            case 0x17E304u: goto label_17e304;
            case 0x17E308u: goto label_17e308;
            case 0x17E30Cu: goto label_17e30c;
            case 0x17E310u: goto label_17e310;
            case 0x17E314u: goto label_17e314;
            case 0x17E318u: goto label_17e318;
            case 0x17E31Cu: goto label_17e31c;
            case 0x17E320u: goto label_17e320;
            case 0x17E324u: goto label_17e324;
            case 0x17E328u: goto label_17e328;
            default: break;
        }
        return;
    }
label_fallthrough_0x17e324:
    ctx->pc = 0x17E32Cu;
}
