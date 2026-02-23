#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutSetFadeColor
// Address: 0x1aaa00 - 0x1aaa4c
void nlObjPutSetFadeColor_0x1aaa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutSetFadeColor");


    ctx->pc = 0x1aaa00u;

    // 0x1aaa00: 0x27bdffe0
    ctx->pc = 0x1aaa00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aaa04: 0x7fbf0010
    ctx->pc = 0x1aaa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1aaa08: 0xe7b60008
    ctx->pc = 0x1aaa08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1aaa0c: 0xe7b50004
    ctx->pc = 0x1aaa0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1aaa10: 0xe7b40000
    ctx->pc = 0x1aaa10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1aaa14: 0x46006586
    ctx->pc = 0x1aaa14u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1aaa18: 0x46006d46
    ctx->pc = 0x1aaa18u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1aaa1c: 0xc06aa94
    ctx->pc = 0x1AAA1Cu;
    SET_GPR_U32(ctx, 31, 0x1AAA24u);
    ctx->pc = 0x1AAA20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x1AAA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColorBase_0x1aaa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA24u; }
        else if (ctx->pc != 0x1AAA24u) { ctx->pc = 0x1AAA24u; }
    }
    if (ctx->pc != 0x1AAA24u) { return; }
    ctx->pc = 0x1AAA24u;
    // 0x1aaa24: 0x4600b306
    ctx->pc = 0x1aaa24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1aaa28: 0x4600ab46
    ctx->pc = 0x1aaa28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1aaa2c: 0xc06aa9c
    ctx->pc = 0x1AAA2Cu;
    SET_GPR_U32(ctx, 31, 0x1AAA34u);
    ctx->pc = 0x1AAA30u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1AAA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColorOffset_0x1aaa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA34u; }
        else if (ctx->pc != 0x1AAA34u) { ctx->pc = 0x1AAA34u; }
    }
    if (ctx->pc != 0x1AAA34u) { return; }
    ctx->pc = 0x1AAA34u;
    // 0x1aaa34: 0x7bbf0010
    ctx->pc = 0x1aaa34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaa38: 0xc7b60008
    ctx->pc = 0x1aaa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1aaa3c: 0xc7b50004
    ctx->pc = 0x1aaa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1aaa40: 0xc7b40000
    ctx->pc = 0x1aaa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aaa44: 0x3e00008
    ctx->pc = 0x1AAA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAA48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAA4Cu;
}
