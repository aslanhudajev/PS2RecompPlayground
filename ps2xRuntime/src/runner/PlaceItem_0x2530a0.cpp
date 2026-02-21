#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlaceItem
// Address: 0x2530a0 - 0x253204
void PlaceItem_0x2530a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2530a0u;

    // 0x2530a0: 0x27bdffd0
    ctx->pc = 0x2530a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2530a4: 0xffbf0020
    ctx->pc = 0x2530a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2530a8: 0xffb00010
    ctx->pc = 0x2530a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2530ac: 0x80802d
    ctx->pc = 0x2530acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2530b0: 0x12000051
    ctx->pc = 0x2530B0u;
    {
        const bool branch_taken_0x2530b0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2530B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2530b0) {
            ctx->pc = 0x2531F8u;
            goto label_2531f8;
        }
    }
    ctx->pc = 0x2530B8u;
    // 0x2530b8: 0x8e020070
    ctx->pc = 0x2530b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2530bc: 0x5040004f
    ctx->pc = 0x2530BCu;
    {
        const bool branch_taken_0x2530bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2530bc) {
            ctx->pc = 0x2530C0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x2531FCu;
            goto label_2531fc;
        }
    }
    ctx->pc = 0x2530C4u;
    // 0x2530c4: 0x8e020000
    ctx->pc = 0x2530c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2530c8: 0x9442000a
    ctx->pc = 0x2530c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2530cc: 0x30420001
    ctx->pc = 0x2530ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2530d0: 0x5440004a
    ctx->pc = 0x2530D0u;
    {
        const bool branch_taken_0x2530d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2530d0) {
            ctx->pc = 0x2530D4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x2531FCu;
            goto label_2531fc;
        }
    }
    ctx->pc = 0x2530D8u;
    // 0x2530d8: 0xc6000040
    ctx->pc = 0x2530d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2530dc: 0xe7a00000
    ctx->pc = 0x2530dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2530e0: 0xc60c0044
    ctx->pc = 0x2530e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2530e4: 0xe7ac0004
    ctx->pc = 0x2530e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2530e8: 0xc6000048
    ctx->pc = 0x2530e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2530ec: 0xe7a00008
    ctx->pc = 0x2530ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2530f0: 0x3a0202d
    ctx->pc = 0x2530f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2530f4: 0x3c013f80
    ctx->pc = 0x2530f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2530f8: 0x44816800
    ctx->pc = 0x2530f8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2530fc: 0xc087b5c
    ctx->pc = 0x2530FCu;
    SET_GPR_U32(ctx, 31, 0x253104u);
    ctx->pc = 0x253100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21ED70u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorPos_0x21ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253104u; }
    }
    if (ctx->pc != 0x253104u) { return; }
    ctx->pc = 0x253104u;
    // 0x253104: 0x3c013dcc
    ctx->pc = 0x253104u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x253108: 0x3421cccd
    ctx->pc = 0x253108u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x25310c: 0x44810800
    ctx->pc = 0x25310cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x253110: 0x46010000
    ctx->pc = 0x253110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253114: 0xe6000044
    ctx->pc = 0x253114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x253118: 0x3c020032
    ctx->pc = 0x253118u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25311c: 0x8c42fbf4
    ctx->pc = 0x25311cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966260)));
    // 0x253120: 0x14400011
    ctx->pc = 0x253120u;
    {
        const bool branch_taken_0x253120 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x253124u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x253120) {
            ctx->pc = 0x253168u;
            goto label_253168;
        }
    }
    ctx->pc = 0x253128u;
    // 0x253128: 0x3c020031
    ctx->pc = 0x253128u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x25312c: 0xdc420e28
    ctx->pc = 0x25312cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x253130: 0x30420010
    ctx->pc = 0x253130u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x253134: 0x10400008
    ctx->pc = 0x253134u;
    {
        const bool branch_taken_0x253134 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x253138u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x253134) {
            ctx->pc = 0x253158u;
            goto label_253158;
        }
    }
    ctx->pc = 0x25313Cu;
    // 0x25313c: 0x8e050000
    ctx->pc = 0x25313cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253140: 0x24848980
    ctx->pc = 0x253140u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936960));
    // 0x253144: 0x24a50028
    ctx->pc = 0x253144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 40));
    // 0x253148: 0xc7ac0000
    ctx->pc = 0x253148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25314c: 0xc7ad0004
    ctx->pc = 0x25314cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x253150: 0xc0b492e
    ctx->pc = 0x253150u;
    SET_GPR_U32(ctx, 31, 0x253158u);
    ctx->pc = 0x253154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253158u; }
    }
    if (ctx->pc != 0x253158u) { return; }
    ctx->pc = 0x253158u;
label_253158:
    // 0x253158: 0x3c020032
    ctx->pc = 0x253158u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25315c: 0x8c42fbf4
    ctx->pc = 0x25315cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966260)));
    // 0x253160: 0x1040000b
    ctx->pc = 0x253160u;
    {
        const bool branch_taken_0x253160 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x253164u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x253160) {
            ctx->pc = 0x253190u;
            goto label_253190;
        }
    }
    ctx->pc = 0x253168u;
label_253168:
    // 0x253168: 0x8c42fbf4
    ctx->pc = 0x253168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966260)));
    // 0x25316c: 0x8c450028
    ctx->pc = 0x25316cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x253170: 0x10a00007
    ctx->pc = 0x253170u;
    {
        const bool branch_taken_0x253170 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x253170) {
            ctx->pc = 0x253190u;
            goto label_253190;
        }
    }
    ctx->pc = 0x253178u;
    // 0x253178: 0x8c420010
    ctx->pc = 0x253178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x25317c: 0x30421000
    ctx->pc = 0x25317cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x253180: 0x10400003
    ctx->pc = 0x253180u;
    {
        const bool branch_taken_0x253180 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x253180) {
            ctx->pc = 0x253190u;
            goto label_253190;
        }
    }
    ctx->pc = 0x253188u;
    // 0x253188: 0xc0b3f94
    ctx->pc = 0x253188u;
    SET_GPR_U32(ctx, 31, 0x253190u);
    ctx->pc = 0x25318Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253190u; }
    }
    if (ctx->pc != 0x253190u) { return; }
    ctx->pc = 0x253190u;
label_253190:
    // 0x253190: 0xc080ce2
    ctx->pc = 0x253190u;
    SET_GPR_U32(ctx, 31, 0x253198u);
    ctx->pc = 0x253194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253198u; }
    }
    if (ctx->pc != 0x253198u) { return; }
    ctx->pc = 0x253198u;
    // 0x253198: 0x8e020000
    ctx->pc = 0x253198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25319c: 0x8c430000
    ctx->pc = 0x25319cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2531a0: 0x24020005
    ctx->pc = 0x2531a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2531a4: 0x14620014
    ctx->pc = 0x2531A4u;
    {
        const bool branch_taken_0x2531a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2531A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2531a4) {
            ctx->pc = 0x2531F8u;
            goto label_2531f8;
        }
    }
    ctx->pc = 0x2531ACu;
    // 0x2531ac: 0x960200f4
    ctx->pc = 0x2531acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2531b0: 0x30420400
    ctx->pc = 0x2531b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x2531b4: 0x50400011
    ctx->pc = 0x2531B4u;
    {
        const bool branch_taken_0x2531b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2531b4) {
            ctx->pc = 0x2531B8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x2531FCu;
            goto label_2531fc;
        }
    }
    ctx->pc = 0x2531BCu;
    // 0x2531bc: 0x8e0300f0
    ctx->pc = 0x2531bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2531c0: 0x1060000d
    ctx->pc = 0x2531C0u;
    {
        const bool branch_taken_0x2531c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2531C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2531c0) {
            ctx->pc = 0x2531F8u;
            goto label_2531f8;
        }
    }
    ctx->pc = 0x2531C8u;
    // 0x2531c8: 0x8c42fbf4
    ctx->pc = 0x2531c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966260)));
    // 0x2531cc: 0x5040000b
    ctx->pc = 0x2531CCu;
    {
        const bool branch_taken_0x2531cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2531cc) {
            ctx->pc = 0x2531D0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x2531FCu;
            goto label_2531fc;
        }
    }
    ctx->pc = 0x2531D4u;
    // 0x2531d4: 0x50620005
    ctx->pc = 0x2531D4u;
    {
        const bool branch_taken_0x2531d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2531d4) {
            ctx->pc = 0x2531D8u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->pc = 0x2531ECu;
            goto label_2531ec;
        }
    }
    ctx->pc = 0x2531DCu;
    // 0x2531dc: 0x8c420018
    ctx->pc = 0x2531dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2531e0: 0x54620006
    ctx->pc = 0x2531E0u;
    {
        const bool branch_taken_0x2531e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2531e0) {
            ctx->pc = 0x2531E4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x2531FCu;
            goto label_2531fc;
        }
    }
    ctx->pc = 0x2531E8u;
    // 0x2531e8: 0x960200f4
    ctx->pc = 0x2531e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
label_2531ec:
    // 0x2531ec: 0x34420100
    ctx->pc = 0x2531ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
    // 0x2531f0: 0xa60200f4
    ctx->pc = 0x2531f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x2531f4: 0xdfbf0020
    ctx->pc = 0x2531f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2531f8:
    // 0x2531f8: 0xdfb00010
    ctx->pc = 0x2531f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2531fc:
    // 0x2531fc: 0x3e00008
    ctx->pc = 0x2531FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253200u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253158u: goto label_253158;
            case 0x253168u: goto label_253168;
            case 0x253190u: goto label_253190;
            case 0x2531ECu: goto label_2531ec;
            case 0x2531F8u: goto label_2531f8;
            case 0x2531FCu: goto label_2531fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x253204u;
}
