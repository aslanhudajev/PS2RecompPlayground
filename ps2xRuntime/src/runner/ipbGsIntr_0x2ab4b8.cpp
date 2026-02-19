#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbGsIntr
// Address: 0x2ab4b8 - 0x2ab610
void ipbGsIntr_0x2ab4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab4b8u;

    // 0x2ab4b8: 0x27bdffd0
    ctx->pc = 0x2ab4b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab4bc: 0xffbf0020
    ctx->pc = 0x2ab4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab4c0: 0xffbe0010
    ctx->pc = 0x2ab4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2ab4c4: 0x3a0f02d
    ctx->pc = 0x2ab4c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4c8: 0xafc40000
    ctx->pc = 0x2ab4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2ab4cc: 0x24020001
    ctx->pc = 0x2ab4ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab4d0: 0x3c010037
    ctx->pc = 0x2ab4d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab4d4: 0xac2283c0
    ctx->pc = 0x2ab4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935488), GPR_U32(ctx, 2));
    // 0x2ab4d8: 0x3c030037
    ctx->pc = 0x2ab4d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2ab4dc: 0x8c6383bc
    ctx->pc = 0x2ab4dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294935484)));
    // 0x2ab4e0: 0x24620001
    ctx->pc = 0x2ab4e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ab4e4: 0x40182d
    ctx->pc = 0x2ab4e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4e8: 0x3c010037
    ctx->pc = 0x2ab4e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab4ec: 0xac2383bc
    ctx->pc = 0x2ab4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935484), GPR_U32(ctx, 3));
    // 0x2ab4f0: 0x14600005
    ctx->pc = 0x2AB4F0u;
    {
        const bool branch_taken_0x2ab4f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ab4f0) {
            ctx->pc = 0x2AB508u;
            goto label_2ab508;
        }
    }
    ctx->pc = 0x2AB4F8u;
    // 0x2ab4f8: 0x3c02ffff
    ctx->pc = 0x2ab4f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2ab4fc: 0x3442ffff
    ctx->pc = 0x2ab4fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ab500: 0x3c010037
    ctx->pc = 0x2ab500u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab504: 0xac2283bc
    ctx->pc = 0x2ab504u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935484), GPR_U32(ctx, 2));
label_2ab508:
    // 0x2ab508: 0x3c021200
    ctx->pc = 0x2ab508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4608 << 16));
    // 0x2ab50c: 0xdc421000
    ctx->pc = 0x2ab50cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4096)));
    // 0x2ab510: 0x2183c
    ctx->pc = 0x2ab510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ab514: 0x3183f
    ctx->pc = 0x2ab514u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ab518: 0xafc30004
    ctx->pc = 0x2ab518u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x2ab51c: 0x8fc20000
    ctx->pc = 0x2ab51cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab520: 0x10400006
    ctx->pc = 0x2AB520u;
    {
        const bool branch_taken_0x2ab520 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab520) {
            ctx->pc = 0x2AB53Cu;
            goto label_2ab53c;
        }
    }
    ctx->pc = 0x2AB528u;
    // 0x2ab528: 0xf
    ctx->pc = 0x2ab528u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2ab52c: 0x42000038
    ctx->pc = 0x2ab52cu;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x2ab530: 0x24020001
    ctx->pc = 0x2ab530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab534: 0x10000030
    ctx->pc = 0x2AB534u;
    {
        const bool branch_taken_0x2ab534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab534) {
            ctx->pc = 0x2AB5F8u;
            goto label_2ab5f8;
        }
    }
    ctx->pc = 0x2AB53Cu;
label_2ab53c:
    // 0x2ab53c: 0x8fc30004
    ctx->pc = 0x2ab53cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab540: 0x30620001
    ctx->pc = 0x2ab540u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2ab544: 0x10400025
    ctx->pc = 0x2AB544u;
    {
        const bool branch_taken_0x2ab544 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab544) {
            ctx->pc = 0x2AB5DCu;
            goto label_2ab5dc;
        }
    }
    ctx->pc = 0x2AB54Cu;
    // 0x2ab54c: 0xc0b85dc
    ctx->pc = 0x2AB54Cu;
    SET_GPR_U32(ctx, 31, 0x2AB554u);
    ctx->pc = 0x2E1770u;
    {
        const uint32_t __entryPc = ctx->pc;
        isceGsGetIMR_0x2e1770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB554u; }
    }
    if (ctx->pc != 0x2AB554u) { return; }
    ctx->pc = 0x2AB554u;
    // 0x2ab554: 0xffc20008
    ctx->pc = 0x2ab554u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
    // 0x2ab558: 0xdfc20008
    ctx->pc = 0x2ab558u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2ab55c: 0x24030100
    ctx->pc = 0x2ab55cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ab560: 0x431025
    ctx->pc = 0x2ab560u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab564: 0xffc20008
    ctx->pc = 0x2ab564u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
    // 0x2ab568: 0xdfc40008
    ctx->pc = 0x2ab568u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2ab56c: 0xc0b85cc
    ctx->pc = 0x2AB56Cu;
    SET_GPR_U32(ctx, 31, 0x2AB574u);
    ctx->pc = 0x2E1730u;
    {
        const uint32_t __entryPc = ctx->pc;
        isceGsPutIMR_0x2e1730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB574u; }
    }
    if (ctx->pc != 0x2AB574u) { return; }
    ctx->pc = 0x2AB574u;
    // 0x2ab574: 0xffc20008
    ctx->pc = 0x2ab574u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
    // 0x2ab578: 0x24020001
    ctx->pc = 0x2ab578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab57c: 0x3c011200
    ctx->pc = 0x2ab57cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4608 << 16));
    // 0x2ab580: 0xfc221000
    ctx->pc = 0x2ab580u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4096), GPR_U64(ctx, 2));
    // 0x2ab584: 0x3c021200
    ctx->pc = 0x2ab584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4608 << 16));
    // 0x2ab588: 0xdc421080
    ctx->pc = 0x2ab588u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4224)));
    // 0x2ab58c: 0x2183c
    ctx->pc = 0x2ab58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ab590: 0x3183f
    ctx->pc = 0x2ab590u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ab594: 0x3c010037
    ctx->pc = 0x2ab594u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab598: 0xac2383ac
    ctx->pc = 0x2ab598u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935468), GPR_U32(ctx, 3));
    // 0x2ab59c: 0x24040003
    ctx->pc = 0x2ab59cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ab5a0: 0xc0aacc2
    ctx->pc = 0x2AB5A0u;
    SET_GPR_U32(ctx, 31, 0x2AB5A8u);
    ctx->pc = 0x2AB308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbKickTraversalDma_0x2ab308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5A8u; }
    }
    if (ctx->pc != 0x2AB5A8u) { return; }
    ctx->pc = 0x2AB5A8u;
    // 0x2ab5a8: 0xdfc40008
    ctx->pc = 0x2ab5a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2ab5ac: 0xc0b85cc
    ctx->pc = 0x2AB5ACu;
    SET_GPR_U32(ctx, 31, 0x2AB5B4u);
    ctx->pc = 0x2E1730u;
    {
        const uint32_t __entryPc = ctx->pc;
        isceGsPutIMR_0x2e1730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5B4u; }
    }
    if (ctx->pc != 0x2AB5B4u) { return; }
    ctx->pc = 0x2AB5B4u;
    // 0x2ab5b4: 0xffc20008
    ctx->pc = 0x2ab5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
    // 0x2ab5b8: 0x3c010037
    ctx->pc = 0x2ab5b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab5bc: 0xac2083c0
    ctx->pc = 0x2ab5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935488), GPR_U32(ctx, 0));
    // 0x2ab5c0: 0xf
    ctx->pc = 0x2ab5c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2ab5c4: 0x42000038
    ctx->pc = 0x2ab5c4u;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x2ab5c8: 0x102d
    ctx->pc = 0x2ab5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5cc: 0x1000000a
    ctx->pc = 0x2AB5CCu;
    {
        const bool branch_taken_0x2ab5cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab5cc) {
            ctx->pc = 0x2AB5F8u;
            goto label_2ab5f8;
        }
    }
    ctx->pc = 0x2AB5D4u;
    // 0x2ab5d4: 0x10000008
    ctx->pc = 0x2AB5D4u;
    {
        const bool branch_taken_0x2ab5d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab5d4) {
            ctx->pc = 0x2AB5F8u;
            goto label_2ab5f8;
        }
    }
    ctx->pc = 0x2AB5DCu;
label_2ab5dc:
    // 0x2ab5dc: 0x3c010037
    ctx->pc = 0x2ab5dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab5e0: 0xac2083c0
    ctx->pc = 0x2ab5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935488), GPR_U32(ctx, 0));
    // 0x2ab5e4: 0xf
    ctx->pc = 0x2ab5e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2ab5e8: 0x42000038
    ctx->pc = 0x2ab5e8u;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x2ab5ec: 0x24020001
    ctx->pc = 0x2ab5ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab5f0: 0x10000001
    ctx->pc = 0x2AB5F0u;
    {
        const bool branch_taken_0x2ab5f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab5f0) {
            ctx->pc = 0x2AB5F8u;
            goto label_2ab5f8;
        }
    }
    ctx->pc = 0x2AB5F8u;
label_2ab5f8:
    // 0x2ab5f8: 0x3c0e82d
    ctx->pc = 0x2ab5f8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5fc: 0xdfbf0020
    ctx->pc = 0x2ab5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab600: 0xdfbe0010
    ctx->pc = 0x2ab600u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab604: 0x27bd0030
    ctx->pc = 0x2ab604u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab608: 0x3e00008
    ctx->pc = 0x2AB608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB508u: goto label_2ab508;
            case 0x2AB53Cu: goto label_2ab53c;
            case 0x2AB5DCu: goto label_2ab5dc;
            case 0x2AB5F8u: goto label_2ab5f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB610u;
}
