#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: floorf
// Address: 0x1505c8 - 0x1506ac
void floorf_0x1505c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("floorf");


    ctx->pc = 0x1505c8u;

    // 0x1505c8: 0x44026000
    ctx->pc = 0x1505c8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[12]);
    // 0x1505cc: 0x40202d
    ctx->pc = 0x1505ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505d0: 0x415c3
    ctx->pc = 0x1505d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x1505d4: 0x304200ff
    ctx->pc = 0x1505d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1505d8: 0x2445ff81
    ctx->pc = 0x1505d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x1505dc: 0x28a30017
    ctx->pc = 0x1505dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 23));
    // 0x1505e0: 0x5060002b
    ctx->pc = 0x1505E0u;
    {
        const bool branch_taken_0x1505e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1505e0) {
            ctx->pc = 0x1505E4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
            ctx->pc = 0x150690u;
            goto label_150690;
        }
    }
    ctx->pc = 0x1505E8u;
    // 0x1505e8: 0x4a30012
    ctx->pc = 0x1505E8u;
    {
        const bool branch_taken_0x1505e8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1505e8) {
            ctx->pc = 0x1505ECu;
            SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
            ctx->pc = 0x150634u;
            goto label_150634;
        }
    }
    ctx->pc = 0x1505F0u;
    // 0x1505f0: 0x3c017149
    ctx->pc = 0x1505f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x1505f4: 0x3421f2ca
    ctx->pc = 0x1505f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62154));
    // 0x1505f8: 0x44810000
    ctx->pc = 0x1505f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x1505fc: 0x44800800
    ctx->pc = 0x1505fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x150600: 0x46006000
    ctx->pc = 0x150600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x150604: 0x46000834
    ctx->pc = 0x150604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150608: 0x45000025
    ctx->pc = 0x150608u;
    {
        const bool branch_taken_0x150608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x150608) {
            ctx->pc = 0x1506A0u;
            goto label_1506a0;
        }
    }
    ctx->pc = 0x150610u;
    // 0x150610: 0x4800003
    ctx->pc = 0x150610u;
    {
        const bool branch_taken_0x150610 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x150614u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
        if (branch_taken_0x150610) {
            ctx->pc = 0x150620u;
            goto label_150620;
        }
    }
    ctx->pc = 0x150618u;
    // 0x150618: 0x10000021
    ctx->pc = 0x150618u;
    {
        const bool branch_taken_0x150618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15061Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x150618) {
            ctx->pc = 0x1506A0u;
            goto label_1506a0;
        }
    }
    ctx->pc = 0x150620u;
label_150620:
    // 0x150620: 0x3c03bf80
    ctx->pc = 0x150620u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x150624: 0x3442ffff
    ctx->pc = 0x150624u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x150628: 0x821024
    ctx->pc = 0x150628u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15062c: 0x1000001c
    ctx->pc = 0x15062Cu;
    {
        const bool branch_taken_0x15062c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150630u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
        if (branch_taken_0x15062c) {
            ctx->pc = 0x1506A0u;
            goto label_1506a0;
        }
    }
    ctx->pc = 0x150634u;
label_150634:
    // 0x150634: 0x3442ffff
    ctx->pc = 0x150634u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x150638: 0xa23007
    ctx->pc = 0x150638u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x15063c: 0x861824
    ctx->pc = 0x15063cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x150640: 0x14600003
    ctx->pc = 0x150640u;
    {
        const bool branch_taken_0x150640 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x150640) {
            ctx->pc = 0x150650u;
            goto label_150650;
        }
    }
    ctx->pc = 0x150648u;
label_150648:
    // 0x150648: 0x3e00008
    ctx->pc = 0x150648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15064Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150620u: goto label_150620;
            case 0x150634u: goto label_150634;
            case 0x150648u: goto label_150648;
            case 0x150650u: goto label_150650;
            case 0x150688u: goto label_150688;
            case 0x150690u: goto label_150690;
            case 0x1506A0u: goto label_1506a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x150650u;
label_150650:
    // 0x150650: 0x3c017149
    ctx->pc = 0x150650u;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x150654: 0x3421f2ca
    ctx->pc = 0x150654u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62154));
    // 0x150658: 0x44810000
    ctx->pc = 0x150658u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x15065c: 0x44800800
    ctx->pc = 0x15065cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x150660: 0x46006000
    ctx->pc = 0x150660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x150664: 0x46000834
    ctx->pc = 0x150664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150668: 0x4500000d
    ctx->pc = 0x150668u;
    {
        const bool branch_taken_0x150668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x150668) {
            ctx->pc = 0x1506A0u;
            goto label_1506a0;
        }
    }
    ctx->pc = 0x150670u;
    // 0x150670: 0x4810005
    ctx->pc = 0x150670u;
    {
        const bool branch_taken_0x150670 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x150674u;
        SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        if (branch_taken_0x150670) {
            ctx->pc = 0x150688u;
            goto label_150688;
        }
    }
    ctx->pc = 0x150678u;
    // 0x150678: 0x3c020080
    ctx->pc = 0x150678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x15067c: 0xa21007
    ctx->pc = 0x15067cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x150680: 0x822021
    ctx->pc = 0x150680u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x150684: 0x61027
    ctx->pc = 0x150684u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_150688:
    // 0x150688: 0x10000005
    ctx->pc = 0x150688u;
    {
        const bool branch_taken_0x150688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15068Cu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x150688) {
            ctx->pc = 0x1506A0u;
            goto label_1506a0;
        }
    }
    ctx->pc = 0x150690u;
label_150690:
    // 0x150690: 0x14a2ffed
    ctx->pc = 0x150690u;
    {
        const bool branch_taken_0x150690 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x150690) {
            ctx->pc = 0x150648u;
            goto label_150648;
        }
    }
    ctx->pc = 0x150698u;
    // 0x150698: 0x3e00008
    ctx->pc = 0x150698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15069Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150620u: goto label_150620;
            case 0x150634u: goto label_150634;
            case 0x150648u: goto label_150648;
            case 0x150650u: goto label_150650;
            case 0x150688u: goto label_150688;
            case 0x150690u: goto label_150690;
            case 0x1506A0u: goto label_1506a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1506A0u;
label_1506a0:
    // 0x1506a0: 0x44846000
    ctx->pc = 0x1506a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 4);
    // 0x1506a4: 0x3e00008
    ctx->pc = 0x1506A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1506A8u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150620u: goto label_150620;
            case 0x150634u: goto label_150634;
            case 0x150648u: goto label_150648;
            case 0x150650u: goto label_150650;
            case 0x150688u: goto label_150688;
            case 0x150690u: goto label_150690;
            case 0x1506A0u: goto label_1506a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1506ACu;
}
