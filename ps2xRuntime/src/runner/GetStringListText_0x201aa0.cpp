#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetStringListText
// Address: 0x201aa0 - 0x201aec
void GetStringListText_0x201aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201aa0u;

    // 0x201aa0: 0x27bdffd0
    ctx->pc = 0x201aa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201aa4: 0xffbf0020
    ctx->pc = 0x201aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x201aa8: 0xffb10010
    ctx->pc = 0x201aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201aac: 0xffb00000
    ctx->pc = 0x201aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201ab0: 0xc0802d
    ctx->pc = 0x201ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ab4: 0xc08068c
    ctx->pc = 0x201AB4u;
    SET_GPR_U32(ctx, 31, 0x201ABCu);
    ctx->pc = 0x201AB8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringListMsg_0x201a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ABCu; }
    }
    if (ctx->pc != 0x201ABCu) { return; }
    ctx->pc = 0x201ABCu;
    // 0x201abc: 0x4410003
    ctx->pc = 0x201ABCu;
    {
        const bool branch_taken_0x201abc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x201AC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x201abc) {
            ctx->pc = 0x201ACCu;
            goto label_201acc;
        }
    }
    ctx->pc = 0x201AC4u;
    // 0x201ac4: 0x10000004
    ctx->pc = 0x201AC4u;
    {
        const bool branch_taken_0x201ac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x201AC8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x201ac4) {
            ctx->pc = 0x201AD8u;
            goto label_201ad8;
        }
    }
    ctx->pc = 0x201ACCu;
label_201acc:
    // 0x201acc: 0x200282d
    ctx->pc = 0x201accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ad0: 0xc08065e
    ctx->pc = 0x201AD0u;
    SET_GPR_U32(ctx, 31, 0x201AD8u);
    ctx->pc = 0x201AD4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201AD8u; }
    }
    if (ctx->pc != 0x201AD8u) { return; }
    ctx->pc = 0x201AD8u;
label_201ad8:
    // 0x201ad8: 0xdfbf0020
    ctx->pc = 0x201ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201adc: 0xdfb10010
    ctx->pc = 0x201adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201ae0: 0xdfb00000
    ctx->pc = 0x201ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ae4: 0x3e00008
    ctx->pc = 0x201AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201AE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201ACCu: goto label_201acc;
            case 0x201AD8u: goto label_201ad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201AECu;
}
