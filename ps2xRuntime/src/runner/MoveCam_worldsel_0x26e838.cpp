#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_worldsel
// Address: 0x26e838 - 0x26e8b0
void MoveCam_worldsel_0x26e838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26e838u;

    // 0x26e838: 0x27bdffe0
    ctx->pc = 0x26e838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26e83c: 0xffbf0010
    ctx->pc = 0x26e83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26e840: 0xffb00000
    ctx->pc = 0x26e840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26e844: 0x240301a0
    ctx->pc = 0x26e844u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26e848: 0x831818
    ctx->pc = 0x26e848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26e84c: 0x3c020034
    ctx->pc = 0x26e84cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26e850: 0x2442eb60
    ctx->pc = 0x26e850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26e854: 0x14800012
    ctx->pc = 0x26E854u;
    {
        const bool branch_taken_0x26e854 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x26E858u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x26e854) {
            ctx->pc = 0x26E8A0u;
            goto label_26e8a0;
        }
    }
    ctx->pc = 0x26E85Cu;
    // 0x26e85c: 0x3c020031
    ctx->pc = 0x26e85cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26e860: 0x8c430018
    ctx->pc = 0x26e860u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26e864: 0x2402400d
    ctx->pc = 0x26e864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
    // 0x26e868: 0x10620005
    ctx->pc = 0x26E868u;
    {
        const bool branch_taken_0x26e868 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x26E86Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
        if (branch_taken_0x26e868) {
            ctx->pc = 0x26E880u;
            goto label_26e880;
        }
    }
    ctx->pc = 0x26E870u;
    // 0x26e870: 0x10620003
    ctx->pc = 0x26E870u;
    {
        const bool branch_taken_0x26e870 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x26E874u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        if (branch_taken_0x26e870) {
            ctx->pc = 0x26E880u;
            goto label_26e880;
        }
    }
    ctx->pc = 0x26E878u;
    // 0x26e878: 0x1462000a
    ctx->pc = 0x26E878u;
    {
        const bool branch_taken_0x26e878 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26E87Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26e878) {
            ctx->pc = 0x26E8A4u;
            goto label_26e8a4;
        }
    }
    ctx->pc = 0x26E880u;
label_26e880:
    // 0x26e880: 0x200202d
    ctx->pc = 0x26e880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e884: 0xc09b9b2
    ctx->pc = 0x26E884u;
    SET_GPR_U32(ctx, 31, 0x26E88Cu);
    ctx->pc = 0x26E888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x26E6C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_wsel_cam_0x26e6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E88Cu; }
    }
    if (ctx->pc != 0x26E88Cu) { return; }
    ctx->pc = 0x26E88Cu;
    // 0x26e88c: 0xe60000b4
    ctx->pc = 0x26e88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x26e890: 0xdfbf0010
    ctx->pc = 0x26e890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e894: 0xdfb00000
    ctx->pc = 0x26e894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e898: 0x809b95a
    ctx->pc = 0x26E898u;
    ctx->pc = 0x26E89Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x26E568u;
    calc_wsel_pos_0x26e568(rdram, ctx, runtime); return;
    ctx->pc = 0x26E8A0u;
label_26e8a0:
    // 0x26e8a0: 0xdfbf0010
    ctx->pc = 0x26e8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26e8a4:
    // 0x26e8a4: 0xdfb00000
    ctx->pc = 0x26e8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e8a8: 0x3e00008
    ctx->pc = 0x26E8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E8ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E880u: goto label_26e880;
            case 0x26E8A0u: goto label_26e8a0;
            case 0x26E8A4u: goto label_26e8a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E8B0u;
}
