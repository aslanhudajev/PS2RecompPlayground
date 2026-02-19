#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cdvd_exit
// Address: 0x2f51a8 - 0x2f5210
void cdvd_exit_0x2f51a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f51a8u;

    // 0x2f51a8: 0x3c02003a
    ctx->pc = 0x2f51a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f51ac: 0x27bdffe0
    ctx->pc = 0x2f51acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f51b0: 0x8c433aac
    ctx->pc = 0x2f51b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15020)));
    // 0x2f51b4: 0xffbf0010
    ctx->pc = 0x2f51b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f51b8: 0x10600009
    ctx->pc = 0x2F51B8u;
    {
        const bool branch_taken_0x2f51b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F51BCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x2f51b8) {
            ctx->pc = 0x2F51E0u;
            goto label_2f51e0;
        }
    }
    ctx->pc = 0x2F51C0u;
    // 0x2f51c0: 0x3c03003a
    ctx->pc = 0x2f51c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f51c4: 0x2402ffff
    ctx->pc = 0x2f51c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f51c8: 0xac623af0
    ctx->pc = 0x2f51c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15088), GPR_U32(ctx, 2));
    // 0x2f51cc: 0x3c10003a
    ctx->pc = 0x2f51ccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f51d0: 0xc0c0d80
    ctx->pc = 0x2F51D0u;
    SET_GPR_U32(ctx, 31, 0x2F51D8u);
    ctx->pc = 0x2F51D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15032)));
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51D8u; }
    }
    if (ctx->pc != 0x2F51D8u) { return; }
    ctx->pc = 0x2F51D8u;
    // 0x2f51d8: 0x10000003
    ctx->pc = 0x2F51D8u;
    {
        const bool branch_taken_0x2f51d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F51DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f51d8) {
            ctx->pc = 0x2F51E8u;
            goto label_2f51e8;
        }
    }
    ctx->pc = 0x2F51E0u;
label_2f51e0:
    // 0x2f51e0: 0x3c10003a
    ctx->pc = 0x2f51e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f51e4: 0x3c02003a
    ctx->pc = 0x2f51e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2f51e8:
    // 0x2f51e8: 0xc0c0d7c
    ctx->pc = 0x2F51E8u;
    SET_GPR_U32(ctx, 31, 0x2F51F0u);
    ctx->pc = 0x2F51ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15024)));
    ctx->pc = 0x3035F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x3035f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51F0u; }
    }
    if (ctx->pc != 0x2F51F0u) { return; }
    ctx->pc = 0x2F51F0u;
    // 0x2f51f0: 0x3c03003a
    ctx->pc = 0x2f51f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f51f4: 0xc0c0d7c
    ctx->pc = 0x2F51F4u;
    SET_GPR_U32(ctx, 31, 0x2F51FCu);
    ctx->pc = 0x2F51F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 15028)));
    ctx->pc = 0x3035F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x3035f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51FCu; }
    }
    if (ctx->pc != 0x2F51FCu) { return; }
    ctx->pc = 0x2F51FCu;
    // 0x2f51fc: 0x8e043ab8
    ctx->pc = 0x2f51fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15032)));
    // 0x2f5200: 0xdfbf0010
    ctx->pc = 0x2f5200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5204: 0xdfb00000
    ctx->pc = 0x2f5204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5208: 0x80c0d7c
    ctx->pc = 0x2F5208u;
    ctx->pc = 0x2F520Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x3035F0u;
    DeleteSema_0x3035f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F5210u;
}
