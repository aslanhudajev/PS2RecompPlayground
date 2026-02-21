#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetTexSeq
// Address: 0x2ab060 - 0x2ab16c
void pbSetTexSeq_0x2ab060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab060u;

    // 0x2ab060: 0x27bdffd0
    ctx->pc = 0x2ab060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab064: 0xffbf0020
    ctx->pc = 0x2ab064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab068: 0xffbe0010
    ctx->pc = 0x2ab068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2ab06c: 0x3a0f02d
    ctx->pc = 0x2ab06cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab070: 0xafc40000
    ctx->pc = 0x2ab070u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2ab074: 0xafc50004
    ctx->pc = 0x2ab074u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2ab078: 0x8fc20000
    ctx->pc = 0x2ab078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab07c: 0x4410004
    ctx->pc = 0x2AB07Cu;
    {
        const bool branch_taken_0x2ab07c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2ab07c) {
            ctx->pc = 0x2AB090u;
            goto label_2ab090;
        }
    }
    ctx->pc = 0x2AB084u;
    // 0x2ab084: 0xc0aabe6
    ctx->pc = 0x2AB084u;
    SET_GPR_U32(ctx, 31, 0x2AB08Cu);
    ctx->pc = 0x2AAF98u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbNextTexSeq_0x2aaf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB08Cu; }
    }
    if (ctx->pc != 0x2AB08Cu) { return; }
    ctx->pc = 0x2AB08Cu;
    // 0x2ab08c: 0xafc20000
    ctx->pc = 0x2ab08cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2ab090:
    // 0x2ab090: 0x8fc20004
    ctx->pc = 0x2ab090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab094: 0x3c037000
    ctx->pc = 0x2ab094u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x2ab098: 0x34630002
    ctx->pc = 0x2ab098u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x2ab09c: 0xac430000
    ctx->pc = 0x2ab09cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab0a0: 0x8fc30004
    ctx->pc = 0x2ab0a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab0a4: 0x24620004
    ctx->pc = 0x2ab0a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ab0a8: 0xac400000
    ctx->pc = 0x2ab0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ab0ac: 0x8fc30004
    ctx->pc = 0x2ab0acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab0b0: 0x24620008
    ctx->pc = 0x2ab0b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 8));
    // 0x2ab0b4: 0xac400000
    ctx->pc = 0x2ab0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ab0b8: 0x8fc30004
    ctx->pc = 0x2ab0b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab0bc: 0x2462000c
    ctx->pc = 0x2ab0bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 12));
    // 0x2ab0c0: 0xac400000
    ctx->pc = 0x2ab0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ab0c4: 0x8fc30004
    ctx->pc = 0x2ab0c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab0c8: 0x24620010
    ctx->pc = 0x2ab0c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 16));
    // 0x2ab0cc: 0x34038001
    ctx->pc = 0x2ab0ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32769));
    // 0x2ab0d0: 0xac430000
    ctx->pc = 0x2ab0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab0d4: 0x8fc30004
    ctx->pc = 0x2ab0d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab0d8: 0x24620014
    ctx->pc = 0x2ab0d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 20));
    // 0x2ab0dc: 0x3c031000
    ctx->pc = 0x2ab0dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2ab0e0: 0xac430000
    ctx->pc = 0x2ab0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab0e4: 0x8fc30004
    ctx->pc = 0x2ab0e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab0e8: 0x24620018
    ctx->pc = 0x2ab0e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 24));
    // 0x2ab0ec: 0x2403000e
    ctx->pc = 0x2ab0ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ab0f0: 0xac430000
    ctx->pc = 0x2ab0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab0f4: 0x8fc30004
    ctx->pc = 0x2ab0f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab0f8: 0x2462001c
    ctx->pc = 0x2ab0f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 28));
    // 0x2ab0fc: 0xac400000
    ctx->pc = 0x2ab0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ab100: 0x8fc30004
    ctx->pc = 0x2ab100u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab104: 0x24620020
    ctx->pc = 0x2ab104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2ab108: 0x8fc30000
    ctx->pc = 0x2ab108u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab10c: 0x32400
    ctx->pc = 0x2ab10cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ab110: 0xac440000
    ctx->pc = 0x2ab110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2ab114: 0x8fc30004
    ctx->pc = 0x2ab114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab118: 0x24620024
    ctx->pc = 0x2ab118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 36));
    // 0x2ab11c: 0x3c03ffff
    ctx->pc = 0x2ab11cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2ab120: 0xac430000
    ctx->pc = 0x2ab120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab124: 0x8fc30004
    ctx->pc = 0x2ab124u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab128: 0x24620028
    ctx->pc = 0x2ab128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 40));
    // 0x2ab12c: 0x24030060
    ctx->pc = 0x2ab12cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ab130: 0xac430000
    ctx->pc = 0x2ab130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab134: 0x8fc30004
    ctx->pc = 0x2ab134u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab138: 0x2462002c
    ctx->pc = 0x2ab138u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 44));
    // 0x2ab13c: 0xac400000
    ctx->pc = 0x2ab13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ab140: 0x8fc20004
    ctx->pc = 0x2ab140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab144: 0x24430030
    ctx->pc = 0x2ab144u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 48));
    // 0x2ab148: 0x60102d
    ctx->pc = 0x2ab148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab14c: 0x10000001
    ctx->pc = 0x2AB14Cu;
    {
        const bool branch_taken_0x2ab14c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab14c) {
            ctx->pc = 0x2AB154u;
            goto label_2ab154;
        }
    }
    ctx->pc = 0x2AB154u;
label_2ab154:
    // 0x2ab154: 0x3c0e82d
    ctx->pc = 0x2ab154u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab158: 0xdfbf0020
    ctx->pc = 0x2ab158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab15c: 0xdfbe0010
    ctx->pc = 0x2ab15cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab160: 0x27bd0030
    ctx->pc = 0x2ab160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab164: 0x3e00008
    ctx->pc = 0x2AB164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB090u: goto label_2ab090;
            case 0x2AB154u: goto label_2ab154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB16Cu;
}
