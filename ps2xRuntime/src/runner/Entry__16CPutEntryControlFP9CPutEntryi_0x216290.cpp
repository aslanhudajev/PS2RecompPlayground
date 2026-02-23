#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Entry__16CPutEntryControlFP9CPutEntryi
// Address: 0x216290 - 0x2162f4
void Entry__16CPutEntryControlFP9CPutEntryi_0x216290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Entry__16CPutEntryControlFP9CPutEntryi");


    ctx->pc = 0x216290u;

    // 0x216290: 0x8c830000
    ctx->pc = 0x216290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216294: 0x10600006
    ctx->pc = 0x216294u;
    {
        const bool branch_taken_0x216294 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x216294) {
            ctx->pc = 0x2162B0u;
            goto label_2162b0;
        }
    }
    ctx->pc = 0x21629Cu;
label_21629c:
    // 0x21629c: 0x10650013
    ctx->pc = 0x21629Cu;
    {
        const bool branch_taken_0x21629c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x21629c) {
            ctx->pc = 0x2162ECu;
            goto label_2162ec;
        }
    }
    ctx->pc = 0x2162A4u;
    // 0x2162a4: 0x8c630000
    ctx->pc = 0x2162a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2162a8: 0x1460fffc
    ctx->pc = 0x2162A8u;
    {
        const bool branch_taken_0x2162a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2162a8) {
            ctx->pc = 0x21629Cu;
            goto label_21629c;
        }
    }
    ctx->pc = 0x2162B0u;
label_2162b0:
    // 0x2162b0: 0xaca00000
    ctx->pc = 0x2162b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2162b4: 0x8c830000
    ctx->pc = 0x2162b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2162b8: 0x14600004
    ctx->pc = 0x2162B8u;
    {
        const bool branch_taken_0x2162b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2162b8) {
            ctx->pc = 0x2162CCu;
            goto label_2162cc;
        }
    }
    ctx->pc = 0x2162C0u;
    // 0x2162c0: 0xac850004
    ctx->pc = 0x2162c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2162c4: 0x10000009
    ctx->pc = 0x2162C4u;
    {
        const bool branch_taken_0x2162c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2162C8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x2162c4) {
            ctx->pc = 0x2162ECu;
            goto label_2162ec;
        }
    }
    ctx->pc = 0x2162CCu;
label_2162cc:
    // 0x2162cc: 0x10c00005
    ctx->pc = 0x2162CCu;
    {
        const bool branch_taken_0x2162cc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2162cc) {
            ctx->pc = 0x2162E4u;
            goto label_2162e4;
        }
    }
    ctx->pc = 0x2162D4u;
    // 0x2162d4: 0x8c830004
    ctx->pc = 0x2162d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2162d8: 0xac650000
    ctx->pc = 0x2162d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2162dc: 0x10000003
    ctx->pc = 0x2162DCu;
    {
        const bool branch_taken_0x2162dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2162E0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x2162dc) {
            ctx->pc = 0x2162ECu;
            goto label_2162ec;
        }
    }
    ctx->pc = 0x2162E4u;
label_2162e4:
    // 0x2162e4: 0xaca30000
    ctx->pc = 0x2162e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2162e8: 0xac850000
    ctx->pc = 0x2162e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2162ec:
    // 0x2162ec: 0x3e00008
    ctx->pc = 0x2162ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21629Cu: goto label_21629c;
            case 0x2162B0u: goto label_2162b0;
            case 0x2162CCu: goto label_2162cc;
            case 0x2162E4u: goto label_2162e4;
            case 0x2162ECu: goto label_2162ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2162F4u;
}
