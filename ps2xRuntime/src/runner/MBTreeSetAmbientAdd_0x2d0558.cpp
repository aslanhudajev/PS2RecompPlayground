#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeSetAmbientAdd
// Address: 0x2d0558 - 0x2d0600
void MBTreeSetAmbientAdd_0x2d0558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0558u;

label_2d0558:
    // 0x2d0558: 0x27bdffb0
    ctx->pc = 0x2d0558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d055c: 0xffbf0040
    ctx->pc = 0x2d055cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d0560: 0xffb30030
    ctx->pc = 0x2d0560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d0564: 0xffb20020
    ctx->pc = 0x2d0564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d0568: 0xffb10010
    ctx->pc = 0x2d0568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d056c: 0xffb00000
    ctx->pc = 0x2d056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0570: 0x80802d
    ctx->pc = 0x2d0570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0574: 0xa0902d
    ctx->pc = 0x2d0574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0578: 0xc0882d
    ctx->pc = 0x2d0578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d057c: 0x1000000b
    ctx->pc = 0x2D057Cu;
    {
        const bool branch_taken_0x2d057c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0580u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d057c) {
            ctx->pc = 0x2D05ACu;
            goto label_2d05ac;
        }
    }
    ctx->pc = 0x2D0584u;
    // 0x2d0584: 0x0
    ctx->pc = 0x2d0584u;
    // NOP
label_2d0588:
    // 0x2d0588: 0x12000017
    ctx->pc = 0x2D0588u;
    {
        const bool branch_taken_0x2d0588 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D058Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2d0588) {
            ctx->pc = 0x2D05E8u;
            goto label_2d05e8;
        }
    }
    ctx->pc = 0x2D0590u;
    // 0x2d0590: 0x8e10007c
    ctx->pc = 0x2d0590u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d0594: 0x52000015
    ctx->pc = 0x2D0594u;
    {
        const bool branch_taken_0x2d0594 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0594) {
            ctx->pc = 0x2D0598u;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x2D05ECu;
            goto label_2d05ec;
        }
    }
    ctx->pc = 0x2D059Cu;
    // 0x2d059c: 0x8e020060
    ctx->pc = 0x2d059cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d05a0: 0x30420010
    ctx->pc = 0x2d05a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d05a4: 0x1440fff8
    ctx->pc = 0x2D05A4u;
    {
        const bool branch_taken_0x2d05a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d05a4) {
            ctx->pc = 0x2D0588u;
            goto label_2d0588;
        }
    }
    ctx->pc = 0x2D05ACu;
label_2d05ac:
    // 0x2d05ac: 0x5200000e
    ctx->pc = 0x2D05ACu;
    {
        const bool branch_taken_0x2d05ac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d05ac) {
            ctx->pc = 0x2D05B0u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x2D05E8u;
            goto label_2d05e8;
        }
    }
    ctx->pc = 0x2D05B4u;
    // 0x2d05b4: 0x1220000a
    ctx->pc = 0x2D05B4u;
    {
        const bool branch_taken_0x2d05b4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D05B8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 18));
        if (branch_taken_0x2d05b4) {
            ctx->pc = 0x2D05E0u;
            goto label_2d05e0;
        }
    }
    ctx->pc = 0x2D05BCu;
    // 0x2d05bc: 0x8e040078
    ctx->pc = 0x2d05bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2d05c0: 0x10800007
    ctx->pc = 0x2D05C0u;
    {
        const bool branch_taken_0x2d05c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d05c0) {
            ctx->pc = 0x2D05E0u;
            goto label_2d05e0;
        }
    }
    ctx->pc = 0x2D05C8u;
    // 0x2d05c8: 0x8c820060
    ctx->pc = 0x2d05c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d05cc: 0x30420010
    ctx->pc = 0x2d05ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d05d0: 0x14400003
    ctx->pc = 0x2D05D0u;
    {
        const bool branch_taken_0x2d05d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D05D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d05d0) {
            ctx->pc = 0x2D05E0u;
            goto label_2d05e0;
        }
    }
    ctx->pc = 0x2D05D8u;
    // 0x2d05d8: 0xc0b4156
    ctx->pc = 0x2D05D8u;
    SET_GPR_U32(ctx, 31, 0x2D05E0u);
    ctx->pc = 0x2D05DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D0558u;
    goto label_2d0558;
    ctx->pc = 0x2D05E0u;
label_2d05e0:
    // 0x2d05e0: 0x1233ffe9
    ctx->pc = 0x2D05E0u;
    {
        const bool branch_taken_0x2d05e0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 19));
        ctx->pc = 0x2D05E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2d05e0) {
            ctx->pc = 0x2D0588u;
            goto label_2d0588;
        }
    }
    ctx->pc = 0x2D05E8u;
label_2d05e8:
    // 0x2d05e8: 0xdfb30030
    ctx->pc = 0x2d05e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d05ec:
    // 0x2d05ec: 0xdfb20020
    ctx->pc = 0x2d05ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d05f0: 0xdfb10010
    ctx->pc = 0x2d05f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d05f4: 0xdfb00000
    ctx->pc = 0x2d05f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d05f8: 0x3e00008
    ctx->pc = 0x2D05F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D05FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0558u: goto label_2d0558;
            case 0x2D0588u: goto label_2d0588;
            case 0x2D05ACu: goto label_2d05ac;
            case 0x2D05E0u: goto label_2d05e0;
            case 0x2D05E8u: goto label_2d05e8;
            case 0x2D05ECu: goto label_2d05ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0600u;
}
