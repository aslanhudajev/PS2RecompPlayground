#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbDmaIntr
// Address: 0x2ab358 - 0x2ab4b8
void ipbDmaIntr_0x2ab358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    {
        static int _intrLog = 0;
        if (++_intrLog <= 20 || (_intrLog % 500) == 0)
            printf("[ipbDmaIntr #%d] ENTRY a0=%u(ch)\n", _intrLog, GPR_U32(ctx, 4));
    }

    ctx->pc = 0x2ab358u;

    // 0x2ab358: 0x27bdffd0
    ctx->pc = 0x2ab358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab35c: 0xffbf0020
    ctx->pc = 0x2ab35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab360: 0xffbe0010
    ctx->pc = 0x2ab360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2ab364: 0x3a0f02d
    ctx->pc = 0x2ab364u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab368: 0xafc40000
    ctx->pc = 0x2ab368u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2ab36c: 0x40024800
    ctx->pc = 0x2ab36cu;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2ab370: 0x40182d
    ctx->pc = 0x2ab370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab374: 0xafc30004
    ctx->pc = 0x2ab374u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x2ab378: 0x8fc20004
    ctx->pc = 0x2ab378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab37c: 0x3c01003a
    ctx->pc = 0x2ab37cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2ab380: 0xac2221a8
    ctx->pc = 0x2ab380u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 2));
    // 0x2ab384: 0x24020001
    ctx->pc = 0x2ab384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab388: 0x3c010037
    ctx->pc = 0x2ab388u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab38c: 0xac2283b8
    ctx->pc = 0x2ab38cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935480), GPR_U32(ctx, 2));
    // 0x2ab390: 0x3c030037
    ctx->pc = 0x2ab390u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2ab394: 0x8c6383b4
    ctx->pc = 0x2ab394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294935476)));
    // 0x2ab398: 0x24620001
    ctx->pc = 0x2ab398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ab39c: 0x40182d
    ctx->pc = 0x2ab39cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3a0: 0x3c010037
    ctx->pc = 0x2ab3a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab3a4: 0xac2383b4
    ctx->pc = 0x2ab3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935476), GPR_U32(ctx, 3));
    // 0x2ab3a8: 0x14600005
    ctx->pc = 0x2AB3A8u;
    {
        const bool branch_taken_0x2ab3a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ab3a8) {
            ctx->pc = 0x2AB3C0u;
            goto label_2ab3c0;
        }
    }
    ctx->pc = 0x2AB3B0u;
    // 0x2ab3b0: 0x3c02ffff
    ctx->pc = 0x2ab3b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2ab3b4: 0x3442ffff
    ctx->pc = 0x2ab3b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ab3b8: 0x3c010037
    ctx->pc = 0x2ab3b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab3bc: 0xac2283b4
    ctx->pc = 0x2ab3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935476), GPR_U32(ctx, 2));
label_2ab3c0:
    // 0x2ab3c0: 0x8fc20000
    ctx->pc = 0x2ab3c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab3c4: 0x24030001
    ctx->pc = 0x2ab3c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab3c8: 0x14430006
    ctx->pc = 0x2AB3C8u;
    {
        const bool branch_taken_0x2ab3c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2ab3c8) {
            ctx->pc = 0x2AB3E4u;
            goto label_2ab3e4;
        }
    }
    ctx->pc = 0x2AB3D0u;
    // 0x2ab3d0: 0x24040001
    ctx->pc = 0x2ab3d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab3d4: 0xc0aacc2
    ctx->pc = 0x2AB3D4u;
    SET_GPR_U32(ctx, 31, 0x2AB3DCu);
    ctx->pc = 0x2AB308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbKickTraversalDma_0x2ab308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB3DCu; }
    }
    if (ctx->pc != 0x2AB3DCu) { return; }
    ctx->pc = 0x2AB3DCu;
    // 0x2ab3dc: 0x1000000f
    ctx->pc = 0x2AB3DCu;
    {
        const bool branch_taken_0x2ab3dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab3dc) {
            ctx->pc = 0x2AB41Cu;
            goto label_2ab41c;
        }
    }
    ctx->pc = 0x2AB3E4u;
label_2ab3e4:
    // 0x2ab3e4: 0x8fc20000
    ctx->pc = 0x2ab3e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab3e8: 0x24030002
    ctx->pc = 0x2ab3e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab3ec: 0x14430006
    ctx->pc = 0x2AB3ECu;
    {
        const bool branch_taken_0x2ab3ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2ab3ec) {
            ctx->pc = 0x2AB408u;
            goto label_2ab408;
        }
    }
    ctx->pc = 0x2AB3F4u;
    // 0x2ab3f4: 0x24040002
    ctx->pc = 0x2ab3f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab3f8: 0xc0aacc2
    ctx->pc = 0x2AB3F8u;
    SET_GPR_U32(ctx, 31, 0x2AB400u);
    ctx->pc = 0x2AB308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbKickTraversalDma_0x2ab308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB400u; }
    }
    if (ctx->pc != 0x2AB400u) { return; }
    ctx->pc = 0x2AB400u;
    // 0x2ab400: 0x10000006
    ctx->pc = 0x2AB400u;
    {
        const bool branch_taken_0x2ab400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab400) {
            ctx->pc = 0x2AB41Cu;
            goto label_2ab41c;
        }
    }
    ctx->pc = 0x2AB408u;
label_2ab408:
    // 0x2ab408: 0x8fc20000
    ctx->pc = 0x2ab408u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab40c: 0x14400003
    ctx->pc = 0x2AB40Cu;
    {
        const bool branch_taken_0x2ab40c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ab40c) {
            ctx->pc = 0x2AB41Cu;
            goto label_2ab41c;
        }
    }
    ctx->pc = 0x2AB414u;
    // 0x2ab414: 0x10000001
    ctx->pc = 0x2AB414u;
    {
        const bool branch_taken_0x2ab414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab414) {
            ctx->pc = 0x2AB41Cu;
            goto label_2ab41c;
        }
    }
    ctx->pc = 0x2AB41Cu;
label_2ab41c:
    // 0x2ab41c: 0x8fc20000
    ctx->pc = 0x2ab41cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab420: 0x28430003
    ctx->pc = 0x2ab420u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2ab424: 0x10600004
    ctx->pc = 0x2AB424u;
    {
        const bool branch_taken_0x2ab424 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab424) {
            ctx->pc = 0x2AB438u;
            goto label_2ab438;
        }
    }
    ctx->pc = 0x2AB42Cu;
    // 0x2ab42c: 0x8fc40000
    ctx->pc = 0x2ab42cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab430: 0xc0a9972
    ctx->pc = 0x2AB430u;
    SET_GPR_U32(ctx, 31, 0x2AB438u);
    ctx->pc = 0x2A65C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbEndDma_0x2a65c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB438u; }
    }
    if (ctx->pc != 0x2AB438u) { return; }
    ctx->pc = 0x2AB438u;
label_2ab438:
    // 0x2ab438: 0x40024800
    ctx->pc = 0x2ab438u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2ab43c: 0x40182d
    ctx->pc = 0x2ab43cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab440: 0xafc30004
    ctx->pc = 0x2ab440u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x2ab444: 0x8fc20004
    ctx->pc = 0x2ab444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab448: 0x3c03003a
    ctx->pc = 0x2ab448u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2ab44c: 0x8c6321a8
    ctx->pc = 0x2ab44cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8616)));
    // 0x2ab450: 0x431023
    ctx->pc = 0x2ab450u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab454: 0xafc20004
    ctx->pc = 0x2ab454u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2ab458: 0x3c02003a
    ctx->pc = 0x2ab458u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ab45c: 0x8c4221a0
    ctx->pc = 0x2ab45cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8608)));
    // 0x2ab460: 0x8fc30004
    ctx->pc = 0x2ab460u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab464: 0x431021
    ctx->pc = 0x2ab464u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab468: 0x3c01003a
    ctx->pc = 0x2ab468u;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2ab46c: 0xac2221a0
    ctx->pc = 0x2ab46cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8608), GPR_U32(ctx, 2));
    // 0x2ab470: 0x3c02003a
    ctx->pc = 0x2ab470u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ab474: 0x8c4221a4
    ctx->pc = 0x2ab474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8612)));
    // 0x2ab478: 0x24430001
    ctx->pc = 0x2ab478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ab47c: 0x3c01003a
    ctx->pc = 0x2ab47cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x2ab480: 0xac2321a4
    ctx->pc = 0x2ab480u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8612), GPR_U32(ctx, 3));
    // 0x2ab484: 0x3c010037
    ctx->pc = 0x2ab484u;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2ab488: 0xac2083b8
    ctx->pc = 0x2ab488u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935480), GPR_U32(ctx, 0));
    // 0x2ab48c: 0xf
    ctx->pc = 0x2ab48cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2ab490: 0x42000038
    ctx->pc = 0x2ab490u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x2ab494: 0x102d
    ctx->pc = 0x2ab494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab498: 0x10000001
    ctx->pc = 0x2AB498u;
    {
        const bool branch_taken_0x2ab498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab498) {
            ctx->pc = 0x2AB4A0u;
            goto label_2ab4a0;
        }
    }
    ctx->pc = 0x2AB4A0u;
label_2ab4a0:
    // 0x2ab4a0: 0x3c0e82d
    ctx->pc = 0x2ab4a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4a4: 0xdfbf0020
    ctx->pc = 0x2ab4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab4a8: 0xdfbe0010
    ctx->pc = 0x2ab4a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab4ac: 0x27bd0030
    ctx->pc = 0x2ab4acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab4b0: 0x3e00008
    ctx->pc = 0x2AB4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB3C0u: goto label_2ab3c0;
            case 0x2AB3E4u: goto label_2ab3e4;
            case 0x2AB408u: goto label_2ab408;
            case 0x2AB41Cu: goto label_2ab41c;
            case 0x2AB438u: goto label_2ab438;
            case 0x2AB4A0u: goto label_2ab4a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB4B8u;
}
