#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: adjust_msidx
// Address: 0x23a7a8 - 0x23a83c
void adjust_msidx_0x23a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23a7a8u;

    // 0x23a7a8: 0x84830288
    ctx->pc = 0x23a7a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 648)));
    // 0x23a7ac: 0x24022b00
    ctx->pc = 0x23a7acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23a7b0: 0x621818
    ctx->pc = 0x23a7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23a7b4: 0x3c020032
    ctx->pc = 0x23a7b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23a7b8: 0x24421bc0
    ctx->pc = 0x23a7b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x23a7bc: 0x623021
    ctx->pc = 0x23a7bcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a7c0: 0x8c83035c
    ctx->pc = 0x23a7c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 860)));
    // 0x23a7c4: 0x8cc20950
    ctx->pc = 0x23a7c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 2384)));
    // 0x23a7c8: 0x1062000b
    ctx->pc = 0x23A7C8u;
    {
        const bool branch_taken_0x23a7c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23A7CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a7c8) {
            ctx->pc = 0x23A7F8u;
            goto label_23a7f8;
        }
    }
    ctx->pc = 0x23A7D0u;
    // 0x23a7d0: 0x24c60950
    ctx->pc = 0x23a7d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2384));
    // 0x23a7d4: 0x24a50001
    ctx->pc = 0x23a7d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_23a7d8:
    // 0x23a7d8: 0x28a20005
    ctx->pc = 0x23a7d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 5));
    // 0x23a7dc: 0x10400010
    ctx->pc = 0x23A7DCu;
    {
        const bool branch_taken_0x23a7dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A7E0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x23a7dc) {
            ctx->pc = 0x23A820u;
            goto label_23a820;
        }
    }
    ctx->pc = 0x23A7E4u;
    // 0x23a7e4: 0xc21021
    ctx->pc = 0x23a7e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23a7e8: 0x8c83035c
    ctx->pc = 0x23a7e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 860)));
    // 0x23a7ec: 0x8c420000
    ctx->pc = 0x23a7ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a7f0: 0x5462fff9
    ctx->pc = 0x23A7F0u;
    {
        const bool branch_taken_0x23a7f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23a7f0) {
            ctx->pc = 0x23A7F4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x23A7D8u;
            goto label_23a7d8;
        }
    }
    ctx->pc = 0x23A7F8u;
label_23a7f8:
    // 0x23a7f8: 0x28a20005
    ctx->pc = 0x23a7f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 5));
    // 0x23a7fc: 0x50400009
    ctx->pc = 0x23A7FCu;
    {
        const bool branch_taken_0x23a7fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23a7fc) {
            ctx->pc = 0x23A800u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 864), GPR_U32(ctx, 0));
            ctx->pc = 0x23A824u;
            goto label_23a824;
        }
    }
    ctx->pc = 0x23A804u;
    // 0x23a804: 0xac850360
    ctx->pc = 0x23a804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 864), GPR_U32(ctx, 5));
    // 0x23a808: 0x8c820364
    ctx->pc = 0x23a808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x23a80c: 0x45102a
    ctx->pc = 0x23a80cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x23a810: 0x10400008
    ctx->pc = 0x23A810u;
    {
        const bool branch_taken_0x23a810 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23a810) {
            ctx->pc = 0x23A834u;
            goto label_23a834;
        }
    }
    ctx->pc = 0x23A818u;
    // 0x23a818: 0x3e00008
    ctx->pc = 0x23A818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A81Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A7D8u: goto label_23a7d8;
            case 0x23A7F8u: goto label_23a7f8;
            case 0x23A820u: goto label_23a820;
            case 0x23A824u: goto label_23a824;
            case 0x23A834u: goto label_23a834;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23A820u;
label_23a820:
    // 0x23a820: 0xac800360
    ctx->pc = 0x23a820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 864), GPR_U32(ctx, 0));
label_23a824:
    // 0x23a824: 0x24020004
    ctx->pc = 0x23a824u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x23a828: 0xac820364
    ctx->pc = 0x23a828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 2));
    // 0x23a82c: 0x2402ffff
    ctx->pc = 0x23a82cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23a830: 0xac82035c
    ctx->pc = 0x23a830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 860), GPR_U32(ctx, 2));
label_23a834:
    // 0x23a834: 0x3e00008
    ctx->pc = 0x23A834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A7D8u: goto label_23a7d8;
            case 0x23A7F8u: goto label_23a7f8;
            case 0x23A820u: goto label_23a820;
            case 0x23A824u: goto label_23a824;
            case 0x23A834u: goto label_23a834;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23A83Cu;
}
