#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: handler_endimage
// Address: 0x11bbc8 - 0x11bc00
void handler_endimage_0x11bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11bbc8u;

    // 0x11bbc8: 0x27bdfff0
    ctx->pc = 0x11bbc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11bbcc: 0x8f828444
    ctx->pc = 0x11bbccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935620)));
    // 0x11bbd0: 0x10400005
    ctx->pc = 0x11BBD0u;
    {
        const bool branch_taken_0x11bbd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BBD4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x11bbd0) {
            ctx->pc = 0x11BBE8u;
            goto label_11bbe8;
        }
    }
    ctx->pc = 0x11BBD8u;
    // 0x11bbd8: 0x3c040075
    ctx->pc = 0x11bbd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11bbdc: 0xc046a9e
    ctx->pc = 0x11BBDCu;
    SET_GPR_U32(ctx, 31, 0x11BBE4u);
    ctx->pc = 0x11BBE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960408));
    ctx->pc = 0x11AA78u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufDecCount_0x11aa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBE4u; }
    }
    if (ctx->pc != 0x11BBE4u) { return; }
    ctx->pc = 0x11BBE4u;
    // 0x11bbe4: 0xaf808444
    ctx->pc = 0x11bbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 0));
label_11bbe8:
    // 0x11bbe8: 0xf
    ctx->pc = 0x11bbe8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11bbec: 0x42000038
    ctx->pc = 0x11bbecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x11bbf0: 0xdfbf0000
    ctx->pc = 0x11bbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bbf4: 0x102d
    ctx->pc = 0x11bbf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbf8: 0x3e00008
    ctx->pc = 0x11BBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BBFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BBE8u: goto label_11bbe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BC00u;
}
