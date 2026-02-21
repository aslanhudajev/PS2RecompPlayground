#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_face_ang
// Address: 0x23c3c0 - 0x23c414
void get_face_ang_0x23c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23c3c0u;

    // 0x23c3c0: 0x27bdfff0
    ctx->pc = 0x23c3c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c3c4: 0xffbf0000
    ctx->pc = 0x23c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c3c8: 0x80182d
    ctx->pc = 0x23c3c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3cc: 0x84620288
    ctx->pc = 0x23c3ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 648)));
    // 0x23c3d0: 0x442000d
    ctx->pc = 0x23C3D0u;
    {
        const bool branch_taken_0x23c3d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23c3d0) {
            ctx->pc = 0x23C3D4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23C408u;
            goto label_23c408;
        }
    }
    ctx->pc = 0x23C3D8u;
    // 0x23c3d8: 0x10a0000a
    ctx->pc = 0x23C3D8u;
    {
        const bool branch_taken_0x23c3d8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C3DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x23c3d8) {
            ctx->pc = 0x23C404u;
            goto label_23c404;
        }
    }
    ctx->pc = 0x23C3E0u;
    // 0x23c3e0: 0x442018
    ctx->pc = 0x23c3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23c3e4: 0x3c020032
    ctx->pc = 0x23c3e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23c3e8: 0x24421be0
    ctx->pc = 0x23c3e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x23c3ec: 0x822021
    ctx->pc = 0x23c3ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c3f0: 0x24840030
    ctx->pc = 0x23c3f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x23c3f4: 0xc09a2aa
    ctx->pc = 0x23C3F4u;
    SET_GPR_U32(ctx, 31, 0x23C3FCu);
    ctx->pc = 0x23C3F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 64));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C3FCu; }
    }
    if (ctx->pc != 0x23C3FCu) { return; }
    ctx->pc = 0x23C3FCu;
    // 0x23c3fc: 0x10000003
    ctx->pc = 0x23C3FCu;
    {
        const bool branch_taken_0x23c3fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C400u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x23c3fc) {
            ctx->pc = 0x23C40Cu;
            goto label_23c40c;
        }
    }
    ctx->pc = 0x23C404u;
label_23c404:
    // 0x23c404: 0xc4600260
    ctx->pc = 0x23c404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23c408:
    // 0x23c408: 0xdfbf0000
    ctx->pc = 0x23c408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c40c:
    // 0x23c40c: 0x3e00008
    ctx->pc = 0x23C40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C410u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C404u: goto label_23c404;
            case 0x23C408u: goto label_23c408;
            case 0x23C40Cu: goto label_23c40c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C414u;
}
