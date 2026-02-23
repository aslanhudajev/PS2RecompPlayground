#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_CopySj
// Address: 0x194958 - 0x1949fc
void sfmps_CopySj_0x194958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_CopySj");


    ctx->pc = 0x194958u;

label_194958:
    // 0x194958: 0x27bdffc0
    ctx->pc = 0x194958u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_19495c:
    // 0x19495c: 0xffb20020
    ctx->pc = 0x19495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_194960:
    // 0x194960: 0xffb10010
    ctx->pc = 0x194960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_194964:
    // 0x194964: 0xa0902d
    ctx->pc = 0x194964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194968:
    // 0x194968: 0xffb00000
    ctx->pc = 0x194968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19496c:
    // 0x19496c: 0x80882d
    ctx->pc = 0x19496cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194970:
    // 0x194970: 0xffbf0030
    ctx->pc = 0x194970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_194974:
    // 0x194974: 0xc0802d
    ctx->pc = 0x194974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_194978:
    // 0x194978: 0x8e230000
    ctx->pc = 0x194978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19497c:
    // 0x19497c: 0x8c620024
    ctx->pc = 0x19497cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_194980:
    // 0x194980: 0x40f809
label_194984:
    if (ctx->pc == 0x194984u) {
        ctx->pc = 0x194984u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194988u;
        goto label_194988;
    }
    ctx->pc = 0x194980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194988u);
        ctx->pc = 0x194984u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194958u: goto label_194958;
            case 0x19495Cu: goto label_19495c;
            case 0x194960u: goto label_194960;
            case 0x194964u: goto label_194964;
            case 0x194968u: goto label_194968;
            case 0x19496Cu: goto label_19496c;
            case 0x194970u: goto label_194970;
            case 0x194974u: goto label_194974;
            case 0x194978u: goto label_194978;
            case 0x19497Cu: goto label_19497c;
            case 0x194980u: goto label_194980;
            case 0x194984u: goto label_194984;
            case 0x194988u: goto label_194988;
            case 0x19498Cu: goto label_19498c;
            case 0x194990u: goto label_194990;
            case 0x194994u: goto label_194994;
            case 0x194998u: goto label_194998;
            case 0x19499Cu: goto label_19499c;
            case 0x1949A0u: goto label_1949a0;
            case 0x1949A4u: goto label_1949a4;
            case 0x1949A8u: goto label_1949a8;
            case 0x1949ACu: goto label_1949ac;
            case 0x1949B0u: goto label_1949b0;
            case 0x1949B4u: goto label_1949b4;
            case 0x1949B8u: goto label_1949b8;
            case 0x1949BCu: goto label_1949bc;
            case 0x1949C0u: goto label_1949c0;
            case 0x1949C4u: goto label_1949c4;
            case 0x1949C8u: goto label_1949c8;
            case 0x1949CCu: goto label_1949cc;
            case 0x1949D0u: goto label_1949d0;
            case 0x1949D4u: goto label_1949d4;
            case 0x1949D8u: goto label_1949d8;
            case 0x1949DCu: goto label_1949dc;
            case 0x1949E0u: goto label_1949e0;
            case 0x1949E4u: goto label_1949e4;
            case 0x1949E8u: goto label_1949e8;
            case 0x1949ECu: goto label_1949ec;
            case 0x1949F0u: goto label_1949f0;
            case 0x1949F4u: goto label_1949f4;
            case 0x1949F8u: goto label_1949f8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194988u; }
            if (ctx->pc != 0x194988u) { return; }
        }
    }
    ctx->pc = 0x194988u;
label_194988:
    // 0x194988: 0x50102a
    ctx->pc = 0x194988u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_19498c:
    // 0x19498c: 0x14400015
label_194990:
    if (ctx->pc == 0x194990u) {
        ctx->pc = 0x194990u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194994u;
        goto label_194994;
    }
    ctx->pc = 0x19498Cu;
    {
        const bool branch_taken_0x19498c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194990u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19498c) {
            ctx->pc = 0x1949E4u;
            goto label_1949e4;
        }
    }
    ctx->pc = 0x194994u;
label_194994:
    // 0x194994: 0x220202d
    ctx->pc = 0x194994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194998:
    // 0x194998: 0x240282d
    ctx->pc = 0x194998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19499c:
    // 0x19499c: 0xc065280
label_1949a0:
    if (ctx->pc == 0x1949A0u) {
        ctx->pc = 0x1949A0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1949A4u;
        goto label_1949a4;
    }
    ctx->pc = 0x19499Cu;
    SET_GPR_U32(ctx, 31, 0x1949A4u);
    ctx->pc = 0x1949A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_ExecCopySj_0x194a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1949A4u; }
        else if (ctx->pc != 0x1949A4u) { ctx->pc = 0x1949A4u; }
    }
    if (ctx->pc != 0x1949A4u) { return; }
    ctx->pc = 0x1949A4u;
label_1949a4:
    // 0x1949a4: 0x14400003
label_1949a8:
    if (ctx->pc == 0x1949A8u) {
        ctx->pc = 0x1949A8u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x1949ACu;
        goto label_1949ac;
    }
    ctx->pc = 0x1949A4u;
    {
        const bool branch_taken_0x1949a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1949A8u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x1949a4) {
            ctx->pc = 0x1949B4u;
            goto label_1949b4;
        }
    }
    ctx->pc = 0x1949ACu;
label_1949ac:
    // 0x1949ac: 0x1000000d
label_1949b0:
    if (ctx->pc == 0x1949B0u) {
        ctx->pc = 0x1949B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1949B4u;
        goto label_1949b4;
    }
    ctx->pc = 0x1949ACu;
    {
        const bool branch_taken_0x1949ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1949B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1949ac) {
            ctx->pc = 0x1949E4u;
            goto label_1949e4;
        }
    }
    ctx->pc = 0x1949B4u;
label_1949b4:
    // 0x1949b4: 0x1a00000a
label_1949b8:
    if (ctx->pc == 0x1949B8u) {
        ctx->pc = 0x1949B8u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x1949BCu;
        goto label_1949bc;
    }
    ctx->pc = 0x1949B4u;
    {
        const bool branch_taken_0x1949b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1949B8u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        if (branch_taken_0x1949b4) {
            ctx->pc = 0x1949E0u;
            goto label_1949e0;
        }
    }
    ctx->pc = 0x1949BCu;
label_1949bc:
    // 0x1949bc: 0x220202d
    ctx->pc = 0x1949bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1949c0:
    // 0x1949c0: 0x240282d
    ctx->pc = 0x1949c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1949c4:
    // 0x1949c4: 0xc065280
label_1949c8:
    if (ctx->pc == 0x1949C8u) {
        ctx->pc = 0x1949C8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1949CCu;
        goto label_1949cc;
    }
    ctx->pc = 0x1949C4u;
    SET_GPR_U32(ctx, 31, 0x1949CCu);
    ctx->pc = 0x1949C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_ExecCopySj_0x194a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1949CCu; }
        else if (ctx->pc != 0x1949CCu) { ctx->pc = 0x1949CCu; }
    }
    if (ctx->pc != 0x1949CCu) { return; }
    ctx->pc = 0x1949CCu;
label_1949cc:
    // 0x1949cc: 0x10500004
label_1949d0:
    if (ctx->pc == 0x1949D0u) {
        ctx->pc = 0x1949D0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
        ctx->pc = 0x1949D4u;
        goto label_1949d4;
    }
    ctx->pc = 0x1949CCu;
    {
        const bool branch_taken_0x1949cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x1949D0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
        if (branch_taken_0x1949cc) {
            ctx->pc = 0x1949E0u;
            goto label_1949e0;
        }
    }
    ctx->pc = 0x1949D4u;
label_1949d4:
    // 0x1949d4: 0x8c62df40
    ctx->pc = 0x1949d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294958912)));
label_1949d8:
    // 0x1949d8: 0x24420001
    ctx->pc = 0x1949d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1949dc:
    // 0x1949dc: 0xac62df40
    ctx->pc = 0x1949dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958912), GPR_U32(ctx, 2));
label_1949e0:
    // 0x1949e0: 0x24020001
    ctx->pc = 0x1949e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1949e4:
    // 0x1949e4: 0xdfbf0030
    ctx->pc = 0x1949e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1949e8:
    // 0x1949e8: 0xdfb20020
    ctx->pc = 0x1949e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1949ec:
    // 0x1949ec: 0xdfb10010
    ctx->pc = 0x1949ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1949f0:
    // 0x1949f0: 0xdfb00000
    ctx->pc = 0x1949f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1949f4:
    // 0x1949f4: 0x3e00008
label_1949f8:
    if (ctx->pc == 0x1949F8u) {
        ctx->pc = 0x1949F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1949FCu;
        goto label_fallthrough_0x1949f4;
    }
    ctx->pc = 0x1949F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1949F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194958u: goto label_194958;
            case 0x19495Cu: goto label_19495c;
            case 0x194960u: goto label_194960;
            case 0x194964u: goto label_194964;
            case 0x194968u: goto label_194968;
            case 0x19496Cu: goto label_19496c;
            case 0x194970u: goto label_194970;
            case 0x194974u: goto label_194974;
            case 0x194978u: goto label_194978;
            case 0x19497Cu: goto label_19497c;
            case 0x194980u: goto label_194980;
            case 0x194984u: goto label_194984;
            case 0x194988u: goto label_194988;
            case 0x19498Cu: goto label_19498c;
            case 0x194990u: goto label_194990;
            case 0x194994u: goto label_194994;
            case 0x194998u: goto label_194998;
            case 0x19499Cu: goto label_19499c;
            case 0x1949A0u: goto label_1949a0;
            case 0x1949A4u: goto label_1949a4;
            case 0x1949A8u: goto label_1949a8;
            case 0x1949ACu: goto label_1949ac;
            case 0x1949B0u: goto label_1949b0;
            case 0x1949B4u: goto label_1949b4;
            case 0x1949B8u: goto label_1949b8;
            case 0x1949BCu: goto label_1949bc;
            case 0x1949C0u: goto label_1949c0;
            case 0x1949C4u: goto label_1949c4;
            case 0x1949C8u: goto label_1949c8;
            case 0x1949CCu: goto label_1949cc;
            case 0x1949D0u: goto label_1949d0;
            case 0x1949D4u: goto label_1949d4;
            case 0x1949D8u: goto label_1949d8;
            case 0x1949DCu: goto label_1949dc;
            case 0x1949E0u: goto label_1949e0;
            case 0x1949E4u: goto label_1949e4;
            case 0x1949E8u: goto label_1949e8;
            case 0x1949ECu: goto label_1949ec;
            case 0x1949F0u: goto label_1949f0;
            case 0x1949F4u: goto label_1949f4;
            case 0x1949F8u: goto label_1949f8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1949f4:
    ctx->pc = 0x1949FCu;
}
