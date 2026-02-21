#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysSetTime
// Address: 0x2c9650 - 0x2c9698
void MBPsysSetTime_0x2c9650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9650u;

    // 0x2c9650: 0x27bdffd0
    ctx->pc = 0x2c9650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c9654: 0xffbf0010
    ctx->pc = 0x2c9654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c9658: 0xffb00000
    ctx->pc = 0x2c9658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c965c: 0xe7b50028
    ctx->pc = 0x2c965cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c9660: 0xe7b40020
    ctx->pc = 0x2c9660u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c9664: 0x80802d
    ctx->pc = 0x2c9664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9668: 0x46007506
    ctx->pc = 0x2c9668u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x2c966c: 0xc0b25a6
    ctx->pc = 0x2C966Cu;
    SET_GPR_U32(ctx, 31, 0x2C9674u);
    ctx->pc = 0x2C9670u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    ctx->pc = 0x2C9698u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetETime_0x2c9698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9674u; }
    }
    if (ctx->pc != 0x2C9674u) { return; }
    ctx->pc = 0x2C9674u;
    // 0x2c9674: 0x200202d
    ctx->pc = 0x2c9674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9678: 0x4600a306
    ctx->pc = 0x2c9678u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c967c: 0x4600ab46
    ctx->pc = 0x2c967cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2c9680: 0xdfbf0010
    ctx->pc = 0x2c9680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9684: 0xdfb00000
    ctx->pc = 0x2c9684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9688: 0xc7b50028
    ctx->pc = 0x2c9688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c968c: 0xc7b40020
    ctx->pc = 0x2c968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c9690: 0x80b25f6
    ctx->pc = 0x2C9690u;
    ctx->pc = 0x2C9694u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2C97D8u;
    MBPsysSetPTime_0x2c97d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9698u;
}
