#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecResume
// Address: 0x2deac0 - 0x2deb18
void audioDecResume_0x2deac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2deac0u;

    // 0x2deac0: 0x27bdffe0
    ctx->pc = 0x2deac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2deac4: 0xffbf0010
    ctx->pc = 0x2deac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2deac8: 0xffb00000
    ctx->pc = 0x2deac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2deacc: 0x80802d
    ctx->pc = 0x2deaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dead0: 0x8e030000
    ctx->pc = 0x2dead0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dead4: 0x24020004
    ctx->pc = 0x2dead4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dead8: 0x1062000b
    ctx->pc = 0x2DEAD8u;
    {
        const bool branch_taken_0x2dead8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2DEADCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2dead8) {
            ctx->pc = 0x2DEB08u;
            goto label_2deb08;
        }
    }
    ctx->pc = 0x2DEAE0u;
    // 0x2deae0: 0x10620007
    ctx->pc = 0x2DEAE0u;
    {
        const bool branch_taken_0x2deae0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2DEAE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2deae0) {
            ctx->pc = 0x2DEB00u;
            goto label_2deb00;
        }
    }
    ctx->pc = 0x2DEAE8u;
    // 0x2deae8: 0x8c44fd68
    ctx->pc = 0x2deae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966632)));
    // 0x2deaec: 0x282d
    ctx->pc = 0x2deaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deaf0: 0x24060001
    ctx->pc = 0x2deaf0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deaf4: 0x3c07003e
    ctx->pc = 0x2deaf4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)62 << 16));
    // 0x2deaf8: 0xc088fe6
    ctx->pc = 0x2DEAF8u;
    SET_GPR_U32(ctx, 31, 0x2DEB00u);
    ctx->pc = 0x2DEAFCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 608));
    ctx->pc = 0x223F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_stream_play_0x223f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB00u; }
    }
    if (ctx->pc != 0x2DEB00u) { return; }
    ctx->pc = 0x2DEB00u;
label_2deb00:
    // 0x2deb00: 0x24020002
    ctx->pc = 0x2deb00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2deb04: 0xae020000
    ctx->pc = 0x2deb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2deb08:
    // 0x2deb08: 0xdfbf0010
    ctx->pc = 0x2deb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2deb0c: 0xdfb00000
    ctx->pc = 0x2deb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2deb10: 0x3e00008
    ctx->pc = 0x2DEB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEB14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DEB00u: goto label_2deb00;
            case 0x2DEB08u: goto label_2deb08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DEB18u;
}
