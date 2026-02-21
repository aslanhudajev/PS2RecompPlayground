#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_start
// Address: 0x207078 - 0x2070b0
void new_start_0x207078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207078u;

    // 0x207078: 0x27bdffe0
    ctx->pc = 0x207078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20707c: 0xffbf0010
    ctx->pc = 0x20707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207080: 0xffb00000
    ctx->pc = 0x207080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207084: 0x80282d
    ctx->pc = 0x207084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207088: 0x3c100031
    ctx->pc = 0x207088u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x20708c: 0x24020001
    ctx->pc = 0x20708cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x207090: 0xae021b1c
    ctx->pc = 0x207090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6940), GPR_U32(ctx, 2));
    // 0x207094: 0xc081b98
    ctx->pc = 0x207094u;
    SET_GPR_U32(ctx, 31, 0x20709Cu);
    ctx->pc = 0x207098u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
    ctx->pc = 0x206E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_ctrl_0x206e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20709Cu; }
    }
    if (ctx->pc != 0x20709Cu) { return; }
    ctx->pc = 0x20709Cu;
    // 0x20709c: 0xae001b1c
    ctx->pc = 0x20709cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6940), GPR_U32(ctx, 0));
    // 0x2070a0: 0xdfbf0010
    ctx->pc = 0x2070a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2070a4: 0xdfb00000
    ctx->pc = 0x2070a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2070a8: 0x3e00008
    ctx->pc = 0x2070A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2070ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2070B0u;
}
