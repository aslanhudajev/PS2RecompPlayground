#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_face_ang2
// Address: 0x23c418 - 0x23c46c
void get_face_ang2_0x23c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23c418u;

    // 0x23c418: 0x27bdfff0
    ctx->pc = 0x23c418u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c41c: 0xffbf0000
    ctx->pc = 0x23c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c420: 0x80182d
    ctx->pc = 0x23c420u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c424: 0x8c62033c
    ctx->pc = 0x23c424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 828)));
    // 0x23c428: 0x442000d
    ctx->pc = 0x23C428u;
    {
        const bool branch_taken_0x23c428 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23c428) {
            ctx->pc = 0x23C42Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23C460u;
            goto label_23c460;
        }
    }
    ctx->pc = 0x23C430u;
    // 0x23c430: 0x10a0000a
    ctx->pc = 0x23C430u;
    {
        const bool branch_taken_0x23c430 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C434u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x23c430) {
            ctx->pc = 0x23C45Cu;
            goto label_23c45c;
        }
    }
    ctx->pc = 0x23C438u;
    // 0x23c438: 0x442018
    ctx->pc = 0x23c438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23c43c: 0x3c020032
    ctx->pc = 0x23c43cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23c440: 0x24421be0
    ctx->pc = 0x23c440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x23c444: 0x822021
    ctx->pc = 0x23c444u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c448: 0x24840030
    ctx->pc = 0x23c448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x23c44c: 0xc09a2aa
    ctx->pc = 0x23C44Cu;
    SET_GPR_U32(ctx, 31, 0x23C454u);
    ctx->pc = 0x23C450u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 64));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C454u; }
    }
    if (ctx->pc != 0x23C454u) { return; }
    ctx->pc = 0x23C454u;
    // 0x23c454: 0x10000003
    ctx->pc = 0x23C454u;
    {
        const bool branch_taken_0x23c454 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C458u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x23c454) {
            ctx->pc = 0x23C464u;
            goto label_23c464;
        }
    }
    ctx->pc = 0x23C45Cu;
label_23c45c:
    // 0x23c45c: 0xc4600260
    ctx->pc = 0x23c45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23c460:
    // 0x23c460: 0xdfbf0000
    ctx->pc = 0x23c460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c464:
    // 0x23c464: 0x3e00008
    ctx->pc = 0x23C464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C45Cu: goto label_23c45c;
            case 0x23C460u: goto label_23c460;
            case 0x23C464u: goto label_23c464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C46Cu;
}
