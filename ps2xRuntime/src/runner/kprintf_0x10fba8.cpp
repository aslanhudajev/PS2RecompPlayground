#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kprintf
// Address: 0x10fba8 - 0x10fbe0
void kprintf_0x10fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10fba8u;

    // 0x10fba8: 0x27bdff70
    ctx->pc = 0x10fba8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10fbac: 0xffa50058
    ctx->pc = 0x10fbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x10fbb0: 0xffbf0000
    ctx->pc = 0x10fbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fbb4: 0x27a50058
    ctx->pc = 0x10fbb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 88));
    // 0x10fbb8: 0xffa60060
    ctx->pc = 0x10fbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x10fbbc: 0xffa70068
    ctx->pc = 0x10fbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x10fbc0: 0xffa80070
    ctx->pc = 0x10fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x10fbc4: 0xffa90078
    ctx->pc = 0x10fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x10fbc8: 0xffaa0080
    ctx->pc = 0x10fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x10fbcc: 0xc043d78
    ctx->pc = 0x10FBCCu;
    SET_GPR_U32(ctx, 31, 0x10FBD4u);
    ctx->pc = 0x10FBD0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    ctx->pc = 0x10F5E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _printf_0x10f5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FBD4u; }
    }
    if (ctx->pc != 0x10FBD4u) { return; }
    ctx->pc = 0x10FBD4u;
    // 0x10fbd4: 0xdfbf0000
    ctx->pc = 0x10fbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fbd8: 0x3e00008
    ctx->pc = 0x10FBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FBDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FBE0u;
}
