#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: rint
// Address: 0x2ec7e8 - 0x2ec9e4
void rint_0x2ec7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ec7e8u;

    // 0x2ec7e8: 0x27bdffa0
    ctx->pc = 0x2ec7e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ec7ec: 0x80282d
    ctx->pc = 0x2ec7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec7f0: 0xffbf0050
    ctx->pc = 0x2ec7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ec7f4: 0xffb30040
    ctx->pc = 0x2ec7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ec7f8: 0xffb20030
    ctx->pc = 0x2ec7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ec7fc: 0xffb10020
    ctx->pc = 0x2ec7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ec800: 0xffb00010
    ctx->pc = 0x2ec800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ec804: 0xa0102d
    ctx->pc = 0x2ec804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec808: 0x2383c
    ctx->pc = 0x2ec808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ec80c: 0x7383f
    ctx->pc = 0x2ec80cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2ec810: 0x2303f
    ctx->pc = 0x2ec810u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ec814: 0x61503
    ctx->pc = 0x2ec814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 20));
    // 0x2ec818: 0x304307ff
    ctx->pc = 0x2ec818u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2ec81c: 0x2468fc01
    ctx->pc = 0x2ec81cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x2ec820: 0x29020014
    ctx->pc = 0x2ec820u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 20));
    // 0x2ec824: 0x10400041
    ctx->pc = 0x2EC824u;
    {
        const bool branch_taken_0x2ec824 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EC828u;
        SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 6), 31));
        if (branch_taken_0x2ec824) {
            ctx->pc = 0x2EC92Cu;
            goto label_2ec92c;
        }
    }
    ctx->pc = 0x2EC82Cu;
    // 0x2ec82c: 0x501002c
    ctx->pc = 0x2EC82Cu;
    {
        const bool branch_taken_0x2ec82c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2EC830u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
        if (branch_taken_0x2ec82c) {
            ctx->pc = 0x2EC8E0u;
            goto label_2ec8e0;
        }
    }
    ctx->pc = 0x2EC834u;
    // 0x2ec834: 0x3c127fff
    ctx->pc = 0x2ec834u;
    SET_GPR_U32(ctx, 18, ((uint32_t)32767 << 16));
    // 0x2ec838: 0x3652ffff
    ctx->pc = 0x2ec838u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65535));
    // 0x2ec83c: 0xd21024
    ctx->pc = 0x2ec83cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2ec840: 0x471025
    ctx->pc = 0x2ec840u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ec844: 0x10400049
    ctx->pc = 0x2EC844u;
    {
        const bool branch_taken_0x2ec844 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EC848u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
        if (branch_taken_0x2ec844) {
            ctx->pc = 0x2EC96Cu;
            goto label_2ec96c;
        }
    }
    ctx->pc = 0x2EC84Cu;
    // 0x2ec84c: 0x3c03fffe
    ctx->pc = 0x2ec84cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65534 << 16));
    // 0x2ec850: 0x3442ffff
    ctx->pc = 0x2ec850u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ec854: 0x3c040008
    ctx->pc = 0x2ec854u;
    SET_GPR_U32(ctx, 4, ((uint32_t)8 << 16));
    // 0x2ec858: 0xc21024
    ctx->pc = 0x2ec858u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ec85c: 0xe23825
    ctx->pc = 0x2ec85cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2ec860: 0xc33024
    ctx->pc = 0x2ec860u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ec864: 0x71023
    ctx->pc = 0x2ec864u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2ec868: 0xe21025
    ctx->pc = 0x2ec868u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2ec86c: 0x21302
    ctx->pc = 0x2ec86cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 12));
    // 0x2ec870: 0x441024
    ctx->pc = 0x2ec870u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ec874: 0xc23025
    ctx->pc = 0x2ec874u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ec878: 0xa0182d
    ctx->pc = 0x2ec878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec87c: 0x3c11ffff
    ctx->pc = 0x2ec87cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)65535 << 16));
    // 0x2ec880: 0x11883e
    ctx->pc = 0x2ec880u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x2ec884: 0x6103c
    ctx->pc = 0x2ec884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ec888: 0x711824
    ctx->pc = 0x2ec888u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2ec88c: 0x622825
    ctx->pc = 0x2ec88cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ec890: 0x3c04003c
    ctx->pc = 0x2ec890u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2ec894: 0x24849c68
    ctx->pc = 0x2ec894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941800));
    // 0x2ec898: 0x1310c0
    ctx->pc = 0x2ec898u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 3));
    // 0x2ec89c: 0x441021
    ctx->pc = 0x2ec89cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ec8a0: 0xdc500000
    ctx->pc = 0x2ec8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ec8a4: 0xc0be340
    ctx->pc = 0x2EC8A4u;
    SET_GPR_U32(ctx, 31, 0x2EC8ACu);
    ctx->pc = 0x2EC8A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC8ACu; }
    }
    if (ctx->pc != 0x2EC8ACu) { return; }
    ctx->pc = 0x2EC8ACu;
    // 0x2ec8ac: 0x200282d
    ctx->pc = 0x2ec8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec8b0: 0xc0be356
    ctx->pc = 0x2EC8B0u;
    SET_GPR_U32(ctx, 31, 0x2EC8B8u);
    ctx->pc = 0x2EC8B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC8B8u; }
    }
    if (ctx->pc != 0x2EC8B8u) { return; }
    ctx->pc = 0x2EC8B8u;
    // 0x2ec8b8: 0x40202d
    ctx->pc = 0x2ec8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec8bc: 0x2303f
    ctx->pc = 0x2ec8bcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ec8c0: 0xd21824
    ctx->pc = 0x2ec8c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2ec8c4: 0x1317c0
    ctx->pc = 0x2ec8c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 31));
    // 0x2ec8c8: 0x912024
    ctx->pc = 0x2ec8c8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2ec8cc: 0x621825
    ctx->pc = 0x2ec8ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ec8d0: 0x3183c
    ctx->pc = 0x2ec8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ec8d4: 0x832025
    ctx->pc = 0x2ec8d4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ec8d8: 0x1000003b
    ctx->pc = 0x2EC8D8u;
    {
        const bool branch_taken_0x2ec8d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EC8DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ec8d8) {
            ctx->pc = 0x2EC9C8u;
            goto label_2ec9c8;
        }
    }
    ctx->pc = 0x2EC8E0u;
label_2ec8e0:
    // 0x2ec8e0: 0x3442ffff
    ctx->pc = 0x2ec8e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ec8e4: 0x1022007
    ctx->pc = 0x2ec8e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2ec8e8: 0xc41824
    ctx->pc = 0x2ec8e8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2ec8ec: 0x671825
    ctx->pc = 0x2ec8ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ec8f0: 0x1060001e
    ctx->pc = 0x2EC8F0u;
    {
        const bool branch_taken_0x2ec8f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EC8F4u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2ec8f0) {
            ctx->pc = 0x2EC96Cu;
            goto label_2ec96c;
        }
    }
    ctx->pc = 0x2EC8F8u;
    // 0x2ec8f8: 0xc41024
    ctx->pc = 0x2ec8f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2ec8fc: 0x471025
    ctx->pc = 0x2ec8fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ec900: 0x10400023
    ctx->pc = 0x2EC900u;
    {
        const bool branch_taken_0x2ec900 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EC904u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x2ec900) {
            ctx->pc = 0x2EC990u;
            goto label_2ec990;
        }
    }
    ctx->pc = 0x2EC908u;
    // 0x2ec908: 0x15020003
    ctx->pc = 0x2EC908u;
    {
        const bool branch_taken_0x2ec908 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x2EC90Cu;
        SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x2ec908) {
            ctx->pc = 0x2EC918u;
            goto label_2ec918;
        }
    }
    ctx->pc = 0x2EC910u;
    // 0x2ec910: 0x1000001f
    ctx->pc = 0x2EC910u;
    {
        const bool branch_taken_0x2ec910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EC914u;
        SET_GPR_U32(ctx, 7, ((uint32_t)16384 << 16));
        if (branch_taken_0x2ec910) {
            ctx->pc = 0x2EC990u;
            goto label_2ec990;
        }
    }
    ctx->pc = 0x2EC918u;
label_2ec918:
    // 0x2ec918: 0x3c020002
    ctx->pc = 0x2ec918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x2ec91c: 0xc31824
    ctx->pc = 0x2ec91cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ec920: 0x1021007
    ctx->pc = 0x2ec920u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2ec924: 0x1000001a
    ctx->pc = 0x2EC924u;
    {
        const bool branch_taken_0x2ec924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EC928u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x2ec924) {
            ctx->pc = 0x2EC990u;
            goto label_2ec990;
        }
    }
    ctx->pc = 0x2EC92Cu;
label_2ec92c:
    // 0x2ec92c: 0x29020034
    ctx->pc = 0x2ec92cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 52));
    // 0x2ec930: 0x54400008
    ctx->pc = 0x2EC930u;
    {
        const bool branch_taken_0x2ec930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ec930) {
            ctx->pc = 0x2EC934u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 4294966253));
            ctx->pc = 0x2EC954u;
            goto label_2ec954;
        }
    }
    ctx->pc = 0x2EC938u;
    // 0x2ec938: 0x24020400
    ctx->pc = 0x2ec938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ec93c: 0x15020022
    ctx->pc = 0x2EC93Cu;
    {
        const bool branch_taken_0x2ec93c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x2EC940u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ec93c) {
            ctx->pc = 0x2EC9C8u;
            goto label_2ec9c8;
        }
    }
    ctx->pc = 0x2EC944u;
    // 0x2ec944: 0xc0be340
    ctx->pc = 0x2EC944u;
    SET_GPR_U32(ctx, 31, 0x2EC94Cu);
    ctx->pc = 0x2EC948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC94Cu; }
    }
    if (ctx->pc != 0x2EC94Cu) { return; }
    ctx->pc = 0x2EC94Cu;
    // 0x2ec94c: 0x1000001f
    ctx->pc = 0x2EC94Cu;
    {
        const bool branch_taken_0x2ec94c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EC950u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2ec94c) {
            ctx->pc = 0x2EC9CCu;
            goto label_2ec9cc;
        }
    }
    ctx->pc = 0x2EC954u;
label_2ec954:
    // 0x2ec954: 0x3c02ffff
    ctx->pc = 0x2ec954u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2ec958: 0x3442ffff
    ctx->pc = 0x2ec958u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ec95c: 0x1022006
    ctx->pc = 0x2ec95cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2ec960: 0xe41824
    ctx->pc = 0x2ec960u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2ec964: 0x14600003
    ctx->pc = 0x2EC964u;
    {
        const bool branch_taken_0x2ec964 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EC968u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2ec964) {
            ctx->pc = 0x2EC974u;
            goto label_2ec974;
        }
    }
    ctx->pc = 0x2EC96Cu;
label_2ec96c:
    // 0x2ec96c: 0x10000016
    ctx->pc = 0x2EC96Cu;
    {
        const bool branch_taken_0x2ec96c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EC970u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ec96c) {
            ctx->pc = 0x2EC9C8u;
            goto label_2ec9c8;
        }
    }
    ctx->pc = 0x2EC974u;
label_2ec974:
    // 0x2ec974: 0xe41024
    ctx->pc = 0x2ec974u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2ec978: 0x10400005
    ctx->pc = 0x2EC978u;
    {
        const bool branch_taken_0x2ec978 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EC97Cu;
        SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x2ec978) {
            ctx->pc = 0x2EC990u;
            goto label_2ec990;
        }
    }
    ctx->pc = 0x2EC980u;
    // 0x2ec980: 0x3c024000
    ctx->pc = 0x2ec980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x2ec984: 0xe31824
    ctx->pc = 0x2ec984u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2ec988: 0x1021007
    ctx->pc = 0x2ec988u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2ec98c: 0x623825
    ctx->pc = 0x2ec98cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ec990:
    // 0x2ec990: 0x7103c
    ctx->pc = 0x2ec990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2ec994: 0x2103e
    ctx->pc = 0x2ec994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ec998: 0x6483c
    ctx->pc = 0x2ec998u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ec99c: 0x1222825
    ctx->pc = 0x2ec99cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2ec9a0: 0x3c03003c
    ctx->pc = 0x2ec9a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2ec9a4: 0x24639c68
    ctx->pc = 0x2ec9a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941800));
    // 0x2ec9a8: 0x1310c0
    ctx->pc = 0x2ec9a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 3));
    // 0x2ec9ac: 0x431021
    ctx->pc = 0x2ec9acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec9b0: 0xdc500000
    ctx->pc = 0x2ec9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ec9b4: 0xc0be340
    ctx->pc = 0x2EC9B4u;
    SET_GPR_U32(ctx, 31, 0x2EC9BCu);
    ctx->pc = 0x2EC9B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9BCu; }
    }
    if (ctx->pc != 0x2EC9BCu) { return; }
    ctx->pc = 0x2EC9BCu;
    // 0x2ec9bc: 0x40202d
    ctx->pc = 0x2ec9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec9c0: 0xc0be356
    ctx->pc = 0x2EC9C0u;
    SET_GPR_U32(ctx, 31, 0x2EC9C8u);
    ctx->pc = 0x2EC9C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9C8u; }
    }
    if (ctx->pc != 0x2EC9C8u) { return; }
    ctx->pc = 0x2EC9C8u;
label_2ec9c8:
    // 0x2ec9c8: 0xdfbf0050
    ctx->pc = 0x2ec9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ec9cc:
    // 0x2ec9cc: 0xdfb30040
    ctx->pc = 0x2ec9ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec9d0: 0xdfb20030
    ctx->pc = 0x2ec9d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec9d4: 0xdfb10020
    ctx->pc = 0x2ec9d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec9d8: 0xdfb00010
    ctx->pc = 0x2ec9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec9dc: 0x3e00008
    ctx->pc = 0x2EC9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC9E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EC8E0u: goto label_2ec8e0;
            case 0x2EC918u: goto label_2ec918;
            case 0x2EC92Cu: goto label_2ec92c;
            case 0x2EC954u: goto label_2ec954;
            case 0x2EC96Cu: goto label_2ec96c;
            case 0x2EC974u: goto label_2ec974;
            case 0x2EC990u: goto label_2ec990;
            case 0x2EC9C8u: goto label_2ec9c8;
            case 0x2EC9CCu: goto label_2ec9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EC9E4u;
}
