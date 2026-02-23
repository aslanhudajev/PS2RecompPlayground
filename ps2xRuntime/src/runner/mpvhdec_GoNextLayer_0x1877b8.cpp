#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvhdec_GoNextLayer
// Address: 0x1877b8 - 0x1878c8
void mpvhdec_GoNextLayer_0x1877b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvhdec_GoNextLayer");


    ctx->pc = 0x1877b8u;

    // 0x1877b8: 0x27bdffb0
    ctx->pc = 0x1877b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1877bc: 0xffb20020
    ctx->pc = 0x1877bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1877c0: 0xffb10010
    ctx->pc = 0x1877c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1877c4: 0xe0902d
    ctx->pc = 0x1877c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877c8: 0xffb00000
    ctx->pc = 0x1877c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1877cc: 0xa0882d
    ctx->pc = 0x1877ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877d0: 0xffb30030
    ctx->pc = 0x1877d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1877d4: 0xc0802d
    ctx->pc = 0x1877d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877d8: 0xffbf0040
    ctx->pc = 0x1877d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1877dc: 0x100982d
    ctx->pc = 0x1877dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877e0: 0x220202d
    ctx->pc = 0x1877e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877e4: 0x200282d
    ctx->pc = 0x1877e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877e8: 0xc061e32
    ctx->pc = 0x1877E8u;
    SET_GPR_U32(ctx, 31, 0x1877F0u);
    ctx->pc = 0x1877ECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1878C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVHDEC_GoNextDelim_0x1878c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877F0u; }
        else if (ctx->pc != 0x1877F0u) { ctx->pc = 0x1877F0u; }
    }
    if (ctx->pc != 0x1877F0u) { return; }
    ctx->pc = 0x1877F0u;
    // 0x1877f0: 0x40182d
    ctx->pc = 0x1877f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877f4: 0x10600026
    ctx->pc = 0x1877F4u;
    {
        const bool branch_taken_0x1877f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1877f4) {
            ctx->pc = 0x187890u;
            goto label_187890;
        }
    }
    ctx->pc = 0x1877FCu;
    // 0x1877fc: 0x24020010
    ctx->pc = 0x1877fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x187800: 0x14620012
    ctx->pc = 0x187800u;
    {
        const bool branch_taken_0x187800 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x187804u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x187800) {
            ctx->pc = 0x18784Cu;
            goto label_18784c;
        }
    }
    ctx->pc = 0x187808u;
    // 0x187808: 0x8e020000
    ctx->pc = 0x187808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18780c: 0x220202d
    ctx->pc = 0x18780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187810: 0x8e230000
    ctx->pc = 0x187810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187814: 0x200282d
    ctx->pc = 0x187814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187818: 0x2442fffc
    ctx->pc = 0x187818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x18781c: 0x240302d
    ctx->pc = 0x18781cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187820: 0xae020000
    ctx->pc = 0x187820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x187824: 0x24630004
    ctx->pc = 0x187824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x187828: 0xae230000
    ctx->pc = 0x187828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x18782c: 0x8e420000
    ctx->pc = 0x18782cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187830: 0x24420004
    ctx->pc = 0x187830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x187834: 0xc061e32
    ctx->pc = 0x187834u;
    SET_GPR_U32(ctx, 31, 0x18783Cu);
    ctx->pc = 0x187838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1878C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVHDEC_GoNextDelim_0x1878c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18783Cu; }
        else if (ctx->pc != 0x18783Cu) { ctx->pc = 0x18783Cu; }
    }
    if (ctx->pc != 0x18783Cu) { return; }
    ctx->pc = 0x18783Cu;
    // 0x18783c: 0x40182d
    ctx->pc = 0x18783cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187840: 0x10600013
    ctx->pc = 0x187840u;
    {
        const bool branch_taken_0x187840 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x187840) {
            ctx->pc = 0x187890u;
            goto label_187890;
        }
    }
    ctx->pc = 0x187848u;
    // 0x187848: 0x24020020
    ctx->pc = 0x187848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_18784c:
    // 0x18784c: 0x14620013
    ctx->pc = 0x18784Cu;
    {
        const bool branch_taken_0x18784c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x187850u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18784c) {
            ctx->pc = 0x18789Cu;
            goto label_18789c;
        }
    }
    ctx->pc = 0x187854u;
    // 0x187854: 0x8e020000
    ctx->pc = 0x187854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187858: 0x8e230000
    ctx->pc = 0x187858u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18785c: 0x200282d
    ctx->pc = 0x18785cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187860: 0x2442fffc
    ctx->pc = 0x187860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x187864: 0x240302d
    ctx->pc = 0x187864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187868: 0xae020000
    ctx->pc = 0x187868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18786c: 0x24630004
    ctx->pc = 0x18786cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x187870: 0xae230000
    ctx->pc = 0x187870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x187874: 0x8e420000
    ctx->pc = 0x187874u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187878: 0x24420004
    ctx->pc = 0x187878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x18787c: 0xc061e32
    ctx->pc = 0x18787Cu;
    SET_GPR_U32(ctx, 31, 0x187884u);
    ctx->pc = 0x187880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1878C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVHDEC_GoNextDelim_0x1878c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187884u; }
        else if (ctx->pc != 0x187884u) { ctx->pc = 0x187884u; }
    }
    if (ctx->pc != 0x187884u) { return; }
    ctx->pc = 0x187884u;
    // 0x187884: 0x40182d
    ctx->pc = 0x187884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187888: 0x14600004
    ctx->pc = 0x187888u;
    {
        const bool branch_taken_0x187888 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x187888) {
            ctx->pc = 0x18789Cu;
            goto label_18789c;
        }
    }
    ctx->pc = 0x187890u;
label_187890:
    // 0x187890: 0x3c02ffff
    ctx->pc = 0x187890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x187894: 0x10000005
    ctx->pc = 0x187894u;
    {
        const bool branch_taken_0x187894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187898u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x187894) {
            ctx->pc = 0x1878ACu;
            goto label_1878ac;
        }
    }
    ctx->pc = 0x18789Cu;
label_18789c:
    // 0x18789c: 0x3c02ffff
    ctx->pc = 0x18789cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1878a0: 0x731824
    ctx->pc = 0x1878a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1878a4: 0x3442ffff
    ctx->pc = 0x1878a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1878a8: 0x3100b
    ctx->pc = 0x1878a8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_1878ac:
    // 0x1878ac: 0xdfbf0040
    ctx->pc = 0x1878acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1878b0: 0xdfb30030
    ctx->pc = 0x1878b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1878b4: 0xdfb20020
    ctx->pc = 0x1878b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1878b8: 0xdfb10010
    ctx->pc = 0x1878b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1878bc: 0xdfb00000
    ctx->pc = 0x1878bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1878c0: 0x3e00008
    ctx->pc = 0x1878C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1878C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18784Cu: goto label_18784c;
            case 0x187890u: goto label_187890;
            case 0x18789Cu: goto label_18789c;
            case 0x1878ACu: goto label_1878ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1878C8u;
}
