#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eSETMAG__16ScrBlurCtrlClassFPUi
// Address: 0x216740 - 0x21676c
void eSETMAG__16ScrBlurCtrlClassFPUi_0x216740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eSETMAG__16ScrBlurCtrlClassFPUi");


    ctx->pc = 0x216740u;

    // 0x216740: 0x27bdffe0
    ctx->pc = 0x216740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216744: 0x7fbf0010
    ctx->pc = 0x216744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x216748: 0x7fb00000
    ctx->pc = 0x216748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21674c: 0xc4ac0008
    ctx->pc = 0x21674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x216750: 0xc06c440
    ctx->pc = 0x216750u;
    SET_GPR_U32(ctx, 31, 0x216758u);
    ctx->pc = 0x216754u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B1100u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurSetMag_0x1b1100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216758u; }
        else if (ctx->pc != 0x216758u) { ctx->pc = 0x216758u; }
    }
    if (ctx->pc != 0x216758u) { return; }
    ctx->pc = 0x216758u;
    // 0x216758: 0x2602000c
    ctx->pc = 0x216758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
    // 0x21675c: 0x7bbf0010
    ctx->pc = 0x21675cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216760: 0x7bb00000
    ctx->pc = 0x216760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216764: 0x3e00008
    ctx->pc = 0x216764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21676Cu;
}
