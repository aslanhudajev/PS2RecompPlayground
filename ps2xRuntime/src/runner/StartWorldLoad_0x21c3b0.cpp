#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartWorldLoad
// Address: 0x21c3b0 - 0x21c550
void StartWorldLoad_0x21c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c3b0u;

    // 0x21c3b0: 0x27bdff90
    ctx->pc = 0x21c3b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21c3b4: 0xffbf0060
    ctx->pc = 0x21c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x21c3b8: 0xffb50050
    ctx->pc = 0x21c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21c3bc: 0xffb40040
    ctx->pc = 0x21c3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21c3c0: 0xffb30030
    ctx->pc = 0x21c3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21c3c4: 0xffb20020
    ctx->pc = 0x21c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21c3c8: 0xffb10010
    ctx->pc = 0x21c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21c3cc: 0xffb00000
    ctx->pc = 0x21c3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c3d0: 0x80902d
    ctx->pc = 0x21c3d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c3d4: 0x3c130032
    ctx->pc = 0x21c3d4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)50 << 16));
    // 0x21c3d8: 0xae60fba0
    ctx->pc = 0x21c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294966176), GPR_U32(ctx, 0));
    // 0x21c3dc: 0x3c020032
    ctx->pc = 0x21c3dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c3e0: 0xac40fba4
    ctx->pc = 0x21c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966180), GPR_U32(ctx, 0));
    // 0x21c3e4: 0x3c110032
    ctx->pc = 0x21c3e4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x21c3e8: 0x12400027
    ctx->pc = 0x21C3E8u;
    {
        const bool branch_taken_0x21c3e8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C3ECu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294966184), GPR_U32(ctx, 0));
        if (branch_taken_0x21c3e8) {
            ctx->pc = 0x21C488u;
            goto label_21c488;
        }
    }
    ctx->pc = 0x21C3F0u;
    // 0x21c3f0: 0x3c15003a
    ctx->pc = 0x21c3f0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x21c3f4: 0xc0b4eca
    ctx->pc = 0x21C3F4u;
    SET_GPR_U32(ctx, 31, 0x21C3FCu);
    ctx->pc = 0x21C3F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 25656));
    ctx->pc = 0x2D3B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileExists_0x2d3b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3FCu; }
    }
    if (ctx->pc != 0x21C3FCu) { return; }
    ctx->pc = 0x21C3FCu;
    // 0x21c3fc: 0x10400023
    ctx->pc = 0x21C3FCu;
    {
        const bool branch_taken_0x21c3fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C400u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x21c3fc) {
            ctx->pc = 0x21C48Cu;
            goto label_21c48c;
        }
    }
    ctx->pc = 0x21C404u;
    // 0x21c404: 0xc0b4fa0
    ctx->pc = 0x21C404u;
    SET_GPR_U32(ctx, 31, 0x21C40Cu);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C40Cu; }
    }
    if (ctx->pc != 0x21C40Cu) { return; }
    ctx->pc = 0x21C40Cu;
    // 0x21c40c: 0x40802d
    ctx->pc = 0x21c40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c410: 0xc0b1ca6
    ctx->pc = 0x21C410u;
    SET_GPR_U32(ctx, 31, 0x21C418u);
    ctx->pc = 0x21C414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C7298u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_AllocModel_0x2c7298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C418u; }
    }
    if (ctx->pc != 0x21C418u) { return; }
    ctx->pc = 0x21C418u;
    // 0x21c418: 0x3c030032
    ctx->pc = 0x21c418u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21c41c: 0xc0b4fa0
    ctx->pc = 0x21C41Cu;
    SET_GPR_U32(ctx, 31, 0x21C424u);
    ctx->pc = 0x21C420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965884), GPR_U32(ctx, 2));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C424u; }
    }
    if (ctx->pc != 0x21C424u) { return; }
    ctx->pc = 0x21C424u;
    // 0x21c424: 0x2028023
    ctx->pc = 0x21c424u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21c428: 0x8e22fba8
    ctx->pc = 0x21c428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966184)));
    // 0x21c42c: 0x2028021
    ctx->pc = 0x21c42cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21c430: 0xae30fba8
    ctx->pc = 0x21c430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966184), GPR_U32(ctx, 16));
    // 0x21c434: 0x3c02003a
    ctx->pc = 0x21c434u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21c438: 0x8c54230c
    ctx->pc = 0x21c438u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    // 0x21c43c: 0x3c04003a
    ctx->pc = 0x21c43cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21c440: 0x24846440
    ctx->pc = 0x21c440u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25664));
    // 0x21c444: 0x240282d
    ctx->pc = 0x21c444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c448: 0xc0b4a34
    ctx->pc = 0x21C448u;
    SET_GPR_U32(ctx, 31, 0x21C450u);
    ctx->pc = 0x21C44Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C450u; }
    }
    if (ctx->pc != 0x21C450u) { return; }
    ctx->pc = 0x21C450u;
    // 0x21c450: 0x240202d
    ctx->pc = 0x21c450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c454: 0xc0b4ed2
    ctx->pc = 0x21C454u;
    SET_GPR_U32(ctx, 31, 0x21C45Cu);
    ctx->pc = 0x21C458u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 25656));
    ctx->pc = 0x2D3B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSize_0x2d3b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C45Cu; }
    }
    if (ctx->pc != 0x21C45Cu) { return; }
    ctx->pc = 0x21C45Cu;
    // 0x21c45c: 0x40882d
    ctx->pc = 0x21c45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c460: 0x3c100032
    ctx->pc = 0x21c460u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x21c464: 0xc0b4f52
    ctx->pc = 0x21C464u;
    SET_GPR_U32(ctx, 31, 0x21C46Cu);
    ctx->pc = 0x21C468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C46Cu; }
    }
    if (ctx->pc != 0x21C46Cu) { return; }
    ctx->pc = 0x21C46Cu;
    // 0x21c46c: 0xae02faa0
    ctx->pc = 0x21c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965920), GPR_U32(ctx, 2));
    // 0x21c470: 0x3c02003c
    ctx->pc = 0x21c470u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21c474: 0xac40d58c
    ctx->pc = 0x21c474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956428), GPR_U32(ctx, 0));
    // 0x21c478: 0x8e62fba0
    ctx->pc = 0x21c478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294966176)));
    // 0x21c47c: 0x2221021
    ctx->pc = 0x21c47cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21c480: 0x10000005
    ctx->pc = 0x21C480u;
    {
        const bool branch_taken_0x21c480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C484u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294966176), GPR_U32(ctx, 2));
        if (branch_taken_0x21c480) {
            ctx->pc = 0x21C498u;
            goto label_21c498;
        }
    }
    ctx->pc = 0x21C488u;
label_21c488:
    // 0x21c488: 0x3c03003c
    ctx->pc = 0x21c488u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21c48c:
    // 0x21c48c: 0x2402ffff
    ctx->pc = 0x21c48cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c490: 0x10000026
    ctx->pc = 0x21C490u;
    {
        const bool branch_taken_0x21c490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C494u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956428), GPR_U32(ctx, 2));
        if (branch_taken_0x21c490) {
            ctx->pc = 0x21C52Cu;
            goto label_21c52c;
        }
    }
    ctx->pc = 0x21C498u;
label_21c498:
    // 0x21c498: 0x3c020032
    ctx->pc = 0x21c498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c49c: 0x2453f9f8
    ctx->pc = 0x21c49cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21c4a0: 0xae600088
    ctx->pc = 0x21c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x21c4a4: 0x3c020032
    ctx->pc = 0x21c4a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c4a8: 0xac40faa4
    ctx->pc = 0x21c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965924), GPR_U32(ctx, 0));
    // 0x21c4ac: 0x3c040032
    ctx->pc = 0x21c4acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x21c4b0: 0x2484fb60
    ctx->pc = 0x21c4b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966112));
    // 0x21c4b4: 0xc0bf2c1
    ctx->pc = 0x21C4B4u;
    SET_GPR_U32(ctx, 31, 0x21C4BCu);
    ctx->pc = 0x21C4B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4BCu; }
    }
    if (ctx->pc != 0x21C4BCu) { return; }
    ctx->pc = 0x21C4BCu;
    // 0x21c4bc: 0x240202d
    ctx->pc = 0x21c4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4c0: 0x3c10003a
    ctx->pc = 0x21c4c0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x21c4c4: 0xc0b4eca
    ctx->pc = 0x21C4C4u;
    SET_GPR_U32(ctx, 31, 0x21C4CCu);
    ctx->pc = 0x21C4C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 25696));
    ctx->pc = 0x2D3B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileExists_0x2d3b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4CCu; }
    }
    if (ctx->pc != 0x21C4CCu) { return; }
    ctx->pc = 0x21C4CCu;
    // 0x21c4cc: 0x1040000c
    ctx->pc = 0x21C4CCu;
    {
        const bool branch_taken_0x21c4cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C4D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21c4cc) {
            ctx->pc = 0x21C500u;
            goto label_21c500;
        }
    }
    ctx->pc = 0x21C4D4u;
    // 0x21c4d4: 0xc0b4ed2
    ctx->pc = 0x21C4D4u;
    SET_GPR_U32(ctx, 31, 0x21C4DCu);
    ctx->pc = 0x21C4D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 25696));
    ctx->pc = 0x2D3B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSize_0x2d3b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4DCu; }
    }
    if (ctx->pc != 0x21C4DCu) { return; }
    ctx->pc = 0x21C4DCu;
    // 0x21c4dc: 0x40882d
    ctx->pc = 0x21c4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4e0: 0xc0b4f52
    ctx->pc = 0x21C4E0u;
    SET_GPR_U32(ctx, 31, 0x21C4E8u);
    ctx->pc = 0x21C4E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4E8u; }
    }
    if (ctx->pc != 0x21C4E8u) { return; }
    ctx->pc = 0x21C4E8u;
    // 0x21c4e8: 0xae620080
    ctx->pc = 0x21c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    // 0x21c4ec: 0x3c030032
    ctx->pc = 0x21c4ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21c4f0: 0x8c62fba4
    ctx->pc = 0x21c4f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966180)));
    // 0x21c4f4: 0x2221021
    ctx->pc = 0x21c4f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21c4f8: 0x10000003
    ctx->pc = 0x21C4F8u;
    {
        const bool branch_taken_0x21c4f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C4FCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966180), GPR_U32(ctx, 2));
        if (branch_taken_0x21c4f8) {
            ctx->pc = 0x21C508u;
            goto label_21c508;
        }
    }
    ctx->pc = 0x21C500u;
label_21c500:
    // 0x21c500: 0x3c020032
    ctx->pc = 0x21c500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c504: 0xac40fa78
    ctx->pc = 0x21c504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965880), GPR_U32(ctx, 0));
label_21c508:
    // 0x21c508: 0x3c02003a
    ctx->pc = 0x21c508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21c50c: 0x8c45230c
    ctx->pc = 0x21c50cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    // 0x21c510: 0xb43023
    ctx->pc = 0x21c510u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x21c514: 0x3c04003a
    ctx->pc = 0x21c514u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21c518: 0x24846468
    ctx->pc = 0x21c518u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25704));
    // 0x21c51c: 0xc0b4a34
    ctx->pc = 0x21C51Cu;
    SET_GPR_U32(ctx, 31, 0x21C524u);
    ctx->pc = 0x21C520u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 10));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C524u; }
    }
    if (ctx->pc != 0x21C524u) { return; }
    ctx->pc = 0x21C524u;
    // 0x21c524: 0x3c020032
    ctx->pc = 0x21c524u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c528: 0x8c42fa7c
    ctx->pc = 0x21c528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965884)));
label_21c52c:
    // 0x21c52c: 0xdfbf0060
    ctx->pc = 0x21c52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21c530: 0xdfb50050
    ctx->pc = 0x21c530u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21c534: 0xdfb40040
    ctx->pc = 0x21c534u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c538: 0xdfb30030
    ctx->pc = 0x21c538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c53c: 0xdfb20020
    ctx->pc = 0x21c53cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c540: 0xdfb10010
    ctx->pc = 0x21c540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c544: 0xdfb00000
    ctx->pc = 0x21c544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c548: 0x3e00008
    ctx->pc = 0x21C548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C54Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C488u: goto label_21c488;
            case 0x21C48Cu: goto label_21c48c;
            case 0x21C498u: goto label_21c498;
            case 0x21C500u: goto label_21c500;
            case 0x21C508u: goto label_21c508;
            case 0x21C52Cu: goto label_21c52c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C550u;
}
