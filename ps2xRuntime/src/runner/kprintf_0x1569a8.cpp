#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: kprintf
// Address: 0x1569a8 - 0x1569e0
void kprintf_0x1569a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("kprintf");


    ctx->pc = 0x1569a8u;

    // 0x1569a8: 0x27bdff70
    ctx->pc = 0x1569a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1569ac: 0xffa50058
    ctx->pc = 0x1569acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x1569b0: 0xffbf0000
    ctx->pc = 0x1569b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1569b4: 0x27a50058
    ctx->pc = 0x1569b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 88));
    // 0x1569b8: 0xffa60060
    ctx->pc = 0x1569b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x1569bc: 0xffa70068
    ctx->pc = 0x1569bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x1569c0: 0xffa80070
    ctx->pc = 0x1569c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x1569c4: 0xffa90078
    ctx->pc = 0x1569c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x1569c8: 0xffaa0080
    ctx->pc = 0x1569c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x1569cc: 0xc0558f8
    ctx->pc = 0x1569CCu;
    SET_GPR_U32(ctx, 31, 0x1569D4u);
    ctx->pc = 0x1569D0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    ctx->pc = 0x1563E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _printf_0x1563e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1569D4u; }
        else if (ctx->pc != 0x1569D4u) { ctx->pc = 0x1569D4u; }
    }
    if (ctx->pc != 0x1569D4u) { return; }
    ctx->pc = 0x1569D4u;
    // 0x1569d4: 0xdfbf0000
    ctx->pc = 0x1569d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1569d8: 0x3e00008
    ctx->pc = 0x1569D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1569DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1569E0u;
}
