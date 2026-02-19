#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpPow
// Address: 0x2b5470 - 0x2b54a0
void exprOpPow_0x2b5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5470u;

    // 0x2b5470: 0x27bdffe0
    ctx->pc = 0x2b5470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5474: 0xffbf0010
    ctx->pc = 0x2b5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b5478: 0xffb00000
    ctx->pc = 0x2b5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b547c: 0x80802d
    ctx->pc = 0x2b547cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5480: 0xc4ac0010
    ctx->pc = 0x2b5480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b5484: 0xc0ba142
    ctx->pc = 0x2B5484u;
    SET_GPR_U32(ctx, 31, 0x2B548Cu);
    ctx->pc = 0x2B5488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8508u;
    {
        const uint32_t __entryPc = ctx->pc;
        powf_0x2e8508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B548Cu; }
    }
    if (ctx->pc != 0x2B548Cu) { return; }
    ctx->pc = 0x2B548Cu;
    // 0x2b548c: 0xe6000010
    ctx->pc = 0x2b548cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b5490: 0xdfbf0010
    ctx->pc = 0x2b5490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5494: 0xdfb00000
    ctx->pc = 0x2b5494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5498: 0x3e00008
    ctx->pc = 0x2B5498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B549Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B54A0u;
}
