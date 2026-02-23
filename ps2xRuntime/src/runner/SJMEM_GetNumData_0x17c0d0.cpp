#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_GetNumData
// Address: 0x17c0d0 - 0x17c118
void SJMEM_GetNumData_0x17c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_GetNumData");


    ctx->pc = 0x17c0d0u;

label_17c0d0:
    // 0x17c0d0: 0x27bdfff0
    ctx->pc = 0x17c0d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17c0d4:
    // 0x17c0d4: 0x24020001
    ctx->pc = 0x17c0d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17c0d8:
    // 0x17c0d8: 0x14a20003
label_17c0dc:
    if (ctx->pc == 0x17C0DCu) {
        ctx->pc = 0x17C0DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17C0E0u;
        goto label_17c0e0;
    }
    ctx->pc = 0x17C0D8u;
    {
        const bool branch_taken_0x17c0d8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x17C0DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17c0d8) {
            ctx->pc = 0x17C0E8u;
            goto label_17c0e8;
        }
    }
    ctx->pc = 0x17C0E0u;
label_17c0e0:
    // 0x17c0e0: 0x1000000a
label_17c0e4:
    if (ctx->pc == 0x17C0E4u) {
        ctx->pc = 0x17C0E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x17C0E8u;
        goto label_17c0e8;
    }
    ctx->pc = 0x17C0E0u;
    {
        const bool branch_taken_0x17c0e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C0E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        if (branch_taken_0x17c0e0) {
            ctx->pc = 0x17C10Cu;
            goto label_17c10c;
        }
    }
    ctx->pc = 0x17C0E8u;
label_17c0e8:
    // 0x17c0e8: 0x10a00008
label_17c0ec:
    if (ctx->pc == 0x17C0ECu) {
        ctx->pc = 0x17C0ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C0F0u;
        goto label_17c0f0;
    }
    ctx->pc = 0x17C0E8u;
    {
        const bool branch_taken_0x17c0e8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C0ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c0e8) {
            ctx->pc = 0x17C10Cu;
            goto label_17c10c;
        }
    }
    ctx->pc = 0x17C0F0u;
label_17c0f0:
    // 0x17c0f0: 0x8c82001c
    ctx->pc = 0x17c0f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_17c0f4:
    // 0x17c0f4: 0x50400005
label_17c0f8:
    if (ctx->pc == 0x17C0F8u) {
        ctx->pc = 0x17C0F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C0FCu;
        goto label_17c0fc;
    }
    ctx->pc = 0x17C0F4u;
    {
        const bool branch_taken_0x17c0f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17c0f4) {
            ctx->pc = 0x17C0F8u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17C10Cu;
            goto label_17c10c;
        }
    }
    ctx->pc = 0x17C0FCu;
label_17c0fc:
    // 0x17c0fc: 0x8c840020
    ctx->pc = 0x17c0fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_17c100:
    // 0x17c100: 0x40f809
label_17c104:
    if (ctx->pc == 0x17C104u) {
        ctx->pc = 0x17C104u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17C108u;
        goto label_17c108;
    }
    ctx->pc = 0x17C100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C108u);
        ctx->pc = 0x17C104u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C0D0u: goto label_17c0d0;
            case 0x17C0D4u: goto label_17c0d4;
            case 0x17C0D8u: goto label_17c0d8;
            case 0x17C0DCu: goto label_17c0dc;
            case 0x17C0E0u: goto label_17c0e0;
            case 0x17C0E4u: goto label_17c0e4;
            case 0x17C0E8u: goto label_17c0e8;
            case 0x17C0ECu: goto label_17c0ec;
            case 0x17C0F0u: goto label_17c0f0;
            case 0x17C0F4u: goto label_17c0f4;
            case 0x17C0F8u: goto label_17c0f8;
            case 0x17C0FCu: goto label_17c0fc;
            case 0x17C100u: goto label_17c100;
            case 0x17C104u: goto label_17c104;
            case 0x17C108u: goto label_17c108;
            case 0x17C10Cu: goto label_17c10c;
            case 0x17C110u: goto label_17c110;
            case 0x17C114u: goto label_17c114;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C108u; }
            if (ctx->pc != 0x17C108u) { return; }
        }
    }
    ctx->pc = 0x17C108u;
label_17c108:
    // 0x17c108: 0x102d
    ctx->pc = 0x17c108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c10c:
    // 0x17c10c: 0xdfbf0000
    ctx->pc = 0x17c10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c110:
    // 0x17c110: 0x3e00008
label_17c114:
    if (ctx->pc == 0x17C114u) {
        ctx->pc = 0x17C114u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17C118u;
        goto label_fallthrough_0x17c110;
    }
    ctx->pc = 0x17C110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C114u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C0D0u: goto label_17c0d0;
            case 0x17C0D4u: goto label_17c0d4;
            case 0x17C0D8u: goto label_17c0d8;
            case 0x17C0DCu: goto label_17c0dc;
            case 0x17C0E0u: goto label_17c0e0;
            case 0x17C0E4u: goto label_17c0e4;
            case 0x17C0E8u: goto label_17c0e8;
            case 0x17C0ECu: goto label_17c0ec;
            case 0x17C0F0u: goto label_17c0f0;
            case 0x17C0F4u: goto label_17c0f4;
            case 0x17C0F8u: goto label_17c0f8;
            case 0x17C0FCu: goto label_17c0fc;
            case 0x17C100u: goto label_17c100;
            case 0x17C104u: goto label_17c104;
            case 0x17C108u: goto label_17c108;
            case 0x17C10Cu: goto label_17c10c;
            case 0x17C110u: goto label_17c110;
            case 0x17C114u: goto label_17c114;
            default: break;
        }
        return;
    }
label_fallthrough_0x17c110:
    ctx->pc = 0x17C118u;
}
