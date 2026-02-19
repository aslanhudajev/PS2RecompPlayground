#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: add_vmu_file
// Address: 0x20a3a0 - 0x20a4d4
void add_vmu_file_0x20a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20a3a0u;

    // 0x20a3a0: 0x27bdffc0
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20a3a4: 0xffbf0030
    ctx->pc = 0x20a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20a3a8: 0xffbe0020
    ctx->pc = 0x20a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x20a3ac: 0x3a0f02d
    ctx->pc = 0x20a3acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a3b0: 0xafc40000
    ctx->pc = 0x20a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x20a3b4: 0xafc50004
    ctx->pc = 0x20a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x20a3b8: 0xafc60008
    ctx->pc = 0x20a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x20a3bc: 0xafc7000c
    ctx->pc = 0x20a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x20a3c0: 0xafc80010
    ctx->pc = 0x20a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x20a3c4: 0xafc90014
    ctx->pc = 0x20a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 9));
    // 0x20a3c8: 0x8fc20000
    ctx->pc = 0x20a3c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a3cc: 0x24030210
    ctx->pc = 0x20a3ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 528));
    // 0x20a3d0: 0x431018
    ctx->pc = 0x20a3d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a3d4: 0x8fc30004
    ctx->pc = 0x20a3d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a3d8: 0x24040084
    ctx->pc = 0x20a3d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x20a3dc: 0x641818
    ctx->pc = 0x20a3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a3e0: 0x3c040031
    ctx->pc = 0x20a3e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x20a3e4: 0x24841e60
    ctx->pc = 0x20a3e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7776));
    // 0x20a3e8: 0x641821
    ctx->pc = 0x20a3e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20a3ec: 0x431021
    ctx->pc = 0x20a3ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a3f0: 0x8fc30008
    ctx->pc = 0x20a3f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a3f4: 0x60202d
    ctx->pc = 0x20a3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a3f8: 0x41900
    ctx->pc = 0x20a3f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x20a3fc: 0x431021
    ctx->pc = 0x20a3fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a400: 0x24430008
    ctx->pc = 0x20a400u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x20a404: 0x60202d
    ctx->pc = 0x20a404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a408: 0x8fc5000c
    ctx->pc = 0x20a408u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x20a40c: 0x24060008
    ctx->pc = 0x20a40cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x20a410: 0xc0bf42e
    ctx->pc = 0x20A410u;
    SET_GPR_U32(ctx, 31, 0x20A418u);
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A418u; }
    }
    if (ctx->pc != 0x20A418u) { return; }
    ctx->pc = 0x20A418u;
    // 0x20a418: 0x8fc20008
    ctx->pc = 0x20a418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a41c: 0x40182d
    ctx->pc = 0x20a41cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a420: 0x31100
    ctx->pc = 0x20a420u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x20a424: 0x8fc30004
    ctx->pc = 0x20a424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a428: 0x24040084
    ctx->pc = 0x20a428u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x20a42c: 0x641818
    ctx->pc = 0x20a42cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a430: 0x431021
    ctx->pc = 0x20a430u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a434: 0x8fc30000
    ctx->pc = 0x20a434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a438: 0x24040210
    ctx->pc = 0x20a438u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 528));
    // 0x20a43c: 0x641818
    ctx->pc = 0x20a43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a440: 0x431021
    ctx->pc = 0x20a440u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a444: 0x3c030031
    ctx->pc = 0x20a444u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20a448: 0x24631e60
    ctx->pc = 0x20a448u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7776));
    // 0x20a44c: 0x621021
    ctx->pc = 0x20a44cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a450: 0x8fc30010
    ctx->pc = 0x20a450u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x20a454: 0xac430000
    ctx->pc = 0x20a454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x20a458: 0x8fc20008
    ctx->pc = 0x20a458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a45c: 0x40182d
    ctx->pc = 0x20a45cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a460: 0x31100
    ctx->pc = 0x20a460u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x20a464: 0x8fc30004
    ctx->pc = 0x20a464u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a468: 0x24040084
    ctx->pc = 0x20a468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x20a46c: 0x641818
    ctx->pc = 0x20a46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a470: 0x431021
    ctx->pc = 0x20a470u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a474: 0x8fc30000
    ctx->pc = 0x20a474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a478: 0x24040210
    ctx->pc = 0x20a478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 528));
    // 0x20a47c: 0x641818
    ctx->pc = 0x20a47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20a480: 0x431021
    ctx->pc = 0x20a480u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a484: 0x3c030031
    ctx->pc = 0x20a484u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20a488: 0x24631e64
    ctx->pc = 0x20a488u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7780));
    // 0x20a48c: 0x621021
    ctx->pc = 0x20a48cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a490: 0x8fc30014
    ctx->pc = 0x20a490u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x20a494: 0xac430000
    ctx->pc = 0x20a494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x20a498: 0x8fc40000
    ctx->pc = 0x20a498u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a49c: 0x8fc50004
    ctx->pc = 0x20a49cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a4a0: 0xc0827d0
    ctx->pc = 0x20A4A0u;
    SET_GPR_U32(ctx, 31, 0x20A4A8u);
    ctx->pc = 0x209F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        save_vmu_directory_0x209f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4A8u; }
    }
    if (ctx->pc != 0x20A4A8u) { return; }
    ctx->pc = 0x20A4A8u;
    // 0x20a4a8: 0xafc20018
    ctx->pc = 0x20a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x20a4ac: 0x8fc30018
    ctx->pc = 0x20a4acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x20a4b0: 0x60102d
    ctx->pc = 0x20a4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4b4: 0x10000001
    ctx->pc = 0x20A4B4u;
    {
        const bool branch_taken_0x20a4b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a4b4) {
            ctx->pc = 0x20A4BCu;
            goto label_20a4bc;
        }
    }
    ctx->pc = 0x20A4BCu;
label_20a4bc:
    // 0x20a4bc: 0x3c0e82d
    ctx->pc = 0x20a4bcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4c0: 0xdfbf0030
    ctx->pc = 0x20a4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a4c4: 0xdfbe0020
    ctx->pc = 0x20a4c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a4c8: 0x27bd0040
    ctx->pc = 0x20a4c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x20a4cc: 0x3e00008
    ctx->pc = 0x20A4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A4BCu: goto label_20a4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A4D4u;
}
