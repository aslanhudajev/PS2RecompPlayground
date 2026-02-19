#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kprintf
// Address: 0x305250 - 0x305288
void kprintf_0x305250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x305250u;

    // 0x305250: 0x27bdff70
    ctx->pc = 0x305250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x305254: 0xffa50058
    ctx->pc = 0x305254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x305258: 0xffbf0000
    ctx->pc = 0x305258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30525c: 0x27a50058
    ctx->pc = 0x30525cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 88));
    // 0x305260: 0xffa60060
    ctx->pc = 0x305260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x305264: 0xffa70068
    ctx->pc = 0x305264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x305268: 0xffa80070
    ctx->pc = 0x305268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x30526c: 0xffa90078
    ctx->pc = 0x30526cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x305270: 0xffaa0080
    ctx->pc = 0x305270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x305274: 0xc0c1322
    ctx->pc = 0x305274u;
    SET_GPR_U32(ctx, 31, 0x30527Cu);
    ctx->pc = 0x305278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    ctx->pc = 0x304C88u;
    {
        const uint32_t __entryPc = ctx->pc;
        _printf_0x304c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30527Cu; }
    }
    if (ctx->pc != 0x30527Cu) { return; }
    ctx->pc = 0x30527Cu;
    // 0x30527c: 0xdfbf0000
    ctx->pc = 0x30527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305280: 0x3e00008
    ctx->pc = 0x305280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305284u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305288u;
}
