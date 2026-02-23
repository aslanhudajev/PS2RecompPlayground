#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTRN_CallTrSetup
// Address: 0x19f298 - 0x19f328
void SFTRN_CallTrSetup_0x19f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTRN_CallTrSetup");


    ctx->pc = 0x19f298u;

label_19f298:
    // 0x19f298: 0x27bdffb0
    ctx->pc = 0x19f298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_19f29c:
    // 0x19f29c: 0x182d
    ctx->pc = 0x19f29cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f2a0:
    // 0x19f2a0: 0xffb20020
    ctx->pc = 0x19f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f2a4:
    // 0x19f2a4: 0xffb30030
    ctx->pc = 0x19f2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19f2a8:
    // 0x19f2a8: 0x80902d
    ctx->pc = 0x19f2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f2ac:
    // 0x19f2ac: 0xffb10010
    ctx->pc = 0x19f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f2b0:
    // 0x19f2b0: 0x59880
    ctx->pc = 0x19f2b0u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 5), 2));
label_19f2b4:
    // 0x19f2b4: 0xffb00000
    ctx->pc = 0x19f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f2b8:
    // 0x19f2b8: 0x882d
    ctx->pc = 0x19f2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f2bc:
    // 0x19f2bc: 0xffbf0040
    ctx->pc = 0x19f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19f2c0:
    // 0x19f2c0: 0x10000003
label_19f2c4:
    if (ctx->pc == 0x19F2C4u) {
        ctx->pc = 0x19F2C4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 10616));
        ctx->pc = 0x19F2C8u;
        goto label_19f2c8;
    }
    ctx->pc = 0x19F2C0u;
    {
        const bool branch_taken_0x19f2c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F2C4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 10616));
        if (branch_taken_0x19f2c0) {
            ctx->pc = 0x19F2D0u;
            goto label_19f2d0;
        }
    }
    ctx->pc = 0x19F2C8u;
label_19f2c8:
    // 0x19f2c8: 0x26310001
    ctx->pc = 0x19f2c8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_19f2cc:
    // 0x19f2cc: 0x261006e0
    ctx->pc = 0x19f2ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1760));
label_19f2d0:
    // 0x19f2d0: 0x2a220009
    ctx->pc = 0x19f2d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
label_19f2d4:
    // 0x19f2d4: 0x1040000d
label_19f2d8:
    if (ctx->pc == 0x19F2D8u) {
        ctx->pc = 0x19F2D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x19F2DCu;
        goto label_19f2dc;
    }
    ctx->pc = 0x19F2D4u;
    {
        const bool branch_taken_0x19f2d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F2D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x19f2d4) {
            ctx->pc = 0x19F30Cu;
            goto label_19f30c;
        }
    }
    ctx->pc = 0x19F2DCu;
label_19f2dc:
    // 0x19f2dc: 0x8e0206a8
    ctx->pc = 0x19f2dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1704)));
label_19f2e0:
    // 0x19f2e0: 0x1040fff9
label_19f2e4:
    if (ctx->pc == 0x19F2E4u) {
        ctx->pc = 0x19F2E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F2E8u;
        goto label_19f2e8;
    }
    ctx->pc = 0x19F2E0u;
    {
        const bool branch_taken_0x19f2e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F2E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f2e0) {
            ctx->pc = 0x19F2C8u;
            goto label_19f2c8;
        }
    }
    ctx->pc = 0x19F2E8u;
label_19f2e8:
    // 0x19f2e8: 0x2621821
    ctx->pc = 0x19f2e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_19f2ec:
    // 0x19f2ec: 0x8c620000
    ctx->pc = 0x19f2ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19f2f0:
    // 0x19f2f0: 0x282d
    ctx->pc = 0x19f2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f2f4:
    // 0x19f2f4: 0x302d
    ctx->pc = 0x19f2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f2f8:
    // 0x19f2f8: 0x40f809
label_19f2fc:
    if (ctx->pc == 0x19F2FCu) {
        ctx->pc = 0x19F2FCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19F300u;
        goto label_19f300;
    }
    ctx->pc = 0x19F2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F300u);
        ctx->pc = 0x19F2FCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F298u: goto label_19f298;
            case 0x19F29Cu: goto label_19f29c;
            case 0x19F2A0u: goto label_19f2a0;
            case 0x19F2A4u: goto label_19f2a4;
            case 0x19F2A8u: goto label_19f2a8;
            case 0x19F2ACu: goto label_19f2ac;
            case 0x19F2B0u: goto label_19f2b0;
            case 0x19F2B4u: goto label_19f2b4;
            case 0x19F2B8u: goto label_19f2b8;
            case 0x19F2BCu: goto label_19f2bc;
            case 0x19F2C0u: goto label_19f2c0;
            case 0x19F2C4u: goto label_19f2c4;
            case 0x19F2C8u: goto label_19f2c8;
            case 0x19F2CCu: goto label_19f2cc;
            case 0x19F2D0u: goto label_19f2d0;
            case 0x19F2D4u: goto label_19f2d4;
            case 0x19F2D8u: goto label_19f2d8;
            case 0x19F2DCu: goto label_19f2dc;
            case 0x19F2E0u: goto label_19f2e0;
            case 0x19F2E4u: goto label_19f2e4;
            case 0x19F2E8u: goto label_19f2e8;
            case 0x19F2ECu: goto label_19f2ec;
            case 0x19F2F0u: goto label_19f2f0;
            case 0x19F2F4u: goto label_19f2f4;
            case 0x19F2F8u: goto label_19f2f8;
            case 0x19F2FCu: goto label_19f2fc;
            case 0x19F300u: goto label_19f300;
            case 0x19F304u: goto label_19f304;
            case 0x19F308u: goto label_19f308;
            case 0x19F30Cu: goto label_19f30c;
            case 0x19F310u: goto label_19f310;
            case 0x19F314u: goto label_19f314;
            case 0x19F318u: goto label_19f318;
            case 0x19F31Cu: goto label_19f31c;
            case 0x19F320u: goto label_19f320;
            case 0x19F324u: goto label_19f324;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            const uint32_t __entryPc = ctx->pc;
            if (jumpTarget == 0x195968u) {
                SET_GPR_U32(ctx, 2, 0u);
                ctx->pc = 0x19F300u;
            } else {
                auto targetFn = runtime->lookupFunction(jumpTarget);
                targetFn(rdram, ctx, runtime);
            }
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F300u; }
            if (ctx->pc != 0x19F300u) { return; }
        }
    }
    ctx->pc = 0x19F300u;
label_19f300:
    // 0x19f300: 0x40182d
    ctx->pc = 0x19f300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f304:
    // 0x19f304: 0x1060fff0
label_19f308:
    if (ctx->pc == 0x19F308u) {
        ctx->pc = 0x19F308u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x19F30Cu;
        goto label_19f30c;
    }
    ctx->pc = 0x19F304u;
    {
        const bool branch_taken_0x19f304 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F308u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x19f304) {
            ctx->pc = 0x19F2C8u;
            goto label_19f2c8;
        }
    }
    ctx->pc = 0x19F30Cu;
label_19f30c:
    // 0x19f30c: 0x60102d
    ctx->pc = 0x19f30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19f310:
    // 0x19f310: 0xdfb30030
    ctx->pc = 0x19f310u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f314:
    // 0x19f314: 0xdfb20020
    ctx->pc = 0x19f314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f318:
    // 0x19f318: 0xdfb10010
    ctx->pc = 0x19f318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f31c:
    // 0x19f31c: 0xdfb00000
    ctx->pc = 0x19f31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f320:
    // 0x19f320: 0x3e00008
label_19f324:
    if (ctx->pc == 0x19F324u) {
        ctx->pc = 0x19F324u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x19F328u;
        goto label_fallthrough_0x19f320;
    }
    ctx->pc = 0x19F320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F324u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F298u: goto label_19f298;
            case 0x19F29Cu: goto label_19f29c;
            case 0x19F2A0u: goto label_19f2a0;
            case 0x19F2A4u: goto label_19f2a4;
            case 0x19F2A8u: goto label_19f2a8;
            case 0x19F2ACu: goto label_19f2ac;
            case 0x19F2B0u: goto label_19f2b0;
            case 0x19F2B4u: goto label_19f2b4;
            case 0x19F2B8u: goto label_19f2b8;
            case 0x19F2BCu: goto label_19f2bc;
            case 0x19F2C0u: goto label_19f2c0;
            case 0x19F2C4u: goto label_19f2c4;
            case 0x19F2C8u: goto label_19f2c8;
            case 0x19F2CCu: goto label_19f2cc;
            case 0x19F2D0u: goto label_19f2d0;
            case 0x19F2D4u: goto label_19f2d4;
            case 0x19F2D8u: goto label_19f2d8;
            case 0x19F2DCu: goto label_19f2dc;
            case 0x19F2E0u: goto label_19f2e0;
            case 0x19F2E4u: goto label_19f2e4;
            case 0x19F2E8u: goto label_19f2e8;
            case 0x19F2ECu: goto label_19f2ec;
            case 0x19F2F0u: goto label_19f2f0;
            case 0x19F2F4u: goto label_19f2f4;
            case 0x19F2F8u: goto label_19f2f8;
            case 0x19F2FCu: goto label_19f2fc;
            case 0x19F300u: goto label_19f300;
            case 0x19F304u: goto label_19f304;
            case 0x19F308u: goto label_19f308;
            case 0x19F30Cu: goto label_19f30c;
            case 0x19F310u: goto label_19f310;
            case 0x19F314u: goto label_19f314;
            case 0x19F318u: goto label_19f318;
            case 0x19F31Cu: goto label_19f31c;
            case 0x19F320u: goto label_19f320;
            case 0x19F324u: goto label_19f324;
            default: break;
        }
        return;
    }
label_fallthrough_0x19f320:
    ctx->pc = 0x19F328u;
}
