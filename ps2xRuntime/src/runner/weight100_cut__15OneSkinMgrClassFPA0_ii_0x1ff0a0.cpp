#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: weight100_cut__15OneSkinMgrClassFPA0_ii
// Address: 0x1ff0a0 - 0x1ff18c
void weight100_cut__15OneSkinMgrClassFPA0_ii_0x1ff0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("weight100_cut__15OneSkinMgrClassFPA0_ii");


    ctx->pc = 0x1ff0a0u;

    // 0x1ff0a0: 0x8ca70000
    ctx->pc = 0x1ff0a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff0a4: 0x70a02628
    ctx->pc = 0x1ff0a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ff0a8: 0x2409ffff
    ctx->pc = 0x1ff0a8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff0ac: 0x24840004
    ctx->pc = 0x1ff0acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1ff0b0: 0x7082a
    ctx->pc = 0x1ff0b0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 7)));
    // 0x1ff0b4: 0x1020000a
    ctx->pc = 0x1FF0B4u;
    {
        const bool branch_taken_0x1ff0b4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF0B8u;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ff0b4) {
            ctx->pc = 0x1FF0E0u;
            goto label_1ff0e0;
        }
    }
    ctx->pc = 0x1FF0BCu;
label_1ff0bc:
    // 0x1ff0bc: 0x8c830000
    ctx->pc = 0x1ff0bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff0c0: 0x14c30003
    ctx->pc = 0x1FF0C0u;
    {
        const bool branch_taken_0x1ff0c0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        ctx->pc = 0x1FF0C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1ff0c0) {
            ctx->pc = 0x1FF0D0u;
            goto label_1ff0d0;
        }
    }
    ctx->pc = 0x1FF0C8u;
    // 0x1ff0c8: 0x10000005
    ctx->pc = 0x1FF0C8u;
    {
        const bool branch_taken_0x1ff0c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF0CCu;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x1ff0c8) {
            ctx->pc = 0x1FF0E0u;
            goto label_1ff0e0;
        }
    }
    ctx->pc = 0x1FF0D0u;
label_1ff0d0:
    // 0x1ff0d0: 0x25080001
    ctx->pc = 0x1ff0d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ff0d4: 0x107182a
    ctx->pc = 0x1ff0d4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x1ff0d8: 0x1460fff8
    ctx->pc = 0x1FF0D8u;
    {
        const bool branch_taken_0x1ff0d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ff0d8) {
            ctx->pc = 0x1FF0BCu;
            goto label_1ff0bc;
        }
    }
    ctx->pc = 0x1FF0E0u;
label_1ff0e0:
    // 0x1ff0e0: 0x24e40004
    ctx->pc = 0x1ff0e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4));
    // 0x1ff0e4: 0x2403fffc
    ctx->pc = 0x1ff0e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1ff0e8: 0x831824
    ctx->pc = 0x1ff0e8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff0ec: 0x31880
    ctx->pc = 0x1ff0ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ff0f0: 0xa33821
    ctx->pc = 0x1ff0f0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ff0f4: 0x3c033f80
    ctx->pc = 0x1ff0f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1ff0f8: 0x44830000
    ctx->pc = 0x1ff0f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1ff0fc: 0x2405fffe
    ctx->pc = 0x1ff0fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ff100: 0x1000001d
    ctx->pc = 0x1FF100u;
    {
        const bool branch_taken_0x1ff100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF104u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ff100) {
            ctx->pc = 0x1FF178u;
            goto label_1ff178;
        }
    }
    ctx->pc = 0x1FF108u;
label_1ff108:
    // 0x1ff108: 0x8ce80004
    ctx->pc = 0x1ff108u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ff10c: 0x11000016
    ctx->pc = 0x1FF10Cu;
    {
        const bool branch_taken_0x1ff10c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF110u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 16));
        if (branch_taken_0x1ff10c) {
            ctx->pc = 0x1FF168u;
            goto label_1ff168;
        }
    }
    ctx->pc = 0x1FF114u;
    // 0x1ff114: 0x0
    ctx->pc = 0x1ff114u;
    // NOP
label_1ff118:
    // 0x1ff118: 0x8cc30000
    ctx->pc = 0x1ff118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ff11c: 0x54690009
    ctx->pc = 0x1FF11Cu;
    {
        const bool branch_taken_0x1ff11c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 9));
        if (branch_taken_0x1ff11c) {
            ctx->pc = 0x1FF120u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
            ctx->pc = 0x1FF144u;
            goto label_1ff144;
        }
    }
    ctx->pc = 0x1FF124u;
    // 0x1ff124: 0xc4c10004
    ctx->pc = 0x1ff124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ff128: 0x46010032
    ctx->pc = 0x1ff128u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ff12c: 0x0
    ctx->pc = 0x1ff12cu;
    // NOP
    // 0x1ff130: 0x45000003
    ctx->pc = 0x1FF130u;
    {
        const bool branch_taken_0x1ff130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ff130) {
            ctx->pc = 0x1FF140u;
            goto label_1ff140;
        }
    }
    ctx->pc = 0x1FF138u;
    // 0x1ff138: 0xacc50000
    ctx->pc = 0x1ff138u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1ff13c: 0x0
    ctx->pc = 0x1ff13cu;
    // NOP
label_1ff140:
    // 0x1ff140: 0x24c60008
    ctx->pc = 0x1ff140u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
label_1ff144:
    // 0x1ff144: 0x8cc30000
    ctx->pc = 0x1ff144u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ff148: 0x0
    ctx->pc = 0x1ff148u;
    // NOP
    // 0x1ff14c: 0x0
    ctx->pc = 0x1ff14cu;
    // NOP
    // 0x1ff150: 0x0
    ctx->pc = 0x1ff150u;
    // NOP
    // 0x1ff154: 0x1464fffa
    ctx->pc = 0x1FF154u;
    {
        const bool branch_taken_0x1ff154 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1ff154) {
            ctx->pc = 0x1FF140u;
            goto label_1ff140;
        }
    }
    ctx->pc = 0x1FF15Cu;
    // 0x1ff15c: 0x2508ffff
    ctx->pc = 0x1ff15cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1ff160: 0x1500ffed
    ctx->pc = 0x1FF160u;
    {
        const bool branch_taken_0x1ff160 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FF164u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1ff160) {
            ctx->pc = 0x1FF118u;
            goto label_1ff118;
        }
    }
    ctx->pc = 0x1FF168u;
label_1ff168:
    // 0x1ff168: 0x8ce30000
    ctx->pc = 0x1ff168u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ff16c: 0x24630001
    ctx->pc = 0x1ff16cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ff170: 0x31900
    ctx->pc = 0x1ff170u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff174: 0xe33821
    ctx->pc = 0x1ff174u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1ff178:
    // 0x1ff178: 0x8ce30000
    ctx->pc = 0x1ff178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ff17c: 0x1c60ffe2
    ctx->pc = 0x1FF17Cu;
    {
        const bool branch_taken_0x1ff17c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ff17c) {
            ctx->pc = 0x1FF108u;
            goto label_1ff108;
        }
    }
    ctx->pc = 0x1FF184u;
    // 0x1ff184: 0x3e00008
    ctx->pc = 0x1FF184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF0BCu: goto label_1ff0bc;
            case 0x1FF0D0u: goto label_1ff0d0;
            case 0x1FF0E0u: goto label_1ff0e0;
            case 0x1FF108u: goto label_1ff108;
            case 0x1FF118u: goto label_1ff118;
            case 0x1FF140u: goto label_1ff140;
            case 0x1FF144u: goto label_1ff144;
            case 0x1FF168u: goto label_1ff168;
            case 0x1FF178u: goto label_1ff178;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF18Cu;
}
