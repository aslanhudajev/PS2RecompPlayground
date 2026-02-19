#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NewTempBlitZ
// Address: 0x20d1e0 - 0x20d224
void NewTempBlitZ_0x20d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20d1e0u;

    // 0x20d1e0: 0x27bdffd0
    ctx->pc = 0x20d1e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d1e4: 0xffbf0010
    ctx->pc = 0x20d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20d1e8: 0xffb00000
    ctx->pc = 0x20d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20d1ec: 0xe7b40020
    ctx->pc = 0x20d1ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20d1f0: 0xc0b0c6a
    ctx->pc = 0x20D1F0u;
    SET_GPR_U32(ctx, 31, 0x20D1F8u);
    ctx->pc = 0x20D1F4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D1F8u; }
    }
    if (ctx->pc != 0x20D1F8u) { return; }
    ctx->pc = 0x20D1F8u;
    // 0x20d1f8: 0x40802d
    ctx->pc = 0x20d1f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1fc: 0x12000003
    ctx->pc = 0x20D1FCu;
    {
        const bool branch_taken_0x20d1fc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D200u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20d1fc) {
            ctx->pc = 0x20D20Cu;
            goto label_20d20c;
        }
    }
    ctx->pc = 0x20D204u;
    // 0x20d204: 0xc0b0dd6
    ctx->pc = 0x20D204u;
    SET_GPR_U32(ctx, 31, 0x20D20Cu);
    ctx->pc = 0x20D208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D20Cu; }
    }
    if (ctx->pc != 0x20D20Cu) { return; }
    ctx->pc = 0x20D20Cu;
label_20d20c:
    // 0x20d20c: 0x200102d
    ctx->pc = 0x20d20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d210: 0xdfbf0010
    ctx->pc = 0x20d210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d214: 0xdfb00000
    ctx->pc = 0x20d214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d218: 0xc7b40020
    ctx->pc = 0x20d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20d21c: 0x3e00008
    ctx->pc = 0x20D21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D220u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D20Cu: goto label_20d20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D224u;
}
