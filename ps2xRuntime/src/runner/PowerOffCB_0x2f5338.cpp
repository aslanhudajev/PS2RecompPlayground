#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PowerOffCB
// Address: 0x2f5338 - 0x2f5480
void PowerOffCB_0x2f5338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f5338u;

    // 0x2f5338: 0x27bdffa0
    ctx->pc = 0x2f5338u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f533c: 0x202d
    ctx->pc = 0x2f533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5340: 0xffb20030
    ctx->pc = 0x2f5340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f5344: 0xffbf0050
    ctx->pc = 0x2f5344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f5348: 0x3c12003a
    ctx->pc = 0x2f5348u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f534c: 0xffb30040
    ctx->pc = 0x2f534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f5350: 0xffb10020
    ctx->pc = 0x2f5350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f5354: 0xc0c1692
    ctx->pc = 0x2F5354u;
    SET_GPR_U32(ctx, 31, 0x2F535Cu);
    ctx->pc = 0x2F5358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x305A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x305a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F535Cu; }
    }
    if (ctx->pc != 0x2F535Cu) { return; }
    ctx->pc = 0x2F535Cu;
    // 0x2f535c: 0x8e423ac4
    ctx->pc = 0x2f535cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 15044)));
    // 0x2f5360: 0x441002f
    ctx->pc = 0x2F5360u;
    {
        const bool branch_taken_0x2f5360 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F5364u;
        SET_GPR_U32(ctx, 19, ((uint32_t)62 << 16));
        if (branch_taken_0x2f5360) {
            ctx->pc = 0x2F5420u;
            goto label_2f5420;
        }
    }
    ctx->pc = 0x2F5368u;
    // 0x2f5368: 0x10000010
    ctx->pc = 0x2F5368u;
    {
        const bool branch_taken_0x2f5368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F536Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f5368) {
            ctx->pc = 0x2F53ACu;
            goto label_2f53ac;
        }
    }
    ctx->pc = 0x2F5370u;
label_2f5370:
    // 0x2f5370: 0x26240001
    ctx->pc = 0x2f5370u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f5374: 0x2403ffff
    ctx->pc = 0x2f5374u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f5378:
    // 0x2f5378: 0x2442ffff
    ctx->pc = 0x2f5378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f537c: 0x0
    ctx->pc = 0x2f537cu;
    // NOP
    // 0x2f5380: 0x0
    ctx->pc = 0x2f5380u;
    // NOP
    // 0x2f5384: 0x0
    ctx->pc = 0x2f5384u;
    // NOP
    // 0x2f5388: 0x0
    ctx->pc = 0x2f5388u;
    // NOP
    // 0x2f538c: 0x1443fffa
    ctx->pc = 0x2F538Cu;
    {
        const bool branch_taken_0x2f538c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2f538c) {
            ctx->pc = 0x2F5378u;
            goto label_2f5378;
        }
    }
    ctx->pc = 0x2F5394u;
    // 0x2f5394: 0x220102d
    ctx->pc = 0x2f5394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5398: 0x28420011
    ctx->pc = 0x2f5398u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 17));
    // 0x2f539c: 0x14400003
    ctx->pc = 0x2F539Cu;
    {
        const bool branch_taken_0x2f539c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F53A0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f539c) {
            ctx->pc = 0x2F53ACu;
            goto label_2f53ac;
        }
    }
    ctx->pc = 0x2F53A4u;
    // 0x2f53a4: 0x1000002f
    ctx->pc = 0x2F53A4u;
    {
        const bool branch_taken_0x2f53a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F53A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f53a4) {
            ctx->pc = 0x2F5464u;
            goto label_2f5464;
        }
    }
    ctx->pc = 0x2F53ACu;
label_2f53ac:
    // 0x2f53ac: 0x26702920
    ctx->pc = 0x2f53acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 10528));
label_2f53b0:
    // 0x2f53b0: 0x3c058000
    ctx->pc = 0x2f53b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x2f53b4: 0x200202d
    ctx->pc = 0x2f53b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f53b8: 0x34a50596
    ctx->pc = 0x2f53b8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1430));
    // 0x2f53bc: 0xc0c1836
    ctx->pc = 0x2F53BCu;
    SET_GPR_U32(ctx, 31, 0x2F53C4u);
    ctx->pc = 0x2F53C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3060D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x3060d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F53C4u; }
    }
    if (ctx->pc != 0x2F53C4u) { return; }
    ctx->pc = 0x2F53C4u;
    // 0x2f53c4: 0x4430013
    ctx->pc = 0x2F53C4u;
    {
        const bool branch_taken_0x2f53c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f53c4) {
            ctx->pc = 0x2F53C8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x2F5414u;
            goto label_2f5414;
        }
    }
    ctx->pc = 0x2F53CCu;
    // 0x2f53cc: 0x3c02003a
    ctx->pc = 0x2f53ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f53d0: 0x8c433aa0
    ctx->pc = 0x2f53d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15008)));
    // 0x2f53d4: 0x18600005
    ctx->pc = 0x2F53D4u;
    {
        const bool branch_taken_0x2f53d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F53D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        if (branch_taken_0x2f53d4) {
            ctx->pc = 0x2F53ECu;
            goto label_2f53ec;
        }
    }
    ctx->pc = 0x2F53DCu;
    // 0x2f53dc: 0x3c04003c
    ctx->pc = 0x2f53dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f53e0: 0xc0bed0a
    ctx->pc = 0x2F53E0u;
    SET_GPR_U32(ctx, 31, 0x2F53E8u);
    ctx->pc = 0x2F53E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943160));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F53E8u; }
    }
    if (ctx->pc != 0x2F53E8u) { return; }
    ctx->pc = 0x2F53E8u;
    // 0x2f53e8: 0x3c020010
    ctx->pc = 0x2f53e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
label_2f53ec:
    // 0x2f53ec: 0x2403ffff
    ctx->pc = 0x2f53ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f53f0:
    // 0x2f53f0: 0x2442ffff
    ctx->pc = 0x2f53f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f53f4: 0x0
    ctx->pc = 0x2f53f4u;
    // NOP
    // 0x2f53f8: 0x0
    ctx->pc = 0x2f53f8u;
    // NOP
    // 0x2f53fc: 0x0
    ctx->pc = 0x2f53fcu;
    // NOP
    // 0x2f5400: 0x0
    ctx->pc = 0x2f5400u;
    // NOP
    // 0x2f5404: 0x1443fffa
    ctx->pc = 0x2F5404u;
    {
        const bool branch_taken_0x2f5404 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2f5404) {
            ctx->pc = 0x2F53F0u;
            goto label_2f53f0;
        }
    }
    ctx->pc = 0x2F540Cu;
    // 0x2f540c: 0x1000ffe8
    ctx->pc = 0x2F540Cu;
    {
        const bool branch_taken_0x2f540c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F5410u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 10528));
        if (branch_taken_0x2f540c) {
            ctx->pc = 0x2F53B0u;
            goto label_2f53b0;
        }
    }
    ctx->pc = 0x2F5414u;
label_2f5414:
    // 0x2f5414: 0x1040ffd6
    ctx->pc = 0x2F5414u;
    {
        const bool branch_taken_0x2f5414 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F5418u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        if (branch_taken_0x2f5414) {
            ctx->pc = 0x2F5370u;
            goto label_2f5370;
        }
    }
    ctx->pc = 0x2F541Cu;
    // 0x2f541c: 0xae403ac4
    ctx->pc = 0x2f541cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15044), GPR_U32(ctx, 0));
label_2f5420:
    // 0x2f5420: 0x3c02003e
    ctx->pc = 0x2f5420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2f5424: 0x2403000b
    ctx->pc = 0x2f5424u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f5428: 0x24452948
    ctx->pc = 0x2f5428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 10568));
    // 0x2f542c: 0x3c0b002f
    ctx->pc = 0x2f542cu;
    SET_GPR_U32(ctx, 11, ((uint32_t)47 << 16));
    // 0x2f5430: 0xafa50000
    ctx->pc = 0x2f5430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2f5434: 0x26642920
    ctx->pc = 0x2f5434u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 10528));
    // 0x2f5438: 0xac432948
    ctx->pc = 0x2f5438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10568), GPR_U32(ctx, 3));
    // 0x2f543c: 0x256b4e28
    ctx->pc = 0x2f543cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 20008));
    // 0x2f5440: 0x24050001
    ctx->pc = 0x2f5440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5444: 0x24060001
    ctx->pc = 0x2f5444u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5448: 0x382d
    ctx->pc = 0x2f5448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f544c: 0x402d
    ctx->pc = 0x2f544cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5450: 0x482d
    ctx->pc = 0x2f5450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5454: 0xc0c18aa
    ctx->pc = 0x2F5454u;
    SET_GPR_U32(ctx, 31, 0x2F545Cu);
    ctx->pc = 0x2F5458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3062A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x3062a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F545Cu; }
    }
    if (ctx->pc != 0x2F545Cu) { return; }
    ctx->pc = 0x2F545Cu;
    // 0x2f545c: 0x2403ffff
    ctx->pc = 0x2f545cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5460: 0x62102a
    ctx->pc = 0x2f5460u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_2f5464:
    // 0x2f5464: 0xdfbf0050
    ctx->pc = 0x2f5464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f5468: 0xdfb30040
    ctx->pc = 0x2f5468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f546c: 0xdfb20030
    ctx->pc = 0x2f546cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5470: 0xdfb10020
    ctx->pc = 0x2f5470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5474: 0xdfb00010
    ctx->pc = 0x2f5474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5478: 0x3e00008
    ctx->pc = 0x2F5478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F547Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F5370u: goto label_2f5370;
            case 0x2F5378u: goto label_2f5378;
            case 0x2F53ACu: goto label_2f53ac;
            case 0x2F53B0u: goto label_2f53b0;
            case 0x2F53ECu: goto label_2f53ec;
            case 0x2F53F0u: goto label_2f53f0;
            case 0x2F5414u: goto label_2f5414;
            case 0x2F5420u: goto label_2f5420;
            case 0x2F5464u: goto label_2f5464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F5480u;
}
