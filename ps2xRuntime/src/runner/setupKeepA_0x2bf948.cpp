#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setupKeepA
// Address: 0x2bf948 - 0x2bf9e8
void setupKeepA_0x2bf948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bf948u;

    // 0x2bf948: 0x3c020036
    ctx->pc = 0x2bf948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bf94c: 0x8c43dee0
    ctx->pc = 0x2bf94cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bf950: 0x51403
    ctx->pc = 0x2bf950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2bf954: 0x30a5ffff
    ctx->pc = 0x2bf954u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x2bf958: 0x8c630038
    ctx->pc = 0x2bf958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2bf95c: 0x21100
    ctx->pc = 0x2bf95cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bf960: 0x621021
    ctx->pc = 0x2bf960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bf964: 0x8c420004
    ctx->pc = 0x2bf964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bf968: 0x52980
    ctx->pc = 0x2bf968u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 6));
    // 0x2bf96c: 0x8c420058
    ctx->pc = 0x2bf96cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2bf970: 0xa22821
    ctx->pc = 0x2bf970u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bf974: 0x94a20008
    ctx->pc = 0x2bf974u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bf978: 0x30420100
    ctx->pc = 0x2bf978u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2bf97c: 0x10400006
    ctx->pc = 0x2BF97Cu;
    {
        const bool branch_taken_0x2bf97c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF980u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bf97c) {
            ctx->pc = 0x2BF998u;
            goto label_2bf998;
        }
    }
    ctx->pc = 0x2BF984u;
    // 0x2bf984: 0x8c630004
    ctx->pc = 0x2bf984u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bf988: 0x8c4285f0
    ctx->pc = 0x2bf988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    // 0x2bf98c: 0x21180
    ctx->pc = 0x2bf98cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2bf990: 0x8c630058
    ctx->pc = 0x2bf990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2bf994: 0x432821
    ctx->pc = 0x2bf994u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bf998:
    // 0x2bf998: 0x94a30038
    ctx->pc = 0x2bf998u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2bf99c: 0x94a2003c
    ctx->pc = 0x2bf99cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2bf9a0: 0xac830008
    ctx->pc = 0x2bf9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2bf9a4: 0x21140
    ctx->pc = 0x2bf9a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x2bf9a8: 0xac82000c
    ctx->pc = 0x2bf9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2bf9ac: 0xdc820008
    ctx->pc = 0x2bf9acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bf9b0: 0xdca30020
    ctx->pc = 0x2bf9b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2bf9b4: 0x43102d
    ctx->pc = 0x2bf9b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2bf9b8: 0xfc820008
    ctx->pc = 0x2bf9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x2bf9bc: 0x8c82000c
    ctx->pc = 0x2bf9bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2bf9c0: 0x3c03ffff
    ctx->pc = 0x2bf9c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2bf9c4: 0x3463ffe7
    ctx->pc = 0x2bf9c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65511));
    // 0x2bf9c8: 0x431024
    ctx->pc = 0x2bf9c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf9cc: 0xac82000c
    ctx->pc = 0x2bf9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2bf9d0: 0x3c020005
    ctx->pc = 0x2bf9d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2bf9d4: 0x3442c000
    ctx->pc = 0x2bf9d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
    // 0x2bf9d8: 0xac820000
    ctx->pc = 0x2bf9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2bf9dc: 0x24020044
    ctx->pc = 0x2bf9dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 68));
    // 0x2bf9e0: 0x3e00008
    ctx->pc = 0x2BF9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF9E4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BF998u: goto label_2bf998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BF9E8u;
}
