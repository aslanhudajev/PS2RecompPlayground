#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxDeleteParented
// Address: 0x27a888 - 0x27a93c
void SfxDeleteParented_0x27a888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27a888u;

    // 0x27a888: 0x27bdff80
    ctx->pc = 0x27a888u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27a88c: 0xffbf0070
    ctx->pc = 0x27a88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27a890: 0xffb60060
    ctx->pc = 0x27a890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27a894: 0xffb50050
    ctx->pc = 0x27a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27a898: 0xffb40040
    ctx->pc = 0x27a898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27a89c: 0xffb30030
    ctx->pc = 0x27a89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27a8a0: 0xffb20020
    ctx->pc = 0x27a8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27a8a4: 0xffb10010
    ctx->pc = 0x27a8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27a8a8: 0xffb00000
    ctx->pc = 0x27a8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a8ac: 0x80982d
    ctx->pc = 0x27a8acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8b0: 0xa0902d
    ctx->pc = 0x27a8b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8b4: 0xc0882d
    ctx->pc = 0x27a8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8b8: 0x3c020034
    ctx->pc = 0x27a8b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a8bc: 0x8c424ab0
    ctx->pc = 0x27a8bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 19120)));
    // 0x27a8c0: 0x18400014
    ctx->pc = 0x27A8C0u;
    {
        const bool branch_taken_0x27a8c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27A8C4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27a8c0) {
            ctx->pc = 0x27A914u;
            goto label_27a914;
        }
    }
    ctx->pc = 0x27A8C8u;
    // 0x27a8c8: 0x3c020034
    ctx->pc = 0x27a8c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27a8cc: 0x24560eb0
    ctx->pc = 0x27a8ccu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27a8d0: 0x241500f0
    ctx->pc = 0x27a8d0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27a8d4: 0x3c140034
    ctx->pc = 0x27a8d4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x27a8d8: 0x2151818
    ctx->pc = 0x27a8d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27a8dc: 0x0
    ctx->pc = 0x27a8dcu;
    // NOP
label_27a8e0:
    // 0x27a8e0: 0x761021
    ctx->pc = 0x27a8e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x27a8e4: 0x8c420014
    ctx->pc = 0x27a8e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x27a8e8: 0x10400005
    ctx->pc = 0x27A8E8u;
    {
        const bool branch_taken_0x27a8e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27A8ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27a8e8) {
            ctx->pc = 0x27A900u;
            goto label_27a900;
        }
    }
    ctx->pc = 0x27A8F0u;
    // 0x27a8f0: 0x260282d
    ctx->pc = 0x27a8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8f4: 0x220302d
    ctx->pc = 0x27a8f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a8f8: 0xc09e9e8
    ctx->pc = 0x27A8F8u;
    SET_GPR_U32(ctx, 31, 0x27A900u);
    ctx->pc = 0x27A8FCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27A7A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxDeleteParentedSub_0x27a7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A900u; }
    }
    if (ctx->pc != 0x27A900u) { return; }
    ctx->pc = 0x27A900u;
label_27a900:
    // 0x27a900: 0x26100001
    ctx->pc = 0x27a900u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x27a904: 0x8e824ab0
    ctx->pc = 0x27a904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 19120)));
    // 0x27a908: 0x202102a
    ctx->pc = 0x27a908u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x27a90c: 0x1440fff4
    ctx->pc = 0x27A90Cu;
    {
        const bool branch_taken_0x27a90c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27A910u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x27a90c) {
            ctx->pc = 0x27A8E0u;
            goto label_27a8e0;
        }
    }
    ctx->pc = 0x27A914u;
label_27a914:
    // 0x27a914: 0xdfbf0070
    ctx->pc = 0x27a914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27a918: 0xdfb60060
    ctx->pc = 0x27a918u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27a91c: 0xdfb50050
    ctx->pc = 0x27a91cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a920: 0xdfb40040
    ctx->pc = 0x27a920u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a924: 0xdfb30030
    ctx->pc = 0x27a924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a928: 0xdfb20020
    ctx->pc = 0x27a928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a92c: 0xdfb10010
    ctx->pc = 0x27a92cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a930: 0xdfb00000
    ctx->pc = 0x27a930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a934: 0x3e00008
    ctx->pc = 0x27A934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A938u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27A8E0u: goto label_27a8e0;
            case 0x27A900u: goto label_27a900;
            case 0x27A914u: goto label_27a914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27A93Cu;
}
