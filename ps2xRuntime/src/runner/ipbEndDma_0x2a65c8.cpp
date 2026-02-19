#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbEndDma
// Address: 0x2a65c8 - 0x2a66a0
void ipbEndDma_0x2a65c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a65c8u;

    // 0x2a65c8: 0x27bdffc0
    ctx->pc = 0x2a65c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a65cc: 0xffbf0030
    ctx->pc = 0x2a65ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a65d0: 0xffbe0020
    ctx->pc = 0x2a65d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x2a65d4: 0xffb00010
    ctx->pc = 0x2a65d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a65d8: 0x3a0f02d
    ctx->pc = 0x2a65d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65dc: 0xafc40000
    ctx->pc = 0x2a65dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a65e0: 0x3c100036
    ctx->pc = 0x2a65e0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a65e4: 0x8e10dee0
    ctx->pc = 0x2a65e4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a65e8: 0x8fc20000
    ctx->pc = 0x2a65e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a65ec: 0x24030018
    ctx->pc = 0x2a65ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a65f0: 0x431018
    ctx->pc = 0x2a65f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a65f4: 0x2443001c
    ctx->pc = 0x2a65f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 28));
    // 0x2a65f8: 0x8e020020
    ctx->pc = 0x2a65f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a65fc: 0x431821
    ctx->pc = 0x2a65fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6600: 0xafc30004
    ctx->pc = 0x2a6600u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x2a6604: 0x8fc20004
    ctx->pc = 0x2a6604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6608: 0x8c430000
    ctx->pc = 0x2a6608u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a660c: 0xafc30008
    ctx->pc = 0x2a660cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x2a6610: 0x8fc20008
    ctx->pc = 0x2a6610u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6614: 0x14400003
    ctx->pc = 0x2A6614u;
    {
        const bool branch_taken_0x2a6614 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a6614) {
            ctx->pc = 0x2A6624u;
            goto label_2a6624;
        }
    }
    ctx->pc = 0x2A661Cu;
    // 0x2a661c: 0x10000019
    ctx->pc = 0x2A661Cu;
    {
        const bool branch_taken_0x2a661c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a661c) {
            ctx->pc = 0x2A6684u;
            goto label_2a6684;
        }
    }
    ctx->pc = 0x2A6624u;
label_2a6624:
    // 0x2a6624: 0x8fc20008
    ctx->pc = 0x2a6624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6628: 0x94430000
    ctx->pc = 0x2a6628u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a662c: 0x30620800
    ctx->pc = 0x2a662cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2048));
    // 0x2a6630: 0x3043ffff
    ctx->pc = 0x2a6630u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2a6634: 0x1060000a
    ctx->pc = 0x2A6634u;
    {
        const bool branch_taken_0x2a6634 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6634) {
            ctx->pc = 0x2A6660u;
            goto label_2a6660;
        }
    }
    ctx->pc = 0x2A663Cu;
    // 0x2a663c: 0x8fc30008
    ctx->pc = 0x2a663cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6640: 0x8c620008
    ctx->pc = 0x2a6640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a6644: 0x8fc30008
    ctx->pc = 0x2a6644u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6648: 0x94640000
    ctx->pc = 0x2a6648u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a664c: 0x41a82
    ctx->pc = 0x2a664cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 10));
    // 0x2a6650: 0x60202d
    ctx->pc = 0x2a6650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6654: 0x30830001
    ctx->pc = 0x2a6654u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1));
    // 0x2a6658: 0x3064ffff
    ctx->pc = 0x2a6658u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 65535));
    // 0x2a665c: 0xac440000
    ctx->pc = 0x2a665cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2a6660:
    // 0x2a6660: 0x8fc40000
    ctx->pc = 0x2a6660u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6664: 0xc0a9948
    ctx->pc = 0x2A6664u;
    SET_GPR_U32(ctx, 31, 0x2A666Cu);
    ctx->pc = 0x2A6520u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbRecordDmaDone_0x2a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A666Cu; }
    }
    if (ctx->pc != 0x2A666Cu) { return; }
    ctx->pc = 0x2A666Cu;
    // 0x2a666c: 0x8fc20004
    ctx->pc = 0x2a666cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6670: 0xac400000
    ctx->pc = 0x2a6670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a6674: 0x8fc20004
    ctx->pc = 0x2a6674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6678: 0xac400004
    ctx->pc = 0x2a6678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a667c: 0x8fc20008
    ctx->pc = 0x2a667cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6680: 0xac400004
    ctx->pc = 0x2a6680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a6684:
    // 0x2a6684: 0x3c0e82d
    ctx->pc = 0x2a6684u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6688: 0xdfbf0030
    ctx->pc = 0x2a6688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a668c: 0xdfbe0020
    ctx->pc = 0x2a668cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6690: 0xdfb00010
    ctx->pc = 0x2a6690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6694: 0x27bd0040
    ctx->pc = 0x2a6694u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6698: 0x3e00008
    ctx->pc = 0x2A6698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6624u: goto label_2a6624;
            case 0x2A6660u: goto label_2a6660;
            case 0x2A6684u: goto label_2a6684;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A66A0u;
}
