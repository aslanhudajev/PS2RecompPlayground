#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: turn_enemy_ang
// Address: 0x23c658 - 0x23c82c
void turn_enemy_ang_0x23c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23c658u;

    // 0x23c658: 0x8c8200e0
    ctx->pc = 0x23c658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x23c65c: 0x2842001c
    ctx->pc = 0x23c65cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 28));
    // 0x23c660: 0x14400003
    ctx->pc = 0x23C660u;
    {
        const bool branch_taken_0x23c660 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23C664u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23c660) {
            ctx->pc = 0x23C670u;
            goto label_23c670;
        }
    }
    ctx->pc = 0x23C668u;
    // 0x23c668: 0x3e00008
    ctx->pc = 0x23C668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C66Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C670u: goto label_23c670;
            case 0x23C6A0u: goto label_23c6a0;
            case 0x23C6C0u: goto label_23c6c0;
            case 0x23C6D0u: goto label_23c6d0;
            case 0x23C700u: goto label_23c700;
            case 0x23C72Cu: goto label_23c72c;
            case 0x23C750u: goto label_23c750;
            case 0x23C770u: goto label_23c770;
            case 0x23C794u: goto label_23c794;
            case 0x23C79Cu: goto label_23c79c;
            case 0x23C7ACu: goto label_23c7ac;
            case 0x23C7B0u: goto label_23c7b0;
            case 0x23C7C0u: goto label_23c7c0;
            case 0x23C7CCu: goto label_23c7cc;
            case 0x23C7F8u: goto label_23c7f8;
            case 0x23C824u: goto label_23c824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C670u;
label_23c670:
    // 0x23c670: 0x3c030033
    ctx->pc = 0x23c670u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x23c674: 0x2463dda8
    ctx->pc = 0x23c674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958504));
    // 0x23c678: 0x8c820000
    ctx->pc = 0x23c678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23c67c: 0x21080
    ctx->pc = 0x23c67cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c680: 0x431021
    ctx->pc = 0x23c680u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c684: 0xc4430000
    ctx->pc = 0x23c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23c688: 0x8c8300e0
    ctx->pc = 0x23c688u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x23c68c: 0x24020001
    ctx->pc = 0x23c68cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c690: 0x14620003
    ctx->pc = 0x23C690u;
    {
        const bool branch_taken_0x23c690 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23C694u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x23c690) {
            ctx->pc = 0x23C6A0u;
            goto label_23c6a0;
        }
    }
    ctx->pc = 0x23C698u;
    // 0x23c698: 0x3e00008
    ctx->pc = 0x23C698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C69Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C670u: goto label_23c670;
            case 0x23C6A0u: goto label_23c6a0;
            case 0x23C6C0u: goto label_23c6c0;
            case 0x23C6D0u: goto label_23c6d0;
            case 0x23C700u: goto label_23c700;
            case 0x23C72Cu: goto label_23c72c;
            case 0x23C750u: goto label_23c750;
            case 0x23C770u: goto label_23c770;
            case 0x23C794u: goto label_23c794;
            case 0x23C79Cu: goto label_23c79c;
            case 0x23C7ACu: goto label_23c7ac;
            case 0x23C7B0u: goto label_23c7b0;
            case 0x23C7C0u: goto label_23c7c0;
            case 0x23C7CCu: goto label_23c7cc;
            case 0x23C7F8u: goto label_23c7f8;
            case 0x23C824u: goto label_23c824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C6A0u;
label_23c6a0:
    // 0x23c6a0: 0x8c8400e0
    ctx->pc = 0x23c6a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x23c6a4: 0x24020004
    ctx->pc = 0x23c6a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x23c6a8: 0x10820005
    ctx->pc = 0x23C6A8u;
    {
        const bool branch_taken_0x23c6a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x23C6ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
        if (branch_taken_0x23c6a8) {
            ctx->pc = 0x23C6C0u;
            goto label_23c6c0;
        }
    }
    ctx->pc = 0x23C6B0u;
    // 0x23c6b0: 0x10820003
    ctx->pc = 0x23C6B0u;
    {
        const bool branch_taken_0x23c6b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x23C6B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x23c6b0) {
            ctx->pc = 0x23C6C0u;
            goto label_23c6c0;
        }
    }
    ctx->pc = 0x23C6B8u;
    // 0x23c6b8: 0x14820005
    ctx->pc = 0x23C6B8u;
    {
        const bool branch_taken_0x23c6b8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x23C6BCu;
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x23c6b8) {
            ctx->pc = 0x23C6D0u;
            goto label_23c6d0;
        }
    }
    ctx->pc = 0x23C6C0u;
label_23c6c0:
    // 0x23c6c0: 0x3c014040
    ctx->pc = 0x23c6c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x23c6c4: 0x44810000
    ctx->pc = 0x23c6c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c6c8: 0x460018c2
    ctx->pc = 0x23c6c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x23c6cc: 0x46000886
    ctx->pc = 0x23c6ccu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_23c6d0:
    // 0x23c6d0: 0x46026041
    ctx->pc = 0x23c6d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x23c6d4: 0x3c014049
    ctx->pc = 0x23c6d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23c6d8: 0x34210fdb
    ctx->pc = 0x23c6d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c6dc: 0x44810000
    ctx->pc = 0x23c6dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c6e0: 0x46010034
    ctx->pc = 0x23c6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c6e4: 0x45000006
    ctx->pc = 0x23C6E4u;
    {
        const bool branch_taken_0x23c6e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c6e4) {
            ctx->pc = 0x23C700u;
            goto label_23c700;
        }
    }
    ctx->pc = 0x23C6ECu;
    // 0x23c6ec: 0x3c0140c9
    ctx->pc = 0x23c6ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c6f0: 0x34210fdb
    ctx->pc = 0x23c6f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c6f4: 0x44810000
    ctx->pc = 0x23c6f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c6f8: 0x1000000c
    ctx->pc = 0x23C6F8u;
    {
        const bool branch_taken_0x23c6f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C6FCu;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x23c6f8) {
            ctx->pc = 0x23C72Cu;
            goto label_23c72c;
        }
    }
    ctx->pc = 0x23C700u;
label_23c700:
    // 0x23c700: 0x3c01c049
    ctx->pc = 0x23c700u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23c704: 0x34210fdb
    ctx->pc = 0x23c704u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c708: 0x44810000
    ctx->pc = 0x23c708u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c70c: 0x46000836
    ctx->pc = 0x23c70cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c710: 0x0
    ctx->pc = 0x23c710u;
    // NOP
    // 0x23c714: 0x45020005
    ctx->pc = 0x23C714u;
    {
        const bool branch_taken_0x23c714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c714) {
            ctx->pc = 0x23C718u;
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x23C72Cu;
            goto label_23c72c;
        }
    }
    ctx->pc = 0x23C71Cu;
    // 0x23c71c: 0x3c0140c9
    ctx->pc = 0x23c71cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c720: 0x34210fdb
    ctx->pc = 0x23c720u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c724: 0x44810000
    ctx->pc = 0x23c724u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c728: 0x46000800
    ctx->pc = 0x23c728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23c72c:
    // 0x23c72c: 0x46000046
    ctx->pc = 0x23c72cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x23c730: 0x3c030031
    ctx->pc = 0x23c730u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x23c734: 0x8c62ffbc
    ctx->pc = 0x23c734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x23c738: 0x4400005
    ctx->pc = 0x23C738u;
    {
        const bool branch_taken_0x23c738 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23C73Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x23c738) {
            ctx->pc = 0x23C750u;
            goto label_23c750;
        }
    }
    ctx->pc = 0x23C740u;
    // 0x23c740: 0x44820000
    ctx->pc = 0x23c740u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x23c744: 0x46800020
    ctx->pc = 0x23c744u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x23c748: 0x10000009
    ctx->pc = 0x23C748u;
    {
        const bool branch_taken_0x23c748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C74Cu;
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        if (branch_taken_0x23c748) {
            ctx->pc = 0x23C770u;
            goto label_23c770;
        }
    }
    ctx->pc = 0x23C750u;
label_23c750:
    // 0x23c750: 0x8c820000
    ctx->pc = 0x23c750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23c754: 0x30430001
    ctx->pc = 0x23c754u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x23c758: 0x21042
    ctx->pc = 0x23c758u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x23c75c: 0x621825
    ctx->pc = 0x23c75cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23c760: 0x44830000
    ctx->pc = 0x23c760u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x23c764: 0x46800020
    ctx->pc = 0x23c764u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x23c768: 0x46000000
    ctx->pc = 0x23c768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x23c76c: 0x460018c2
    ctx->pc = 0x23c76cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_23c770:
    // 0x23c770: 0x44800000
    ctx->pc = 0x23c770u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x23c774: 0x46010036
    ctx->pc = 0x23c774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c778: 0x0
    ctx->pc = 0x23c778u;
    // NOP
    // 0x23c77c: 0x45020007
    ctx->pc = 0x23C77Cu;
    {
        const bool branch_taken_0x23c77c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c77c) {
            ctx->pc = 0x23C780u;
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->pc = 0x23C79Cu;
            goto label_23c79c;
        }
    }
    ctx->pc = 0x23C784u;
    // 0x23c784: 0x46030836
    ctx->pc = 0x23c784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c788: 0x0
    ctx->pc = 0x23c788u;
    // NOP
    // 0x23c78c: 0x45030001
    ctx->pc = 0x23C78Cu;
    {
        const bool branch_taken_0x23c78c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c78c) {
            ctx->pc = 0x23C790u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x23C794u;
            goto label_23c794;
        }
    }
    ctx->pc = 0x23C794u;
label_23c794:
    // 0x23c794: 0x10000006
    ctx->pc = 0x23C794u;
    {
        const bool branch_taken_0x23c794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C798u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23c794) {
            ctx->pc = 0x23C7B0u;
            goto label_23c7b0;
        }
    }
    ctx->pc = 0x23C79Cu;
label_23c79c:
    // 0x23c79c: 0x46010036
    ctx->pc = 0x23c79cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c7a0: 0x0
    ctx->pc = 0x23c7a0u;
    // NOP
    // 0x23c7a4: 0x45030001
    ctx->pc = 0x23C7A4u;
    {
        const bool branch_taken_0x23c7a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c7a4) {
            ctx->pc = 0x23C7A8u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x23C7ACu;
            goto label_23c7ac;
        }
    }
    ctx->pc = 0x23C7ACu;
label_23c7ac:
    // 0x23c7ac: 0x2402ffff
    ctx->pc = 0x23c7acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c7b0:
    // 0x23c7b0: 0x10a00003
    ctx->pc = 0x23C7B0u;
    {
        const bool branch_taken_0x23c7b0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x23c7b0) {
            ctx->pc = 0x23C7C0u;
            goto label_23c7c0;
        }
    }
    ctx->pc = 0x23C7B8u;
    // 0x23c7b8: 0x10000004
    ctx->pc = 0x23C7B8u;
    {
        const bool branch_taken_0x23c7b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C7BCu;
        ctx->f[2] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x23c7b8) {
            ctx->pc = 0x23C7CCu;
            goto label_23c7cc;
        }
    }
    ctx->pc = 0x23C7C0u;
label_23c7c0:
    // 0x23c7c0: 0x58400002
    ctx->pc = 0x23C7C0u;
    {
        const bool branch_taken_0x23c7c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23c7c0) {
            ctx->pc = 0x23C7C4u;
            ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
            ctx->pc = 0x23C7CCu;
            goto label_23c7cc;
        }
    }
    ctx->pc = 0x23C7C8u;
    // 0x23c7c8: 0x46031080
    ctx->pc = 0x23c7c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_23c7cc:
    // 0x23c7cc: 0x3c014049
    ctx->pc = 0x23c7ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23c7d0: 0x34210fdb
    ctx->pc = 0x23c7d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c7d4: 0x44810000
    ctx->pc = 0x23c7d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c7d8: 0x46020034
    ctx->pc = 0x23c7d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c7dc: 0x45000006
    ctx->pc = 0x23C7DCu;
    {
        const bool branch_taken_0x23c7dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c7dc) {
            ctx->pc = 0x23C7F8u;
            goto label_23c7f8;
        }
    }
    ctx->pc = 0x23C7E4u;
    // 0x23c7e4: 0x3c0140c9
    ctx->pc = 0x23c7e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c7e8: 0x34210fdb
    ctx->pc = 0x23c7e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c7ec: 0x44810000
    ctx->pc = 0x23c7ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c7f0: 0x3e00008
    ctx->pc = 0x23C7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C7F4u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C670u: goto label_23c670;
            case 0x23C6A0u: goto label_23c6a0;
            case 0x23C6C0u: goto label_23c6c0;
            case 0x23C6D0u: goto label_23c6d0;
            case 0x23C700u: goto label_23c700;
            case 0x23C72Cu: goto label_23c72c;
            case 0x23C750u: goto label_23c750;
            case 0x23C770u: goto label_23c770;
            case 0x23C794u: goto label_23c794;
            case 0x23C79Cu: goto label_23c79c;
            case 0x23C7ACu: goto label_23c7ac;
            case 0x23C7B0u: goto label_23c7b0;
            case 0x23C7C0u: goto label_23c7c0;
            case 0x23C7CCu: goto label_23c7cc;
            case 0x23C7F8u: goto label_23c7f8;
            case 0x23C824u: goto label_23c824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C7F8u;
label_23c7f8:
    // 0x23c7f8: 0x3c01c049
    ctx->pc = 0x23c7f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23c7fc: 0x34210fdb
    ctx->pc = 0x23c7fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c800: 0x44810000
    ctx->pc = 0x23c800u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c804: 0x46001036
    ctx->pc = 0x23c804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c808: 0x45000006
    ctx->pc = 0x23C808u;
    {
        const bool branch_taken_0x23c808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c808) {
            ctx->pc = 0x23C824u;
            goto label_23c824;
        }
    }
    ctx->pc = 0x23C810u;
    // 0x23c810: 0x3c0140c9
    ctx->pc = 0x23c810u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c814: 0x34210fdb
    ctx->pc = 0x23c814u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c818: 0x44810000
    ctx->pc = 0x23c818u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c81c: 0x3e00008
    ctx->pc = 0x23C81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C820u;
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C670u: goto label_23c670;
            case 0x23C6A0u: goto label_23c6a0;
            case 0x23C6C0u: goto label_23c6c0;
            case 0x23C6D0u: goto label_23c6d0;
            case 0x23C700u: goto label_23c700;
            case 0x23C72Cu: goto label_23c72c;
            case 0x23C750u: goto label_23c750;
            case 0x23C770u: goto label_23c770;
            case 0x23C794u: goto label_23c794;
            case 0x23C79Cu: goto label_23c79c;
            case 0x23C7ACu: goto label_23c7ac;
            case 0x23C7B0u: goto label_23c7b0;
            case 0x23C7C0u: goto label_23c7c0;
            case 0x23C7CCu: goto label_23c7cc;
            case 0x23C7F8u: goto label_23c7f8;
            case 0x23C824u: goto label_23c824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C824u;
label_23c824:
    // 0x23c824: 0x3e00008
    ctx->pc = 0x23C824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C828u;
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C670u: goto label_23c670;
            case 0x23C6A0u: goto label_23c6a0;
            case 0x23C6C0u: goto label_23c6c0;
            case 0x23C6D0u: goto label_23c6d0;
            case 0x23C700u: goto label_23c700;
            case 0x23C72Cu: goto label_23c72c;
            case 0x23C750u: goto label_23c750;
            case 0x23C770u: goto label_23c770;
            case 0x23C794u: goto label_23c794;
            case 0x23C79Cu: goto label_23c79c;
            case 0x23C7ACu: goto label_23c7ac;
            case 0x23C7B0u: goto label_23c7b0;
            case 0x23C7C0u: goto label_23c7c0;
            case 0x23C7CCu: goto label_23c7cc;
            case 0x23C7F8u: goto label_23c7f8;
            case 0x23C824u: goto label_23c824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C82Cu;
}
