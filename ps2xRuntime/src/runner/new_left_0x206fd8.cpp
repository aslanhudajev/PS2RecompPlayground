#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_left
// Address: 0x206fd8 - 0x206ff8
void new_left_0x206fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206fd8u;

    // 0x206fd8: 0x27bdfff0
    ctx->pc = 0x206fd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206fdc: 0xffbf0000
    ctx->pc = 0x206fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206fe0: 0x80282d
    ctx->pc = 0x206fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fe4: 0xc081b98
    ctx->pc = 0x206FE4u;
    SET_GPR_U32(ctx, 31, 0x206FECu);
    ctx->pc = 0x206FE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x206E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_ctrl_0x206e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206FECu; }
    }
    if (ctx->pc != 0x206FECu) { return; }
    ctx->pc = 0x206FECu;
    // 0x206fec: 0xdfbf0000
    ctx->pc = 0x206fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206ff0: 0x3e00008
    ctx->pc = 0x206FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206FF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206FF8u;
}
