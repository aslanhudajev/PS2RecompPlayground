#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_IsEtime
// Address: 0x19b398 - 0x19b400
void sfply_IsEtime_0x19b398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_IsEtime");


    ctx->pc = 0x19b398u;

    // 0x19b398: 0x27bdffc0
    ctx->pc = 0x19b398u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19b39c: 0x24820994
    ctx->pc = 0x19b39cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 2452));
    // 0x19b3a0: 0xffbf0030
    ctx->pc = 0x19b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19b3a4: 0x2403fffc
    ctx->pc = 0x19b3a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x19b3a8: 0xffb10020
    ctx->pc = 0x19b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19b3ac: 0xffb00010
    ctx->pc = 0x19b3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19b3b0: 0x8c500050
    ctx->pc = 0x19b3b0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x19b3b4: 0x12030007
    ctx->pc = 0x19B3B4u;
    {
        const bool branch_taken_0x19b3b4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x19B3B8u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 84)));
        if (branch_taken_0x19b3b4) {
            ctx->pc = 0x19B3D4u;
            goto label_19b3d4;
        }
    }
    ctx->pc = 0x19B3BCu;
    // 0x19b3bc: 0x3a0282d
    ctx->pc = 0x19b3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3c0: 0xc0677d0
    ctx->pc = 0x19B3C0u;
    SET_GPR_U32(ctx, 31, 0x19B3C8u);
    ctx->pc = 0x19B3C4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x19DF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetTime_0x19df40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3C8u; }
        else if (ctx->pc != 0x19B3C8u) { ctx->pc = 0x19B3C8u; }
    }
    if (ctx->pc != 0x19B3C8u) { return; }
    ctx->pc = 0x19B3C8u;
    // 0x19b3c8: 0x8fa40000
    ctx->pc = 0x19b3c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b3cc: 0x4810003
    ctx->pc = 0x19B3CCu;
    {
        const bool branch_taken_0x19b3cc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19B3D0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x19b3cc) {
            ctx->pc = 0x19B3DCu;
            goto label_19b3dc;
        }
    }
    ctx->pc = 0x19B3D4u;
label_19b3d4:
    // 0x19b3d4: 0x10000005
    ctx->pc = 0x19B3D4u;
    {
        const bool branch_taken_0x19b3d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B3D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b3d4) {
            ctx->pc = 0x19B3ECu;
            goto label_19b3ec;
        }
    }
    ctx->pc = 0x19B3DCu;
label_19b3dc:
    // 0x19b3dc: 0x200302d
    ctx->pc = 0x19b3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3e0: 0xc05f946
    ctx->pc = 0x19B3E0u;
    SET_GPR_U32(ctx, 31, 0x19B3E8u);
    ctx->pc = 0x19B3E4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E518u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_CmpTime_0x17e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B3E8u; }
        else if (ctx->pc != 0x19B3E8u) { ctx->pc = 0x19B3E8u; }
    }
    if (ctx->pc != 0x19B3E8u) { return; }
    ctx->pc = 0x19B3E8u;
    // 0x19b3e8: 0x2c420001
    ctx->pc = 0x19b3e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_19b3ec:
    // 0x19b3ec: 0xdfbf0030
    ctx->pc = 0x19b3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b3f0: 0xdfb10020
    ctx->pc = 0x19b3f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b3f4: 0xdfb00010
    ctx->pc = 0x19b3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b3f8: 0x3e00008
    ctx->pc = 0x19B3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B3FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B3D4u: goto label_19b3d4;
            case 0x19B3DCu: goto label_19b3dc;
            case 0x19B3ECu: goto label_19b3ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B400u;
}
