#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dispatchMpegCallback
// Address: 0x2ee0d0 - 0x2ee120
void _dispatchMpegCallback_0x2ee0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee0d0u;

label_2ee0d0:
    // 0x2ee0d0: 0x27bdfff0
    ctx->pc = 0x2ee0d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ee0d4:
    // 0x2ee0d4: 0x382d
    ctx->pc = 0x2ee0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee0d8:
    // 0x2ee0d8: 0x1080000d
label_2ee0dc:
    if (ctx->pc == 0x2EE0DCu) {
        ctx->pc = 0x2EE0DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2EE0E0u;
        goto label_2ee0e0;
    }
    ctx->pc = 0x2EE0D8u;
    {
        const bool branch_taken_0x2ee0d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE0DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x2ee0d8) {
            ctx->pc = 0x2EE110u;
            goto label_2ee110;
        }
    }
    ctx->pc = 0x2EE0E0u;
label_2ee0e0:
    // 0x2ee0e0: 0x8c860040
    ctx->pc = 0x2ee0e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2ee0e4:
    // 0x2ee0e4: 0x10c0000b
label_2ee0e8:
    if (ctx->pc == 0x2EE0E8u) {
        ctx->pc = 0x2EE0E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2EE0ECu;
        goto label_2ee0ec;
    }
    ctx->pc = 0x2EE0E4u;
    {
        const bool branch_taken_0x2ee0e4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE0E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2ee0e4) {
            ctx->pc = 0x2EE114u;
            goto label_2ee114;
        }
    }
    ctx->pc = 0x2EE0ECu;
label_2ee0ec:
    // 0x2ee0ec: 0x8ca20000
    ctx->pc = 0x2ee0ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ee0f0:
    // 0x2ee0f0: 0x210c0
    ctx->pc = 0x2ee0f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_2ee0f4:
    // 0x2ee0f4: 0xc21821
    ctx->pc = 0x2ee0f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2ee0f8:
    // 0x2ee0f8: 0x8c63000c
    ctx->pc = 0x2ee0f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ee0fc:
    // 0x2ee0fc: 0x10600005
label_2ee100:
    if (ctx->pc == 0x2EE100u) {
        ctx->pc = 0x2EE100u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x2EE104u;
        goto label_2ee104;
    }
    ctx->pc = 0x2EE0FCu;
    {
        const bool branch_taken_0x2ee0fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE100u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x2ee0fc) {
            ctx->pc = 0x2EE114u;
            goto label_2ee114;
        }
    }
    ctx->pc = 0x2EE104u;
label_2ee104:
    // 0x2ee104: 0x60f809
label_2ee108:
    if (ctx->pc == 0x2EE108u) {
        ctx->pc = 0x2EE108u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x2EE10Cu;
        goto label_2ee10c;
    }
    ctx->pc = 0x2EE104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EE10Cu);
        ctx->pc = 0x2EE108u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE0D0u: goto label_2ee0d0;
            case 0x2EE0D4u: goto label_2ee0d4;
            case 0x2EE0D8u: goto label_2ee0d8;
            case 0x2EE0DCu: goto label_2ee0dc;
            case 0x2EE0E0u: goto label_2ee0e0;
            case 0x2EE0E4u: goto label_2ee0e4;
            case 0x2EE0E8u: goto label_2ee0e8;
            case 0x2EE0ECu: goto label_2ee0ec;
            case 0x2EE0F0u: goto label_2ee0f0;
            case 0x2EE0F4u: goto label_2ee0f4;
            case 0x2EE0F8u: goto label_2ee0f8;
            case 0x2EE0FCu: goto label_2ee0fc;
            case 0x2EE100u: goto label_2ee100;
            case 0x2EE104u: goto label_2ee104;
            case 0x2EE108u: goto label_2ee108;
            case 0x2EE10Cu: goto label_2ee10c;
            case 0x2EE110u: goto label_2ee110;
            case 0x2EE114u: goto label_2ee114;
            case 0x2EE118u: goto label_2ee118;
            case 0x2EE11Cu: goto label_2ee11c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EE10Cu; }
            if (ctx->pc != 0x2EE10Cu) { return; }
        }
    }
    ctx->pc = 0x2EE10Cu;
label_2ee10c:
    // 0x2ee10c: 0x40382d
    ctx->pc = 0x2ee10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee110:
    // 0x2ee110: 0xdfbf0000
    ctx->pc = 0x2ee110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee114:
    // 0x2ee114: 0xe0102d
    ctx->pc = 0x2ee114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ee118:
    // 0x2ee118: 0x3e00008
label_2ee11c:
    if (ctx->pc == 0x2EE11Cu) {
        ctx->pc = 0x2EE11Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2EE120u;
        goto label_fallthrough_0x2ee118;
    }
    ctx->pc = 0x2EE118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE11Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE0D0u: goto label_2ee0d0;
            case 0x2EE0D4u: goto label_2ee0d4;
            case 0x2EE0D8u: goto label_2ee0d8;
            case 0x2EE0DCu: goto label_2ee0dc;
            case 0x2EE0E0u: goto label_2ee0e0;
            case 0x2EE0E4u: goto label_2ee0e4;
            case 0x2EE0E8u: goto label_2ee0e8;
            case 0x2EE0ECu: goto label_2ee0ec;
            case 0x2EE0F0u: goto label_2ee0f0;
            case 0x2EE0F4u: goto label_2ee0f4;
            case 0x2EE0F8u: goto label_2ee0f8;
            case 0x2EE0FCu: goto label_2ee0fc;
            case 0x2EE100u: goto label_2ee100;
            case 0x2EE104u: goto label_2ee104;
            case 0x2EE108u: goto label_2ee108;
            case 0x2EE10Cu: goto label_2ee10c;
            case 0x2EE110u: goto label_2ee110;
            case 0x2EE114u: goto label_2ee114;
            case 0x2EE118u: goto label_2ee118;
            case 0x2EE11Cu: goto label_2ee11c;
            default: break;
        }
        return;
    }
label_fallthrough_0x2ee118:
    ctx->pc = 0x2EE120u;
}
