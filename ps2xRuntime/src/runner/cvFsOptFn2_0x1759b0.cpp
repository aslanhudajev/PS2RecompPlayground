#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsOptFn2
// Address: 0x1759b0 - 0x175a14
void cvFsOptFn2_0x1759b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsOptFn2");


    ctx->pc = 0x1759b0u;

label_1759b0:
    // 0x1759b0: 0x27bdffe0
    ctx->pc = 0x1759b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1759b4:
    // 0x1759b4: 0xffb00000
    ctx->pc = 0x1759b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1759b8:
    // 0x1759b8: 0xffbf0010
    ctx->pc = 0x1759b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1759bc:
    // 0x1759bc: 0x14800006
label_1759c0:
    if (ctx->pc == 0x1759C0u) {
        ctx->pc = 0x1759C0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1759C4u;
        goto label_1759c4;
    }
    ctx->pc = 0x1759BCu;
    {
        const bool branch_taken_0x1759bc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1759C0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1759bc) {
            ctx->pc = 0x1759D8u;
            goto label_1759d8;
        }
    }
    ctx->pc = 0x1759C4u;
label_1759c4:
    // 0x1759c4: 0x3c04002c
    ctx->pc = 0x1759c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1759c8:
    // 0x1759c8: 0xc05d076
label_1759cc:
    if (ctx->pc == 0x1759CCu) {
        ctx->pc = 0x1759CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946096));
        ctx->pc = 0x1759D0u;
        goto label_1759d0;
    }
    ctx->pc = 0x1759C8u;
    SET_GPR_U32(ctx, 31, 0x1759D0u);
    ctx->pc = 0x1759CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946096));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1759D0u; }
        else if (ctx->pc != 0x1759D0u) { ctx->pc = 0x1759D0u; }
    }
    if (ctx->pc != 0x1759D0u) { return; }
    ctx->pc = 0x1759D0u;
label_1759d0:
    // 0x1759d0: 0x1000000c
label_1759d4:
    if (ctx->pc == 0x1759D4u) {
        ctx->pc = 0x1759D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1759D8u;
        goto label_1759d8;
    }
    ctx->pc = 0x1759D0u;
    {
        const bool branch_taken_0x1759d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1759D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1759d0) {
            ctx->pc = 0x175A04u;
            goto label_175a04;
        }
    }
    ctx->pc = 0x1759D8u;
label_1759d8:
    // 0x1759d8: 0x8c820000
    ctx->pc = 0x1759d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1759dc:
    // 0x1759dc: 0x8c420064
    ctx->pc = 0x1759dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1759e0:
    // 0x1759e0: 0x50400005
label_1759e4:
    if (ctx->pc == 0x1759E4u) {
        ctx->pc = 0x1759E4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x1759E8u;
        goto label_1759e8;
    }
    ctx->pc = 0x1759E0u;
    {
        const bool branch_taken_0x1759e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1759e0) {
            ctx->pc = 0x1759E4u;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x1759F8u;
            goto label_1759f8;
        }
    }
    ctx->pc = 0x1759E8u;
label_1759e8:
    // 0x1759e8: 0x40f809
label_1759ec:
    if (ctx->pc == 0x1759ECu) {
        ctx->pc = 0x1759ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x1759F0u;
        goto label_1759f0;
    }
    ctx->pc = 0x1759E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1759F0u);
        ctx->pc = 0x1759ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1759B0u: goto label_1759b0;
            case 0x1759B4u: goto label_1759b4;
            case 0x1759B8u: goto label_1759b8;
            case 0x1759BCu: goto label_1759bc;
            case 0x1759C0u: goto label_1759c0;
            case 0x1759C4u: goto label_1759c4;
            case 0x1759C8u: goto label_1759c8;
            case 0x1759CCu: goto label_1759cc;
            case 0x1759D0u: goto label_1759d0;
            case 0x1759D4u: goto label_1759d4;
            case 0x1759D8u: goto label_1759d8;
            case 0x1759DCu: goto label_1759dc;
            case 0x1759E0u: goto label_1759e0;
            case 0x1759E4u: goto label_1759e4;
            case 0x1759E8u: goto label_1759e8;
            case 0x1759ECu: goto label_1759ec;
            case 0x1759F0u: goto label_1759f0;
            case 0x1759F4u: goto label_1759f4;
            case 0x1759F8u: goto label_1759f8;
            case 0x1759FCu: goto label_1759fc;
            case 0x175A00u: goto label_175a00;
            case 0x175A04u: goto label_175a04;
            case 0x175A08u: goto label_175a08;
            case 0x175A0Cu: goto label_175a0c;
            case 0x175A10u: goto label_175a10;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1759F0u; }
            if (ctx->pc != 0x1759F0u) { return; }
        }
    }
    ctx->pc = 0x1759F0u;
label_1759f0:
    // 0x1759f0: 0x10000003
label_1759f4:
    if (ctx->pc == 0x1759F4u) {
        ctx->pc = 0x1759F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1759F8u;
        goto label_1759f8;
    }
    ctx->pc = 0x1759F0u;
    {
        const bool branch_taken_0x1759f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1759F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1759f0) {
            ctx->pc = 0x175A00u;
            goto label_175a00;
        }
    }
    ctx->pc = 0x1759F8u;
label_1759f8:
    // 0x1759f8: 0xc05d076
label_1759fc:
    if (ctx->pc == 0x1759FCu) {
        ctx->pc = 0x1759FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946128));
        ctx->pc = 0x175A00u;
        goto label_175a00;
    }
    ctx->pc = 0x1759F8u;
    SET_GPR_U32(ctx, 31, 0x175A00u);
    ctx->pc = 0x1759FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946128));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175A00u; }
        else if (ctx->pc != 0x175A00u) { ctx->pc = 0x175A00u; }
    }
    if (ctx->pc != 0x175A00u) { return; }
    ctx->pc = 0x175A00u;
label_175a00:
    // 0x175a00: 0x200102d
    ctx->pc = 0x175a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175a04:
    // 0x175a04: 0xdfbf0010
    ctx->pc = 0x175a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_175a08:
    // 0x175a08: 0xdfb00000
    ctx->pc = 0x175a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175a0c:
    // 0x175a0c: 0x3e00008
label_175a10:
    if (ctx->pc == 0x175A10u) {
        ctx->pc = 0x175A10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x175A14u;
        goto label_fallthrough_0x175a0c;
    }
    ctx->pc = 0x175A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1759B0u: goto label_1759b0;
            case 0x1759B4u: goto label_1759b4;
            case 0x1759B8u: goto label_1759b8;
            case 0x1759BCu: goto label_1759bc;
            case 0x1759C0u: goto label_1759c0;
            case 0x1759C4u: goto label_1759c4;
            case 0x1759C8u: goto label_1759c8;
            case 0x1759CCu: goto label_1759cc;
            case 0x1759D0u: goto label_1759d0;
            case 0x1759D4u: goto label_1759d4;
            case 0x1759D8u: goto label_1759d8;
            case 0x1759DCu: goto label_1759dc;
            case 0x1759E0u: goto label_1759e0;
            case 0x1759E4u: goto label_1759e4;
            case 0x1759E8u: goto label_1759e8;
            case 0x1759ECu: goto label_1759ec;
            case 0x1759F0u: goto label_1759f0;
            case 0x1759F4u: goto label_1759f4;
            case 0x1759F8u: goto label_1759f8;
            case 0x1759FCu: goto label_1759fc;
            case 0x175A00u: goto label_175a00;
            case 0x175A04u: goto label_175a04;
            case 0x175A08u: goto label_175a08;
            case 0x175A0Cu: goto label_175a0c;
            case 0x175A10u: goto label_175a10;
            default: break;
        }
        return;
    }
label_fallthrough_0x175a0c:
    ctx->pc = 0x175A14u;
}
