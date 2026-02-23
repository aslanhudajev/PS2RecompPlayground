#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: commonLoop__10PlayerTaskFv
// Address: 0x2126a0 - 0x2126d4
void commonLoop__10PlayerTaskFv_0x2126a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("commonLoop__10PlayerTaskFv");


    ctx->pc = 0x2126a0u;

    // 0x2126a0: 0x27bdfff0
    ctx->pc = 0x2126a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2126a4: 0x7fbf0000
    ctx->pc = 0x2126a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2126a8: 0xac8027fc
    ctx->pc = 0x2126a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10236), GPR_U32(ctx, 0));
    // 0x2126ac: 0x10800002
    ctx->pc = 0x2126ACu;
    {
        const bool branch_taken_0x2126ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2126B0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2126ac) {
            ctx->pc = 0x2126B8u;
            goto label_2126b8;
        }
    }
    ctx->pc = 0x2126B4u;
    // 0x2126b4: 0x24a51cac
    ctx->pc = 0x2126b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7340));
label_2126b8:
    // 0x2126b8: 0x3c020050
    ctx->pc = 0x2126b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2126bc: 0x2444dac0
    ctx->pc = 0x2126bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    // 0x2126c0: 0xc0858a4
    ctx->pc = 0x2126C0u;
    SET_GPR_U32(ctx, 31, 0x2126C8u);
    ctx->pc = 0x2126C4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x216290u;
    {
        const uint32_t __entryPc = ctx->pc;
        Entry__16CPutEntryControlFP9CPutEntryi_0x216290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126C8u; }
        else if (ctx->pc != 0x2126C8u) { ctx->pc = 0x2126C8u; }
    }
    if (ctx->pc != 0x2126C8u) { return; }
    ctx->pc = 0x2126C8u;
    // 0x2126c8: 0x7bbf0000
    ctx->pc = 0x2126c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2126cc: 0x3e00008
    ctx->pc = 0x2126CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2126D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2126B8u: goto label_2126b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2126D4u;
}
