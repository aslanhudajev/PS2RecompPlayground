#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartLoadWorldAnim
// Address: 0x21c778 - 0x21c7f8
void StartLoadWorldAnim_0x21c778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c778u;

    // 0x21c778: 0x27bdffc0
    ctx->pc = 0x21c778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21c77c: 0xffbf0030
    ctx->pc = 0x21c77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21c780: 0xffb20020
    ctx->pc = 0x21c780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c784: 0xffb10010
    ctx->pc = 0x21c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21c788: 0xffb00000
    ctx->pc = 0x21c788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c78c: 0x3c020032
    ctx->pc = 0x21c78cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c790: 0x2452f9f8
    ctx->pc = 0x21c790u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21c794: 0x8e420080
    ctx->pc = 0x21c794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x21c798: 0x10400010
    ctx->pc = 0x21C798u;
    {
        const bool branch_taken_0x21c798 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C79Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21c798) {
            ctx->pc = 0x21C7DCu;
            goto label_21c7dc;
        }
    }
    ctx->pc = 0x21C7A0u;
    // 0x21c7a0: 0x3c10003a
    ctx->pc = 0x21c7a0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x21c7a4: 0xc0b4ed2
    ctx->pc = 0x21C7A4u;
    SET_GPR_U32(ctx, 31, 0x21C7ACu);
    ctx->pc = 0x21C7A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 25696));
    ctx->pc = 0x2D3B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSize_0x2d3b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7ACu; }
    }
    if (ctx->pc != 0x21C7ACu) { return; }
    ctx->pc = 0x21C7ACu;
    // 0x21c7ac: 0x220202d
    ctx->pc = 0x21c7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7b0: 0x26056460
    ctx->pc = 0x21c7b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 25696));
    // 0x21c7b4: 0x302d
    ctx->pc = 0x21c7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7b8: 0x40382d
    ctx->pc = 0x21c7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7bc: 0x8e480080
    ctx->pc = 0x21c7bcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x21c7c0: 0x3c090022
    ctx->pc = 0x21c7c0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)34 << 16));
    // 0x21c7c4: 0xc0b5094
    ctx->pc = 0x21C7C4u;
    SET_GPR_U32(ctx, 31, 0x21C7CCu);
    ctx->pc = 0x21C7C8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294952272));
    ctx->pc = 0x2D4250u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFileRead_0x2d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7CCu; }
    }
    if (ctx->pc != 0x21C7CCu) { return; }
    ctx->pc = 0x21C7CCu;
    // 0x21c7cc: 0x3c03003c
    ctx->pc = 0x21c7ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21c7d0: 0xac62d590
    ctx->pc = 0x21c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956432), GPR_U32(ctx, 2));
    // 0x21c7d4: 0x10000002
    ctx->pc = 0x21C7D4u;
    {
        const bool branch_taken_0x21c7d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C7D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21c7d4) {
            ctx->pc = 0x21C7E0u;
            goto label_21c7e0;
        }
    }
    ctx->pc = 0x21C7DCu;
label_21c7dc:
    // 0x21c7dc: 0x102d
    ctx->pc = 0x21c7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c7e0:
    // 0x21c7e0: 0xdfbf0030
    ctx->pc = 0x21c7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c7e4: 0xdfb20020
    ctx->pc = 0x21c7e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c7e8: 0xdfb10010
    ctx->pc = 0x21c7e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c7ec: 0xdfb00000
    ctx->pc = 0x21c7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c7f0: 0x3e00008
    ctx->pc = 0x21C7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C7F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C7DCu: goto label_21c7dc;
            case 0x21C7E0u: goto label_21c7e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C7F8u;
}
