#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: changeInputVolume
// Address: 0x119f68 - 0x119fac
void changeInputVolume_0x119f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119f68u;

    // 0x119f68: 0x27bdffe0
    ctx->pc = 0x119f68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119f6c: 0x34058010
    ctx->pc = 0x119f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32784);
    // 0x119f70: 0xffb00000
    ctx->pc = 0x119f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119f74: 0x24060f80
    ctx->pc = 0x119f74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3968));
    // 0x119f78: 0x80802d
    ctx->pc = 0x119f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f7c: 0xffbf0010
    ctx->pc = 0x119f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119f80: 0x200382d
    ctx->pc = 0x119f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f84: 0xc045c80
    ctx->pc = 0x119F84u;
    SET_GPR_U32(ctx, 31, 0x119F8Cu);
    ctx->pc = 0x119F88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F8Cu; }
    }
    if (ctx->pc != 0x119F8Cu) { return; }
    ctx->pc = 0x119F8Cu;
    // 0x119f8c: 0x200382d
    ctx->pc = 0x119f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f90: 0xdfbf0010
    ctx->pc = 0x119f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119f94: 0xdfb00000
    ctx->pc = 0x119f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119f98: 0x24040001
    ctx->pc = 0x119f98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x119f9c: 0x34058010
    ctx->pc = 0x119f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32784);
    // 0x119fa0: 0x24061080
    ctx->pc = 0x119fa0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4224));
    // 0x119fa4: 0x8045c80
    ctx->pc = 0x119FA4u;
    ctx->pc = 0x119FA8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x117200u;
    sceSdRemote_0x117200(rdram, ctx, runtime); return;
    ctx->pc = 0x119FACu;
}
