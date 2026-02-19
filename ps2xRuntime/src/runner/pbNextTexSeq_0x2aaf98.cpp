#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbNextTexSeq
// Address: 0x2aaf98 - 0x2aafe0
void pbNextTexSeq_0x2aaf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aaf98u;

    // 0x2aaf98: 0x27bdfff0
    ctx->pc = 0x2aaf98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aaf9c: 0xffbe0000
    ctx->pc = 0x2aaf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x2aafa0: 0x3a0f02d
    ctx->pc = 0x2aafa0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aafa4: 0x3c020037
    ctx->pc = 0x2aafa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2aafa8: 0x944283b0
    ctx->pc = 0x2aafa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935472)));
    // 0x2aafac: 0x24430001
    ctx->pc = 0x2aafacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aafb0: 0x60102d
    ctx->pc = 0x2aafb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aafb4: 0x3c010037
    ctx->pc = 0x2aafb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2aafb8: 0xa42283b0
    ctx->pc = 0x2aafb8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294935472), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aafbc: 0x3043ffff
    ctx->pc = 0x2aafbcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2aafc0: 0x60102d
    ctx->pc = 0x2aafc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aafc4: 0x10000001
    ctx->pc = 0x2AAFC4u;
    {
        const bool branch_taken_0x2aafc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2aafc4) {
            ctx->pc = 0x2AAFCCu;
            goto label_2aafcc;
        }
    }
    ctx->pc = 0x2AAFCCu;
label_2aafcc:
    // 0x2aafcc: 0x3c0e82d
    ctx->pc = 0x2aafccu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aafd0: 0xdfbe0000
    ctx->pc = 0x2aafd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aafd4: 0x27bd0010
    ctx->pc = 0x2aafd4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aafd8: 0x3e00008
    ctx->pc = 0x2AAFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AAFCCu: goto label_2aafcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AAFE0u;
}
