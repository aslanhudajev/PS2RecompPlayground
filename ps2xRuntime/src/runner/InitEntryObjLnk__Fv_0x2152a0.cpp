#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InitEntryObjLnk__Fv
// Address: 0x2152a0 - 0x215310
void InitEntryObjLnk__Fv_0x2152a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InitEntryObjLnk__Fv");


    ctx->pc = 0x2152a0u;

    // 0x2152a0: 0x2403010d
    ctx->pc = 0x2152a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 269));
    // 0x2152a4: 0x3c010050
    ctx->pc = 0x2152a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2152a8: 0xa423ea2a
    ctx->pc = 0x2152a8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961706), (uint16_t)GPR_U32(ctx, 3));
    // 0x2152ac: 0x3c010050
    ctx->pc = 0x2152acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2152b0: 0xa420faf8
    ctx->pc = 0x2152b0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966008), (uint16_t)GPR_U32(ctx, 0));
    // 0x2152b4: 0x2403ffff
    ctx->pc = 0x2152b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2152b8: 0x3c010050
    ctx->pc = 0x2152b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2152bc: 0xa423fafa
    ctx->pc = 0x2152bcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966010), (uint16_t)GPR_U32(ctx, 3));
    // 0x2152c0: 0x3c030050
    ctx->pc = 0x2152c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x2152c4: 0x2465ea20
    ctx->pc = 0x2152c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x2152c8: 0x70002628
    ctx->pc = 0x2152c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2152cc:
    // 0x2152cc: 0x240300ab
    ctx->pc = 0x2152ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 171));
    // 0x2152d0: 0x5083000a
    ctx->pc = 0x2152D0u;
    {
        const bool branch_taken_0x2152d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2152d0) {
            ctx->pc = 0x2152D4u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x2152FCu;
            goto label_2152fc;
        }
    }
    ctx->pc = 0x2152D8u;
    // 0x2152d8: 0x240300a9
    ctx->pc = 0x2152d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 169));
    // 0x2152dc: 0x10830006
    ctx->pc = 0x2152DCu;
    {
        const bool branch_taken_0x2152dc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2152dc) {
            ctx->pc = 0x2152F8u;
            goto label_2152f8;
        }
    }
    ctx->pc = 0x2152E4u;
    // 0x2152e4: 0x24030001
    ctx->pc = 0x2152e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2152e8: 0x10830003
    ctx->pc = 0x2152E8u;
    {
        const bool branch_taken_0x2152e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2152e8) {
            ctx->pc = 0x2152F8u;
            goto label_2152f8;
        }
    }
    ctx->pc = 0x2152F0u;
    // 0x2152f0: 0xaca00000
    ctx->pc = 0x2152f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2152f4: 0xaca00004
    ctx->pc = 0x2152f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2152f8:
    // 0x2152f8: 0x24840001
    ctx->pc = 0x2152f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2152fc:
    // 0x2152fc: 0x2883010e
    ctx->pc = 0x2152fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 270));
    // 0x215300: 0x1460fff2
    ctx->pc = 0x215300u;
    {
        const bool branch_taken_0x215300 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x215304u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x215300) {
            ctx->pc = 0x2152CCu;
            goto label_2152cc;
        }
    }
    ctx->pc = 0x215308u;
    // 0x215308: 0x3e00008
    ctx->pc = 0x215308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2152CCu: goto label_2152cc;
            case 0x2152F8u: goto label_2152f8;
            case 0x2152FCu: goto label_2152fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215310u;
}
