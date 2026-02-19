#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbLogStaticMem
// Address: 0x2a3658 - 0x2a36ec
void pbLogStaticMem_0x2a3658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a3658u;

    // 0x2a3658: 0x3c020036
    ctx->pc = 0x2a3658u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a365c: 0x8c47dee0
    ctx->pc = 0x2a365cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a3660: 0x8ce20038
    ctx->pc = 0x2a3660u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2a3664: 0x40202d
    ctx->pc = 0x2a3664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3668: 0x8c420000
    ctx->pc = 0x2a3668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a366c: 0x1840001a
    ctx->pc = 0x2A366Cu;
    {
        const bool branch_taken_0x2a366c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A3670u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a366c) {
            ctx->pc = 0x2A36D8u;
            goto label_2a36d8;
        }
    }
    ctx->pc = 0x2A3674u;
    // 0x2a3674: 0x82900
    ctx->pc = 0x2a3674u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 8), 4));
label_2a3678:
    // 0x2a3678: 0x851021
    ctx->pc = 0x2a3678u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a367c: 0x8c460004
    ctx->pc = 0x2a367cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a3680: 0x8c430008
    ctx->pc = 0x2a3680u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a3684: 0xc31821
    ctx->pc = 0x2a3684u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a3688: 0x40202d
    ctx->pc = 0x2a3688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a368c: 0x8c82000c
    ctx->pc = 0x2a368cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a3690: 0x10c0000b
    ctx->pc = 0x2A3690u;
    {
        const bool branch_taken_0x2a3690 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3694u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x2a3690) {
            ctx->pc = 0x2A36C0u;
            goto label_2a36c0;
        }
    }
    ctx->pc = 0x2A3698u;
    // 0x2a3698: 0x8ce5002c
    ctx->pc = 0x2a3698u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2a369c: 0x8ca20030
    ctx->pc = 0x2a369cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2a36a0: 0xc2102b
    ctx->pc = 0x2a36a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a36a4: 0x54400001
    ctx->pc = 0x2A36A4u;
    {
        const bool branch_taken_0x2a36a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a36a4) {
            ctx->pc = 0x2A36A8u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 6));
            ctx->pc = 0x2A36ACu;
            goto label_2a36ac;
        }
    }
    ctx->pc = 0x2A36ACu;
label_2a36ac:
    // 0x2a36ac: 0x8ce5002c
    ctx->pc = 0x2a36acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2a36b0: 0x8ca20034
    ctx->pc = 0x2a36b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2a36b4: 0x43102b
    ctx->pc = 0x2a36b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a36b8: 0x54400001
    ctx->pc = 0x2A36B8u;
    {
        const bool branch_taken_0x2a36b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a36b8) {
            ctx->pc = 0x2A36BCu;
            WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
            ctx->pc = 0x2A36C0u;
            goto label_2a36c0;
        }
    }
    ctx->pc = 0x2A36C0u;
label_2a36c0:
    // 0x2a36c0: 0x25080001
    ctx->pc = 0x2a36c0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a36c4: 0x8ce40038
    ctx->pc = 0x2a36c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2a36c8: 0x8c820000
    ctx->pc = 0x2a36c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a36cc: 0x102102a
    ctx->pc = 0x2a36ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 2)));
    // 0x2a36d0: 0x1440ffe9
    ctx->pc = 0x2A36D0u;
    {
        const bool branch_taken_0x2a36d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A36D4u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x2a36d0) {
            ctx->pc = 0x2A3678u;
            goto label_2a3678;
        }
    }
    ctx->pc = 0x2A36D8u;
label_2a36d8:
    // 0x2a36d8: 0x8ce2002c
    ctx->pc = 0x2a36d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2a36dc: 0x8ce30038
    ctx->pc = 0x2a36dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2a36e0: 0x8c630000
    ctx->pc = 0x2a36e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a36e4: 0x3e00008
    ctx->pc = 0x2A36E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A36E8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3678u: goto label_2a3678;
            case 0x2A36ACu: goto label_2a36ac;
            case 0x2A36C0u: goto label_2a36c0;
            case 0x2A36D8u: goto label_2a36d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A36ECu;
}
