#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_event
// Address: 0x26c310 - 0x26c3f8
void MoveCam_event_0x26c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26c310u;

    // 0x26c310: 0x27bdffd0
    ctx->pc = 0x26c310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c314: 0xffbf0020
    ctx->pc = 0x26c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c318: 0xffb10010
    ctx->pc = 0x26c318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26c31c: 0xffb00000
    ctx->pc = 0x26c31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c320: 0x240301a0
    ctx->pc = 0x26c320u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26c324: 0x831818
    ctx->pc = 0x26c324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26c328: 0x3c020034
    ctx->pc = 0x26c328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c32c: 0x2442eb60
    ctx->pc = 0x26c32cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26c330: 0x628821
    ctx->pc = 0x26c330u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c334: 0x3c020034
    ctx->pc = 0x26c334u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c338: 0x8c43f944
    ctx->pc = 0x26c338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965572)));
    // 0x26c33c: 0x24020001
    ctx->pc = 0x26c33cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c340: 0x1462000e
    ctx->pc = 0x26C340u;
    {
        const bool branch_taken_0x26c340 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26C344u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26c340) {
            ctx->pc = 0x26C37Cu;
            goto label_26c37c;
        }
    }
    ctx->pc = 0x26C348u;
    // 0x26c348: 0x282d
    ctx->pc = 0x26c348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c34c: 0x3c020032
    ctx->pc = 0x26c34cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26c350: 0x24431bc0
    ctx->pc = 0x26c350u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x26c354: 0x24060001
    ctx->pc = 0x26c354u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_26c358:
    // 0x26c358: 0x8c6200fc
    ctx->pc = 0x26c358u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x26c35c: 0x14460004
    ctx->pc = 0x26C35Cu;
    {
        const bool branch_taken_0x26c35c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x26C360u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x26c35c) {
            ctx->pc = 0x26C370u;
            goto label_26c370;
        }
    }
    ctx->pc = 0x26C364u;
    // 0x26c364: 0x8c6201dc
    ctx->pc = 0x26c364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x26c368: 0x38420001
    ctx->pc = 0x26c368u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x26c36c: 0x2800b
    ctx->pc = 0x26c36cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
label_26c370:
    // 0x26c370: 0x28a20004
    ctx->pc = 0x26c370u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x26c374: 0x1440fff8
    ctx->pc = 0x26C374u;
    {
        const bool branch_taken_0x26c374 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26C378u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11008));
        if (branch_taken_0x26c374) {
            ctx->pc = 0x26C358u;
            goto label_26c358;
        }
    }
    ctx->pc = 0x26C37Cu;
label_26c37c:
    // 0x26c37c: 0x12000018
    ctx->pc = 0x26C37Cu;
    {
        const bool branch_taken_0x26c37c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x26C380u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26c37c) {
            ctx->pc = 0x26C3E0u;
            goto label_26c3e0;
        }
    }
    ctx->pc = 0x26C384u;
    // 0x26c384: 0x2403ffff
    ctx->pc = 0x26c384u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c388: 0xac43f944
    ctx->pc = 0x26c388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965572), GPR_U32(ctx, 3));
    // 0x26c38c: 0x3c020034
    ctx->pc = 0x26c38cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c390: 0xac43f948
    ctx->pc = 0x26c390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965576), GPR_U32(ctx, 3));
    // 0x26c394: 0x3c020032
    ctx->pc = 0x26c394u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26c398: 0xac40080c
    ctx->pc = 0x26c398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2060), GPR_U32(ctx, 0));
    // 0x26c39c: 0x3c020032
    ctx->pc = 0x26c39cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26c3a0: 0xac400808
    ctx->pc = 0x26c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 0));
    // 0x26c3a4: 0x3c020034
    ctx->pc = 0x26c3a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c3a8: 0xac40f520
    ctx->pc = 0x26c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964512), GPR_U32(ctx, 0));
    // 0x26c3ac: 0x282d
    ctx->pc = 0x26c3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3b0: 0xc099c34
    ctx->pc = 0x26C3B0u;
    SET_GPR_U32(ctx, 31, 0x26C3B8u);
    ctx->pc = 0x26C3B4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C3B8u; }
    }
    if (ctx->pc != 0x26C3B8u) { return; }
    ctx->pc = 0x26C3B8u;
    // 0x26c3b8: 0xae200000
    ctx->pc = 0x26c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x26c3bc: 0x3c020031
    ctx->pc = 0x26c3bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26c3c0: 0xdc420e28
    ctx->pc = 0x26c3c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x26c3c4: 0x30420004
    ctx->pc = 0x26c3c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x26c3c8: 0x10400005
    ctx->pc = 0x26C3C8u;
    {
        const bool branch_taken_0x26c3c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26C3CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26c3c8) {
            ctx->pc = 0x26C3E0u;
            goto label_26c3e0;
        }
    }
    ctx->pc = 0x26C3D0u;
    // 0x26c3d0: 0xdc430e38
    ctx->pc = 0x26c3d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 3640)));
    // 0x26c3d4: 0x24040004
    ctx->pc = 0x26c3d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x26c3d8: 0x641825
    ctx->pc = 0x26c3d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26c3dc: 0xfc430e38
    ctx->pc = 0x26c3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 3640), GPR_U64(ctx, 3));
label_26c3e0:
    // 0x26c3e0: 0x2e020001
    ctx->pc = 0x26c3e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 1));
    // 0x26c3e4: 0xdfbf0020
    ctx->pc = 0x26c3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c3e8: 0xdfb10010
    ctx->pc = 0x26c3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c3ec: 0xdfb00000
    ctx->pc = 0x26c3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c3f0: 0x3e00008
    ctx->pc = 0x26C3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C3F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C358u: goto label_26c358;
            case 0x26C370u: goto label_26c370;
            case 0x26C37Cu: goto label_26c37c;
            case 0x26C3E0u: goto label_26c3e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26C3F8u;
}
