#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbNextGeomSeq
// Address: 0x2aafe0 - 0x2ab028
void pbNextGeomSeq_0x2aafe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aafe0u;

    // 0x2aafe0: 0x27bdfff0
    ctx->pc = 0x2aafe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aafe4: 0xffbe0000
    ctx->pc = 0x2aafe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x2aafe8: 0x3a0f02d
    ctx->pc = 0x2aafe8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aafec: 0x3c020037
    ctx->pc = 0x2aafecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2aaff0: 0x944283b2
    ctx->pc = 0x2aaff0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294935474)));
    // 0x2aaff4: 0x24430001
    ctx->pc = 0x2aaff4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aaff8: 0x60102d
    ctx->pc = 0x2aaff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaffc: 0x3c010037
    ctx->pc = 0x2aaffcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab000: 0xa42283b2
    ctx->pc = 0x2ab000u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294935474), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ab004: 0x3043ffff
    ctx->pc = 0x2ab004u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2ab008: 0x60102d
    ctx->pc = 0x2ab008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab00c: 0x10000001
    ctx->pc = 0x2AB00Cu;
    {
        const bool branch_taken_0x2ab00c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab00c) {
            ctx->pc = 0x2AB014u;
            goto label_2ab014;
        }
    }
    ctx->pc = 0x2AB014u;
label_2ab014:
    // 0x2ab014: 0x3c0e82d
    ctx->pc = 0x2ab014u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab018: 0xdfbe0000
    ctx->pc = 0x2ab018u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab01c: 0x27bd0010
    ctx->pc = 0x2ab01cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab020: 0x3e00008
    ctx->pc = 0x2AB020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB014u: goto label_2ab014;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB028u;
}
