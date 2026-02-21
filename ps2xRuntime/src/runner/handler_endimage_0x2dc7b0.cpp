#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: handler_endimage
// Address: 0x2dc7b0 - 0x2dc7f8
void handler_endimage_0x2dc7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dc7b0u;

    // 0x2dc7b0: 0x27bdffe0
    ctx->pc = 0x2dc7b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc7b4: 0xffbf0010
    ctx->pc = 0x2dc7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc7b8: 0xffb00000
    ctx->pc = 0x2dc7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dc7bc: 0x3c10003a
    ctx->pc = 0x2dc7bcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dc7c0: 0x8e022994
    ctx->pc = 0x2dc7c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10644)));
    // 0x2dc7c4: 0x10400005
    ctx->pc = 0x2DC7C4u;
    {
        const bool branch_taken_0x2dc7c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dc7c4) {
            ctx->pc = 0x2DC7DCu;
            goto label_2dc7dc;
        }
    }
    ctx->pc = 0x2DC7CCu;
    // 0x2dc7cc: 0x3c04003a
    ctx->pc = 0x2dc7ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dc7d0: 0xc0b7a72
    ctx->pc = 0x2DC7D0u;
    SET_GPR_U32(ctx, 31, 0x2DC7D8u);
    ctx->pc = 0x2DC7D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10736));
    ctx->pc = 0x2DE9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufDecCount_0x2de9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC7D8u; }
    }
    if (ctx->pc != 0x2DC7D8u) { return; }
    ctx->pc = 0x2DC7D8u;
    // 0x2dc7d8: 0xae002994
    ctx->pc = 0x2dc7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10644), GPR_U32(ctx, 0));
label_2dc7dc:
    // 0x2dc7dc: 0xf
    ctx->pc = 0x2dc7dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2dc7e0: 0x42000038
    ctx->pc = 0x2dc7e0u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x2dc7e4: 0x102d
    ctx->pc = 0x2dc7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc7e8: 0xdfbf0010
    ctx->pc = 0x2dc7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc7ec: 0xdfb00000
    ctx->pc = 0x2dc7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc7f0: 0x3e00008
    ctx->pc = 0x2DC7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC7F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DC7DCu: goto label_2dc7dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DC7F8u;
}
