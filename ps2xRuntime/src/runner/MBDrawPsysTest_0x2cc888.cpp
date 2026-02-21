#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDrawPsysTest
// Address: 0x2cc888 - 0x2cc8dc
void MBDrawPsysTest_0x2cc888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cc888u;

    // 0x2cc888: 0x27bdffe0
    ctx->pc = 0x2cc888u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc88c: 0xffbf0010
    ctx->pc = 0x2cc88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc890: 0xffb00000
    ctx->pc = 0x2cc890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc894: 0x8c900070
    ctx->pc = 0x2cc894u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2cc898: 0x92020037
    ctx->pc = 0x2cc898u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 55)));
    // 0x2cc89c: 0x2c420006
    ctx->pc = 0x2cc89cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 6));
    // 0x2cc8a0: 0x14400003
    ctx->pc = 0x2CC8A0u;
    {
        const bool branch_taken_0x2cc8a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CC8A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 48));
        if (branch_taken_0x2cc8a0) {
            ctx->pc = 0x2CC8B0u;
            goto label_2cc8b0;
        }
    }
    ctx->pc = 0x2CC8A8u;
    // 0x2cc8a8: 0x10000003
    ctx->pc = 0x2CC8A8u;
    {
        const bool branch_taken_0x2cc8a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CC8ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2cc8a8) {
            ctx->pc = 0x2CC8B8u;
            goto label_2cc8b8;
        }
    }
    ctx->pc = 0x2CC8B0u;
label_2cc8b0:
    // 0x2cc8b0: 0xc0b1084
    ctx->pc = 0x2CC8B0u;
    SET_GPR_U32(ctx, 31, 0x2CC8B8u);
    ctx->pc = 0x2CC8B4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2C4210u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldSphereVisible_0x2c4210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC8B8u; }
    }
    if (ctx->pc != 0x2CC8B8u) { return; }
    ctx->pc = 0x2CC8B8u;
label_2cc8b8:
    // 0x2cc8b8: 0x14400003
    ctx->pc = 0x2CC8B8u;
    {
        const bool branch_taken_0x2cc8b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CC8BCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2cc8b8) {
            ctx->pc = 0x2CC8C8u;
            goto label_2cc8c8;
        }
    }
    ctx->pc = 0x2CC8C0u;
    // 0x2cc8c0: 0x86020080
    ctx->pc = 0x2cc8c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2cc8c4: 0x2102b
    ctx->pc = 0x2cc8c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2cc8c8:
    // 0x2cc8c8: 0x2102b
    ctx->pc = 0x2cc8c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2cc8cc: 0xdfbf0010
    ctx->pc = 0x2cc8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc8d0: 0xdfb00000
    ctx->pc = 0x2cc8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc8d4: 0x3e00008
    ctx->pc = 0x2CC8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC8D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CC8B0u: goto label_2cc8b0;
            case 0x2CC8B8u: goto label_2cc8b8;
            case 0x2CC8C8u: goto label_2cc8c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CC8DCu;
}
