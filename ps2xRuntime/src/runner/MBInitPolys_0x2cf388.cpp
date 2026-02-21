#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitPolys
// Address: 0x2cf388 - 0x2cf418
void MBInitPolys_0x2cf388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf388u;

    // 0x2cf388: 0x27bdffd0
    ctx->pc = 0x2cf388u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf38c: 0xffbf0020
    ctx->pc = 0x2cf38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cf390: 0xffb10010
    ctx->pc = 0x2cf390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cf394: 0xffb00000
    ctx->pc = 0x2cf394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf398: 0x80882d
    ctx->pc = 0x2cf398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf39c: 0x3c10003a
    ctx->pc = 0x2cf39cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2cf3a0: 0x2604b8f8
    ctx->pc = 0x2cf3a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294949112));
    // 0x2cf3a4: 0x282d
    ctx->pc = 0x2cf3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3a8: 0xc0becc6
    ctx->pc = 0x2CF3A8u;
    SET_GPR_U32(ctx, 31, 0x2CF3B0u);
    ctx->pc = 0x2CF3ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4608));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3B0u; }
    }
    if (ctx->pc != 0x2CF3B0u) { return; }
    ctx->pc = 0x2CF3B0u;
    // 0x2cf3b0: 0x2402ffff
    ctx->pc = 0x2cf3b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf3b4: 0xa602b8f8
    ctx->pc = 0x2cf3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294949112), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cf3b8: 0x3c02003a
    ctx->pc = 0x2cf3b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf3bc: 0xac40b8f4
    ctx->pc = 0x2cf3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949108), GPR_U32(ctx, 0));
    // 0x2cf3c0: 0x3c02003a
    ctx->pc = 0x2cf3c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf3c4: 0xac40caf8
    ctx->pc = 0x2cf3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953720), GPR_U32(ctx, 0));
    // 0x2cf3c8: 0x3c02003a
    ctx->pc = 0x2cf3c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf3cc: 0x1220000b
    ctx->pc = 0x2CF3CCu;
    {
        const bool branch_taken_0x2cf3cc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF3D0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 3088), GPR_U32(ctx, 0));
        if (branch_taken_0x2cf3cc) {
            ctx->pc = 0x2CF3FCu;
            goto label_2cf3fc;
        }
    }
    ctx->pc = 0x2CF3D4u;
    // 0x2cf3d4: 0x202d
    ctx->pc = 0x2cf3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3d8: 0x24050100
    ctx->pc = 0x2cf3d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cf3dc: 0xc0b3cc6
    ctx->pc = 0x2CF3DCu;
    SET_GPR_U32(ctx, 31, 0x2CF3E4u);
    ctx->pc = 0x2CF3E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF318u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewPolyNode_0x2cf318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3E4u; }
    }
    if (ctx->pc != 0x2CF3E4u) { return; }
    ctx->pc = 0x2CF3E4u;
    // 0x2cf3e4: 0x3c03003a
    ctx->pc = 0x2cf3e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2cf3e8: 0xac62b8f0
    ctx->pc = 0x2cf3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949104), GPR_U32(ctx, 2));
    // 0x2cf3ec: 0x8c430060
    ctx->pc = 0x2cf3ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2cf3f0: 0x34630004
    ctx->pc = 0x2cf3f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2cf3f4: 0x10000003
    ctx->pc = 0x2CF3F4u;
    {
        const bool branch_taken_0x2cf3f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF3F8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
        if (branch_taken_0x2cf3f4) {
            ctx->pc = 0x2CF404u;
            goto label_2cf404;
        }
    }
    ctx->pc = 0x2CF3FCu;
label_2cf3fc:
    // 0x2cf3fc: 0x3c02003a
    ctx->pc = 0x2cf3fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf400: 0xac40b8f0
    ctx->pc = 0x2cf400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949104), GPR_U32(ctx, 0));
label_2cf404:
    // 0x2cf404: 0xdfbf0020
    ctx->pc = 0x2cf404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf408: 0xdfb10010
    ctx->pc = 0x2cf408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf40c: 0xdfb00000
    ctx->pc = 0x2cf40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf410: 0x3e00008
    ctx->pc = 0x2CF410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF414u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CF3FCu: goto label_2cf3fc;
            case 0x2CF404u: goto label_2cf404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF418u;
}
