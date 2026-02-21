#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerSetGrabbed
// Address: 0x236d70 - 0x236de4
void PlayerSetGrabbed_0x236d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236d70u;

    // 0x236d70: 0x27bdffd0
    ctx->pc = 0x236d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236d74: 0xffbf0020
    ctx->pc = 0x236d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x236d78: 0xffb00010
    ctx->pc = 0x236d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x236d7c: 0x14c00003
    ctx->pc = 0x236D7Cu;
    {
        const bool branch_taken_0x236d7c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x236D80u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x236d7c) {
            ctx->pc = 0x236D8Cu;
            goto label_236d8c;
        }
    }
    ctx->pc = 0x236D84u;
    // 0x236d84: 0x3c02003a
    ctx->pc = 0x236d84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x236d88: 0x244624c0
    ctx->pc = 0x236d88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 9408));
label_236d8c:
    // 0x236d8c: 0xc4c00000
    ctx->pc = 0x236d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236d90: 0xc6010810
    ctx->pc = 0x236d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236d94: 0x46010001
    ctx->pc = 0x236d94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x236d98: 0xe7a00000
    ctx->pc = 0x236d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x236d9c: 0xc4c00004
    ctx->pc = 0x236d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236da0: 0xc6010814
    ctx->pc = 0x236da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236da4: 0x46010001
    ctx->pc = 0x236da4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x236da8: 0xe7a00004
    ctx->pc = 0x236da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x236dac: 0xc4c00008
    ctx->pc = 0x236dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236db0: 0xc6010818
    ctx->pc = 0x236db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236db4: 0x46010001
    ctx->pc = 0x236db4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x236db8: 0xe7a00008
    ctx->pc = 0x236db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x236dbc: 0x200202d
    ctx->pc = 0x236dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236dc0: 0xc08db34
    ctx->pc = 0x236DC0u;
    SET_GPR_U32(ctx, 31, 0x236DC8u);
    ctx->pc = 0x236DC4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerSetParent_0x236cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236DC8u; }
    }
    if (ctx->pc != 0x236DC8u) { return; }
    ctx->pc = 0x236DC8u;
    // 0x236dc8: 0x8e0208ac
    ctx->pc = 0x236dc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x236dcc: 0x34424000
    ctx->pc = 0x236dccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x236dd0: 0xae0208ac
    ctx->pc = 0x236dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 2));
    // 0x236dd4: 0xdfbf0020
    ctx->pc = 0x236dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236dd8: 0xdfb00010
    ctx->pc = 0x236dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236ddc: 0x3e00008
    ctx->pc = 0x236DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236DE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236D8Cu: goto label_236d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x236DE4u;
}
