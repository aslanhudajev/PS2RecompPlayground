#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerDoWeapTrail
// Address: 0x24f470 - 0x24f730
void PlayerDoWeapTrail_0x24f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24f470u;

    // 0x24f470: 0x27bdff00
    ctx->pc = 0x24f470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x24f474: 0xffbf00f0
    ctx->pc = 0x24f474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x24f478: 0xffbe00e0
    ctx->pc = 0x24f478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x24f47c: 0xffb700d0
    ctx->pc = 0x24f47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x24f480: 0xffb600c0
    ctx->pc = 0x24f480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x24f484: 0xffb500b0
    ctx->pc = 0x24f484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x24f488: 0xffb400a0
    ctx->pc = 0x24f488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x24f48c: 0xffb30090
    ctx->pc = 0x24f48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x24f490: 0xffb20080
    ctx->pc = 0x24f490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x24f494: 0xffb10070
    ctx->pc = 0x24f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x24f498: 0xffb00060
    ctx->pc = 0x24f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x24f49c: 0x80a02d
    ctx->pc = 0x24f49cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f4a0: 0xb82d
    ctx->pc = 0x24f4a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f4a4: 0xf02d
    ctx->pc = 0x24f4a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f4a8: 0x241600ff
    ctx->pc = 0x24f4a8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 255));
    // 0x24f4ac: 0xafa00050
    ctx->pc = 0x24f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x24f4b0: 0x8e820080
    ctx->pc = 0x24f4b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x24f4b4: 0x10400092
    ctx->pc = 0x24F4B4u;
    {
        const bool branch_taken_0x24f4b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F4B8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 2008)));
        if (branch_taken_0x24f4b4) {
            ctx->pc = 0x24F700u;
            goto label_24f700;
        }
    }
    ctx->pc = 0x24F4BCu;
    // 0x24f4bc: 0x3c020031
    ctx->pc = 0x24f4bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x24f4c0: 0x8c42ffbc
    ctx->pc = 0x24f4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x24f4c4: 0x1040008f
    ctx->pc = 0x24F4C4u;
    {
        const bool branch_taken_0x24f4c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F4C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x24f4c4) {
            ctx->pc = 0x24F704u;
            goto label_24f704;
        }
    }
    ctx->pc = 0x24F4CCu;
    // 0x24f4cc: 0x6410004
    ctx->pc = 0x24F4CCu;
    {
        const bool branch_taken_0x24f4cc = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x24f4cc) {
            ctx->pc = 0x24F4E0u;
            goto label_24f4e0;
        }
    }
    ctx->pc = 0x24F4D4u;
    // 0x24f4d4: 0x8e8207dc
    ctx->pc = 0x24f4d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2012)));
    // 0x24f4d8: 0x5040008b
    ctx->pc = 0x24F4D8u;
    {
        const bool branch_taken_0x24f4d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24f4d8) {
            ctx->pc = 0x24F4DCu;
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->pc = 0x24F708u;
            goto label_24f708;
        }
    }
    ctx->pc = 0x24F4E0u;
label_24f4e0:
    // 0x24f4e0: 0x6400033
    ctx->pc = 0x24F4E0u;
    {
        const bool branch_taken_0x24f4e0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x24F4E4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24f4e0) {
            ctx->pc = 0x24F5B0u;
            goto label_24f5b0;
        }
    }
    ctx->pc = 0x24F4E8u;
    // 0x24f4e8: 0x269507e0
    ctx->pc = 0x24f4e8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 2016));
    // 0x24f4ec: 0x131080
    ctx->pc = 0x24f4ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_24f4f0:
    // 0x24f4f0: 0x2a21021
    ctx->pc = 0x24f4f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x24f4f4: 0x8c430000
    ctx->pc = 0x24f4f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f4f8: 0x10600020
    ctx->pc = 0x24F4F8u;
    {
        const bool branch_taken_0x24f4f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F4FCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x24f4f8) {
            ctx->pc = 0x24F57Cu;
            goto label_24f57c;
        }
    }
    ctx->pc = 0x24F500u;
    // 0x24f500: 0x8c620060
    ctx->pc = 0x24f500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x24f504: 0x30420200
    ctx->pc = 0x24f504u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x24f508: 0x10400004
    ctx->pc = 0x24F508u;
    {
        const bool branch_taken_0x24f508 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F50Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24f508) {
            ctx->pc = 0x24F51Cu;
            goto label_24f51c;
        }
    }
    ctx->pc = 0x24F510u;
    // 0x24f510: 0x90620053
    ctx->pc = 0x24f510u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 83)));
    // 0x24f514: 0x240300ff
    ctx->pc = 0x24f514u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x24f518: 0x628823
    ctx->pc = 0x24f518u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24f51c:
    // 0x24f51c: 0x3c040033
    ctx->pc = 0x24f51cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x24f520: 0x8c824908
    ctx->pc = 0x24f520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 18696)));
    // 0x24f524: 0x3c040031
    ctx->pc = 0x24f524u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x24f528: 0x8c83ffbc
    ctx->pc = 0x24f528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294967228)));
    // 0x24f52c: 0x432018
    ctx->pc = 0x24f52cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24f530: 0x918821
    ctx->pc = 0x24f530u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x24f534: 0x2a2200ff
    ctx->pc = 0x24f534u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 255));
    // 0x24f538: 0x14400009
    ctx->pc = 0x24F538u;
    {
        const bool branch_taken_0x24f538 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24F53Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x24f538) {
            ctx->pc = 0x24F560u;
            goto label_24f560;
        }
    }
    ctx->pc = 0x24F540u;
    // 0x24f540: 0x241100ff
    ctx->pc = 0x24f540u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 255));
    // 0x24f544: 0x138080
    ctx->pc = 0x24f544u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 2));
    // 0x24f548: 0x2b08021
    ctx->pc = 0x24f548u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x24f54c: 0x8e040000
    ctx->pc = 0x24f54cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f550: 0xc0b3f1a
    ctx->pc = 0x24F550u;
    SET_GPR_U32(ctx, 31, 0x24F558u);
    ctx->pc = 0x24F554u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F558u; }
    }
    if (ctx->pc != 0x24F558u) { return; }
    ctx->pc = 0x24F558u;
    // 0x24f558: 0xae020000
    ctx->pc = 0x24f558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x24f55c: 0x131080
    ctx->pc = 0x24f55cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
label_24f560:
    // 0x24f560: 0x2a21021
    ctx->pc = 0x24f560u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x24f564: 0x8c440000
    ctx->pc = 0x24f564u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f568: 0x220282d
    ctx->pc = 0x24f568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f56c: 0xc0b40c0
    ctx->pc = 0x24F56Cu;
    SET_GPR_U32(ctx, 31, 0x24F574u);
    ctx->pc = 0x24F570u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F574u; }
    }
    if (ctx->pc != 0x24F574u) { return; }
    ctx->pc = 0x24F574u;
    // 0x24f574: 0x10000002
    ctx->pc = 0x24F574u;
    {
        const bool branch_taken_0x24f574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F578u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 17)));
        if (branch_taken_0x24f574) {
            ctx->pc = 0x24F580u;
            goto label_24f580;
        }
    }
    ctx->pc = 0x24F57Cu;
label_24f57c:
    // 0x24f57c: 0x2f1102a
    ctx->pc = 0x24f57cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 17)));
label_24f580:
    // 0x24f580: 0x10400003
    ctx->pc = 0x24F580u;
    {
        const bool branch_taken_0x24f580 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F584u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 22)));
        if (branch_taken_0x24f580) {
            ctx->pc = 0x24F590u;
            goto label_24f590;
        }
    }
    ctx->pc = 0x24F588u;
    // 0x24f588: 0x220b82d
    ctx->pc = 0x24f588u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f58c: 0x260f02d
    ctx->pc = 0x24f58cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f590:
    // 0x24f590: 0x50400004
    ctx->pc = 0x24F590u;
    {
        const bool branch_taken_0x24f590 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24f590) {
            ctx->pc = 0x24F594u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x24F5A4u;
            goto label_24f5a4;
        }
    }
    ctx->pc = 0x24F598u;
    // 0x24f598: 0x220b02d
    ctx->pc = 0x24f598u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f59c: 0xafb30050
    ctx->pc = 0x24f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x24f5a0: 0x26730001
    ctx->pc = 0x24f5a0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_24f5a4:
    // 0x24f5a4: 0x253102a
    ctx->pc = 0x24f5a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x24f5a8: 0x1040ffd1
    ctx->pc = 0x24F5A8u;
    {
        const bool branch_taken_0x24f5a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F5ACu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x24f5a8) {
            ctx->pc = 0x24F4F0u;
            goto label_24f4f0;
        }
    }
    ctx->pc = 0x24F5B0u;
label_24f5b0:
    // 0x24f5b0: 0x640000d
    ctx->pc = 0x24F5B0u;
    {
        const bool branch_taken_0x24f5b0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x24F5B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x24f5b0) {
            ctx->pc = 0x24F5E8u;
            goto label_24f5e8;
        }
    }
    ctx->pc = 0x24F5B8u;
    // 0x24f5b8: 0x2821021
    ctx->pc = 0x24f5b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x24f5bc: 0x8c4207e0
    ctx->pc = 0x24f5bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2016)));
    // 0x24f5c0: 0x5440000a
    ctx->pc = 0x24F5C0u;
    {
        const bool branch_taken_0x24f5c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24f5c0) {
            ctx->pc = 0x24F5C4u;
            WRITE32(ADD32(GPR_U32(ctx, 20), 2008), GPR_U32(ctx, 18));
            ctx->pc = 0x24F5ECu;
            goto label_24f5ec;
        }
    }
    ctx->pc = 0x24F5C8u;
    // 0x24f5c8: 0x268307e0
    ctx->pc = 0x24f5c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 2016));
    // 0x24f5cc: 0x2652ffff
    ctx->pc = 0x24f5ccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_24f5d0:
    // 0x24f5d0: 0x6400005
    ctx->pc = 0x24F5D0u;
    {
        const bool branch_taken_0x24f5d0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x24F5D4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x24f5d0) {
            ctx->pc = 0x24F5E8u;
            goto label_24f5e8;
        }
    }
    ctx->pc = 0x24F5D8u;
    // 0x24f5d8: 0x621021
    ctx->pc = 0x24f5d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f5dc: 0x8c420000
    ctx->pc = 0x24f5dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f5e0: 0x5040fffb
    ctx->pc = 0x24F5E0u;
    {
        const bool branch_taken_0x24f5e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24f5e0) {
            ctx->pc = 0x24F5E4u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->pc = 0x24F5D0u;
            goto label_24f5d0;
        }
    }
    ctx->pc = 0x24F5E8u;
label_24f5e8:
    // 0x24f5e8: 0xae9207d8
    ctx->pc = 0x24f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2008), GPR_U32(ctx, 18));
label_24f5ec:
    // 0x24f5ec: 0x8e8207dc
    ctx->pc = 0x24f5ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2012)));
    // 0x24f5f0: 0x10400043
    ctx->pc = 0x24F5F0u;
    {
        const bool branch_taken_0x24f5f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F5F4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 30)));
        if (branch_taken_0x24f5f0) {
            ctx->pc = 0x24F700u;
            goto label_24f700;
        }
    }
    ctx->pc = 0x24F5F8u;
    // 0x24f5f8: 0x14400005
    ctx->pc = 0x24F5F8u;
    {
        const bool branch_taken_0x24f5f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24F5FCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24f5f8) {
            ctx->pc = 0x24F610u;
            goto label_24f610;
        }
    }
    ctx->pc = 0x24F600u;
    // 0x24f600: 0x26430001
    ctx->pc = 0x24f600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 1));
    // 0x24f604: 0x24020006
    ctx->pc = 0x24f604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x24f608: 0x52102a
    ctx->pc = 0x24f608u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
    // 0x24f60c: 0x62880a
    ctx->pc = 0x24f60cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_24f610:
    // 0x24f610: 0x8e8406b8
    ctx->pc = 0x24f610u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 1720)));
    // 0x24f614: 0x3a0282d
    ctx->pc = 0x24f614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f618: 0xc0b4302
    ctx->pc = 0x24F618u;
    SET_GPR_U32(ctx, 31, 0x24F620u);
    ctx->pc = 0x24F61Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F620u; }
    }
    if (ctx->pc != 0x24F620u) { return; }
    ctx->pc = 0x24F620u;
    // 0x24f620: 0x8fa30050
    ctx->pc = 0x24f620u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24f624: 0x243102a
    ctx->pc = 0x24f624u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x24f628: 0x5440001e
    ctx->pc = 0x24F628u;
    {
        const bool branch_taken_0x24f628 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24f628) {
            ctx->pc = 0x24F62Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 1720)));
            ctx->pc = 0x24F6A4u;
            goto label_24f6a4;
        }
    }
    ctx->pc = 0x24F630u;
    // 0x24f630: 0x31080
    ctx->pc = 0x24f630u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x24f634: 0x2821021
    ctx->pc = 0x24f634u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x24f638: 0x8c4207e0
    ctx->pc = 0x24f638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2016)));
    // 0x24f63c: 0x10400018
    ctx->pc = 0x24F63Cu;
    {
        const bool branch_taken_0x24f63c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24F640u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x24f63c) {
            ctx->pc = 0x24F6A0u;
            goto label_24f6a0;
        }
    }
    ctx->pc = 0x24F644u;
    // 0x24f644: 0xc4420030
    ctx->pc = 0x24f644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f648: 0x46001081
    ctx->pc = 0x24f648u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24f64c: 0xe7a20040
    ctx->pc = 0x24f64cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24f650: 0xc4410034
    ctx->pc = 0x24f650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f654: 0xc7a00034
    ctx->pc = 0x24f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f658: 0x46000841
    ctx->pc = 0x24f658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24f65c: 0xe7a10044
    ctx->pc = 0x24f65cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24f660: 0xc4400038
    ctx->pc = 0x24f660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f664: 0xc7a30038
    ctx->pc = 0x24f664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f668: 0x46030001
    ctx->pc = 0x24f668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x24f66c: 0xe7a00048
    ctx->pc = 0x24f66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24f670: 0x46021082
    ctx->pc = 0x24f670u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24f674: 0x46010842
    ctx->pc = 0x24f674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24f678: 0x46011080
    ctx->pc = 0x24f678u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24f67c: 0x46000002
    ctx->pc = 0x24f67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24f680: 0x46001080
    ctx->pc = 0x24f680u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24f684: 0x3c013c23
    ctx->pc = 0x24f684u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x24f688: 0x3421d70a
    ctx->pc = 0x24f688u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x24f68c: 0x44810000
    ctx->pc = 0x24f68cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24f690: 0x46001034
    ctx->pc = 0x24f690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f694: 0x0
    ctx->pc = 0x24f694u;
    // NOP
    // 0x24f698: 0x4501001a
    ctx->pc = 0x24F698u;
    {
        const bool branch_taken_0x24f698 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F69Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        if (branch_taken_0x24f698) {
            ctx->pc = 0x24F704u;
            goto label_24f704;
        }
    }
    ctx->pc = 0x24F6A0u;
label_24f6a0:
    // 0x24f6a0: 0x8e8206b8
    ctx->pc = 0x24f6a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 1720)));
label_24f6a4:
    // 0x24f6a4: 0x9450006c
    ctx->pc = 0x24f6a4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x24f6a8: 0x8e8207cc
    ctx->pc = 0x24f6a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 1996)));
    // 0x24f6ac: 0x21400
    ctx->pc = 0x24f6acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x24f6b0: 0x2028025
    ctx->pc = 0x24f6b0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24f6b4: 0x111080
    ctx->pc = 0x24f6b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x24f6b8: 0x2821021
    ctx->pc = 0x24f6b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x24f6bc: 0x8c4407e0
    ctx->pc = 0x24f6bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2016)));
    // 0x24f6c0: 0x50800004
    ctx->pc = 0x24F6C0u;
    {
        const bool branch_taken_0x24f6c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x24f6c0) {
            ctx->pc = 0x24F6C4u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x24F6D4u;
            goto label_24f6d4;
        }
    }
    ctx->pc = 0x24F6C8u;
    // 0x24f6c8: 0xc0b3f1a
    ctx->pc = 0x24F6C8u;
    SET_GPR_U32(ctx, 31, 0x24F6D0u);
    ctx->pc = 0x24F6CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F6D0u; }
    }
    if (ctx->pc != 0x24F6D0u) { return; }
    ctx->pc = 0x24F6D0u;
    // 0x24f6d0: 0x200202d
    ctx->pc = 0x24f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24f6d4:
    // 0x24f6d4: 0x3a0282d
    ctx->pc = 0x24f6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f6d8: 0x302d
    ctx->pc = 0x24f6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f6dc: 0xc0b2236
    ctx->pc = 0x24F6DCu;
    SET_GPR_U32(ctx, 31, 0x24F6E4u);
    ctx->pc = 0x24F6E0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x2C88D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewObject_0x2c88d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F6E4u; }
    }
    if (ctx->pc != 0x24F6E4u) { return; }
    ctx->pc = 0x24F6E4u;
    // 0x24f6e4: 0x111880
    ctx->pc = 0x24f6e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x24f6e8: 0x2831821
    ctx->pc = 0x24f6e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x24f6ec: 0xac6207e0
    ctx->pc = 0x24f6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2016), GPR_U32(ctx, 2));
    // 0x24f6f0: 0x8e8207d8
    ctx->pc = 0x24f6f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 2008)));
    // 0x24f6f4: 0x51102a
    ctx->pc = 0x24f6f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x24f6f8: 0x54400001
    ctx->pc = 0x24F6F8u;
    {
        const bool branch_taken_0x24f6f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24f6f8) {
            ctx->pc = 0x24F6FCu;
            WRITE32(ADD32(GPR_U32(ctx, 20), 2008), GPR_U32(ctx, 17));
            ctx->pc = 0x24F700u;
            goto label_24f700;
        }
    }
    ctx->pc = 0x24F700u;
label_24f700:
    // 0x24f700: 0xdfbf00f0
    ctx->pc = 0x24f700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_24f704:
    // 0x24f704: 0xdfbe00e0
    ctx->pc = 0x24f704u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_24f708:
    // 0x24f708: 0xdfb700d0
    ctx->pc = 0x24f708u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24f70c: 0xdfb600c0
    ctx->pc = 0x24f70cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24f710: 0xdfb500b0
    ctx->pc = 0x24f710u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24f714: 0xdfb400a0
    ctx->pc = 0x24f714u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24f718: 0xdfb30090
    ctx->pc = 0x24f718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24f71c: 0xdfb20080
    ctx->pc = 0x24f71cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24f720: 0xdfb10070
    ctx->pc = 0x24f720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24f724: 0xdfb00060
    ctx->pc = 0x24f724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24f728: 0x3e00008
    ctx->pc = 0x24F728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F72Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24F4E0u: goto label_24f4e0;
            case 0x24F4F0u: goto label_24f4f0;
            case 0x24F51Cu: goto label_24f51c;
            case 0x24F560u: goto label_24f560;
            case 0x24F57Cu: goto label_24f57c;
            case 0x24F580u: goto label_24f580;
            case 0x24F590u: goto label_24f590;
            case 0x24F5A4u: goto label_24f5a4;
            case 0x24F5B0u: goto label_24f5b0;
            case 0x24F5D0u: goto label_24f5d0;
            case 0x24F5E8u: goto label_24f5e8;
            case 0x24F5ECu: goto label_24f5ec;
            case 0x24F610u: goto label_24f610;
            case 0x24F6A0u: goto label_24f6a0;
            case 0x24F6A4u: goto label_24f6a4;
            case 0x24F6D4u: goto label_24f6d4;
            case 0x24F700u: goto label_24f700;
            case 0x24F704u: goto label_24f704;
            case 0x24F708u: goto label_24f708;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24F730u;
}
