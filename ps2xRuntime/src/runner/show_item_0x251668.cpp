#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: show_item
// Address: 0x251668 - 0x2516d0
void show_item_0x251668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x251668u;

    // 0x251668: 0x3c020031
    ctx->pc = 0x251668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x25166c: 0x8c450030
    ctx->pc = 0x25166cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x251670: 0x808400e0
    ctx->pc = 0x251670u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x251674: 0x3c020031
    ctx->pc = 0x251674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x251678: 0x8c420018
    ctx->pc = 0x251678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25167c: 0x30428000
    ctx->pc = 0x25167cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x251680: 0x24030002
    ctx->pc = 0x251680u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x251684: 0x62280b
    ctx->pc = 0x251684u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x251688: 0x2882000b
    ctx->pc = 0x251688u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 11));
    // 0x25168c: 0x14400003
    ctx->pc = 0x25168Cu;
    {
        const bool branch_taken_0x25168c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x251690u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25168c) {
            ctx->pc = 0x25169Cu;
            goto label_25169c;
        }
    }
    ctx->pc = 0x251694u;
    // 0x251694: 0x2484fff6
    ctx->pc = 0x251694u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967286));
    // 0x251698: 0x24060001
    ctx->pc = 0x251698u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_25169c:
    // 0x25169c: 0x3c020031
    ctx->pc = 0x25169cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2516a0: 0x8c42fff8
    ctx->pc = 0x2516a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x2516a4: 0x18400003
    ctx->pc = 0x2516A4u;
    {
        const bool branch_taken_0x2516a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2516a4) {
            ctx->pc = 0x2516B4u;
            goto label_2516b4;
        }
    }
    ctx->pc = 0x2516ACu;
    // 0x2516ac: 0x40282d
    ctx->pc = 0x2516acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516b0: 0x24060001
    ctx->pc = 0x2516b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_2516b4:
    // 0x2516b4: 0x50c00004
    ctx->pc = 0x2516B4u;
    {
        const bool branch_taken_0x2516b4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2516b4) {
            ctx->pc = 0x2516B8u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
            ctx->pc = 0x2516C8u;
            goto label_2516c8;
        }
    }
    ctx->pc = 0x2516BCu;
    // 0x2516bc: 0xa41026
    ctx->pc = 0x2516bcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2516c0: 0x3e00008
    ctx->pc = 0x2516C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2516C4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25169Cu: goto label_25169c;
            case 0x2516B4u: goto label_2516b4;
            case 0x2516C8u: goto label_2516c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2516C8u;
label_2516c8:
    // 0x2516c8: 0x3e00008
    ctx->pc = 0x2516C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2516CCu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25169Cu: goto label_25169c;
            case 0x2516B4u: goto label_2516b4;
            case 0x2516C8u: goto label_2516c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2516D0u;
}
