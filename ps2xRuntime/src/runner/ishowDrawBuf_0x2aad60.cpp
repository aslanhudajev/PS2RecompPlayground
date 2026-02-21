#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ishowDrawBuf
// Address: 0x2aad60 - 0x2aaddc
void ishowDrawBuf_0x2aad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aad60u;

    // 0x2aad60: 0x3c020036
    ctx->pc = 0x2aad60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aad64: 0x8c45dee0
    ctx->pc = 0x2aad64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aad68: 0x3c020037
    ctx->pc = 0x2aad68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2aad6c: 0x8c438330
    ctx->pc = 0x2aad6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
    // 0x2aad70: 0x8c620028
    ctx->pc = 0x2aad70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2aad74: 0x10400017
    ctx->pc = 0x2AAD74u;
    {
        const bool branch_taken_0x2aad74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2aad74) {
            ctx->pc = 0x2AADD4u;
            goto label_2aadd4;
        }
    }
    ctx->pc = 0x2AAD7Cu;
    // 0x2aad7c: 0x8c620018
    ctx->pc = 0x2aad7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2aad80: 0x8ca30010
    ctx->pc = 0x2aad80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2aad84: 0x821026
    ctx->pc = 0x2aad84u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aad88: 0x21240
    ctx->pc = 0x2aad88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 9));
    // 0x2aad8c: 0x8c63000c
    ctx->pc = 0x2aad8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2aad90: 0x431021
    ctx->pc = 0x2aad90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aad94: 0x3c041200
    ctx->pc = 0x2aad94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4608 << 16));
    // 0x2aad98: 0x34840070
    ctx->pc = 0x2aad98u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 112));
    // 0x2aad9c: 0xdc4301e0
    ctx->pc = 0x2aad9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x2aada0: 0xfc830000
    ctx->pc = 0x2aada0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2aada4: 0x3c041200
    ctx->pc = 0x2aada4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4608 << 16));
    // 0x2aada8: 0x34840080
    ctx->pc = 0x2aada8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 128));
    // 0x2aadac: 0xdc4301e8
    ctx->pc = 0x2aadacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2aadb0: 0xfc830000
    ctx->pc = 0x2aadb0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2aadb4: 0x3c041200
    ctx->pc = 0x2aadb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4608 << 16));
    // 0x2aadb8: 0x34840090
    ctx->pc = 0x2aadb8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 144));
    // 0x2aadbc: 0xdc4301f0
    ctx->pc = 0x2aadbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x2aadc0: 0xfc830000
    ctx->pc = 0x2aadc0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2aadc4: 0x3c031200
    ctx->pc = 0x2aadc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4608 << 16));
    // 0x2aadc8: 0x346300a0
    ctx->pc = 0x2aadc8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 160));
    // 0x2aadcc: 0xdc4201f8
    ctx->pc = 0x2aadccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x2aadd0: 0xfc620000
    ctx->pc = 0x2aadd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2aadd4:
    // 0x2aadd4: 0x3e00008
    ctx->pc = 0x2AADD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AADD4u: goto label_2aadd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AADDCu;
}
