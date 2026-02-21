#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoItemSound
// Address: 0x25d2a8 - 0x25d4e0
void DoItemSound_0x25d2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d2a8u;

    // 0x25d2a8: 0x27bdff60
    ctx->pc = 0x25d2a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25d2ac: 0xffbf0080
    ctx->pc = 0x25d2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x25d2b0: 0xffb70070
    ctx->pc = 0x25d2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x25d2b4: 0xffb60060
    ctx->pc = 0x25d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25d2b8: 0xffb50050
    ctx->pc = 0x25d2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25d2bc: 0xffb40040
    ctx->pc = 0x25d2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25d2c0: 0xffb30030
    ctx->pc = 0x25d2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25d2c4: 0xffb20020
    ctx->pc = 0x25d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25d2c8: 0xffb10010
    ctx->pc = 0x25d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25d2cc: 0xffb00000
    ctx->pc = 0x25d2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d2d0: 0xe7b40090
    ctx->pc = 0x25d2d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x25d2d4: 0x80802d
    ctx->pc = 0x25d2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d2d8: 0xa0b02d
    ctx->pc = 0x25d2d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d2dc: 0x46006506
    ctx->pc = 0x25d2dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x25d2e0: 0xc0b82d
    ctx->pc = 0x25d2e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d2e4: 0xe0982d
    ctx->pc = 0x25d2e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d2e8: 0x6000070
    ctx->pc = 0x25D2E8u;
    {
        const bool branch_taken_0x25d2e8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x25D2ECu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25d2e8) {
            ctx->pc = 0x25D4ACu;
            goto label_25d4ac;
        }
    }
    ctx->pc = 0x25D2F0u;
    // 0x25d2f0: 0x3c014360
    ctx->pc = 0x25d2f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17248 << 16));
    // 0x25d2f4: 0x44810000
    ctx->pc = 0x25d2f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25d2f8: 0x4600a002
    ctx->pc = 0x25d2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x25d2fc: 0x3c020034
    ctx->pc = 0x25d2fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25d300: 0x8c42e7c8
    ctx->pc = 0x25d300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x25d304: 0xc4410098
    ctx->pc = 0x25d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d308: 0x46010002
    ctx->pc = 0x25d308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25d30c: 0x46000064
    ctx->pc = 0x25d30cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x25d310: 0x44110800
    ctx->pc = 0x25d310u;
    SET_GPR_U32(ctx, 17, *(uint32_t*)&ctx->f[1]);
    // 0x25d314: 0xc09d588
    ctx->pc = 0x25D314u;
    SET_GPR_U32(ctx, 31, 0x25D31Cu);
    ctx->pc = 0x275620u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerActive_0x275620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D31Cu; }
    }
    if (ctx->pc != 0x25D31Cu) { return; }
    ctx->pc = 0x25D31Cu;
    // 0x25d31c: 0x5440000a
    ctx->pc = 0x25D31Cu;
    {
        const bool branch_taken_0x25d31c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25d31c) {
            ctx->pc = 0x25D320u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 16));
            ctx->pc = 0x25D348u;
            goto label_25d348;
        }
    }
    ctx->pc = 0x25D324u;
    // 0x25d324: 0x3c020036
    ctx->pc = 0x25d324u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x25d328: 0x8c42dbac
    ctx->pc = 0x25d328u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
    // 0x25d32c: 0x54400006
    ctx->pc = 0x25D32Cu;
    {
        const bool branch_taken_0x25d32c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25d32c) {
            ctx->pc = 0x25D330u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 16));
            ctx->pc = 0x25D348u;
            goto label_25d348;
        }
    }
    ctx->pc = 0x25D334u;
    // 0x25d334: 0x3c020032
    ctx->pc = 0x25d334u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d338: 0x8c4207f8
    ctx->pc = 0x25d338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x25d33c: 0x10400003
    ctx->pc = 0x25D33Cu;
    {
        const bool branch_taken_0x25d33c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D340u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x25d33c) {
            ctx->pc = 0x25D34Cu;
            goto label_25d34c;
        }
    }
    ctx->pc = 0x25D344u;
    // 0x25d344: 0x24110010
    ctx->pc = 0x25d344u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 16));
label_25d348:
    // 0x25d348: 0x3c020031
    ctx->pc = 0x25d348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_25d34c:
    // 0x25d34c: 0x8c430018
    ctx->pc = 0x25d34cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25d350: 0x24024014
    ctx->pc = 0x25d350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16404));
    // 0x25d354: 0x10620051
    ctx->pc = 0x25D354u;
    {
        const bool branch_taken_0x25d354 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25D358u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 112));
        if (branch_taken_0x25d354) {
            ctx->pc = 0x25D49Cu;
            goto label_25d49c;
        }
    }
    ctx->pc = 0x25D35Cu;
    // 0x25d35c: 0x2402400c
    ctx->pc = 0x25d35cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
    // 0x25d360: 0x1062004e
    ctx->pc = 0x25D360u;
    {
        const bool branch_taken_0x25d360 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x25D364u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x25d360) {
            ctx->pc = 0x25D49Cu;
            goto label_25d49c;
        }
    }
    ctx->pc = 0x25D368u;
    // 0x25d368: 0x8c420810
    ctx->pc = 0x25d368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x25d36c: 0x5440004c
    ctx->pc = 0x25D36Cu;
    {
        const bool branch_taken_0x25d36c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25d36c) {
            ctx->pc = 0x25D370u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x25D4A0u;
            goto label_25d4a0;
        }
    }
    ctx->pc = 0x25D374u;
    // 0x25d374: 0x2402ffff
    ctx->pc = 0x25d374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25d378: 0x51102a
    ctx->pc = 0x25d378u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x25d37c: 0x2880a
    ctx->pc = 0x25d37cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
    // 0x25d380: 0x3c020034
    ctx->pc = 0x25d380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25d384: 0x8c43e7f0
    ctx->pc = 0x25d384u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25d388: 0x2402000c
    ctx->pc = 0x25d388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x25d38c: 0x1462000f
    ctx->pc = 0x25D38Cu;
    {
        const bool branch_taken_0x25d38c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25D390u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x25d38c) {
            ctx->pc = 0x25D3CCu;
            goto label_25d3cc;
        }
    }
    ctx->pc = 0x25D394u;
    // 0x25d394: 0x3c020034
    ctx->pc = 0x25d394u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25d398: 0x8c42e7f4
    ctx->pc = 0x25d398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961140)));
    // 0x25d39c: 0x1440000b
    ctx->pc = 0x25D39Cu;
    {
        const bool branch_taken_0x25d39c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D3A0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x25d39c) {
            ctx->pc = 0x25D3CCu;
            goto label_25d3cc;
        }
    }
    ctx->pc = 0x25D3A4u;
    // 0x25d3a4: 0x118880
    ctx->pc = 0x25d3a4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 2));
    // 0x25d3a8: 0x2a220040
    ctx->pc = 0x25d3a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 64));
    // 0x25d3ac: 0x54400005
    ctx->pc = 0x25D3ACu;
    {
        const bool branch_taken_0x25d3ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25d3ac) {
            ctx->pc = 0x25D3B0u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
            ctx->pc = 0x25D3C4u;
            goto label_25d3c4;
        }
    }
    ctx->pc = 0x25D3B4u;
    // 0x25d3b4: 0x2a230100
    ctx->pc = 0x25d3b4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 256));
    // 0x25d3b8: 0x240200ff
    ctx->pc = 0x25d3b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x25d3bc: 0x40282d
    ctx->pc = 0x25d3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3c0: 0x223280b
    ctx->pc = 0x25d3c0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 17));
label_25d3c4:
    // 0x25d3c4: 0xa0882d
    ctx->pc = 0x25d3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d3c8: 0x32e20002
    ctx->pc = 0x25d3c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 2));
label_25d3cc:
    // 0x25d3cc: 0x24030003
    ctx->pc = 0x25d3ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x25d3d0: 0x62a80b
    ctx->pc = 0x25d3d0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 3));
    // 0x25d3d4: 0x8e420000
    ctx->pc = 0x25d3d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25d3d8: 0x1040000a
    ctx->pc = 0x25D3D8u;
    {
        const bool branch_taken_0x25d3d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D3DCu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25d3d8) {
            ctx->pc = 0x25D404u;
            goto label_25d404;
        }
    }
    ctx->pc = 0x25D3E0u;
    // 0x25d3e0: 0xc088772
    ctx->pc = 0x25D3E0u;
    SET_GPR_U32(ctx, 31, 0x25D3E8u);
    ctx->pc = 0x25D3E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSoundTracks_0x221dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D3E8u; }
    }
    if (ctx->pc != 0x25D3E8u) { return; }
    ctx->pc = 0x25D3E8u;
    // 0x25d3e8: 0x8e430000
    ctx->pc = 0x25d3e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25d3ec: 0x431024
    ctx->pc = 0x25d3ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d3f0: 0x50400001
    ctx->pc = 0x25D3F0u;
    {
        const bool branch_taken_0x25d3f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25d3f0) {
            ctx->pc = 0x25D3F4u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x25D3F8u;
            goto label_25d3f8;
        }
    }
    ctx->pc = 0x25D3F8u;
label_25d3f8:
    // 0x25d3f8: 0x8e420000
    ctx->pc = 0x25d3f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25d3fc: 0x14400012
    ctx->pc = 0x25D3FCu;
    {
        const bool branch_taken_0x25d3fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25d3fc) {
            ctx->pc = 0x25D448u;
            goto label_25d448;
        }
    }
    ctx->pc = 0x25D404u;
label_25d404:
    // 0x25d404: 0x8e620000
    ctx->pc = 0x25d404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25d408: 0x14400008
    ctx->pc = 0x25D408u;
    {
        const bool branch_taken_0x25d408 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D40Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25d408) {
            ctx->pc = 0x25D42Cu;
            goto label_25d42c;
        }
    }
    ctx->pc = 0x25D410u;
    // 0x25d410: 0x2c0282d
    ctx->pc = 0x25d410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d414: 0x220302d
    ctx->pc = 0x25d414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d418: 0xc088aa2
    ctx->pc = 0x25D418u;
    SET_GPR_U32(ctx, 31, 0x25D420u);
    ctx->pc = 0x25D41Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLOOP_0x222a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D420u; }
    }
    if (ctx->pc != 0x25D420u) { return; }
    ctx->pc = 0x25D420u;
    // 0x25d420: 0xae620000
    ctx->pc = 0x25d420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x25d424: 0x10400005
    ctx->pc = 0x25D424u;
    {
        const bool branch_taken_0x25d424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D428u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x25d424) {
            ctx->pc = 0x25D43Cu;
            goto label_25d43c;
        }
    }
    ctx->pc = 0x25D42Cu;
label_25d42c:
    // 0x25d42c: 0xc0887f8
    ctx->pc = 0x25D42Cu;
    SET_GPR_U32(ctx, 31, 0x25D434u);
    ctx->pc = 0x25D430u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x221FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindTID_0x221fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D434u; }
    }
    if (ctx->pc != 0x25D434u) { return; }
    ctx->pc = 0x25D434u;
    // 0x25d434: 0xae420000
    ctx->pc = 0x25d434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x25d438: 0x24140002
    ctx->pc = 0x25d438u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
label_25d43c:
    // 0x25d43c: 0x8e420000
    ctx->pc = 0x25d43cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25d440: 0x1040000b
    ctx->pc = 0x25D440u;
    {
        const bool branch_taken_0x25d440 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D444u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 1));
        if (branch_taken_0x25d440) {
            ctx->pc = 0x25D470u;
            goto label_25d470;
        }
    }
    ctx->pc = 0x25D448u;
label_25d448:
    // 0x25d448: 0xc088648
    ctx->pc = 0x25D448u;
    SET_GPR_U32(ctx, 31, 0x25D450u);
    ctx->pc = 0x25D44Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D450u; }
    }
    if (ctx->pc != 0x25D450u) { return; }
    ctx->pc = 0x25D450u;
    // 0x25d450: 0x40802d
    ctx->pc = 0x25d450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d454: 0x8e440000
    ctx->pc = 0x25d454u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25d458: 0xc08883c
    ctx->pc = 0x25D458u;
    SET_GPR_U32(ctx, 31, 0x25D460u);
    ctx->pc = 0x25D45Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2220F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackVol_0x2220f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D460u; }
    }
    if (ctx->pc != 0x25D460u) { return; }
    ctx->pc = 0x25D460u;
    // 0x25d460: 0x8e440000
    ctx->pc = 0x25d460u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25d464: 0xc088850
    ctx->pc = 0x25D464u;
    SET_GPR_U32(ctx, 31, 0x25D46Cu);
    ctx->pc = 0x25D468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222140u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackPan_0x222140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D46Cu; }
    }
    if (ctx->pc != 0x25D46Cu) { return; }
    ctx->pc = 0x25D46Cu;
    // 0x25d46c: 0x32e20001
    ctx->pc = 0x25d46cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 1));
label_25d470:
    // 0x25d470: 0x1040000f
    ctx->pc = 0x25D470u;
    {
        const bool branch_taken_0x25d470 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D474u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25d470) {
            ctx->pc = 0x25D4B0u;
            goto label_25d4b0;
        }
    }
    ctx->pc = 0x25D478u;
    // 0x25d478: 0x3c013f00
    ctx->pc = 0x25d478u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x25d47c: 0x44816000
    ctx->pc = 0x25d47cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25d480: 0x460ca002
    ctx->pc = 0x25d480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x25d484: 0x3c013f80
    ctx->pc = 0x25d484u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25d488: 0x44816800
    ctx->pc = 0x25d488u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25d48c: 0xc097432
    ctx->pc = 0x25D48Cu;
    SET_GPR_U32(ctx, 31, 0x25D494u);
    ctx->pc = 0x25D490u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    ctx->pc = 0x25D0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LowerBGMusic_0x25d0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D494u; }
    }
    if (ctx->pc != 0x25D494u) { return; }
    ctx->pc = 0x25D494u;
    // 0x25d494: 0x10000006
    ctx->pc = 0x25D494u;
    {
        const bool branch_taken_0x25d494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25D498u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25d494) {
            ctx->pc = 0x25D4B0u;
            goto label_25d4b0;
        }
    }
    ctx->pc = 0x25D49Cu;
label_25d49c:
    // 0x25d49c: 0xae600000
    ctx->pc = 0x25d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_25d4a0:
    // 0x25d4a0: 0xae400000
    ctx->pc = 0x25d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x25d4a4: 0xc08870e
    ctx->pc = 0x25D4A4u;
    SET_GPR_U32(ctx, 31, 0x25D4ACu);
    ctx->pc = 0x25D4A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundKill_0x221c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D4ACu; }
    }
    if (ctx->pc != 0x25D4ACu) { return; }
    ctx->pc = 0x25D4ACu;
label_25d4ac:
    // 0x25d4ac: 0x102d
    ctx->pc = 0x25d4acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d4b0:
    // 0x25d4b0: 0xdfbf0080
    ctx->pc = 0x25d4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25d4b4: 0xdfb70070
    ctx->pc = 0x25d4b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25d4b8: 0xdfb60060
    ctx->pc = 0x25d4b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25d4bc: 0xdfb50050
    ctx->pc = 0x25d4bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d4c0: 0xdfb40040
    ctx->pc = 0x25d4c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d4c4: 0xdfb30030
    ctx->pc = 0x25d4c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d4c8: 0xdfb20020
    ctx->pc = 0x25d4c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d4cc: 0xdfb10010
    ctx->pc = 0x25d4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d4d0: 0xdfb00000
    ctx->pc = 0x25d4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d4d4: 0xc7b40090
    ctx->pc = 0x25d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25d4d8: 0x3e00008
    ctx->pc = 0x25D4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D4DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25D348u: goto label_25d348;
            case 0x25D34Cu: goto label_25d34c;
            case 0x25D3C4u: goto label_25d3c4;
            case 0x25D3CCu: goto label_25d3cc;
            case 0x25D3F8u: goto label_25d3f8;
            case 0x25D404u: goto label_25d404;
            case 0x25D42Cu: goto label_25d42c;
            case 0x25D43Cu: goto label_25d43c;
            case 0x25D448u: goto label_25d448;
            case 0x25D470u: goto label_25d470;
            case 0x25D49Cu: goto label_25d49c;
            case 0x25D4A0u: goto label_25d4a0;
            case 0x25D4ACu: goto label_25d4ac;
            case 0x25D4B0u: goto label_25d4b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25D4E0u;
}
