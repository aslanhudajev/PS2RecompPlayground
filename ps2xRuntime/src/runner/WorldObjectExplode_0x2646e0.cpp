#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldObjectExplode
// Address: 0x2646e0 - 0x264740
void WorldObjectExplode_0x2646e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2646e0u;

    // 0x2646e0: 0x27bdffd0
    ctx->pc = 0x2646e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2646e4: 0xffbf0020
    ctx->pc = 0x2646e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2646e8: 0xffb10010
    ctx->pc = 0x2646e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2646ec: 0xffb00000
    ctx->pc = 0x2646ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2646f0: 0x80802d
    ctx->pc = 0x2646f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2646f4: 0xc099170
    ctx->pc = 0x2646F4u;
    SET_GPR_U32(ctx, 31, 0x2646FCu);
    ctx->pc = 0x2646F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2645C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldExplosion_0x2645c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2646FCu; }
    }
    if (ctx->pc != 0x2646FCu) { return; }
    ctx->pc = 0x2646FCu;
    // 0x2646fc: 0x1200000b
    ctx->pc = 0x2646FCu;
    {
        const bool branch_taken_0x2646fc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x264700u;
        SET_GPR_U32(ctx, 17, ((uint32_t)4096 << 16));
        if (branch_taken_0x2646fc) {
            ctx->pc = 0x26472Cu;
            goto label_26472c;
        }
    }
    ctx->pc = 0x264704u;
    // 0x264704: 0x8e040028
    ctx->pc = 0x264704u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_264708:
    // 0x264708: 0x24050002
    ctx->pc = 0x264708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x26470c: 0xc0b41b8
    ctx->pc = 0x26470Cu;
    SET_GPR_U32(ctx, 31, 0x264714u);
    ctx->pc = 0x264710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264714u; }
    }
    if (ctx->pc != 0x264714u) { return; }
    ctx->pc = 0x264714u;
    // 0x264714: 0x8e020010
    ctx->pc = 0x264714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x264718: 0x511025
    ctx->pc = 0x264718u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x26471c: 0xae020010
    ctx->pc = 0x26471cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x264720: 0x8e100018
    ctx->pc = 0x264720u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x264724: 0x5600fff8
    ctx->pc = 0x264724u;
    {
        const bool branch_taken_0x264724 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x264724) {
            ctx->pc = 0x264728u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x264708u;
            goto label_264708;
        }
    }
    ctx->pc = 0x26472Cu;
label_26472c:
    // 0x26472c: 0xdfbf0020
    ctx->pc = 0x26472cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264730: 0xdfb10010
    ctx->pc = 0x264730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264734: 0xdfb00000
    ctx->pc = 0x264734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264738: 0x3e00008
    ctx->pc = 0x264738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26473Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264708u: goto label_264708;
            case 0x26472Cu: goto label_26472c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x264740u;
}
