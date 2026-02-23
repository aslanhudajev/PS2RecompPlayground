#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsGetSctLen
// Address: 0x1751d8 - 0x17523c
void cvFsGetSctLen_0x1751d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsGetSctLen");


    ctx->pc = 0x1751d8u;

label_1751d8:
    // 0x1751d8: 0x27bdffe0
    ctx->pc = 0x1751d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1751dc:
    // 0x1751dc: 0xffb00000
    ctx->pc = 0x1751dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1751e0:
    // 0x1751e0: 0xffbf0010
    ctx->pc = 0x1751e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1751e4:
    // 0x1751e4: 0x14800006
label_1751e8:
    if (ctx->pc == 0x1751E8u) {
        ctx->pc = 0x1751E8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1751ECu;
        goto label_1751ec;
    }
    ctx->pc = 0x1751E4u;
    {
        const bool branch_taken_0x1751e4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1751E8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1751e4) {
            ctx->pc = 0x175200u;
            goto label_175200;
        }
    }
    ctx->pc = 0x1751ECu;
label_1751ec:
    // 0x1751ec: 0x3c04002c
    ctx->pc = 0x1751ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1751f0:
    // 0x1751f0: 0xc05d076
label_1751f4:
    if (ctx->pc == 0x1751F4u) {
        ctx->pc = 0x1751F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944976));
        ctx->pc = 0x1751F8u;
        goto label_1751f8;
    }
    ctx->pc = 0x1751F0u;
    SET_GPR_U32(ctx, 31, 0x1751F8u);
    ctx->pc = 0x1751F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944976));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751F8u; }
        else if (ctx->pc != 0x1751F8u) { ctx->pc = 0x1751F8u; }
    }
    if (ctx->pc != 0x1751F8u) { return; }
    ctx->pc = 0x1751F8u;
label_1751f8:
    // 0x1751f8: 0x1000000c
label_1751fc:
    if (ctx->pc == 0x1751FCu) {
        ctx->pc = 0x1751FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175200u;
        goto label_175200;
    }
    ctx->pc = 0x1751F8u;
    {
        const bool branch_taken_0x1751f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1751FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1751f8) {
            ctx->pc = 0x17522Cu;
            goto label_17522c;
        }
    }
    ctx->pc = 0x175200u;
label_175200:
    // 0x175200: 0x8c820000
    ctx->pc = 0x175200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175204:
    // 0x175204: 0x8c420030
    ctx->pc = 0x175204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_175208:
    // 0x175208: 0x50400005
label_17520c:
    if (ctx->pc == 0x17520Cu) {
        ctx->pc = 0x17520Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x175210u;
        goto label_175210;
    }
    ctx->pc = 0x175208u;
    {
        const bool branch_taken_0x175208 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x175208) {
            ctx->pc = 0x17520Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x175220u;
            goto label_175220;
        }
    }
    ctx->pc = 0x175210u;
label_175210:
    // 0x175210: 0x40f809
label_175214:
    if (ctx->pc == 0x175214u) {
        ctx->pc = 0x175214u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x175218u;
        goto label_175218;
    }
    ctx->pc = 0x175210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175218u);
        ctx->pc = 0x175214u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1751D8u: goto label_1751d8;
            case 0x1751DCu: goto label_1751dc;
            case 0x1751E0u: goto label_1751e0;
            case 0x1751E4u: goto label_1751e4;
            case 0x1751E8u: goto label_1751e8;
            case 0x1751ECu: goto label_1751ec;
            case 0x1751F0u: goto label_1751f0;
            case 0x1751F4u: goto label_1751f4;
            case 0x1751F8u: goto label_1751f8;
            case 0x1751FCu: goto label_1751fc;
            case 0x175200u: goto label_175200;
            case 0x175204u: goto label_175204;
            case 0x175208u: goto label_175208;
            case 0x17520Cu: goto label_17520c;
            case 0x175210u: goto label_175210;
            case 0x175214u: goto label_175214;
            case 0x175218u: goto label_175218;
            case 0x17521Cu: goto label_17521c;
            case 0x175220u: goto label_175220;
            case 0x175224u: goto label_175224;
            case 0x175228u: goto label_175228;
            case 0x17522Cu: goto label_17522c;
            case 0x175230u: goto label_175230;
            case 0x175234u: goto label_175234;
            case 0x175238u: goto label_175238;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175218u; }
            if (ctx->pc != 0x175218u) { return; }
        }
    }
    ctx->pc = 0x175218u;
label_175218:
    // 0x175218: 0x10000003
label_17521c:
    if (ctx->pc == 0x17521Cu) {
        ctx->pc = 0x17521Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175220u;
        goto label_175220;
    }
    ctx->pc = 0x175218u;
    {
        const bool branch_taken_0x175218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17521Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175218) {
            ctx->pc = 0x175228u;
            goto label_175228;
        }
    }
    ctx->pc = 0x175220u;
label_175220:
    // 0x175220: 0xc05d076
label_175224:
    if (ctx->pc == 0x175224u) {
        ctx->pc = 0x175224u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945008));
        ctx->pc = 0x175228u;
        goto label_175228;
    }
    ctx->pc = 0x175220u;
    SET_GPR_U32(ctx, 31, 0x175228u);
    ctx->pc = 0x175224u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945008));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175228u; }
        else if (ctx->pc != 0x175228u) { ctx->pc = 0x175228u; }
    }
    if (ctx->pc != 0x175228u) { return; }
    ctx->pc = 0x175228u;
label_175228:
    // 0x175228: 0x200102d
    ctx->pc = 0x175228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17522c:
    // 0x17522c: 0xdfbf0010
    ctx->pc = 0x17522cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_175230:
    // 0x175230: 0xdfb00000
    ctx->pc = 0x175230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175234:
    // 0x175234: 0x3e00008
label_175238:
    if (ctx->pc == 0x175238u) {
        ctx->pc = 0x175238u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17523Cu;
        goto label_fallthrough_0x175234;
    }
    ctx->pc = 0x175234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175238u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1751D8u: goto label_1751d8;
            case 0x1751DCu: goto label_1751dc;
            case 0x1751E0u: goto label_1751e0;
            case 0x1751E4u: goto label_1751e4;
            case 0x1751E8u: goto label_1751e8;
            case 0x1751ECu: goto label_1751ec;
            case 0x1751F0u: goto label_1751f0;
            case 0x1751F4u: goto label_1751f4;
            case 0x1751F8u: goto label_1751f8;
            case 0x1751FCu: goto label_1751fc;
            case 0x175200u: goto label_175200;
            case 0x175204u: goto label_175204;
            case 0x175208u: goto label_175208;
            case 0x17520Cu: goto label_17520c;
            case 0x175210u: goto label_175210;
            case 0x175214u: goto label_175214;
            case 0x175218u: goto label_175218;
            case 0x17521Cu: goto label_17521c;
            case 0x175220u: goto label_175220;
            case 0x175224u: goto label_175224;
            case 0x175228u: goto label_175228;
            case 0x17522Cu: goto label_17522c;
            case 0x175230u: goto label_175230;
            case 0x175234u: goto label_175234;
            case 0x175238u: goto label_175238;
            default: break;
        }
        return;
    }
label_fallthrough_0x175234:
    ctx->pc = 0x17523Cu;
}
