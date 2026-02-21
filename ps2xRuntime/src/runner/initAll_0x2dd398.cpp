#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initAll
// Address: 0x2dd398 - 0x2dd66c
void initAll_0x2dd398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dd398u;

    // 0x2dd398: 0x27bdff70
    ctx->pc = 0x2dd398u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dd39c: 0xffbf0080
    ctx->pc = 0x2dd39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2dd3a0: 0xffb40070
    ctx->pc = 0x2dd3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2dd3a4: 0xffb30060
    ctx->pc = 0x2dd3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2dd3a8: 0xffb20050
    ctx->pc = 0x2dd3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2dd3ac: 0xffb10040
    ctx->pc = 0x2dd3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2dd3b0: 0xffb00030
    ctx->pc = 0x2dd3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2dd3b4: 0x80a02d
    ctx->pc = 0x2dd3b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd3b8: 0xa0982d
    ctx->pc = 0x2dd3b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd3bc: 0x3c10003a
    ctx->pc = 0x2dd3bcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dd3c0: 0x3c031000
    ctx->pc = 0x2dd3c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2dd3c4: 0x3463e000
    ctx->pc = 0x2dd3c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 57344));
    // 0x2dd3c8: 0x8c620000
    ctx->pc = 0x2dd3c8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2dd3cc: 0x34420003
    ctx->pc = 0x2dd3ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 3));
    // 0x2dd3d0: 0xac620000
    ctx->pc = 0x2dd3d0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2dd3d4: 0x3c031000
    ctx->pc = 0x2dd3d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2dd3d8: 0x3463e010
    ctx->pc = 0x2dd3d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 57360));
    // 0x2dd3dc: 0x24020004
    ctx->pc = 0x2dd3dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd3e0: 0xac620000
    ctx->pc = 0x2dd3e0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2dd3e4: 0x24020065
    ctx->pc = 0x2dd3e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
    // 0x2dd3e8: 0xae0229b0
    ctx->pc = 0x2dd3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10672), GPR_U32(ctx, 2));
    // 0x2dd3ec: 0x3c02003a
    ctx->pc = 0x2dd3ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dd3f0: 0xc0b76b2
    ctx->pc = 0x2DD3F0u;
    SET_GPR_U32(ctx, 31, 0x2DD3F8u);
    ctx->pc = 0x2DD3F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 10756)));
    ctx->pc = 0x2DDAC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        readBufCreate_0x2ddac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD3F8u; }
    }
    if (ctx->pc != 0x2DD3F8u) { return; }
    ctx->pc = 0x2DD3F8u;
    // 0x2dd3f8: 0x24020066
    ctx->pc = 0x2dd3f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
    // 0x2dd3fc: 0xc0bb6e8
    ctx->pc = 0x2DD3FCu;
    SET_GPR_U32(ctx, 31, 0x2DD404u);
    ctx->pc = 0x2DD400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10672), GPR_U32(ctx, 2));
    ctx->pc = 0x2EDBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMpegInit_0x2edba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD404u; }
    }
    if (ctx->pc != 0x2DD404u) { return; }
    ctx->pc = 0x2DD404u;
    // 0x2dd404: 0x3c02003e
    ctx->pc = 0x2dd404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dd408: 0x3c03003e
    ctx->pc = 0x2dd408u;
    SET_GPR_U32(ctx, 3, ((uint32_t)62 << 16));
    // 0x2dd40c: 0x3c04003a
    ctx->pc = 0x2dd40cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd410: 0x24842a40
    ctx->pc = 0x2dd410u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10816));
    // 0x2dd414: 0x8c459050
    ctx->pc = 0x2dd414u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294938704)));
    // 0x2dd418: 0x3c060015
    ctx->pc = 0x2dd418u;
    SET_GPR_U32(ctx, 6, ((uint32_t)21 << 16));
    // 0x2dd41c: 0x34c62000
    ctx->pc = 0x2dd41cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 8192));
    // 0x2dd420: 0x8c67905c
    ctx->pc = 0x2dd420u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294938716)));
    // 0x2dd424: 0x3c08003e
    ctx->pc = 0x2dd424u;
    SET_GPR_U32(ctx, 8, ((uint32_t)62 << 16));
    // 0x2dd428: 0x25088040
    ctx->pc = 0x2dd428u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294934592));
    // 0x2dd42c: 0x24090100
    ctx->pc = 0x2dd42cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dd430: 0x3c0a003e
    ctx->pc = 0x2dd430u;
    SET_GPR_U32(ctx, 10, ((uint32_t)62 << 16));
    // 0x2dd434: 0x254ad080
    ctx->pc = 0x2dd434u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294955136));
    // 0x2dd438: 0xc0b77ee
    ctx->pc = 0x2DD438u;
    SET_GPR_U32(ctx, 31, 0x2DD440u);
    ctx->pc = 0x2DD43Cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 512));
    ctx->pc = 0x2DDFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecCreate_0x2ddfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD440u; }
    }
    if (ctx->pc != 0x2DD440u) { return; }
    ctx->pc = 0x2DD440u;
    // 0x2dd440: 0x24020067
    ctx->pc = 0x2dd440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
    // 0x2dd444: 0xae0229b0
    ctx->pc = 0x2dd444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10672), GPR_U32(ctx, 2));
    // 0x2dd448: 0x3c02003e
    ctx->pc = 0x2dd448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dd44c: 0x3c04003a
    ctx->pc = 0x2dd44cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd450: 0x24842af8
    ctx->pc = 0x2dd450u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11000));
    // 0x2dd454: 0x8c459058
    ctx->pc = 0x2dd454u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294938712)));
    // 0x2dd458: 0x3c060003
    ctx->pc = 0x2dd458u;
    SET_GPR_U32(ctx, 6, ((uint32_t)3 << 16));
    // 0x2dd45c: 0x3c070001
    ctx->pc = 0x2dd45cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x2dd460: 0xc0b7a7a
    ctx->pc = 0x2DD460u;
    SET_GPR_U32(ctx, 31, 0x2DD468u);
    ctx->pc = 0x2DD464u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32768));
    ctx->pc = 0x2DE9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecCreate_0x2de9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD468u; }
    }
    if (ctx->pc != 0x2DD468u) { return; }
    ctx->pc = 0x2DD468u;
    // 0x2dd468: 0x14400005
    ctx->pc = 0x2DD468u;
    {
        const bool branch_taken_0x2dd468 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD46Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd468) {
            ctx->pc = 0x2DD480u;
            goto label_2dd480;
        }
    }
    ctx->pc = 0x2DD470u;
    // 0x2dd470: 0x3c030031
    ctx->pc = 0x2dd470u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2dd474: 0x24020001
    ctx->pc = 0x2dd474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd478: 0xac62f190
    ctx->pc = 0x2dd478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963600), GPR_U32(ctx, 2));
    // 0x2dd47c: 0x3c03003a
    ctx->pc = 0x2dd47cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2dd480:
    // 0x2dd480: 0x24020068
    ctx->pc = 0x2dd480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
    // 0x2dd484: 0xac6229b0
    ctx->pc = 0x2dd484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10672), GPR_U32(ctx, 2));
    // 0x2dd488: 0x3c12003a
    ctx->pc = 0x2dd488u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2dd48c: 0x3c11003a
    ctx->pc = 0x2dd48cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2dd490: 0x26242a40
    ctx->pc = 0x2dd490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10816));
    // 0x2dd494: 0x282d
    ctx->pc = 0x2dd494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd498: 0x302d
    ctx->pc = 0x2dd498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd49c: 0x3c07002e
    ctx->pc = 0x2dd49cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)46 << 16));
    // 0x2dd4a0: 0x24e7d790
    ctx->pc = 0x2dd4a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294956944));
    // 0x2dd4a4: 0xc0b7830
    ctx->pc = 0x2DD4A4u;
    SET_GPR_U32(ctx, 31, 0x2DD4ACu);
    ctx->pc = 0x2DD4A8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 10756)));
    ctx->pc = 0x2DE0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetStream_0x2de0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4ACu; }
    }
    if (ctx->pc != 0x2DD4ACu) { return; }
    ctx->pc = 0x2DD4ACu;
    // 0x2dd4ac: 0x3c020031
    ctx->pc = 0x2dd4acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2dd4b0: 0x8c42f190
    ctx->pc = 0x2dd4b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963600)));
    // 0x2dd4b4: 0x5440000f
    ctx->pc = 0x2DD4B4u;
    {
        const bool branch_taken_0x2dd4b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dd4b4) {
            ctx->pc = 0x2DD4B8u;
            SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
            ctx->pc = 0x2DD4F4u;
            goto label_2dd4f4;
        }
    }
    ctx->pc = 0x2DD4BCu;
    // 0x2dd4bc: 0x26242a40
    ctx->pc = 0x2dd4bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10816));
    // 0x2dd4c0: 0x24050002
    ctx->pc = 0x2dd4c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dd4c4: 0x302d
    ctx->pc = 0x2dd4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4c8: 0x3c10002e
    ctx->pc = 0x2dd4c8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)46 << 16));
    // 0x2dd4cc: 0x2607d8b0
    ctx->pc = 0x2dd4ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 4294957232));
    // 0x2dd4d0: 0xc0b7830
    ctx->pc = 0x2DD4D0u;
    SET_GPR_U32(ctx, 31, 0x2DD4D8u);
    ctx->pc = 0x2DD4D4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 10756)));
    ctx->pc = 0x2DE0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetStream_0x2de0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4D8u; }
    }
    if (ctx->pc != 0x2DD4D8u) { return; }
    ctx->pc = 0x2DD4D8u;
    // 0x2dd4d8: 0x26242a40
    ctx->pc = 0x2dd4d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10816));
    // 0x2dd4dc: 0x24050003
    ctx->pc = 0x2dd4dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dd4e0: 0x260302d
    ctx->pc = 0x2dd4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4e4: 0x2607d8b0
    ctx->pc = 0x2dd4e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 4294957232));
    // 0x2dd4e8: 0xc0b7830
    ctx->pc = 0x2DD4E8u;
    SET_GPR_U32(ctx, 31, 0x2DD4F0u);
    ctx->pc = 0x2DD4ECu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 10756)));
    ctx->pc = 0x2DE0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetStream_0x2de0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD4F0u; }
    }
    if (ctx->pc != 0x2DD4F0u) { return; }
    ctx->pc = 0x2DD4F0u;
    // 0x2dd4f0: 0x3c11003a
    ctx->pc = 0x2dd4f0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
label_2dd4f4:
    // 0x2dd4f4: 0x24020069
    ctx->pc = 0x2dd4f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 105));
    // 0x2dd4f8: 0xae2229b0
    ctx->pc = 0x2dd4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10672), GPR_U32(ctx, 2));
    // 0x2dd4fc: 0x3c02003e
    ctx->pc = 0x2dd4fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dd500: 0x8c458014
    ctx->pc = 0x2dd500u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294934548)));
    // 0x2dd504: 0x3c020fff
    ctx->pc = 0x2dd504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2dd508: 0x3442ffff
    ctx->pc = 0x2dd508u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2dd50c: 0xa22824
    ctx->pc = 0x2dd50cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2dd510: 0x3c022000
    ctx->pc = 0x2dd510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x2dd514: 0x3c03003e
    ctx->pc = 0x2dd514u;
    SET_GPR_U32(ctx, 3, ((uint32_t)62 << 16));
    // 0x2dd518: 0x3c04003a
    ctx->pc = 0x2dd518u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd51c: 0x248429f0
    ctx->pc = 0x2dd51cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10736));
    // 0x2dd520: 0xa22825
    ctx->pc = 0x2dd520u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2dd524: 0x8c668018
    ctx->pc = 0x2dd524u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294934552)));
    // 0x2dd528: 0xc0b7a02
    ctx->pc = 0x2DD528u;
    SET_GPR_U32(ctx, 31, 0x2DD530u);
    ctx->pc = 0x2DD52Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2DE808u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufCreate_0x2de808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD530u; }
    }
    if (ctx->pc != 0x2DD530u) { return; }
    ctx->pc = 0x2DD530u;
    // 0x2dd530: 0xc0c0d34
    ctx->pc = 0x2DD530u;
    SET_GPR_U32(ctx, 31, 0x2DD538u);
    ctx->pc = 0x2DD534u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x3034D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x3034d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD538u; }
    }
    if (ctx->pc != 0x2DD538u) { return; }
    ctx->pc = 0x2DD538u;
    // 0x2dd538: 0x40202d
    ctx->pc = 0x2dd538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd53c: 0xc0c0d38
    ctx->pc = 0x2DD53Cu;
    SET_GPR_U32(ctx, 31, 0x2DD544u);
    ctx->pc = 0x2DD540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3034E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReferThreadStatus_0x3034e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD544u; }
    }
    if (ctx->pc != 0x2DD544u) { return; }
    ctx->pc = 0x2DD544u;
    // 0x2dd544: 0x3c02003e
    ctx->pc = 0x2dd544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dd548: 0x8fa30018
    ctx->pc = 0x2dd548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dd54c: 0xac438010
    ctx->pc = 0x2dd54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934544), GPR_U32(ctx, 3));
    // 0x2dd550: 0x2402006a
    ctx->pc = 0x2dd550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 106));
    // 0x2dd554: 0xae2229b0
    ctx->pc = 0x2dd554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10672), GPR_U32(ctx, 2));
    // 0x2dd558: 0x3c02002e
    ctx->pc = 0x2dd558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x2dd55c: 0x2442e310
    ctx->pc = 0x2dd55cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959888));
    // 0x2dd560: 0xafa20004
    ctx->pc = 0x2dd560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2dd564: 0x3c02003e
    ctx->pc = 0x2dd564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2dd568: 0x24429080
    ctx->pc = 0x2dd568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938752));
    // 0x2dd56c: 0xafa20008
    ctx->pc = 0x2dd56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2dd570: 0x24024000
    ctx->pc = 0x2dd570u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2dd574: 0xafa2000c
    ctx->pc = 0x2dd574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2dd578: 0xafa30014
    ctx->pc = 0x2dd578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2dd57c: 0x3c02003c
    ctx->pc = 0x2dd57cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2dd580: 0x24423170
    ctx->pc = 0x2dd580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12656));
    // 0x2dd584: 0xafa20010
    ctx->pc = 0x2dd584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2dd588: 0xafa00020
    ctx->pc = 0x2dd588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2dd58c: 0xc0c0cf8
    ctx->pc = 0x2DD58Cu;
    SET_GPR_U32(ctx, 31, 0x2DD594u);
    ctx->pc = 0x2DD590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3033E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x3033e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD594u; }
    }
    if (ctx->pc != 0x2DD594u) { return; }
    ctx->pc = 0x2DD594u;
    // 0x2dd594: 0x3c03003a
    ctx->pc = 0x2dd594u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dd598: 0xac622a08
    ctx->pc = 0x2dd598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10760), GPR_U32(ctx, 2));
    // 0x2dd59c: 0x40202d
    ctx->pc = 0x2dd59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd5a0: 0xc0c0d00
    ctx->pc = 0x2DD5A0u;
    SET_GPR_U32(ctx, 31, 0x2DD5A8u);
    ctx->pc = 0x2DD5A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 10816));
    ctx->pc = 0x303400u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x303400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5A8u; }
    }
    if (ctx->pc != 0x2DD5A8u) { return; }
    ctx->pc = 0x2DD5A8u;
    // 0x2dd5a8: 0x2402006b
    ctx->pc = 0x2dd5a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 107));
    // 0x2dd5ac: 0xae2229b0
    ctx->pc = 0x2dd5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10672), GPR_U32(ctx, 2));
    // 0x2dd5b0: 0x24040002
    ctx->pc = 0x2dd5b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dd5b4: 0x3c05002e
    ctx->pc = 0x2dd5b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
    // 0x2dd5b8: 0x24a5c7b0
    ctx->pc = 0x2dd5b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294952880));
    // 0x2dd5bc: 0xc0c0cbc
    ctx->pc = 0x2DD5BCu;
    SET_GPR_U32(ctx, 31, 0x2DD5C4u);
    ctx->pc = 0x2DD5C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3032F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x3032f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5C4u; }
    }
    if (ctx->pc != 0x2DD5C4u) { return; }
    ctx->pc = 0x2DD5C4u;
    // 0x2dd5c4: 0x26102a40
    ctx->pc = 0x2dd5c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 10816));
    // 0x2dd5c8: 0x4410005
    ctx->pc = 0x2DD5C8u;
    {
        const bool branch_taken_0x2dd5c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2DD5CCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        if (branch_taken_0x2dd5c8) {
            ctx->pc = 0x2DD5E0u;
            goto label_2dd5e0;
        }
    }
    ctx->pc = 0x2DD5D0u;
    // 0x2dd5d0: 0x3c04003c
    ctx->pc = 0x2dd5d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2dd5d4: 0x248484a0
    ctx->pc = 0x2dd5d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935712));
    // 0x2dd5d8: 0xc0b49a6
    ctx->pc = 0x2DD5D8u;
    SET_GPR_U32(ctx, 31, 0x2DD5E0u);
    ctx->pc = 0x2DD5DCu;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5E0u; }
    }
    if (ctx->pc != 0x2DD5E0u) { return; }
    ctx->pc = 0x2DD5E0u;
label_2dd5e0:
    // 0x2dd5e0: 0xc0c1062
    ctx->pc = 0x2DD5E0u;
    SET_GPR_U32(ctx, 31, 0x2DD5E8u);
    ctx->pc = 0x2DD5E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x304188u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x304188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD5E8u; }
    }
    if (ctx->pc != 0x2DD5E8u) { return; }
    ctx->pc = 0x2DD5E8u;
    // 0x2dd5e8: 0x3c04003a
    ctx->pc = 0x2dd5e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dd5ec: 0x24842a10
    ctx->pc = 0x2dd5ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10768));
    // 0x2dd5f0: 0x3c02003a
    ctx->pc = 0x2dd5f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dd5f4: 0x8c422b3c
    ctx->pc = 0x2dd5f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 11068)));
    // 0x2dd5f8: 0xac820028
    ctx->pc = 0x2dd5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2dd5fc: 0x3c03003a
    ctx->pc = 0x2dd5fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dd600: 0x2402006c
    ctx->pc = 0x2dd600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
    // 0x2dd604: 0xac6229b0
    ctx->pc = 0x2dd604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10672), GPR_U32(ctx, 2));
    // 0x2dd608: 0xc0b76f6
    ctx->pc = 0x2DD608u;
    SET_GPR_U32(ctx, 31, 0x2DD610u);
    ctx->pc = 0x2DD60Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DDBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strFileOpen_0x2ddbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD610u; }
    }
    if (ctx->pc != 0x2DD610u) { return; }
    ctx->pc = 0x2DD610u;
    // 0x2dd610: 0x1440000b
    ctx->pc = 0x2DD610u;
    {
        const bool branch_taken_0x2dd610 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD614u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dd610) {
            ctx->pc = 0x2DD640u;
            goto label_2dd640;
        }
    }
    ctx->pc = 0x2DD618u;
    // 0x2dd618: 0x3c02003a
    ctx->pc = 0x2dd618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dd61c: 0x24040002
    ctx->pc = 0x2dd61cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dd620: 0xc0c0cc4
    ctx->pc = 0x2DD620u;
    SET_GPR_U32(ctx, 31, 0x2DD628u);
    ctx->pc = 0x2DD624u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 10992)));
    ctx->pc = 0x303310u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x303310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD628u; }
    }
    if (ctx->pc != 0x2DD628u) { return; }
    ctx->pc = 0x2DD628u;
    // 0x2dd628: 0x3c04003c
    ctx->pc = 0x2dd628u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2dd62c: 0x248484c8
    ctx->pc = 0x2dd62cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935752));
    // 0x2dd630: 0xc0b4a34
    ctx->pc = 0x2DD630u;
    SET_GPR_U32(ctx, 31, 0x2DD638u);
    ctx->pc = 0x2DD634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD638u; }
    }
    if (ctx->pc != 0x2DD638u) { return; }
    ctx->pc = 0x2DD638u;
    // 0x2dd638: 0x10000004
    ctx->pc = 0x2DD638u;
    {
        const bool branch_taken_0x2dd638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DD63Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dd638) {
            ctx->pc = 0x2DD64Cu;
            goto label_2dd64c;
        }
    }
    ctx->pc = 0x2DD640u;
label_2dd640:
    // 0x2dd640: 0x240200c7
    ctx->pc = 0x2dd640u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 199));
    // 0x2dd644: 0xac6229b0
    ctx->pc = 0x2dd644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10672), GPR_U32(ctx, 2));
    // 0x2dd648: 0x24020001
    ctx->pc = 0x2dd648u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2dd64c:
    // 0x2dd64c: 0xdfbf0080
    ctx->pc = 0x2dd64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dd650: 0xdfb40070
    ctx->pc = 0x2dd650u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dd654: 0xdfb30060
    ctx->pc = 0x2dd654u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dd658: 0xdfb20050
    ctx->pc = 0x2dd658u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd65c: 0xdfb10040
    ctx->pc = 0x2dd65cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd660: 0xdfb00030
    ctx->pc = 0x2dd660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd664: 0x3e00008
    ctx->pc = 0x2DD664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD668u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DD480u: goto label_2dd480;
            case 0x2DD4F4u: goto label_2dd4f4;
            case 0x2DD5E0u: goto label_2dd5e0;
            case 0x2DD640u: goto label_2dd640;
            case 0x2DD64Cu: goto label_2dd64c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DD66Cu;
}
