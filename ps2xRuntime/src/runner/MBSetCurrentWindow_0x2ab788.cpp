#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetCurrentWindow
// Address: 0x2ab788 - 0x2ab800
void MBSetCurrentWindow_0x2ab788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab788u;

    // 0x2ab788: 0x27bdfff0
    ctx->pc = 0x2ab788u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab78c: 0xffbf0000
    ctx->pc = 0x2ab78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab790: 0x80302d
    ctx->pc = 0x2ab790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab794: 0x3c020036
    ctx->pc = 0x2ab794u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab798: 0x4c00006
    ctx->pc = 0x2AB798u;
    {
        const bool branch_taken_0x2ab798 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2AB79Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2ab798) {
            ctx->pc = 0x2AB7B4u;
            goto label_2ab7b4;
        }
    }
    ctx->pc = 0x2AB7A0u;
    // 0x2ab7a0: 0x8c820018
    ctx->pc = 0x2ab7a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab7a4: 0x8c420004
    ctx->pc = 0x2ab7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ab7a8: 0xc2102a
    ctx->pc = 0x2ab7a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x2ab7ac: 0x54400006
    ctx->pc = 0x2AB7ACu;
    {
        const bool branch_taken_0x2ab7ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ab7ac) {
            ctx->pc = 0x2AB7B0u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->pc = 0x2AB7C8u;
            goto label_2ab7c8;
        }
    }
    ctx->pc = 0x2AB7B4u;
label_2ab7b4:
    // 0x2ab7b4: 0x3c04003b
    ctx->pc = 0x2ab7b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2ab7b8: 0xc0b492e
    ctx->pc = 0x2AB7B8u;
    SET_GPR_U32(ctx, 31, 0x2AB7C0u);
    ctx->pc = 0x2AB7BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964456));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7C0u; }
    }
    if (ctx->pc != 0x2AB7C0u) { return; }
    ctx->pc = 0x2AB7C0u;
    // 0x2ab7c0: 0x1000000c
    ctx->pc = 0x2AB7C0u;
    {
        const bool branch_taken_0x2ab7c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AB7C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2ab7c0) {
            ctx->pc = 0x2AB7F4u;
            goto label_2ab7f4;
        }
    }
    ctx->pc = 0x2AB7C8u;
label_2ab7c8:
    // 0x2ab7c8: 0x240303d0
    ctx->pc = 0x2ab7c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 976));
    // 0x2ab7cc: 0xc31818
    ctx->pc = 0x2ab7ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ab7d0: 0x8ca20000
    ctx->pc = 0x2ab7d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ab7d4: 0x621021
    ctx->pc = 0x2ab7d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab7d8: 0xac820004
    ctx->pc = 0x2ab7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2ab7dc: 0x3c020036
    ctx->pc = 0x2ab7dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab7e0: 0x8c44dee8
    ctx->pc = 0x2ab7e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958824)));
    // 0x2ab7e4: 0x8ca20000
    ctx->pc = 0x2ab7e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ab7e8: 0x621821
    ctx->pc = 0x2ab7e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ab7ec: 0xac830000
    ctx->pc = 0x2ab7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ab7f0: 0xc0102d
    ctx->pc = 0x2ab7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ab7f4:
    // 0x2ab7f4: 0xdfbf0000
    ctx->pc = 0x2ab7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab7f8: 0x3e00008
    ctx->pc = 0x2AB7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB7FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB7B4u: goto label_2ab7b4;
            case 0x2AB7C8u: goto label_2ab7c8;
            case 0x2AB7F4u: goto label_2ab7f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB800u;
}
