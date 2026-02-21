#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"
#include <iostream>

// Function: xReadFileSection
// Address: 0x2d3848 - 0x2d39f0
void xReadFileSection_0x2d3848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3848u;

    // 0x2d3848: 0x27bdfe50
    ctx->pc = 0x2d3848u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2d384c: 0xffbf01a0
    ctx->pc = 0x2d384cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x2d3850: 0xffbe0190
    ctx->pc = 0x2d3850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x2d3854: 0xffb70180
    ctx->pc = 0x2d3854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x2d3858: 0xffb60170
    ctx->pc = 0x2d3858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x2d385c: 0xffb50160
    ctx->pc = 0x2d385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x2d3860: 0xffb40150
    ctx->pc = 0x2d3860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x2d3864: 0xffb30140
    ctx->pc = 0x2d3864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x2d3868: 0xffb20130
    ctx->pc = 0x2d3868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x2d386c: 0xffb10120
    ctx->pc = 0x2d386cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x2d3870: 0xffb00110
    ctx->pc = 0x2d3870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x2d3874: 0x80b82d
    ctx->pc = 0x2d3874u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3878: 0xa0b02d
    ctx->pc = 0x2d3878u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d387c: 0xc0a82d
    ctx->pc = 0x2d387cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3880: 0x3c02003a
    ctx->pc = 0x2d3880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3884: 0x8c4221e8
    ctx->pc = 0x2d3884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8680)));
    // 0x2d3888: 0x10400007
    ctx->pc = 0x2D3888u;
    {
        const bool branch_taken_0x2d3888 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D388Cu;
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d3888) {
            ctx->pc = 0x2D38A8u;
            goto label_2d38a8;
        }
    }
    ctx->pc = 0x2D3890u;
    // 0x2d3890: 0x3c020037
    ctx->pc = 0x2d3890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d3894: 0x34038080
    ctx->pc = 0x2d3894u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32896));
    // 0x2d3898: 0xac438008
    ctx->pc = 0x2d3898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d389c: 0x3c04003b
    ctx->pc = 0x2d389cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d38a0: 0xc0b4976
    ctx->pc = 0x2D38A0u;
    SET_GPR_U32(ctx, 31, 0x2D38A8u);
    ctx->pc = 0x2D38A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30960));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D38A8u; }
    }
    if (ctx->pc != 0x2D38A8u) { return; }
    ctx->pc = 0x2D38A8u;
label_2d38a8:
    // 0x2d38a8: 0x2e0202d
    ctx->pc = 0x2d38a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d38ac:
    // 0x2d38ac: 0xc0b5346
    ctx->pc = 0x2D38ACu;
    SET_GPR_U32(ctx, 31, 0x2D38B4u);
    ctx->pc = 0x2D38B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWadInfo_0x2d4d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D38B4u; }
    }
    if (ctx->pc != 0x2D38B4u) { return; }
    ctx->pc = 0x2D38B4u;
    // 0x2d38b4: 0x40902d
    ctx->pc = 0x2d38b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    {
        static int s_getWadInfoLogCount = 0;
        if (s_getWadInfoLogCount < 15)
        {
            const uint32_t infoAddr = getRegU32(ctx, 18);
            if (infoAddr)
            {
                const uint32_t *p = reinterpret_cast<const uint32_t *>(getMemPtr(rdram, infoAddr));
                if (p)
                {
                    std::cerr << "[xReadFileSection] GetWadInfo returned ptr=0x" << std::hex << infoAddr
                              << " [0]=0x" << p[0] << " (uncomp_size?) [1]=0x" << p[1] << " (seek_offset?) [2]=0x" << p[2]
                              << " [3]=0x" << p[3] << " (comp_size?)" << std::dec << std::endl;
                    ++s_getWadInfoLogCount;
                }
            }
        }
    }
    // 0x2d38b8: 0x1240fffc
    ctx->pc = 0x2D38B8u;
    {
        const bool branch_taken_0x2d38b8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D38BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d38b8) {
            ctx->pc = 0x2D38ACu;
            goto label_2d38ac;
        }
    }
    ctx->pc = 0x2D38C0u;
    // 0x2d38c0: 0x3c02003a
    ctx->pc = 0x2d38c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d38c4: 0x8c54231c
    ctx->pc = 0x2d38c4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 8988)));
    // 0x2d38c8: 0x8e500000
    ctx->pc = 0x2d38c8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d38cc: 0x280202d
    ctx->pc = 0x2d38ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d38d0: 0x8e450004
    ctx->pc = 0x2d38d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d38d4: 0xc0c1bb4
    ctx->pc = 0x2D38D4u;
    SET_GPR_U32(ctx, 31, 0x2D38DCu);
    ctx->pc = 0x2D38D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x306ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x306ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D38DCu; }
    }
    if (ctx->pc != 0x2D38DCu) { return; }
    ctx->pc = 0x2D38DCu;
    // 0x2d38dc: 0x3203000f
    ctx->pc = 0x2d38dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 15));
    // 0x2d38e0: 0x10600002
    ctx->pc = 0x2D38E0u;
    {
        const bool branch_taken_0x2d38e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D38E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x2d38e0) {
            ctx->pc = 0x2D38ECu;
            goto label_2d38ec;
        }
    }
    ctx->pc = 0x2D38E8u;
    // 0x2d38e8: 0x438023
    ctx->pc = 0x2d38e8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d38ec:
    // 0x2d38ec: 0x1aa00003
    ctx->pc = 0x2D38ECu;
    {
        const bool branch_taken_0x2d38ec = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2D38F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 21)));
        if (branch_taken_0x2d38ec) {
            ctx->pc = 0x2D38FCu;
            goto label_2d38fc;
        }
    }
    ctx->pc = 0x2D38F4u;
    // 0x2d38f4: 0x50400003
    ctx->pc = 0x2D38F4u;
    {
        const bool branch_taken_0x2d38f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d38f4) {
            ctx->pc = 0x2D38F8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->pc = 0x2D3904u;
            goto label_2d3904;
        }
    }
    ctx->pc = 0x2D38FCu;
label_2d38fc:
    // 0x2d38fc: 0x200a82d
    ctx->pc = 0x2d38fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3900: 0x8e44000c
    ctx->pc = 0x2d3900u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2d3904:
    // 0x2d3904: 0x2402ffff
    ctx->pc = 0x2d3904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3908: 0x10820029
    ctx->pc = 0x2D3908u;
    {
        const bool branch_taken_0x2d3908 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2D390Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d3908) {
            ctx->pc = 0x2D39B0u;
            goto label_2d39b0;
        }
    }
    ctx->pc = 0x2D3910u;
    // 0x2d3910: 0x3223000f
    ctx->pc = 0x2d3910u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 15));
    // 0x2d3914: 0x10600002
    ctx->pc = 0x2D3914u;
    {
        const bool branch_taken_0x2d3914 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3918u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x2d3914) {
            ctx->pc = 0x2D3920u;
            goto label_2d3920;
        }
    }
    ctx->pc = 0x2D391Cu;
    // 0x2d391c: 0x438823
    ctx->pc = 0x2d391cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d3920:
    // 0x2d3920: 0xc0b4f1a
    ctx->pc = 0x2D3920u;
    SET_GPR_U32(ctx, 31, 0x2D3928u);
    ctx->pc = 0x2D3924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocHiMem_0x2d3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3928u; }
    }
    if (ctx->pc != 0x2D3928u) { return; }
    ctx->pc = 0x2D3928u;
    // 0x2d3928: 0x40982d
    ctx->pc = 0x2d3928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d392c: 0x280202d
    ctx->pc = 0x2d392cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d3930:
    // 0x2d3930: 0x260282d
    ctx->pc = 0x2d3930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d3934:
    // 0x2d3934: 0xc0c1c2e
    ctx->pc = 0x2D3934u;
    SET_GPR_U32(ctx, 31, 0x2D393Cu);
    ctx->pc = 0x2D3938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3070B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x3070b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D393Cu; }
    }
    if (ctx->pc != 0x2D393Cu) { return; }
    ctx->pc = 0x2D393Cu;
    // 0x2d393c: 0x1451fffc
    ctx->pc = 0x2D393Cu;
    {
        const bool branch_taken_0x2d393c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x2D3940u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d393c) {
            ctx->pc = 0x2D3930u;
            goto label_2d3930;
        }
    }
    ctx->pc = 0x2D3944u;
    // 0x2d3944: 0x8e420000
    ctx->pc = 0x2d3944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d3948: 0xafa20100
    ctx->pc = 0x2d3948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2d394c: 0x2a2102a
    ctx->pc = 0x2d394cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 2)));
    // 0x2d3950: 0x10400008
    ctx->pc = 0x2D3950u;
    {
        const bool branch_taken_0x2d3950 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3954u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 57568));
        if (branch_taken_0x2d3950) {
            ctx->pc = 0x2D3974u;
            goto label_2d3974;
        }
    }
    ctx->pc = 0x2D3958u;
    // 0x2d3958: 0x3c020037
    ctx->pc = 0x2d3958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2d395c: 0xac438008
    ctx->pc = 0x2d395cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d3960: 0x3c02003b
    ctx->pc = 0x2d3960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2d3964: 0x24447968
    ctx->pc = 0x2d3964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 31080));
    // 0x2d3968: 0x2e0282d
    ctx->pc = 0x2d3968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d396c: 0xc0b4976
    ctx->pc = 0x2D396Cu;
    SET_GPR_U32(ctx, 31, 0x2D3974u);
    ctx->pc = 0x2D3970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3974u; }
    }
    if (ctx->pc != 0x2D3974u) { return; }
    ctx->pc = 0x2D3974u;
label_2d3974:
    // 0x2d3974: 0x3c0202d
    ctx->pc = 0x2d3974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3978: 0x27a50100
    ctx->pc = 0x2d3978u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d397c: 0x260302d
    ctx->pc = 0x2d397cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3980: 0xc0b5d02
    ctx->pc = 0x2D3980u;
    SET_GPR_U32(ctx, 31, 0x2D3988u);
    ctx->pc = 0x2D3984u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->pc = 0x2D7408u;
    {
        const uint32_t __entryPc = ctx->pc;
        uncompress_0x2d7408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3988u; }
    }
    if (ctx->pc != 0x2D3988u) { return; }
    ctx->pc = 0x2D3988u;
    // 0x2d3988: 0xc0b4f12
    ctx->pc = 0x2D3988u;
    SET_GPR_U32(ctx, 31, 0x2D3990u);
    ctx->pc = 0x2D398Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FreeHiMem_0x2d3c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3990u; }
    }
    if (ctx->pc != 0x2D3990u) { return; }
    ctx->pc = 0x2D3990u;
    // 0x2d3990: 0x1600ffe7
    ctx->pc = 0x2D3990u;
    {
        const bool branch_taken_0x2d3990 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D3994u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d3990) {
            // Retry path: file position advanced by previous sceRead; seek back to chunk start before retrying.
            SET_GPR_U32(ctx, 4, GPR_U32(ctx, 20));   // a0 = wad_fd (s4)
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));  // a1 = info[1] (seek offset)
            SET_GPR_U32(ctx, 6, 0);                  // a2 = SEEK_SET
            SET_GPR_U32(ctx, 31, 0x2D3930u);         // ra = resume at read loop
            sceLseek_0x306ed0(rdram, ctx, runtime);
            if (ctx->pc == 0x2D3930u) {
                goto label_2d3930;
            }
            ctx->pc = 0x2D3930u;
            goto label_2d3930;
        }
    }
    ctx->pc = 0x2D3998u;
    // 0x2d3998: 0x8fa30100
    ctx->pc = 0x2d3998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d399c: 0x8e420000
    ctx->pc = 0x2d399cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d39a0: 0x1462ffe4
    ctx->pc = 0x2D39A0u;
    {
        const bool branch_taken_0x2d39a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D39A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d39a0) {
            ctx->pc = 0x2D3934u;
            goto label_2d3934;
        }
    }
    ctx->pc = 0x2D39A8u;
    // 0x2d39a8: 0x10000005
    ctx->pc = 0x2D39A8u;
    {
        const bool branch_taken_0x2d39a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D39ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d39a8) {
            ctx->pc = 0x2D39C0u;
            goto label_2d39c0;
        }
    }
    ctx->pc = 0x2D39B0u;
label_2d39b0:
    // 0x2d39b0: 0x280202d
    ctx->pc = 0x2d39b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39b4: 0x3c0282d
    ctx->pc = 0x2d39b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39b8: 0xc0c1c2e
    ctx->pc = 0x2D39B8u;
    SET_GPR_U32(ctx, 31, 0x2D39C0u);
    ctx->pc = 0x2D39BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3070B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x3070b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D39C0u; }
    }
    if (ctx->pc != 0x2D39C0u) { return; }
    ctx->pc = 0x2D39C0u;
label_2d39c0:
    // 0x2d39c0: 0xdfbf01a0
    ctx->pc = 0x2d39c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2d39c4: 0xdfbe0190
    ctx->pc = 0x2d39c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2d39c8: 0xdfb70180
    ctx->pc = 0x2d39c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2d39cc: 0xdfb60170
    ctx->pc = 0x2d39ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2d39d0: 0xdfb50160
    ctx->pc = 0x2d39d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2d39d4: 0xdfb40150
    ctx->pc = 0x2d39d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2d39d8: 0xdfb30140
    ctx->pc = 0x2d39d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d39dc: 0xdfb20130
    ctx->pc = 0x2d39dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d39e0: 0xdfb10120
    ctx->pc = 0x2d39e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d39e4: 0xdfb00110
    ctx->pc = 0x2d39e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d39e8: 0x3e00008
    ctx->pc = 0x2D39E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D39ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D38A8u: goto label_2d38a8;
            case 0x2D38ACu: goto label_2d38ac;
            case 0x2D38ECu: goto label_2d38ec;
            case 0x2D38FCu: goto label_2d38fc;
            case 0x2D3904u: goto label_2d3904;
            case 0x2D3920u: goto label_2d3920;
            case 0x2D3930u: goto label_2d3930;
            case 0x2D3934u: goto label_2d3934;
            case 0x2D3974u: goto label_2d3974;
            case 0x2D39B0u: goto label_2d39b0;
            case 0x2D39C0u: goto label_2d39c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D39F0u;
}
