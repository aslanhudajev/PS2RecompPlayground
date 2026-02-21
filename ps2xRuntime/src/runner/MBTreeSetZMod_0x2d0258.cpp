#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeSetZMod
// Address: 0x2d0258 - 0x2d0300
void MBTreeSetZMod_0x2d0258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0258u;

label_2d0258:
    // 0x2d0258: 0x27bdffb0
    ctx->pc = 0x2d0258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d025c: 0xffbf0040
    ctx->pc = 0x2d025cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d0260: 0xffb30030
    ctx->pc = 0x2d0260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d0264: 0xffb20020
    ctx->pc = 0x2d0264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d0268: 0xffb10010
    ctx->pc = 0x2d0268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d026c: 0xffb00000
    ctx->pc = 0x2d026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0270: 0x80802d
    ctx->pc = 0x2d0270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0274: 0xa0902d
    ctx->pc = 0x2d0274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0278: 0xc0882d
    ctx->pc = 0x2d0278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d027c: 0x1000000b
    ctx->pc = 0x2D027Cu;
    {
        const bool branch_taken_0x2d027c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0280u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d027c) {
            ctx->pc = 0x2D02ACu;
            goto label_2d02ac;
        }
    }
    ctx->pc = 0x2D0284u;
    // 0x2d0284: 0x0
    ctx->pc = 0x2d0284u;
    // NOP
label_2d0288:
    // 0x2d0288: 0x12000017
    ctx->pc = 0x2D0288u;
    {
        const bool branch_taken_0x2d0288 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D028Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2d0288) {
            ctx->pc = 0x2D02E8u;
            goto label_2d02e8;
        }
    }
    ctx->pc = 0x2D0290u;
    // 0x2d0290: 0x8e10007c
    ctx->pc = 0x2d0290u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d0294: 0x52000015
    ctx->pc = 0x2D0294u;
    {
        const bool branch_taken_0x2d0294 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0294) {
            ctx->pc = 0x2D0298u;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x2D02ECu;
            goto label_2d02ec;
        }
    }
    ctx->pc = 0x2D029Cu;
    // 0x2d029c: 0x8e020060
    ctx->pc = 0x2d029cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d02a0: 0x30420010
    ctx->pc = 0x2d02a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d02a4: 0x1440fff8
    ctx->pc = 0x2D02A4u;
    {
        const bool branch_taken_0x2d02a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d02a4) {
            ctx->pc = 0x2D0288u;
            goto label_2d0288;
        }
    }
    ctx->pc = 0x2D02ACu;
label_2d02ac:
    // 0x2d02ac: 0x5200000e
    ctx->pc = 0x2D02ACu;
    {
        const bool branch_taken_0x2d02ac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d02ac) {
            ctx->pc = 0x2D02B0u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x2D02E8u;
            goto label_2d02e8;
        }
    }
    ctx->pc = 0x2D02B4u;
    // 0x2d02b4: 0x1220000a
    ctx->pc = 0x2D02B4u;
    {
        const bool branch_taken_0x2d02b4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D02B8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 18));
        if (branch_taken_0x2d02b4) {
            ctx->pc = 0x2D02E0u;
            goto label_2d02e0;
        }
    }
    ctx->pc = 0x2D02BCu;
    // 0x2d02bc: 0x8e040078
    ctx->pc = 0x2d02bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2d02c0: 0x10800007
    ctx->pc = 0x2D02C0u;
    {
        const bool branch_taken_0x2d02c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d02c0) {
            ctx->pc = 0x2D02E0u;
            goto label_2d02e0;
        }
    }
    ctx->pc = 0x2D02C8u;
    // 0x2d02c8: 0x8c820060
    ctx->pc = 0x2d02c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d02cc: 0x30420010
    ctx->pc = 0x2d02ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d02d0: 0x14400003
    ctx->pc = 0x2D02D0u;
    {
        const bool branch_taken_0x2d02d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D02D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d02d0) {
            ctx->pc = 0x2D02E0u;
            goto label_2d02e0;
        }
    }
    ctx->pc = 0x2D02D8u;
    // 0x2d02d8: 0xc0b4096
    ctx->pc = 0x2D02D8u;
    SET_GPR_U32(ctx, 31, 0x2D02E0u);
    ctx->pc = 0x2D02DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D0258u;
    goto label_2d0258;
    ctx->pc = 0x2D02E0u;
label_2d02e0:
    // 0x2d02e0: 0x1233ffe9
    ctx->pc = 0x2D02E0u;
    {
        const bool branch_taken_0x2d02e0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 19));
        ctx->pc = 0x2D02E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2d02e0) {
            ctx->pc = 0x2D0288u;
            goto label_2d0288;
        }
    }
    ctx->pc = 0x2D02E8u;
label_2d02e8:
    // 0x2d02e8: 0xdfb30030
    ctx->pc = 0x2d02e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d02ec:
    // 0x2d02ec: 0xdfb20020
    ctx->pc = 0x2d02ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d02f0: 0xdfb10010
    ctx->pc = 0x2d02f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d02f4: 0xdfb00000
    ctx->pc = 0x2d02f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d02f8: 0x3e00008
    ctx->pc = 0x2D02F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D02FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0258u: goto label_2d0258;
            case 0x2D0288u: goto label_2d0288;
            case 0x2D02ACu: goto label_2d02ac;
            case 0x2D02E0u: goto label_2d02e0;
            case 0x2D02E8u: goto label_2d02e8;
            case 0x2D02ECu: goto label_2d02ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0300u;
}
