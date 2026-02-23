#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsGetNumTr
// Address: 0x175298 - 0x1752fc
void cvFsGetNumTr_0x175298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsGetNumTr");


    ctx->pc = 0x175298u;

label_175298:
    // 0x175298: 0x27bdffe0
    ctx->pc = 0x175298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_17529c:
    // 0x17529c: 0xffb00000
    ctx->pc = 0x17529cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1752a0:
    // 0x1752a0: 0xffbf0010
    ctx->pc = 0x1752a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1752a4:
    // 0x1752a4: 0x14800006
label_1752a8:
    if (ctx->pc == 0x1752A8u) {
        ctx->pc = 0x1752A8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1752ACu;
        goto label_1752ac;
    }
    ctx->pc = 0x1752A4u;
    {
        const bool branch_taken_0x1752a4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1752A8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1752a4) {
            ctx->pc = 0x1752C0u;
            goto label_1752c0;
        }
    }
    ctx->pc = 0x1752ACu;
label_1752ac:
    // 0x1752ac: 0x3c04002c
    ctx->pc = 0x1752acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1752b0:
    // 0x1752b0: 0xc05d076
label_1752b4:
    if (ctx->pc == 0x1752B4u) {
        ctx->pc = 0x1752B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945104));
        ctx->pc = 0x1752B8u;
        goto label_1752b8;
    }
    ctx->pc = 0x1752B0u;
    SET_GPR_U32(ctx, 31, 0x1752B8u);
    ctx->pc = 0x1752B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945104));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752B8u; }
        else if (ctx->pc != 0x1752B8u) { ctx->pc = 0x1752B8u; }
    }
    if (ctx->pc != 0x1752B8u) { return; }
    ctx->pc = 0x1752B8u;
label_1752b8:
    // 0x1752b8: 0x1000000c
label_1752bc:
    if (ctx->pc == 0x1752BCu) {
        ctx->pc = 0x1752BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1752C0u;
        goto label_1752c0;
    }
    ctx->pc = 0x1752B8u;
    {
        const bool branch_taken_0x1752b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1752BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1752b8) {
            ctx->pc = 0x1752ECu;
            goto label_1752ec;
        }
    }
    ctx->pc = 0x1752C0u;
label_1752c0:
    // 0x1752c0: 0x8c820000
    ctx->pc = 0x1752c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1752c4:
    // 0x1752c4: 0x8c420038
    ctx->pc = 0x1752c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1752c8:
    // 0x1752c8: 0x50400005
label_1752cc:
    if (ctx->pc == 0x1752CCu) {
        ctx->pc = 0x1752CCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x1752D0u;
        goto label_1752d0;
    }
    ctx->pc = 0x1752C8u;
    {
        const bool branch_taken_0x1752c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1752c8) {
            ctx->pc = 0x1752CCu;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x1752E0u;
            goto label_1752e0;
        }
    }
    ctx->pc = 0x1752D0u;
label_1752d0:
    // 0x1752d0: 0x40f809
label_1752d4:
    if (ctx->pc == 0x1752D4u) {
        ctx->pc = 0x1752D4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x1752D8u;
        goto label_1752d8;
    }
    ctx->pc = 0x1752D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1752D8u);
        ctx->pc = 0x1752D4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175298u: goto label_175298;
            case 0x17529Cu: goto label_17529c;
            case 0x1752A0u: goto label_1752a0;
            case 0x1752A4u: goto label_1752a4;
            case 0x1752A8u: goto label_1752a8;
            case 0x1752ACu: goto label_1752ac;
            case 0x1752B0u: goto label_1752b0;
            case 0x1752B4u: goto label_1752b4;
            case 0x1752B8u: goto label_1752b8;
            case 0x1752BCu: goto label_1752bc;
            case 0x1752C0u: goto label_1752c0;
            case 0x1752C4u: goto label_1752c4;
            case 0x1752C8u: goto label_1752c8;
            case 0x1752CCu: goto label_1752cc;
            case 0x1752D0u: goto label_1752d0;
            case 0x1752D4u: goto label_1752d4;
            case 0x1752D8u: goto label_1752d8;
            case 0x1752DCu: goto label_1752dc;
            case 0x1752E0u: goto label_1752e0;
            case 0x1752E4u: goto label_1752e4;
            case 0x1752E8u: goto label_1752e8;
            case 0x1752ECu: goto label_1752ec;
            case 0x1752F0u: goto label_1752f0;
            case 0x1752F4u: goto label_1752f4;
            case 0x1752F8u: goto label_1752f8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1752D8u; }
            if (ctx->pc != 0x1752D8u) { return; }
        }
    }
    ctx->pc = 0x1752D8u;
label_1752d8:
    // 0x1752d8: 0x10000003
label_1752dc:
    if (ctx->pc == 0x1752DCu) {
        ctx->pc = 0x1752DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1752E0u;
        goto label_1752e0;
    }
    ctx->pc = 0x1752D8u;
    {
        const bool branch_taken_0x1752d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1752DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1752d8) {
            ctx->pc = 0x1752E8u;
            goto label_1752e8;
        }
    }
    ctx->pc = 0x1752E0u;
label_1752e0:
    // 0x1752e0: 0xc05d076
label_1752e4:
    if (ctx->pc == 0x1752E4u) {
        ctx->pc = 0x1752E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945136));
        ctx->pc = 0x1752E8u;
        goto label_1752e8;
    }
    ctx->pc = 0x1752E0u;
    SET_GPR_U32(ctx, 31, 0x1752E8u);
    ctx->pc = 0x1752E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945136));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752E8u; }
        else if (ctx->pc != 0x1752E8u) { ctx->pc = 0x1752E8u; }
    }
    if (ctx->pc != 0x1752E8u) { return; }
    ctx->pc = 0x1752E8u;
label_1752e8:
    // 0x1752e8: 0x200102d
    ctx->pc = 0x1752e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1752ec:
    // 0x1752ec: 0xdfbf0010
    ctx->pc = 0x1752ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1752f0:
    // 0x1752f0: 0xdfb00000
    ctx->pc = 0x1752f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1752f4:
    // 0x1752f4: 0x3e00008
label_1752f8:
    if (ctx->pc == 0x1752F8u) {
        ctx->pc = 0x1752F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1752FCu;
        goto label_fallthrough_0x1752f4;
    }
    ctx->pc = 0x1752F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1752F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175298u: goto label_175298;
            case 0x17529Cu: goto label_17529c;
            case 0x1752A0u: goto label_1752a0;
            case 0x1752A4u: goto label_1752a4;
            case 0x1752A8u: goto label_1752a8;
            case 0x1752ACu: goto label_1752ac;
            case 0x1752B0u: goto label_1752b0;
            case 0x1752B4u: goto label_1752b4;
            case 0x1752B8u: goto label_1752b8;
            case 0x1752BCu: goto label_1752bc;
            case 0x1752C0u: goto label_1752c0;
            case 0x1752C4u: goto label_1752c4;
            case 0x1752C8u: goto label_1752c8;
            case 0x1752CCu: goto label_1752cc;
            case 0x1752D0u: goto label_1752d0;
            case 0x1752D4u: goto label_1752d4;
            case 0x1752D8u: goto label_1752d8;
            case 0x1752DCu: goto label_1752dc;
            case 0x1752E0u: goto label_1752e0;
            case 0x1752E4u: goto label_1752e4;
            case 0x1752E8u: goto label_1752e8;
            case 0x1752ECu: goto label_1752ec;
            case 0x1752F0u: goto label_1752f0;
            case 0x1752F4u: goto label_1752f4;
            case 0x1752F8u: goto label_1752f8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1752f4:
    ctx->pc = 0x1752FCu;
}
