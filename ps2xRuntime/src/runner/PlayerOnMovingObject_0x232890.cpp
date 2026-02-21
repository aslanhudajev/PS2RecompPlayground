#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerOnMovingObject
// Address: 0x232890 - 0x232944
void PlayerOnMovingObject_0x232890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x232890u;

    // 0x232890: 0x3c020031
    ctx->pc = 0x232890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x232894: 0x8c430018
    ctx->pc = 0x232894u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x232898: 0x24024010
    ctx->pc = 0x232898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
    // 0x23289c: 0x10620005
    ctx->pc = 0x23289Cu;
    {
        const bool branch_taken_0x23289c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2328A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23289c) {
            ctx->pc = 0x2328B4u;
            goto label_2328b4;
        }
    }
    ctx->pc = 0x2328A4u;
    // 0x2328a4: 0x3e00008
    ctx->pc = 0x2328A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2328A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2328ACu: goto label_2328ac;
            case 0x2328B4u: goto label_2328b4;
            case 0x2328D8u: goto label_2328d8;
            case 0x232914u: goto label_232914;
            case 0x232930u: goto label_232930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2328ACu;
label_2328ac:
    // 0x2328ac: 0x3e00008
    ctx->pc = 0x2328ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2328B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2328ACu: goto label_2328ac;
            case 0x2328B4u: goto label_2328b4;
            case 0x2328D8u: goto label_2328d8;
            case 0x232914u: goto label_232914;
            case 0x232930u: goto label_232930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2328B4u;
label_2328b4:
    // 0x2328b4: 0x24092b00
    ctx->pc = 0x2328b4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2328b8: 0x3c020032
    ctx->pc = 0x2328b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2328bc: 0x244a1bc0
    ctx->pc = 0x2328bcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2328c0: 0x24080001
    ctx->pc = 0x2328c0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2328c4: 0x3c060800
    ctx->pc = 0x2328c4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)2048 << 16));
    // 0x2328c8: 0x34c61000
    ctx->pc = 0x2328c8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 4096));
    // 0x2328cc: 0x3c070030
    ctx->pc = 0x2328ccu;
    SET_GPR_U32(ctx, 7, ((uint32_t)48 << 16));
    // 0x2328d0: 0xa91018
    ctx->pc = 0x2328d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2328d4: 0x0
    ctx->pc = 0x2328d4u;
    // NOP
label_2328d8:
    // 0x2328d8: 0x4a1821
    ctx->pc = 0x2328d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2328dc: 0x8c6200fc
    ctx->pc = 0x2328dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x2328e0: 0x54480013
    ctx->pc = 0x2328E0u;
    {
        const bool branch_taken_0x2328e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        if (branch_taken_0x2328e0) {
            ctx->pc = 0x2328E4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x232930u;
            goto label_232930;
        }
    }
    ctx->pc = 0x2328E8u;
    // 0x2328e8: 0x8c63089c
    ctx->pc = 0x2328e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 2204)));
    // 0x2328ec: 0x50600010
    ctx->pc = 0x2328ECu;
    {
        const bool branch_taken_0x2328ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2328ec) {
            ctx->pc = 0x2328F0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x232930u;
            goto label_232930;
        }
    }
    ctx->pc = 0x2328F4u;
    // 0x2328f4: 0x8c620028
    ctx->pc = 0x2328f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2328f8: 0x5040000d
    ctx->pc = 0x2328F8u;
    {
        const bool branch_taken_0x2328f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2328f8) {
            ctx->pc = 0x2328FCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x232930u;
            goto label_232930;
        }
    }
    ctx->pc = 0x232900u;
    // 0x232900: 0x8c620018
    ctx->pc = 0x232900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x232904: 0x10400003
    ctx->pc = 0x232904u;
    {
        const bool branch_taken_0x232904 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x232908u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
        if (branch_taken_0x232904) {
            ctx->pc = 0x232914u;
            goto label_232914;
        }
    }
    ctx->pc = 0x23290Cu;
    // 0x23290c: 0x8c420010
    ctx->pc = 0x23290cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x232910: 0x822025
    ctx->pc = 0x232910u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_232914:
    // 0x232914: 0x861024
    ctx->pc = 0x232914u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x232918: 0x54460005
    ctx->pc = 0x232918u;
    {
        const bool branch_taken_0x232918 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        if (branch_taken_0x232918) {
            ctx->pc = 0x23291Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x232930u;
            goto label_232930;
        }
    }
    ctx->pc = 0x232920u;
    // 0x232920: 0x871024
    ctx->pc = 0x232920u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x232924: 0x1440ffe1
    ctx->pc = 0x232924u;
    {
        const bool branch_taken_0x232924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x232924) {
            ctx->pc = 0x2328ACu;
            goto label_2328ac;
        }
    }
    ctx->pc = 0x23292Cu;
    // 0x23292c: 0x24a50001
    ctx->pc = 0x23292cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_232930:
    // 0x232930: 0x28a20004
    ctx->pc = 0x232930u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x232934: 0x1440ffe8
    ctx->pc = 0x232934u;
    {
        const bool branch_taken_0x232934 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x232938u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x232934) {
            ctx->pc = 0x2328D8u;
            goto label_2328d8;
        }
    }
    ctx->pc = 0x23293Cu;
    // 0x23293c: 0x3e00008
    ctx->pc = 0x23293Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232940u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2328ACu: goto label_2328ac;
            case 0x2328B4u: goto label_2328b4;
            case 0x2328D8u: goto label_2328d8;
            case 0x232914u: goto label_232914;
            case 0x232930u: goto label_232930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232944u;
}
