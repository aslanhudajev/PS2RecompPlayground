#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FloorPos
// Address: 0x21ed70 - 0x21edc8
void FloorPos_0x21ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ed70u;

    // 0x21ed70: 0x27bdffe0
    ctx->pc = 0x21ed70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ed74: 0xffbf0000
    ctx->pc = 0x21ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ed78: 0xe7b40010
    ctx->pc = 0x21ed78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21ed7c: 0x46006506
    ctx->pc = 0x21ed7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x21ed80: 0xa0382d
    ctx->pc = 0x21ed80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed84: 0x282d
    ctx->pc = 0x21ed84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed88: 0x46006b06
    ctx->pc = 0x21ed88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x21ed8c: 0x3c014080
    ctx->pc = 0x21ed8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x21ed90: 0x44816800
    ctx->pc = 0x21ed90u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x21ed94: 0x3c01c120
    ctx->pc = 0x21ed94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x21ed98: 0x44817000
    ctx->pc = 0x21ed98u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x21ed9c: 0xc087b24
    ctx->pc = 0x21ED9Cu;
    SET_GPR_U32(ctx, 31, 0x21EDA4u);
    ctx->pc = 0x21EDA0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDA4u; }
    }
    if (ctx->pc != 0x21EDA4u) { return; }
    ctx->pc = 0x21EDA4u;
    // 0x21eda4: 0x10400003
    ctx->pc = 0x21EDA4u;
    {
        const bool branch_taken_0x21eda4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EDA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21eda4) {
            ctx->pc = 0x21EDB4u;
            goto label_21edb4;
        }
    }
    ctx->pc = 0x21EDACu;
    // 0x21edac: 0x10000002
    ctx->pc = 0x21EDACu;
    {
        const bool branch_taken_0x21edac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EDB0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21edac) {
            ctx->pc = 0x21EDB8u;
            goto label_21edb8;
        }
    }
    ctx->pc = 0x21EDB4u;
label_21edb4:
    // 0x21edb4: 0x4600a006
    ctx->pc = 0x21edb4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_21edb8:
    // 0x21edb8: 0xdfbf0000
    ctx->pc = 0x21edb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21edbc: 0xc7b40010
    ctx->pc = 0x21edbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21edc0: 0x3e00008
    ctx->pc = 0x21EDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EDC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EDB4u: goto label_21edb4;
            case 0x21EDB8u: goto label_21edb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21EDC8u;
}
