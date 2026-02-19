#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScreenSaverUpdateWeap
// Address: 0x22a5d8 - 0x22abec
void ScreenSaverUpdateWeap_0x22a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22a5d8u;

label_22a5d8:
    // 0x22a5d8: 0x27bdff60
    ctx->pc = 0x22a5d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_22a5dc:
    // 0x22a5dc: 0xffbf0080
    ctx->pc = 0x22a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_22a5e0:
    // 0x22a5e0: 0xffb20070
    ctx->pc = 0x22a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_22a5e4:
    // 0x22a5e4: 0xffb10060
    ctx->pc = 0x22a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_22a5e8:
    // 0x22a5e8: 0xffb00050
    ctx->pc = 0x22a5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_22a5ec:
    // 0x22a5ec: 0xe7b50098
    ctx->pc = 0x22a5ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_22a5f0:
    // 0x22a5f0: 0xe7b40090
    ctx->pc = 0x22a5f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_22a5f4:
    // 0x22a5f4: 0x80902d
    ctx->pc = 0x22a5f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a5f8:
    // 0x22a5f8: 0x3c030031
    ctx->pc = 0x22a5f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_22a5fc:
    // 0x22a5fc: 0x8c62ffc0
    ctx->pc = 0x22a5fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967232)));
label_22a600:
    // 0x22a600: 0x4400005
label_22a604:
    if (ctx->pc == 0x22A604u) {
        ctx->pc = 0x22A604u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->pc = 0x22A608u;
        goto label_22a608;
    }
    ctx->pc = 0x22A600u;
    {
        const bool branch_taken_0x22a600 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22A604u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967232));
        if (branch_taken_0x22a600) {
            ctx->pc = 0x22A618u;
            goto label_22a618;
        }
    }
    ctx->pc = 0x22A608u;
label_22a608:
    // 0x22a608: 0x44826000
    ctx->pc = 0x22a608u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_22a60c:
    // 0x22a60c: 0x46806320
    ctx->pc = 0x22a60cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_22a610:
    // 0x22a610: 0x10000008
label_22a614:
    if (ctx->pc == 0x22A614u) {
        ctx->pc = 0x22A618u;
        goto label_22a618;
    }
    ctx->pc = 0x22A610u;
    {
        const bool branch_taken_0x22a610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x22a610) {
            ctx->pc = 0x22A634u;
            goto label_22a634;
        }
    }
    ctx->pc = 0x22A618u;
label_22a618:
    // 0x22a618: 0x8c820000
    ctx->pc = 0x22a618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22a61c:
    // 0x22a61c: 0x30430001
    ctx->pc = 0x22a61cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
label_22a620:
    // 0x22a620: 0x21042
    ctx->pc = 0x22a620u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_22a624:
    // 0x22a624: 0x621825
    ctx->pc = 0x22a624u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22a628:
    // 0x22a628: 0x44836000
    ctx->pc = 0x22a628u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
label_22a62c:
    // 0x22a62c: 0x46806320
    ctx->pc = 0x22a62cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
label_22a630:
    // 0x22a630: 0x460c6300
    ctx->pc = 0x22a630u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_22a634:
    // 0x22a634: 0xc0be862
label_22a638:
    if (ctx->pc == 0x22A638u) {
        ctx->pc = 0x22A63Cu;
        goto label_22a63c;
    }
    ctx->pc = 0x22A634u;
    SET_GPR_U32(ctx, 31, 0x22A63Cu);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A63Cu; }
    }
    if (ctx->pc != 0x22A63Cu) { return; }
    ctx->pc = 0x22A63Cu;
label_22a63c:
    // 0x22a63c: 0x3405807c
    ctx->pc = 0x22a63cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32892));
label_22a640:
    // 0x22a640: 0x52bfc
    ctx->pc = 0x22a640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_22a644:
    // 0x22a644: 0xc0be41a
label_22a648:
    if (ctx->pc == 0x22A648u) {
        ctx->pc = 0x22A648u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A64Cu;
        goto label_22a64c;
    }
    ctx->pc = 0x22A644u;
    SET_GPR_U32(ctx, 31, 0x22A64Cu);
    ctx->pc = 0x22A648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9068u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2f9068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A64Cu; }
    }
    if (ctx->pc != 0x22A64Cu) { return; }
    ctx->pc = 0x22A64Cu;
label_22a64c:
    // 0x22a64c: 0xc0be564
label_22a650:
    if (ctx->pc == 0x22A650u) {
        ctx->pc = 0x22A650u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A654u;
        goto label_22a654;
    }
    ctx->pc = 0x22A64Cu;
    SET_GPR_U32(ctx, 31, 0x22A654u);
    ctx->pc = 0x22A650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A654u; }
    }
    if (ctx->pc != 0x22A654u) { return; }
    ctx->pc = 0x22A654u;
label_22a654:
    // 0x22a654: 0x46000546
    ctx->pc = 0x22a654u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_22a658:
    // 0x22a658: 0x3c020032
    ctx->pc = 0x22a658u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22a65c:
    // 0x22a65c: 0xc4401058
    ctx->pc = 0x22a65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a660:
    // 0x22a660: 0x3c03003c
    ctx->pc = 0x22a660u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_22a664:
    // 0x22a664: 0x246318c0
    ctx->pc = 0x22a664u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6336));
label_22a668:
    // 0x22a668: 0x24020090
    ctx->pc = 0x22a668u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
label_22a66c:
    // 0x22a66c: 0x2421018
    ctx->pc = 0x22a66cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22a670:
    // 0x22a670: 0x431021
    ctx->pc = 0x22a670u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a674:
    // 0x22a674: 0x3c040031
    ctx->pc = 0x22a674u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
label_22a678:
    // 0x22a678: 0x8c430028
    ctx->pc = 0x22a678u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_22a67c:
    // 0x22a67c: 0x8c84ffc0
    ctx->pc = 0x22a67cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294967232)));
label_22a680:
    // 0x22a680: 0x641821
    ctx->pc = 0x22a680u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a684:
    // 0x22a684: 0xac430028
    ctx->pc = 0x22a684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_22a688:
    // 0x22a688: 0x8c42002c
    ctx->pc = 0x22a688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_22a68c:
    // 0x22a68c: 0x62182a
    ctx->pc = 0x22a68cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_22a690:
    // 0x22a690: 0x1460014e
label_22a694:
    if (ctx->pc == 0x22A694u) {
        ctx->pc = 0x22A694u;
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x22A698u;
        goto label_22a698;
    }
    ctx->pc = 0x22A690u;
    {
        const bool branch_taken_0x22a690 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x22A694u;
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        if (branch_taken_0x22a690) {
            ctx->pc = 0x22ABCCu;
            goto label_22abcc;
        }
    }
    ctx->pc = 0x22A698u;
label_22a698:
    // 0x22a698: 0x18400004
label_22a69c:
    if (ctx->pc == 0x22A69Cu) {
        ctx->pc = 0x22A69Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x22A6A0u;
        goto label_22a6a0;
    }
    ctx->pc = 0x22A698u;
    {
        const bool branch_taken_0x22a698 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22A69Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x22a698) {
            ctx->pc = 0x22A6ACu;
            goto label_22a6ac;
        }
    }
    ctx->pc = 0x22A6A0u;
label_22a6a0:
    // 0x22a6a0: 0xc08a910
label_22a6a4:
    if (ctx->pc == 0x22A6A4u) {
        ctx->pc = 0x22A6A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A6A8u;
        goto label_22a6a8;
    }
    ctx->pc = 0x22A6A0u;
    SET_GPR_U32(ctx, 31, 0x22A6A8u);
    ctx->pc = 0x22A6A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22A440u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaverStartWeap_0x22a440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A6A8u; }
    }
    if (ctx->pc != 0x22A6A8u) { return; }
    ctx->pc = 0x22A6A8u;
label_22a6a8:
    // 0x22a6a8: 0x3c03003c
    ctx->pc = 0x22a6a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_22a6ac:
    // 0x22a6ac: 0x246318c0
    ctx->pc = 0x22a6acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6336));
label_22a6b0:
    // 0x22a6b0: 0x24020090
    ctx->pc = 0x22a6b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
label_22a6b4:
    // 0x22a6b4: 0x2421018
    ctx->pc = 0x22a6b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22a6b8:
    // 0x22a6b8: 0x431021
    ctx->pc = 0x22a6b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a6bc:
    // 0x22a6bc: 0xc4400010
    ctx->pc = 0x22a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a6c0:
    // 0x22a6c0: 0x4600a002
    ctx->pc = 0x22a6c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_22a6c4:
    // 0x22a6c4: 0xc4410000
    ctx->pc = 0x22a6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a6c8:
    // 0x22a6c8: 0x46010000
    ctx->pc = 0x22a6c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22a6cc:
    // 0x22a6cc: 0xe4400000
    ctx->pc = 0x22a6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_22a6d0:
    // 0x22a6d0: 0xc4400014
    ctx->pc = 0x22a6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a6d4:
    // 0x22a6d4: 0x4600a002
    ctx->pc = 0x22a6d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_22a6d8:
    // 0x22a6d8: 0xc4410004
    ctx->pc = 0x22a6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a6dc:
    // 0x22a6dc: 0x46010000
    ctx->pc = 0x22a6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22a6e0:
    // 0x22a6e0: 0xe4400004
    ctx->pc = 0x22a6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_22a6e4:
    // 0x22a6e4: 0xc4400018
    ctx->pc = 0x22a6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a6e8:
    // 0x22a6e8: 0x4600a002
    ctx->pc = 0x22a6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_22a6ec:
    // 0x22a6ec: 0xc4410008
    ctx->pc = 0x22a6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a6f0:
    // 0x22a6f0: 0x46010000
    ctx->pc = 0x22a6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22a6f4:
    // 0x22a6f4: 0xe4400008
    ctx->pc = 0x22a6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_22a6f8:
    // 0x22a6f8: 0x3c030032
    ctx->pc = 0x22a6f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_22a6fc:
    // 0x22a6fc: 0xc46c1054
    ctx->pc = 0x22a6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22a700:
    // 0x22a700: 0x46006307
    ctx->pc = 0x22a700u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_22a704:
    // 0x22a704: 0x46156302
    ctx->pc = 0x22a704u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
label_22a708:
    // 0x22a708: 0xc4400020
    ctx->pc = 0x22a708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a70c:
    // 0x22a70c: 0x46006300
    ctx->pc = 0x22a70cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_22a710:
    // 0x22a710: 0xe44c0020
    ctx->pc = 0x22a710u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_22a714:
    // 0x22a714: 0xc0be862
label_22a718:
    if (ctx->pc == 0x22A718u) {
        ctx->pc = 0x22A718u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A71Cu;
        goto label_22a71c;
    }
    ctx->pc = 0x22A714u;
    SET_GPR_U32(ctx, 31, 0x22A71Cu);
    ctx->pc = 0x22A718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A71Cu; }
    }
    if (ctx->pc != 0x22A71Cu) { return; }
    ctx->pc = 0x22A71Cu;
label_22a71c:
    // 0x22a71c: 0x3c01003a
    ctx->pc = 0x22a71cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
label_22a720:
    // 0x22a720: 0xdc257038
    ctx->pc = 0x22a720u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 28728)));
label_22a724:
    // 0x22a724: 0xc0be4ba
label_22a728:
    if (ctx->pc == 0x22A728u) {
        ctx->pc = 0x22A728u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A72Cu;
        goto label_22a72c;
    }
    ctx->pc = 0x22A724u;
    SET_GPR_U32(ctx, 31, 0x22A72Cu);
    ctx->pc = 0x22A728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A72Cu; }
    }
    if (ctx->pc != 0x22A72Cu) { return; }
    ctx->pc = 0x22A72Cu;
label_22a72c:
    // 0x22a72c: 0x18400009
label_22a730:
    if (ctx->pc == 0x22A730u) {
        ctx->pc = 0x22A730u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x22A734u;
        goto label_22a734;
    }
    ctx->pc = 0x22A72Cu;
    {
        const bool branch_taken_0x22a72c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22A730u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x22a72c) {
            ctx->pc = 0x22A754u;
            goto label_22a754;
        }
    }
    ctx->pc = 0x22A734u;
label_22a734:
    // 0x22a734: 0xc0be862
label_22a738:
    if (ctx->pc == 0x22A738u) {
        ctx->pc = 0x22A738u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x22A73Cu;
        goto label_22a73c;
    }
    ctx->pc = 0x22A734u;
    SET_GPR_U32(ctx, 31, 0x22A73Cu);
    ctx->pc = 0x22A738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A73Cu; }
    }
    if (ctx->pc != 0x22A73Cu) { return; }
    ctx->pc = 0x22A73Cu;
label_22a73c:
    // 0x22a73c: 0x3c01003a
    ctx->pc = 0x22a73cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
label_22a740:
    // 0x22a740: 0xdc257040
    ctx->pc = 0x22a740u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 28736)));
label_22a744:
    // 0x22a744: 0xc0be356
label_22a748:
    if (ctx->pc == 0x22A748u) {
        ctx->pc = 0x22A748u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A74Cu;
        goto label_22a74c;
    }
    ctx->pc = 0x22A744u;
    SET_GPR_U32(ctx, 31, 0x22A74Cu);
    ctx->pc = 0x22A748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A74Cu; }
    }
    if (ctx->pc != 0x22A74Cu) { return; }
    ctx->pc = 0x22A74Cu;
label_22a74c:
    // 0x22a74c: 0x10000013
label_22a750:
    if (ctx->pc == 0x22A750u) {
        ctx->pc = 0x22A754u;
        goto label_22a754;
    }
    ctx->pc = 0x22A74Cu;
    {
        const bool branch_taken_0x22a74c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x22a74c) {
            ctx->pc = 0x22A79Cu;
            goto label_22a79c;
        }
    }
    ctx->pc = 0x22A754u;
label_22a754:
    // 0x22a754: 0x246318c0
    ctx->pc = 0x22a754u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6336));
label_22a758:
    // 0x22a758: 0x24020090
    ctx->pc = 0x22a758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
label_22a75c:
    // 0x22a75c: 0x2421018
    ctx->pc = 0x22a75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22a760:
    // 0x22a760: 0x438021
    ctx->pc = 0x22a760u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a764:
    // 0x22a764: 0xc0be862
label_22a768:
    if (ctx->pc == 0x22A768u) {
        ctx->pc = 0x22A768u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x22A76Cu;
        goto label_22a76c;
    }
    ctx->pc = 0x22A764u;
    SET_GPR_U32(ctx, 31, 0x22A76Cu);
    ctx->pc = 0x22A768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A76Cu; }
    }
    if (ctx->pc != 0x22A76Cu) { return; }
    ctx->pc = 0x22A76Cu;
label_22a76c:
    // 0x22a76c: 0x3c01003a
    ctx->pc = 0x22a76cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
label_22a770:
    // 0x22a770: 0xdc257048
    ctx->pc = 0x22a770u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 28744)));
label_22a774:
    // 0x22a774: 0xc0be4ba
label_22a778:
    if (ctx->pc == 0x22A778u) {
        ctx->pc = 0x22A778u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A77Cu;
        goto label_22a77c;
    }
    ctx->pc = 0x22A774u;
    SET_GPR_U32(ctx, 31, 0x22A77Cu);
    ctx->pc = 0x22A778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A77Cu; }
    }
    if (ctx->pc != 0x22A77Cu) { return; }
    ctx->pc = 0x22A77Cu;
label_22a77c:
    // 0x22a77c: 0x1c40000b
label_22a780:
    if (ctx->pc == 0x22A780u) {
        ctx->pc = 0x22A780u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x22A784u;
        goto label_22a784;
    }
    ctx->pc = 0x22A77Cu;
    {
        const bool branch_taken_0x22a77c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x22A780u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x22a77c) {
            ctx->pc = 0x22A7ACu;
            goto label_22a7ac;
        }
    }
    ctx->pc = 0x22A784u;
label_22a784:
    // 0x22a784: 0xc0be862
label_22a788:
    if (ctx->pc == 0x22A788u) {
        ctx->pc = 0x22A788u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x22A78Cu;
        goto label_22a78c;
    }
    ctx->pc = 0x22A784u;
    SET_GPR_U32(ctx, 31, 0x22A78Cu);
    ctx->pc = 0x22A788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A78Cu; }
    }
    if (ctx->pc != 0x22A78Cu) { return; }
    ctx->pc = 0x22A78Cu;
label_22a78c:
    // 0x22a78c: 0x3c01003a
    ctx->pc = 0x22a78cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
label_22a790:
    // 0x22a790: 0xdc257050
    ctx->pc = 0x22a790u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 28752)));
label_22a794:
    // 0x22a794: 0xc0be340
label_22a798:
    if (ctx->pc == 0x22A798u) {
        ctx->pc = 0x22A798u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A79Cu;
        goto label_22a79c;
    }
    ctx->pc = 0x22A794u;
    SET_GPR_U32(ctx, 31, 0x22A79Cu);
    ctx->pc = 0x22A798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A79Cu; }
    }
    if (ctx->pc != 0x22A79Cu) { return; }
    ctx->pc = 0x22A79Cu;
label_22a79c:
    // 0x22a79c: 0xc0be564
label_22a7a0:
    if (ctx->pc == 0x22A7A0u) {
        ctx->pc = 0x22A7A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A7A4u;
        goto label_22a7a4;
    }
    ctx->pc = 0x22A79Cu;
    SET_GPR_U32(ctx, 31, 0x22A7A4u);
    ctx->pc = 0x22A7A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A7A4u; }
    }
    if (ctx->pc != 0x22A7A4u) { return; }
    ctx->pc = 0x22A7A4u;
label_22a7a4:
    // 0x22a7a4: 0x10000007
label_22a7a8:
    if (ctx->pc == 0x22A7A8u) {
        ctx->pc = 0x22A7A8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->pc = 0x22A7ACu;
        goto label_22a7ac;
    }
    ctx->pc = 0x22A7A4u;
    {
        const bool branch_taken_0x22a7a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22A7A8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        if (branch_taken_0x22a7a4) {
            ctx->pc = 0x22A7C4u;
            goto label_22a7c4;
        }
    }
    ctx->pc = 0x22A7ACu;
label_22a7ac:
    // 0x22a7ac: 0x246318c0
    ctx->pc = 0x22a7acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6336));
label_22a7b0:
    // 0x22a7b0: 0x24020090
    ctx->pc = 0x22a7b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
label_22a7b4:
    // 0x22a7b4: 0x2421018
    ctx->pc = 0x22a7b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22a7b8:
    // 0x22a7b8: 0x431021
    ctx->pc = 0x22a7b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a7bc:
    // 0x22a7bc: 0xc4400020
    ctx->pc = 0x22a7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a7c0:
    // 0x22a7c0: 0xe6200020
    ctx->pc = 0x22a7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_22a7c4:
    // 0x22a7c4: 0x24110090
    ctx->pc = 0x22a7c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 144));
label_22a7c8:
    // 0x22a7c8: 0x2518818
    ctx->pc = 0x22a7c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22a7cc:
    // 0x22a7cc: 0x3c10003c
    ctx->pc = 0x22a7ccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_22a7d0:
    // 0x22a7d0: 0x261018d0
    ctx->pc = 0x22a7d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 6352));
label_22a7d4:
    // 0x22a7d4: 0x3a0202d
    ctx->pc = 0x22a7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22a7d8:
    // 0x22a7d8: 0x2302821
    ctx->pc = 0x22a7d8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22a7dc:
    // 0x22a7dc: 0xc0b5978
label_22a7e0:
    if (ctx->pc == 0x22A7E0u) {
        ctx->pc = 0x22A7E0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A7E4u;
        goto label_22a7e4;
    }
    ctx->pc = 0x22A7DCu;
    SET_GPR_U32(ctx, 31, 0x22A7E4u);
    ctx->pc = 0x22A7E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D65E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateDirMatrix_0x2d65e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A7E4u; }
    }
    if (ctx->pc != 0x22A7E4u) { return; }
    ctx->pc = 0x22A7E4u;
label_22a7e4:
    // 0x22a7e4: 0x2610fff0
    ctx->pc = 0x22a7e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_22a7e8:
    // 0x22a7e8: 0x2308821
    ctx->pc = 0x22a7e8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_22a7ec:
    // 0x22a7ec: 0xc62c0020
    ctx->pc = 0x22a7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22a7f0:
    // 0x22a7f0: 0xc0b5660
label_22a7f4:
    if (ctx->pc == 0x22A7F4u) {
        ctx->pc = 0x22A7F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A7F8u;
        goto label_22a7f8;
    }
    ctx->pc = 0x22A7F0u;
    SET_GPR_U32(ctx, 31, 0x22A7F8u);
    ctx->pc = 0x22A7F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5980u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchMat3_0x2d5980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A7F8u; }
    }
    if (ctx->pc != 0x22A7F8u) { return; }
    ctx->pc = 0x22A7F8u;
label_22a7f8:
    // 0x22a7f8: 0x3c10003a
    ctx->pc = 0x22a7f8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_22a7fc:
    // 0x22a7fc: 0x8e051bd0
    ctx->pc = 0x22a7fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7120)));
label_22a800:
    // 0x22a800: 0x3a0202d
    ctx->pc = 0x22a800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22a804:
    // 0x22a804: 0x24a50070
    ctx->pc = 0x22a804u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 112));
label_22a808:
    // 0x22a808: 0xc0b5746
label_22a80c:
    if (ctx->pc == 0x22A80Cu) {
        ctx->pc = 0x22A80Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->pc = 0x22A810u;
        goto label_22a810;
    }
    ctx->pc = 0x22A808u;
    SET_GPR_U32(ctx, 31, 0x22A810u);
    ctx->pc = 0x22A80Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->pc = 0x2D5D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulMat3_0x2d5d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A810u; }
    }
    if (ctx->pc != 0x22A810u) { return; }
    ctx->pc = 0x22A810u;
label_22a810:
    // 0x22a810: 0x8e061bd0
    ctx->pc = 0x22a810u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 7120)));
label_22a814:
    // 0x22a814: 0x220202d
    ctx->pc = 0x22a814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a818:
    // 0x22a818: 0x27a50040
    ctx->pc = 0x22a818u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
label_22a81c:
    // 0x22a81c: 0xc0b5850
label_22a820:
    if (ctx->pc == 0x22A820u) {
        ctx->pc = 0x22A820u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 112));
        ctx->pc = 0x22A824u;
        goto label_22a824;
    }
    ctx->pc = 0x22A81Cu;
    SET_GPR_U32(ctx, 31, 0x22A824u);
    ctx->pc = 0x22A820u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 112));
    ctx->pc = 0x2D6140u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVec4Mat4_0x2d6140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A824u; }
    }
    if (ctx->pc != 0x22A824u) { return; }
    ctx->pc = 0x22A824u;
label_22a824:
    // 0x22a824: 0x3c020032
    ctx->pc = 0x22a824u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22a828:
    // 0x22a828: 0xc6210008
    ctx->pc = 0x22a828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a82c:
    // 0x22a82c: 0xc440104c
    ctx->pc = 0x22a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a830:
    // 0x22a830: 0x46010034
    ctx->pc = 0x22a830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a834:
    // 0x22a834: 0x0
    ctx->pc = 0x22a834u;
    // NOP
label_22a838:
    // 0x22a838: 0x45010012
label_22a83c:
    if (ctx->pc == 0x22A83Cu) {
        ctx->pc = 0x22A83Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x22A840u;
        goto label_22a840;
    }
    ctx->pc = 0x22A838u;
    {
        const bool branch_taken_0x22a838 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22A83Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x22a838) {
            ctx->pc = 0x22A884u;
            goto label_22a884;
        }
    }
    ctx->pc = 0x22A840u;
label_22a840:
    // 0x22a840: 0x3c03003c
    ctx->pc = 0x22a840u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_22a844:
    // 0x22a844: 0x246318c0
    ctx->pc = 0x22a844u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6336));
label_22a848:
    // 0x22a848: 0x24020090
    ctx->pc = 0x22a848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
label_22a84c:
    // 0x22a84c: 0x2421018
    ctx->pc = 0x22a84cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22a850:
    // 0x22a850: 0x431021
    ctx->pc = 0x22a850u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a854:
    // 0x22a854: 0x3c030032
    ctx->pc = 0x22a854u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_22a858:
    // 0x22a858: 0xc4410008
    ctx->pc = 0x22a858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a85c:
    // 0x22a85c: 0xc4601050
    ctx->pc = 0x22a85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a860:
    // 0x22a860: 0x46000834
    ctx->pc = 0x22a860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a864:
    // 0x22a864: 0x0
    ctx->pc = 0x22a864u;
    // NOP
label_22a868:
    // 0x22a868: 0x45010006
label_22a86c:
    if (ctx->pc == 0x22A86Cu) {
        ctx->pc = 0x22A86Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x22A870u;
        goto label_22a870;
    }
    ctx->pc = 0x22A868u;
    {
        const bool branch_taken_0x22a868 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22A86Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x22a868) {
            ctx->pc = 0x22A884u;
            goto label_22a884;
        }
    }
    ctx->pc = 0x22A870u;
label_22a870:
    // 0x22a870: 0x3c01bf80
    ctx->pc = 0x22a870u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_22a874:
    // 0x22a874: 0x44816000
    ctx->pc = 0x22a874u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22a878:
    // 0x22a878: 0xc0b1040
label_22a87c:
    if (ctx->pc == 0x22A87Cu) {
        ctx->pc = 0x22A87Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22A880u;
        goto label_22a880;
    }
    ctx->pc = 0x22A878u;
    SET_GPR_U32(ctx, 31, 0x22A880u);
    ctx->pc = 0x22A87Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2C4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldSphereClip_0x2c4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A880u; }
    }
    if (ctx->pc != 0x22A880u) { return; }
    ctx->pc = 0x22A880u;
label_22a880:
    // 0x22a880: 0x40202d
    ctx->pc = 0x22a880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a884:
    // 0x22a884: 0x3c03003c
    ctx->pc = 0x22a884u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_22a888:
    // 0x22a888: 0x246318c0
    ctx->pc = 0x22a888u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6336));
label_22a88c:
    // 0x22a88c: 0x24020090
    ctx->pc = 0x22a88cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
label_22a890:
    // 0x22a890: 0x2421018
    ctx->pc = 0x22a890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22a894:
    // 0x22a894: 0x431021
    ctx->pc = 0x22a894u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a898:
    // 0x22a898: 0x8c420024
    ctx->pc = 0x22a898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_22a89c:
    // 0x22a89c: 0x184000a4
label_22a8a0:
    if (ctx->pc == 0x22A8A0u) {
        ctx->pc = 0x22A8A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->pc = 0x22A8A4u;
        goto label_22a8a4;
    }
    ctx->pc = 0x22A89Cu;
    {
        const bool branch_taken_0x22a89c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22A8A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
        if (branch_taken_0x22a89c) {
            ctx->pc = 0x22AB30u;
            goto label_22ab30;
        }
    }
    ctx->pc = 0x22A8A4u;
label_22a8a4:
    // 0x22a8a4: 0x2c620006
    ctx->pc = 0x22a8a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 6));
label_22a8a8:
    // 0x22a8a8: 0x10400096
label_22a8ac:
    if (ctx->pc == 0x22A8ACu) {
        ctx->pc = 0x22A8ACu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A8B0u;
        goto label_22a8b0;
    }
    ctx->pc = 0x22A8A8u;
    {
        const bool branch_taken_0x22a8a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22A8ACu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22a8a8) {
            ctx->pc = 0x22AB04u;
            goto label_22ab04;
        }
    }
    ctx->pc = 0x22A8B0u;
label_22a8b0:
    // 0x22a8b0: 0x3c02003a
    ctx->pc = 0x22a8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_22a8b4:
    // 0x22a8b4: 0x24427060
    ctx->pc = 0x22a8b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28768));
label_22a8b8:
    // 0x22a8b8: 0x31880
    ctx->pc = 0x22a8b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_22a8bc:
    // 0x22a8bc: 0x621821
    ctx->pc = 0x22a8bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22a8c0:
    // 0x22a8c0: 0x8c620000
    ctx->pc = 0x22a8c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22a8c4:
    // 0x22a8c4: 0x400008
label_22a8c8:
    if (ctx->pc == 0x22A8C8u) {
        ctx->pc = 0x22A8CCu;
        goto label_22a8cc;
    }
    ctx->pc = 0x22A8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A5D8u: goto label_22a5d8;
            case 0x22A5DCu: goto label_22a5dc;
            case 0x22A5E0u: goto label_22a5e0;
            case 0x22A5E4u: goto label_22a5e4;
            case 0x22A5E8u: goto label_22a5e8;
            case 0x22A5ECu: goto label_22a5ec;
            case 0x22A5F0u: goto label_22a5f0;
            case 0x22A5F4u: goto label_22a5f4;
            case 0x22A5F8u: goto label_22a5f8;
            case 0x22A5FCu: goto label_22a5fc;
            case 0x22A600u: goto label_22a600;
            case 0x22A604u: goto label_22a604;
            case 0x22A608u: goto label_22a608;
            case 0x22A60Cu: goto label_22a60c;
            case 0x22A610u: goto label_22a610;
            case 0x22A614u: goto label_22a614;
            case 0x22A618u: goto label_22a618;
            case 0x22A61Cu: goto label_22a61c;
            case 0x22A620u: goto label_22a620;
            case 0x22A624u: goto label_22a624;
            case 0x22A628u: goto label_22a628;
            case 0x22A62Cu: goto label_22a62c;
            case 0x22A630u: goto label_22a630;
            case 0x22A634u: goto label_22a634;
            case 0x22A638u: goto label_22a638;
            case 0x22A63Cu: goto label_22a63c;
            case 0x22A640u: goto label_22a640;
            case 0x22A644u: goto label_22a644;
            case 0x22A648u: goto label_22a648;
            case 0x22A64Cu: goto label_22a64c;
            case 0x22A650u: goto label_22a650;
            case 0x22A654u: goto label_22a654;
            case 0x22A658u: goto label_22a658;
            case 0x22A65Cu: goto label_22a65c;
            case 0x22A660u: goto label_22a660;
            case 0x22A664u: goto label_22a664;
            case 0x22A668u: goto label_22a668;
            case 0x22A66Cu: goto label_22a66c;
            case 0x22A670u: goto label_22a670;
            case 0x22A674u: goto label_22a674;
            case 0x22A678u: goto label_22a678;
            case 0x22A67Cu: goto label_22a67c;
            case 0x22A680u: goto label_22a680;
            case 0x22A684u: goto label_22a684;
            case 0x22A688u: goto label_22a688;
            case 0x22A68Cu: goto label_22a68c;
            case 0x22A690u: goto label_22a690;
            case 0x22A694u: goto label_22a694;
            case 0x22A698u: goto label_22a698;
            case 0x22A69Cu: goto label_22a69c;
            case 0x22A6A0u: goto label_22a6a0;
            case 0x22A6A4u: goto label_22a6a4;
            case 0x22A6A8u: goto label_22a6a8;
            case 0x22A6ACu: goto label_22a6ac;
            case 0x22A6B0u: goto label_22a6b0;
            case 0x22A6B4u: goto label_22a6b4;
            case 0x22A6B8u: goto label_22a6b8;
            case 0x22A6BCu: goto label_22a6bc;
            case 0x22A6C0u: goto label_22a6c0;
            case 0x22A6C4u: goto label_22a6c4;
            case 0x22A6C8u: goto label_22a6c8;
            case 0x22A6CCu: goto label_22a6cc;
            case 0x22A6D0u: goto label_22a6d0;
            case 0x22A6D4u: goto label_22a6d4;
            case 0x22A6D8u: goto label_22a6d8;
            case 0x22A6DCu: goto label_22a6dc;
            case 0x22A6E0u: goto label_22a6e0;
            case 0x22A6E4u: goto label_22a6e4;
            case 0x22A6E8u: goto label_22a6e8;
            case 0x22A6ECu: goto label_22a6ec;
            case 0x22A6F0u: goto label_22a6f0;
            case 0x22A6F4u: goto label_22a6f4;
            case 0x22A6F8u: goto label_22a6f8;
            case 0x22A6FCu: goto label_22a6fc;
            case 0x22A700u: goto label_22a700;
            case 0x22A704u: goto label_22a704;
            case 0x22A708u: goto label_22a708;
            case 0x22A70Cu: goto label_22a70c;
            case 0x22A710u: goto label_22a710;
            case 0x22A714u: goto label_22a714;
            case 0x22A718u: goto label_22a718;
            case 0x22A71Cu: goto label_22a71c;
            case 0x22A720u: goto label_22a720;
            case 0x22A724u: goto label_22a724;
            case 0x22A728u: goto label_22a728;
            case 0x22A72Cu: goto label_22a72c;
            case 0x22A730u: goto label_22a730;
            case 0x22A734u: goto label_22a734;
            case 0x22A738u: goto label_22a738;
            case 0x22A73Cu: goto label_22a73c;
            case 0x22A740u: goto label_22a740;
            case 0x22A744u: goto label_22a744;
            case 0x22A748u: goto label_22a748;
            case 0x22A74Cu: goto label_22a74c;
            case 0x22A750u: goto label_22a750;
            case 0x22A754u: goto label_22a754;
            case 0x22A758u: goto label_22a758;
            case 0x22A75Cu: goto label_22a75c;
            case 0x22A760u: goto label_22a760;
            case 0x22A764u: goto label_22a764;
            case 0x22A768u: goto label_22a768;
            case 0x22A76Cu: goto label_22a76c;
            case 0x22A770u: goto label_22a770;
            case 0x22A774u: goto label_22a774;
            case 0x22A778u: goto label_22a778;
            case 0x22A77Cu: goto label_22a77c;
            case 0x22A780u: goto label_22a780;
            case 0x22A784u: goto label_22a784;
            case 0x22A788u: goto label_22a788;
            case 0x22A78Cu: goto label_22a78c;
            case 0x22A790u: goto label_22a790;
            case 0x22A794u: goto label_22a794;
            case 0x22A798u: goto label_22a798;
            case 0x22A79Cu: goto label_22a79c;
            case 0x22A7A0u: goto label_22a7a0;
            case 0x22A7A4u: goto label_22a7a4;
            case 0x22A7A8u: goto label_22a7a8;
            case 0x22A7ACu: goto label_22a7ac;
            case 0x22A7B0u: goto label_22a7b0;
            case 0x22A7B4u: goto label_22a7b4;
            case 0x22A7B8u: goto label_22a7b8;
            case 0x22A7BCu: goto label_22a7bc;
            case 0x22A7C0u: goto label_22a7c0;
            case 0x22A7C4u: goto label_22a7c4;
            case 0x22A7C8u: goto label_22a7c8;
            case 0x22A7CCu: goto label_22a7cc;
            case 0x22A7D0u: goto label_22a7d0;
            case 0x22A7D4u: goto label_22a7d4;
            case 0x22A7D8u: goto label_22a7d8;
            case 0x22A7DCu: goto label_22a7dc;
            case 0x22A7E0u: goto label_22a7e0;
            case 0x22A7E4u: goto label_22a7e4;
            case 0x22A7E8u: goto label_22a7e8;
            case 0x22A7ECu: goto label_22a7ec;
            case 0x22A7F0u: goto label_22a7f0;
            case 0x22A7F4u: goto label_22a7f4;
            case 0x22A7F8u: goto label_22a7f8;
            case 0x22A7FCu: goto label_22a7fc;
            case 0x22A800u: goto label_22a800;
            case 0x22A804u: goto label_22a804;
            case 0x22A808u: goto label_22a808;
            case 0x22A80Cu: goto label_22a80c;
            case 0x22A810u: goto label_22a810;
            case 0x22A814u: goto label_22a814;
            case 0x22A818u: goto label_22a818;
            case 0x22A81Cu: goto label_22a81c;
            case 0x22A820u: goto label_22a820;
            case 0x22A824u: goto label_22a824;
            case 0x22A828u: goto label_22a828;
            case 0x22A82Cu: goto label_22a82c;
            case 0x22A830u: goto label_22a830;
            case 0x22A834u: goto label_22a834;
            case 0x22A838u: goto label_22a838;
            case 0x22A83Cu: goto label_22a83c;
            case 0x22A840u: goto label_22a840;
            case 0x22A844u: goto label_22a844;
            case 0x22A848u: goto label_22a848;
            case 0x22A84Cu: goto label_22a84c;
            case 0x22A850u: goto label_22a850;
            case 0x22A854u: goto label_22a854;
            case 0x22A858u: goto label_22a858;
            case 0x22A85Cu: goto label_22a85c;
            case 0x22A860u: goto label_22a860;
            case 0x22A864u: goto label_22a864;
            case 0x22A868u: goto label_22a868;
            case 0x22A86Cu: goto label_22a86c;
            case 0x22A870u: goto label_22a870;
            case 0x22A874u: goto label_22a874;
            case 0x22A878u: goto label_22a878;
            case 0x22A87Cu: goto label_22a87c;
            case 0x22A880u: goto label_22a880;
            case 0x22A884u: goto label_22a884;
            case 0x22A888u: goto label_22a888;
            case 0x22A88Cu: goto label_22a88c;
            case 0x22A890u: goto label_22a890;
            case 0x22A894u: goto label_22a894;
            case 0x22A898u: goto label_22a898;
            case 0x22A89Cu: goto label_22a89c;
            case 0x22A8A0u: goto label_22a8a0;
            case 0x22A8A4u: goto label_22a8a4;
            case 0x22A8A8u: goto label_22a8a8;
            case 0x22A8ACu: goto label_22a8ac;
            case 0x22A8B0u: goto label_22a8b0;
            case 0x22A8B4u: goto label_22a8b4;
            case 0x22A8B8u: goto label_22a8b8;
            case 0x22A8BCu: goto label_22a8bc;
            case 0x22A8C0u: goto label_22a8c0;
            case 0x22A8C4u: goto label_22a8c4;
            case 0x22A8C8u: goto label_22a8c8;
            case 0x22A8CCu: goto label_22a8cc;
            case 0x22A8D0u: goto label_22a8d0;
            case 0x22A8D4u: goto label_22a8d4;
            case 0x22A8D8u: goto label_22a8d8;
            case 0x22A8DCu: goto label_22a8dc;
            case 0x22A8E0u: goto label_22a8e0;
            case 0x22A8E4u: goto label_22a8e4;
            case 0x22A8E8u: goto label_22a8e8;
            case 0x22A8ECu: goto label_22a8ec;
            case 0x22A8F0u: goto label_22a8f0;
            case 0x22A8F4u: goto label_22a8f4;
            case 0x22A8F8u: goto label_22a8f8;
            case 0x22A8FCu: goto label_22a8fc;
            case 0x22A900u: goto label_22a900;
            case 0x22A904u: goto label_22a904;
            case 0x22A908u: goto label_22a908;
            case 0x22A90Cu: goto label_22a90c;
            case 0x22A910u: goto label_22a910;
            case 0x22A914u: goto label_22a914;
            case 0x22A918u: goto label_22a918;
            case 0x22A91Cu: goto label_22a91c;
            case 0x22A920u: goto label_22a920;
            case 0x22A924u: goto label_22a924;
            case 0x22A928u: goto label_22a928;
            case 0x22A92Cu: goto label_22a92c;
            case 0x22A930u: goto label_22a930;
            case 0x22A934u: goto label_22a934;
            case 0x22A938u: goto label_22a938;
            case 0x22A93Cu: goto label_22a93c;
            case 0x22A940u: goto label_22a940;
            case 0x22A944u: goto label_22a944;
            case 0x22A948u: goto label_22a948;
            case 0x22A94Cu: goto label_22a94c;
            case 0x22A950u: goto label_22a950;
            case 0x22A954u: goto label_22a954;
            case 0x22A958u: goto label_22a958;
            case 0x22A95Cu: goto label_22a95c;
            case 0x22A960u: goto label_22a960;
            case 0x22A964u: goto label_22a964;
            case 0x22A968u: goto label_22a968;
            case 0x22A96Cu: goto label_22a96c;
            case 0x22A970u: goto label_22a970;
            case 0x22A974u: goto label_22a974;
            case 0x22A978u: goto label_22a978;
            case 0x22A97Cu: goto label_22a97c;
            case 0x22A980u: goto label_22a980;
            case 0x22A984u: goto label_22a984;
            case 0x22A988u: goto label_22a988;
            case 0x22A98Cu: goto label_22a98c;
            case 0x22A990u: goto label_22a990;
            case 0x22A994u: goto label_22a994;
            case 0x22A998u: goto label_22a998;
            case 0x22A99Cu: goto label_22a99c;
            case 0x22A9A0u: goto label_22a9a0;
            case 0x22A9A4u: goto label_22a9a4;
            case 0x22A9A8u: goto label_22a9a8;
            case 0x22A9ACu: goto label_22a9ac;
            case 0x22A9B0u: goto label_22a9b0;
            case 0x22A9B4u: goto label_22a9b4;
            case 0x22A9B8u: goto label_22a9b8;
            case 0x22A9BCu: goto label_22a9bc;
            case 0x22A9C0u: goto label_22a9c0;
            case 0x22A9C4u: goto label_22a9c4;
            case 0x22A9C8u: goto label_22a9c8;
            case 0x22A9CCu: goto label_22a9cc;
            case 0x22A9D0u: goto label_22a9d0;
            case 0x22A9D4u: goto label_22a9d4;
            case 0x22A9D8u: goto label_22a9d8;
            case 0x22A9DCu: goto label_22a9dc;
            case 0x22A9E0u: goto label_22a9e0;
            case 0x22A9E4u: goto label_22a9e4;
            case 0x22A9E8u: goto label_22a9e8;
            case 0x22A9ECu: goto label_22a9ec;
            case 0x22A9F0u: goto label_22a9f0;
            case 0x22A9F4u: goto label_22a9f4;
            case 0x22A9F8u: goto label_22a9f8;
            case 0x22A9FCu: goto label_22a9fc;
            case 0x22AA00u: goto label_22aa00;
            case 0x22AA04u: goto label_22aa04;
            case 0x22AA08u: goto label_22aa08;
            case 0x22AA0Cu: goto label_22aa0c;
            case 0x22AA10u: goto label_22aa10;
            case 0x22AA14u: goto label_22aa14;
            case 0x22AA18u: goto label_22aa18;
            case 0x22AA1Cu: goto label_22aa1c;
            case 0x22AA20u: goto label_22aa20;
            case 0x22AA24u: goto label_22aa24;
            case 0x22AA28u: goto label_22aa28;
            case 0x22AA2Cu: goto label_22aa2c;
            case 0x22AA30u: goto label_22aa30;
            case 0x22AA34u: goto label_22aa34;
            case 0x22AA38u: goto label_22aa38;
            case 0x22AA3Cu: goto label_22aa3c;
            case 0x22AA40u: goto label_22aa40;
            case 0x22AA44u: goto label_22aa44;
            case 0x22AA48u: goto label_22aa48;
            case 0x22AA4Cu: goto label_22aa4c;
            case 0x22AA50u: goto label_22aa50;
            case 0x22AA54u: goto label_22aa54;
            case 0x22AA58u: goto label_22aa58;
            case 0x22AA5Cu: goto label_22aa5c;
            case 0x22AA60u: goto label_22aa60;
            case 0x22AA64u: goto label_22aa64;
            case 0x22AA68u: goto label_22aa68;
            case 0x22AA6Cu: goto label_22aa6c;
            case 0x22AA70u: goto label_22aa70;
            case 0x22AA74u: goto label_22aa74;
            case 0x22AA78u: goto label_22aa78;
            case 0x22AA7Cu: goto label_22aa7c;
            case 0x22AA80u: goto label_22aa80;
            case 0x22AA84u: goto label_22aa84;
            case 0x22AA88u: goto label_22aa88;
            case 0x22AA8Cu: goto label_22aa8c;
            case 0x22AA90u: goto label_22aa90;
            case 0x22AA94u: goto label_22aa94;
            case 0x22AA98u: goto label_22aa98;
            case 0x22AA9Cu: goto label_22aa9c;
            case 0x22AAA0u: goto label_22aaa0;
            case 0x22AAA4u: goto label_22aaa4;
            case 0x22AAA8u: goto label_22aaa8;
            case 0x22AAACu: goto label_22aaac;
            case 0x22AAB0u: goto label_22aab0;
            case 0x22AAB4u: goto label_22aab4;
            case 0x22AAB8u: goto label_22aab8;
            case 0x22AABCu: goto label_22aabc;
            case 0x22AAC0u: goto label_22aac0;
            case 0x22AAC4u: goto label_22aac4;
            case 0x22AAC8u: goto label_22aac8;
            case 0x22AACCu: goto label_22aacc;
            case 0x22AAD0u: goto label_22aad0;
            case 0x22AAD4u: goto label_22aad4;
            case 0x22AAD8u: goto label_22aad8;
            case 0x22AADCu: goto label_22aadc;
            case 0x22AAE0u: goto label_22aae0;
            case 0x22AAE4u: goto label_22aae4;
            case 0x22AAE8u: goto label_22aae8;
            case 0x22AAECu: goto label_22aaec;
            case 0x22AAF0u: goto label_22aaf0;
            case 0x22AAF4u: goto label_22aaf4;
            case 0x22AAF8u: goto label_22aaf8;
            case 0x22AAFCu: goto label_22aafc;
            case 0x22AB00u: goto label_22ab00;
            case 0x22AB04u: goto label_22ab04;
            case 0x22AB08u: goto label_22ab08;
            case 0x22AB0Cu: goto label_22ab0c;
            case 0x22AB10u: goto label_22ab10;
            case 0x22AB14u: goto label_22ab14;
            case 0x22AB18u: goto label_22ab18;
            case 0x22AB1Cu: goto label_22ab1c;
            case 0x22AB20u: goto label_22ab20;
            case 0x22AB24u: goto label_22ab24;
            case 0x22AB28u: goto label_22ab28;
            case 0x22AB2Cu: goto label_22ab2c;
            case 0x22AB30u: goto label_22ab30;
            case 0x22AB34u: goto label_22ab34;
            case 0x22AB38u: goto label_22ab38;
            case 0x22AB3Cu: goto label_22ab3c;
            case 0x22AB40u: goto label_22ab40;
            case 0x22AB44u: goto label_22ab44;
            case 0x22AB48u: goto label_22ab48;
            case 0x22AB4Cu: goto label_22ab4c;
            case 0x22AB50u: goto label_22ab50;
            case 0x22AB54u: goto label_22ab54;
            case 0x22AB58u: goto label_22ab58;
            case 0x22AB5Cu: goto label_22ab5c;
            case 0x22AB60u: goto label_22ab60;
            case 0x22AB64u: goto label_22ab64;
            case 0x22AB68u: goto label_22ab68;
            case 0x22AB6Cu: goto label_22ab6c;
            case 0x22AB70u: goto label_22ab70;
            case 0x22AB74u: goto label_22ab74;
            case 0x22AB78u: goto label_22ab78;
            case 0x22AB7Cu: goto label_22ab7c;
            case 0x22AB80u: goto label_22ab80;
            case 0x22AB84u: goto label_22ab84;
            case 0x22AB88u: goto label_22ab88;
            case 0x22AB8Cu: goto label_22ab8c;
            case 0x22AB90u: goto label_22ab90;
            case 0x22AB94u: goto label_22ab94;
            case 0x22AB98u: goto label_22ab98;
            case 0x22AB9Cu: goto label_22ab9c;
            case 0x22ABA0u: goto label_22aba0;
            case 0x22ABA4u: goto label_22aba4;
            case 0x22ABA8u: goto label_22aba8;
            case 0x22ABACu: goto label_22abac;
            case 0x22ABB0u: goto label_22abb0;
            case 0x22ABB4u: goto label_22abb4;
            case 0x22ABB8u: goto label_22abb8;
            case 0x22ABBCu: goto label_22abbc;
            case 0x22ABC0u: goto label_22abc0;
            case 0x22ABC4u: goto label_22abc4;
            case 0x22ABC8u: goto label_22abc8;
            case 0x22ABCCu: goto label_22abcc;
            case 0x22ABD0u: goto label_22abd0;
            case 0x22ABD4u: goto label_22abd4;
            case 0x22ABD8u: goto label_22abd8;
            case 0x22ABDCu: goto label_22abdc;
            case 0x22ABE0u: goto label_22abe0;
            case 0x22ABE4u: goto label_22abe4;
            case 0x22ABE8u: goto label_22abe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22A8CCu;
label_22a8cc:
    // 0x22a8cc: 0x3c013f00
    ctx->pc = 0x22a8ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_22a8d0:
    // 0x22a8d0: 0x44816000
    ctx->pc = 0x22a8d0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22a8d4:
    // 0x22a8d4: 0xc0b5c06
label_22a8d8:
    if (ctx->pc == 0x22A8D8u) {
        ctx->pc = 0x22A8D8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x22A8DCu;
        goto label_22a8dc;
    }
    ctx->pc = 0x22A8D4u;
    SET_GPR_U32(ctx, 31, 0x22A8DCu);
    ctx->pc = 0x22A8D8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A8DCu; }
    }
    if (ctx->pc != 0x22A8DCu) { return; }
    ctx->pc = 0x22A8DCu;
label_22a8dc:
    // 0x22a8dc: 0x3c02003c
    ctx->pc = 0x22a8dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_22a8e0:
    // 0x22a8e0: 0x244218c0
    ctx->pc = 0x22a8e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6336));
label_22a8e4:
    // 0x22a8e4: 0x2508018
    ctx->pc = 0x22a8e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22a8e8:
    // 0x22a8e8: 0x2028021
    ctx->pc = 0x22a8e8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22a8ec:
    // 0x22a8ec: 0xc0be862
label_22a8f0:
    if (ctx->pc == 0x22A8F0u) {
        ctx->pc = 0x22A8F0u;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x22A8F4u;
        goto label_22a8f4;
    }
    ctx->pc = 0x22A8ECu;
    SET_GPR_U32(ctx, 31, 0x22A8F4u);
    ctx->pc = 0x22A8F0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A8F4u; }
    }
    if (ctx->pc != 0x22A8F4u) { return; }
    ctx->pc = 0x22A8F4u;
label_22a8f4:
    // 0x22a8f4: 0x3405ff80
    ctx->pc = 0x22a8f4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
label_22a8f8:
    // 0x22a8f8: 0x52bbc
    ctx->pc = 0x22a8f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_22a8fc:
    // 0x22a8fc: 0xc0be340
label_22a900:
    if (ctx->pc == 0x22A900u) {
        ctx->pc = 0x22A900u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A904u;
        goto label_22a904;
    }
    ctx->pc = 0x22A8FCu;
    SET_GPR_U32(ctx, 31, 0x22A904u);
    ctx->pc = 0x22A900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A904u; }
    }
    if (ctx->pc != 0x22A904u) { return; }
    ctx->pc = 0x22A904u;
label_22a904:
    // 0x22a904: 0x10000012
label_22a908:
    if (ctx->pc == 0x22A908u) {
        ctx->pc = 0x22A90Cu;
        goto label_22a90c;
    }
    ctx->pc = 0x22A904u;
    {
        const bool branch_taken_0x22a904 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x22a904) {
            ctx->pc = 0x22A950u;
            goto label_22a950;
        }
    }
    ctx->pc = 0x22A90Cu;
label_22a90c:
    // 0x22a90c: 0x3c013f00
    ctx->pc = 0x22a90cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_22a910:
    // 0x22a910: 0x44816000
    ctx->pc = 0x22a910u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22a914:
    // 0x22a914: 0xc0b5c06
label_22a918:
    if (ctx->pc == 0x22A918u) {
        ctx->pc = 0x22A918u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x22A91Cu;
        goto label_22a91c;
    }
    ctx->pc = 0x22A914u;
    SET_GPR_U32(ctx, 31, 0x22A91Cu);
    ctx->pc = 0x22A918u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A91Cu; }
    }
    if (ctx->pc != 0x22A91Cu) { return; }
    ctx->pc = 0x22A91Cu;
label_22a91c:
    // 0x22a91c: 0x3c02003c
    ctx->pc = 0x22a91cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_22a920:
    // 0x22a920: 0x244218c0
    ctx->pc = 0x22a920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6336));
label_22a924:
    // 0x22a924: 0x2508018
    ctx->pc = 0x22a924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22a928:
    // 0x22a928: 0x2028021
    ctx->pc = 0x22a928u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22a92c:
    // 0x22a92c: 0xc0be862
label_22a930:
    if (ctx->pc == 0x22A930u) {
        ctx->pc = 0x22A930u;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x22A934u;
        goto label_22a934;
    }
    ctx->pc = 0x22A92Cu;
    SET_GPR_U32(ctx, 31, 0x22A934u);
    ctx->pc = 0x22A930u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A934u; }
    }
    if (ctx->pc != 0x22A934u) { return; }
    ctx->pc = 0x22A934u;
label_22a934:
    // 0x22a934: 0x3405ff80
    ctx->pc = 0x22a934u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
label_22a938:
    // 0x22a938: 0x52bbc
    ctx->pc = 0x22a938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_22a93c:
    // 0x22a93c: 0xc0be340
label_22a940:
    if (ctx->pc == 0x22A940u) {
        ctx->pc = 0x22A940u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A944u;
        goto label_22a944;
    }
    ctx->pc = 0x22A93Cu;
    SET_GPR_U32(ctx, 31, 0x22A944u);
    ctx->pc = 0x22A940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A944u; }
    }
    if (ctx->pc != 0x22A944u) { return; }
    ctx->pc = 0x22A944u;
label_22a944:
    // 0x22a944: 0x202d
    ctx->pc = 0x22a944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a948:
    // 0x22a948: 0xc0be356
label_22a94c:
    if (ctx->pc == 0x22A94Cu) {
        ctx->pc = 0x22A94Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A950u;
        goto label_22a950;
    }
    ctx->pc = 0x22A948u;
    SET_GPR_U32(ctx, 31, 0x22A950u);
    ctx->pc = 0x22A94Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A950u; }
    }
    if (ctx->pc != 0x22A950u) { return; }
    ctx->pc = 0x22A950u;
label_22a950:
    // 0x22a950: 0xc0be564
label_22a954:
    if (ctx->pc == 0x22A954u) {
        ctx->pc = 0x22A954u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A958u;
        goto label_22a958;
    }
    ctx->pc = 0x22A950u;
    SET_GPR_U32(ctx, 31, 0x22A958u);
    ctx->pc = 0x22A954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A958u; }
    }
    if (ctx->pc != 0x22A958u) { return; }
    ctx->pc = 0x22A958u;
label_22a958:
    // 0x22a958: 0x3c014000
    ctx->pc = 0x22a958u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_22a95c:
    // 0x22a95c: 0x44816000
    ctx->pc = 0x22a95cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22a960:
    // 0x22a960: 0xc0b5c06
label_22a964:
    if (ctx->pc == 0x22A964u) {
        ctx->pc = 0x22A964u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x22A968u;
        goto label_22a968;
    }
    ctx->pc = 0x22A960u;
    SET_GPR_U32(ctx, 31, 0x22A968u);
    ctx->pc = 0x22A964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A968u; }
    }
    if (ctx->pc != 0x22A968u) { return; }
    ctx->pc = 0x22A968u;
label_22a968:
    // 0x22a968: 0x3c020032
    ctx->pc = 0x22a968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22a96c:
    // 0x22a96c: 0xc442105c
    ctx->pc = 0x22a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22a970:
    // 0x22a970: 0x46001047
    ctx->pc = 0x22a970u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_22a974:
    // 0x22a974: 0x46020002
    ctx->pc = 0x22a974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_22a978:
    // 0x22a978: 0x46000840
    ctx->pc = 0x22a978u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22a97c:
    // 0x22a97c: 0xc6000014
    ctx->pc = 0x22a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a980:
    // 0x22a980: 0x46000840
    ctx->pc = 0x22a980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22a984:
    // 0x22a984: 0x1000005f
label_22a988:
    if (ctx->pc == 0x22A988u) {
        ctx->pc = 0x22A988u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->pc = 0x22A98Cu;
        goto label_22a98c;
    }
    ctx->pc = 0x22A984u;
    {
        const bool branch_taken_0x22a984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22A988u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        if (branch_taken_0x22a984) {
            ctx->pc = 0x22AB04u;
            goto label_22ab04;
        }
    }
    ctx->pc = 0x22A98Cu;
label_22a98c:
    // 0x22a98c: 0x3c013f00
    ctx->pc = 0x22a98cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_22a990:
    // 0x22a990: 0x44816000
    ctx->pc = 0x22a990u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22a994:
    // 0x22a994: 0xc0b5c06
label_22a998:
    if (ctx->pc == 0x22A998u) {
        ctx->pc = 0x22A998u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x22A99Cu;
        goto label_22a99c;
    }
    ctx->pc = 0x22A994u;
    SET_GPR_U32(ctx, 31, 0x22A99Cu);
    ctx->pc = 0x22A998u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A99Cu; }
    }
    if (ctx->pc != 0x22A99Cu) { return; }
    ctx->pc = 0x22A99Cu;
label_22a99c:
    // 0x22a99c: 0x3c02003c
    ctx->pc = 0x22a99cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_22a9a0:
    // 0x22a9a0: 0x244218c0
    ctx->pc = 0x22a9a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6336));
label_22a9a4:
    // 0x22a9a4: 0x2508018
    ctx->pc = 0x22a9a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22a9a8:
    // 0x22a9a8: 0x2028021
    ctx->pc = 0x22a9a8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22a9ac:
    // 0x22a9ac: 0xc0be862
label_22a9b0:
    if (ctx->pc == 0x22A9B0u) {
        ctx->pc = 0x22A9B0u;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x22A9B4u;
        goto label_22a9b4;
    }
    ctx->pc = 0x22A9ACu;
    SET_GPR_U32(ctx, 31, 0x22A9B4u);
    ctx->pc = 0x22A9B0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9B4u; }
    }
    if (ctx->pc != 0x22A9B4u) { return; }
    ctx->pc = 0x22A9B4u;
label_22a9b4:
    // 0x22a9b4: 0x3405ff80
    ctx->pc = 0x22a9b4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
label_22a9b8:
    // 0x22a9b8: 0x52bbc
    ctx->pc = 0x22a9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_22a9bc:
    // 0x22a9bc: 0xc0be340
label_22a9c0:
    if (ctx->pc == 0x22A9C0u) {
        ctx->pc = 0x22A9C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A9C4u;
        goto label_22a9c4;
    }
    ctx->pc = 0x22A9BCu;
    SET_GPR_U32(ctx, 31, 0x22A9C4u);
    ctx->pc = 0x22A9C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9C4u; }
    }
    if (ctx->pc != 0x22A9C4u) { return; }
    ctx->pc = 0x22A9C4u;
label_22a9c4:
    // 0x22a9c4: 0x202d
    ctx->pc = 0x22a9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a9c8:
    // 0x22a9c8: 0xc0be356
label_22a9cc:
    if (ctx->pc == 0x22A9CCu) {
        ctx->pc = 0x22A9CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A9D0u;
        goto label_22a9d0;
    }
    ctx->pc = 0x22A9C8u;
    SET_GPR_U32(ctx, 31, 0x22A9D0u);
    ctx->pc = 0x22A9CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9D0u; }
    }
    if (ctx->pc != 0x22A9D0u) { return; }
    ctx->pc = 0x22A9D0u;
label_22a9d0:
    // 0x22a9d0: 0x1000000f
label_22a9d4:
    if (ctx->pc == 0x22A9D4u) {
        ctx->pc = 0x22A9D8u;
        goto label_22a9d8;
    }
    ctx->pc = 0x22A9D0u;
    {
        const bool branch_taken_0x22a9d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x22a9d0) {
            ctx->pc = 0x22AA10u;
            goto label_22aa10;
        }
    }
    ctx->pc = 0x22A9D8u;
label_22a9d8:
    // 0x22a9d8: 0x3c013f00
    ctx->pc = 0x22a9d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_22a9dc:
    // 0x22a9dc: 0x44816000
    ctx->pc = 0x22a9dcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22a9e0:
    // 0x22a9e0: 0xc0b5c06
label_22a9e4:
    if (ctx->pc == 0x22A9E4u) {
        ctx->pc = 0x22A9E4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x22A9E8u;
        goto label_22a9e8;
    }
    ctx->pc = 0x22A9E0u;
    SET_GPR_U32(ctx, 31, 0x22A9E8u);
    ctx->pc = 0x22A9E4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9E8u; }
    }
    if (ctx->pc != 0x22A9E8u) { return; }
    ctx->pc = 0x22A9E8u;
label_22a9e8:
    // 0x22a9e8: 0x3c02003c
    ctx->pc = 0x22a9e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_22a9ec:
    // 0x22a9ec: 0x244218c0
    ctx->pc = 0x22a9ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6336));
label_22a9f0:
    // 0x22a9f0: 0x2508018
    ctx->pc = 0x22a9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22a9f4:
    // 0x22a9f4: 0x2028021
    ctx->pc = 0x22a9f4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22a9f8:
    // 0x22a9f8: 0xc0be862
label_22a9fc:
    if (ctx->pc == 0x22A9FCu) {
        ctx->pc = 0x22A9FCu;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x22AA00u;
        goto label_22aa00;
    }
    ctx->pc = 0x22A9F8u;
    SET_GPR_U32(ctx, 31, 0x22AA00u);
    ctx->pc = 0x22A9FCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA00u; }
    }
    if (ctx->pc != 0x22AA00u) { return; }
    ctx->pc = 0x22AA00u;
label_22aa00:
    // 0x22aa00: 0x3405ff80
    ctx->pc = 0x22aa00u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
label_22aa04:
    // 0x22aa04: 0x52bbc
    ctx->pc = 0x22aa04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_22aa08:
    // 0x22aa08: 0xc0be340
label_22aa0c:
    if (ctx->pc == 0x22AA0Cu) {
        ctx->pc = 0x22AA0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AA10u;
        goto label_22aa10;
    }
    ctx->pc = 0x22AA08u;
    SET_GPR_U32(ctx, 31, 0x22AA10u);
    ctx->pc = 0x22AA0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA10u; }
    }
    if (ctx->pc != 0x22AA10u) { return; }
    ctx->pc = 0x22AA10u;
label_22aa10:
    // 0x22aa10: 0xc0be564
label_22aa14:
    if (ctx->pc == 0x22AA14u) {
        ctx->pc = 0x22AA14u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AA18u;
        goto label_22aa18;
    }
    ctx->pc = 0x22AA10u;
    SET_GPR_U32(ctx, 31, 0x22AA18u);
    ctx->pc = 0x22AA14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA18u; }
    }
    if (ctx->pc != 0x22AA18u) { return; }
    ctx->pc = 0x22AA18u;
label_22aa18:
    // 0x22aa18: 0x3c014000
    ctx->pc = 0x22aa18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_22aa1c:
    // 0x22aa1c: 0x44816000
    ctx->pc = 0x22aa1cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22aa20:
    // 0x22aa20: 0xc0b5c06
label_22aa24:
    if (ctx->pc == 0x22AA24u) {
        ctx->pc = 0x22AA24u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->pc = 0x22AA28u;
        goto label_22aa28;
    }
    ctx->pc = 0x22AA20u;
    SET_GPR_U32(ctx, 31, 0x22AA28u);
    ctx->pc = 0x22AA24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA28u; }
    }
    if (ctx->pc != 0x22AA28u) { return; }
    ctx->pc = 0x22AA28u;
label_22aa28:
    // 0x22aa28: 0x3c020032
    ctx->pc = 0x22aa28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22aa2c:
    // 0x22aa2c: 0xc442105c
    ctx->pc = 0x22aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22aa30:
    // 0x22aa30: 0x46001047
    ctx->pc = 0x22aa30u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_22aa34:
    // 0x22aa34: 0x46020002
    ctx->pc = 0x22aa34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_22aa38:
    // 0x22aa38: 0x46000840
    ctx->pc = 0x22aa38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22aa3c:
    // 0x22aa3c: 0xc6000010
    ctx->pc = 0x22aa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22aa40:
    // 0x22aa40: 0x46000840
    ctx->pc = 0x22aa40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22aa44:
    // 0x22aa44: 0x1000002f
label_22aa48:
    if (ctx->pc == 0x22AA48u) {
        ctx->pc = 0x22AA48u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x22AA4Cu;
        goto label_22aa4c;
    }
    ctx->pc = 0x22AA44u;
    {
        const bool branch_taken_0x22aa44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AA48u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        if (branch_taken_0x22aa44) {
            ctx->pc = 0x22AB04u;
            goto label_22ab04;
        }
    }
    ctx->pc = 0x22AA4Cu;
label_22aa4c:
    // 0x22aa4c: 0x3c013f00
    ctx->pc = 0x22aa4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_22aa50:
    // 0x22aa50: 0x44816000
    ctx->pc = 0x22aa50u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22aa54:
    // 0x22aa54: 0xc0b5c06
label_22aa58:
    if (ctx->pc == 0x22AA58u) {
        ctx->pc = 0x22AA58u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x22AA5Cu;
        goto label_22aa5c;
    }
    ctx->pc = 0x22AA54u;
    SET_GPR_U32(ctx, 31, 0x22AA5Cu);
    ctx->pc = 0x22AA58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA5Cu; }
    }
    if (ctx->pc != 0x22AA5Cu) { return; }
    ctx->pc = 0x22AA5Cu;
label_22aa5c:
    // 0x22aa5c: 0x3c02003c
    ctx->pc = 0x22aa5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_22aa60:
    // 0x22aa60: 0x244218c0
    ctx->pc = 0x22aa60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6336));
label_22aa64:
    // 0x22aa64: 0x2508018
    ctx->pc = 0x22aa64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22aa68:
    // 0x22aa68: 0x2028021
    ctx->pc = 0x22aa68u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22aa6c:
    // 0x22aa6c: 0xc0be862
label_22aa70:
    if (ctx->pc == 0x22AA70u) {
        ctx->pc = 0x22AA70u;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x22AA74u;
        goto label_22aa74;
    }
    ctx->pc = 0x22AA6Cu;
    SET_GPR_U32(ctx, 31, 0x22AA74u);
    ctx->pc = 0x22AA70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA74u; }
    }
    if (ctx->pc != 0x22AA74u) { return; }
    ctx->pc = 0x22AA74u;
label_22aa74:
    // 0x22aa74: 0x3405ff80
    ctx->pc = 0x22aa74u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
label_22aa78:
    // 0x22aa78: 0x52bbc
    ctx->pc = 0x22aa78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_22aa7c:
    // 0x22aa7c: 0xc0be340
label_22aa80:
    if (ctx->pc == 0x22AA80u) {
        ctx->pc = 0x22AA80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AA84u;
        goto label_22aa84;
    }
    ctx->pc = 0x22AA7Cu;
    SET_GPR_U32(ctx, 31, 0x22AA84u);
    ctx->pc = 0x22AA80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA84u; }
    }
    if (ctx->pc != 0x22AA84u) { return; }
    ctx->pc = 0x22AA84u;
label_22aa84:
    // 0x22aa84: 0x202d
    ctx->pc = 0x22aa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22aa88:
    // 0x22aa88: 0xc0be356
label_22aa8c:
    if (ctx->pc == 0x22AA8Cu) {
        ctx->pc = 0x22AA8Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AA90u;
        goto label_22aa90;
    }
    ctx->pc = 0x22AA88u;
    SET_GPR_U32(ctx, 31, 0x22AA90u);
    ctx->pc = 0x22AA8Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA90u; }
    }
    if (ctx->pc != 0x22AA90u) { return; }
    ctx->pc = 0x22AA90u;
label_22aa90:
    // 0x22aa90: 0xc0be564
label_22aa94:
    if (ctx->pc == 0x22AA94u) {
        ctx->pc = 0x22AA94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AA98u;
        goto label_22aa98;
    }
    ctx->pc = 0x22AA90u;
    SET_GPR_U32(ctx, 31, 0x22AA98u);
    ctx->pc = 0x22AA94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA98u; }
    }
    if (ctx->pc != 0x22AA98u) { return; }
    ctx->pc = 0x22AA98u;
label_22aa98:
    // 0x22aa98: 0xe6000018
    ctx->pc = 0x22aa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_22aa9c:
    // 0x22aa9c: 0x8e030028
    ctx->pc = 0x22aa9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_22aaa0:
    // 0x22aaa0: 0x8e020030
    ctx->pc = 0x22aaa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_22aaa4:
    // 0x22aaa4: 0x43102a
    ctx->pc = 0x22aaa4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_22aaa8:
    // 0x22aaa8: 0x10400016
label_22aaac:
    if (ctx->pc == 0x22AAACu) {
        ctx->pc = 0x22AAB0u;
        goto label_22aab0;
    }
    ctx->pc = 0x22AAA8u;
    {
        const bool branch_taken_0x22aaa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22aaa8) {
            ctx->pc = 0x22AB04u;
            goto label_22ab04;
        }
    }
    ctx->pc = 0x22AAB0u;
label_22aab0:
    // 0x22aab0: 0xc08a852
label_22aab4:
    if (ctx->pc == 0x22AAB4u) {
        ctx->pc = 0x22AAB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AAB8u;
        goto label_22aab8;
    }
    ctx->pc = 0x22AAB0u;
    SET_GPR_U32(ctx, 31, 0x22AAB8u);
    ctx->pc = 0x22AAB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22A148u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaverResetWeap_0x22a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AAB8u; }
    }
    if (ctx->pc != 0x22AAB8u) { return; }
    ctx->pc = 0x22AAB8u;
label_22aab8:
    // 0x22aab8: 0x10000045
label_22aabc:
    if (ctx->pc == 0x22AABCu) {
        ctx->pc = 0x22AABCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x22AAC0u;
        goto label_22aac0;
    }
    ctx->pc = 0x22AAB8u;
    {
        const bool branch_taken_0x22aab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AABCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x22aab8) {
            ctx->pc = 0x22ABD0u;
            goto label_22abd0;
        }
    }
    ctx->pc = 0x22AAC0u;
label_22aac0:
    // 0x22aac0: 0x3c013f00
    ctx->pc = 0x22aac0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_22aac4:
    // 0x22aac4: 0x44816000
    ctx->pc = 0x22aac4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_22aac8:
    // 0x22aac8: 0xc0b5c06
label_22aacc:
    if (ctx->pc == 0x22AACCu) {
        ctx->pc = 0x22AACCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x22AAD0u;
        goto label_22aad0;
    }
    ctx->pc = 0x22AAC8u;
    SET_GPR_U32(ctx, 31, 0x22AAD0u);
    ctx->pc = 0x22AACCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AAD0u; }
    }
    if (ctx->pc != 0x22AAD0u) { return; }
    ctx->pc = 0x22AAD0u;
label_22aad0:
    // 0x22aad0: 0x3c02003c
    ctx->pc = 0x22aad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_22aad4:
    // 0x22aad4: 0x244218c0
    ctx->pc = 0x22aad4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6336));
label_22aad8:
    // 0x22aad8: 0x2508018
    ctx->pc = 0x22aad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22aadc:
    // 0x22aadc: 0x2028021
    ctx->pc = 0x22aadcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22aae0:
    // 0x22aae0: 0xc0be862
label_22aae4:
    if (ctx->pc == 0x22AAE4u) {
        ctx->pc = 0x22AAE4u;
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x22AAE8u;
        goto label_22aae8;
    }
    ctx->pc = 0x22AAE0u;
    SET_GPR_U32(ctx, 31, 0x22AAE8u);
    ctx->pc = 0x22AAE4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AAE8u; }
    }
    if (ctx->pc != 0x22AAE8u) { return; }
    ctx->pc = 0x22AAE8u;
label_22aae8:
    // 0x22aae8: 0x3405ff80
    ctx->pc = 0x22aae8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
label_22aaec:
    // 0x22aaec: 0x52bbc
    ctx->pc = 0x22aaecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_22aaf0:
    // 0x22aaf0: 0xc0be340
label_22aaf4:
    if (ctx->pc == 0x22AAF4u) {
        ctx->pc = 0x22AAF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AAF8u;
        goto label_22aaf8;
    }
    ctx->pc = 0x22AAF0u;
    SET_GPR_U32(ctx, 31, 0x22AAF8u);
    ctx->pc = 0x22AAF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AAF8u; }
    }
    if (ctx->pc != 0x22AAF8u) { return; }
    ctx->pc = 0x22AAF8u;
label_22aaf8:
    // 0x22aaf8: 0xc0be564
label_22aafc:
    if (ctx->pc == 0x22AAFCu) {
        ctx->pc = 0x22AAFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AB00u;
        goto label_22ab00;
    }
    ctx->pc = 0x22AAF8u;
    SET_GPR_U32(ctx, 31, 0x22AB00u);
    ctx->pc = 0x22AAFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB00u; }
    }
    if (ctx->pc != 0x22AB00u) { return; }
    ctx->pc = 0x22AB00u;
label_22ab00:
    // 0x22ab00: 0xe6000018
    ctx->pc = 0x22ab00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_22ab04:
    // 0x22ab04: 0x1220001e
label_22ab08:
    if (ctx->pc == 0x22AB08u) {
        ctx->pc = 0x22AB08u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x22AB0Cu;
        goto label_22ab0c;
    }
    ctx->pc = 0x22AB04u;
    {
        const bool branch_taken_0x22ab04 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AB08u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 144));
        if (branch_taken_0x22ab04) {
            ctx->pc = 0x22AB80u;
            goto label_22ab80;
        }
    }
    ctx->pc = 0x22AB0Cu;
label_22ab0c:
    // 0x22ab0c: 0x2518818
    ctx->pc = 0x22ab0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22ab10:
    // 0x22ab10: 0x3c10003c
    ctx->pc = 0x22ab10u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_22ab14:
    // 0x22ab14: 0x261018d0
    ctx->pc = 0x22ab14u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 6352));
label_22ab18:
    // 0x22ab18: 0xc0b58a4
label_22ab1c:
    if (ctx->pc == 0x22AB1Cu) {
        ctx->pc = 0x22AB1Cu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->pc = 0x22AB20u;
        goto label_22ab20;
    }
    ctx->pc = 0x22AB18u;
    SET_GPR_U32(ctx, 31, 0x22AB20u);
    ctx->pc = 0x22AB1Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB20u; }
    }
    if (ctx->pc != 0x22AB20u) { return; }
    ctx->pc = 0x22AB20u;
label_22ab20:
    // 0x22ab20: 0x2118021
    ctx->pc = 0x22ab20u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_22ab24:
    // 0x22ab24: 0x2402fff6
    ctx->pc = 0x22ab24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967286));
label_22ab28:
    // 0x22ab28: 0x10000015
label_22ab2c:
    if (ctx->pc == 0x22AB2Cu) {
        ctx->pc = 0x22AB2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x22AB30u;
        goto label_22ab30;
    }
    ctx->pc = 0x22AB28u;
    {
        const bool branch_taken_0x22ab28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AB2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x22ab28) {
            ctx->pc = 0x22AB80u;
            goto label_22ab80;
        }
    }
    ctx->pc = 0x22AB30u;
label_22ab30:
    // 0x22ab30: 0x3c03003c
    ctx->pc = 0x22ab30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_22ab34:
    // 0x22ab34: 0x246318c0
    ctx->pc = 0x22ab34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6336));
label_22ab38:
    // 0x22ab38: 0x24020090
    ctx->pc = 0x22ab38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
label_22ab3c:
    // 0x22ab3c: 0x2421018
    ctx->pc = 0x22ab3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22ab40:
    // 0x22ab40: 0x431821
    ctx->pc = 0x22ab40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22ab44:
    // 0x22ab44: 0x8c620024
    ctx->pc = 0x22ab44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_22ab48:
    // 0x22ab48: 0x4410004
label_22ab4c:
    if (ctx->pc == 0x22AB4Cu) {
        ctx->pc = 0x22AB4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x22AB50u;
        goto label_22ab50;
    }
    ctx->pc = 0x22AB48u;
    {
        const bool branch_taken_0x22ab48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22AB4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x22ab48) {
            ctx->pc = 0x22AB5Cu;
            goto label_22ab5c;
        }
    }
    ctx->pc = 0x22AB50u;
label_22ab50:
    // 0x22ab50: 0x8c42ffc0
    ctx->pc = 0x22ab50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967232)));
label_22ab54:
    // 0x22ab54: 0x1000000a
label_22ab58:
    if (ctx->pc == 0x22AB58u) {
        ctx->pc = 0x22AB58u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x22AB5Cu;
        goto label_22ab5c;
    }
    ctx->pc = 0x22AB54u;
    {
        const bool branch_taken_0x22ab54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AB58u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x22ab54) {
            ctx->pc = 0x22AB80u;
            goto label_22ab80;
        }
    }
    ctx->pc = 0x22AB5Cu;
label_22ab5c:
    // 0x22ab5c: 0x14800009
label_22ab60:
    if (ctx->pc == 0x22AB60u) {
        ctx->pc = 0x22AB60u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x22AB64u;
        goto label_22ab64;
    }
    ctx->pc = 0x22AB5Cu;
    {
        const bool branch_taken_0x22ab5c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x22AB60u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x22ab5c) {
            ctx->pc = 0x22AB84u;
            goto label_22ab84;
        }
    }
    ctx->pc = 0x22AB64u;
label_22ab64:
    // 0x22ab64: 0x3c03003c
    ctx->pc = 0x22ab64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_22ab68:
    // 0x22ab68: 0x246318c0
    ctx->pc = 0x22ab68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6336));
label_22ab6c:
    // 0x22ab6c: 0x24020090
    ctx->pc = 0x22ab6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
label_22ab70:
    // 0x22ab70: 0x2421018
    ctx->pc = 0x22ab70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22ab74:
    // 0x22ab74: 0x431021
    ctx->pc = 0x22ab74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22ab78:
    // 0x22ab78: 0x24030001
    ctx->pc = 0x22ab78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_22ab7c:
    // 0x22ab7c: 0xac430024
    ctx->pc = 0x22ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_22ab80:
    // 0x22ab80: 0x3c04003c
    ctx->pc = 0x22ab80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_22ab84:
    // 0x22ab84: 0x248418c0
    ctx->pc = 0x22ab84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6336));
label_22ab88:
    // 0x22ab88: 0x24050090
    ctx->pc = 0x22ab88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 144));
label_22ab8c:
    // 0x22ab8c: 0x2452818
    ctx->pc = 0x22ab8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_22ab90:
    // 0x22ab90: 0xa41021
    ctx->pc = 0x22ab90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_22ab94:
    // 0x22ab94: 0x8c43003c
    ctx->pc = 0x22ab94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_22ab98:
    // 0x22ab98: 0xc7a00040
    ctx->pc = 0x22ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ab9c:
    // 0x22ab9c: 0xe4600030
    ctx->pc = 0x22ab9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_22aba0:
    // 0x22aba0: 0x8c43003c
    ctx->pc = 0x22aba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_22aba4:
    // 0x22aba4: 0xc7a00044
    ctx->pc = 0x22aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22aba8:
    // 0x22aba8: 0xe4600034
    ctx->pc = 0x22aba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_22abac:
    // 0x22abac: 0x8c42003c
    ctx->pc = 0x22abacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_22abb0:
    // 0x22abb0: 0xc7a00048
    ctx->pc = 0x22abb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22abb4:
    // 0x22abb4: 0xe4400038
    ctx->pc = 0x22abb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_22abb8:
    // 0x22abb8: 0x24840040
    ctx->pc = 0x22abb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
label_22abbc:
    // 0x22abbc: 0xa42021
    ctx->pc = 0x22abbcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_22abc0:
    // 0x22abc0: 0x282d
    ctx->pc = 0x22abc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22abc4:
    // 0x22abc4: 0xc084a96
label_22abc8:
    if (ctx->pc == 0x22ABC8u) {
        ctx->pc = 0x22ABC8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22ABCCu;
        goto label_22abcc;
    }
    ctx->pc = 0x22ABC4u;
    SET_GPR_U32(ctx, 31, 0x22ABCCu);
    ctx->pc = 0x22ABC8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ABCCu; }
    }
    if (ctx->pc != 0x22ABCCu) { return; }
    ctx->pc = 0x22ABCCu;
label_22abcc:
    // 0x22abcc: 0xdfbf0080
    ctx->pc = 0x22abccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22abd0:
    // 0x22abd0: 0xdfb20070
    ctx->pc = 0x22abd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22abd4:
    // 0x22abd4: 0xdfb10060
    ctx->pc = 0x22abd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22abd8:
    // 0x22abd8: 0xdfb00050
    ctx->pc = 0x22abd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22abdc:
    // 0x22abdc: 0xc7b50098
    ctx->pc = 0x22abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22abe0:
    // 0x22abe0: 0xc7b40090
    ctx->pc = 0x22abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22abe4:
    // 0x22abe4: 0x3e00008
label_22abe8:
    if (ctx->pc == 0x22ABE8u) {
        ctx->pc = 0x22ABE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x22ABECu;
        goto label_fallthrough_0x22abe4;
    }
    ctx->pc = 0x22ABE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ABE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A5D8u: goto label_22a5d8;
            case 0x22A5DCu: goto label_22a5dc;
            case 0x22A5E0u: goto label_22a5e0;
            case 0x22A5E4u: goto label_22a5e4;
            case 0x22A5E8u: goto label_22a5e8;
            case 0x22A5ECu: goto label_22a5ec;
            case 0x22A5F0u: goto label_22a5f0;
            case 0x22A5F4u: goto label_22a5f4;
            case 0x22A5F8u: goto label_22a5f8;
            case 0x22A5FCu: goto label_22a5fc;
            case 0x22A600u: goto label_22a600;
            case 0x22A604u: goto label_22a604;
            case 0x22A608u: goto label_22a608;
            case 0x22A60Cu: goto label_22a60c;
            case 0x22A610u: goto label_22a610;
            case 0x22A614u: goto label_22a614;
            case 0x22A618u: goto label_22a618;
            case 0x22A61Cu: goto label_22a61c;
            case 0x22A620u: goto label_22a620;
            case 0x22A624u: goto label_22a624;
            case 0x22A628u: goto label_22a628;
            case 0x22A62Cu: goto label_22a62c;
            case 0x22A630u: goto label_22a630;
            case 0x22A634u: goto label_22a634;
            case 0x22A638u: goto label_22a638;
            case 0x22A63Cu: goto label_22a63c;
            case 0x22A640u: goto label_22a640;
            case 0x22A644u: goto label_22a644;
            case 0x22A648u: goto label_22a648;
            case 0x22A64Cu: goto label_22a64c;
            case 0x22A650u: goto label_22a650;
            case 0x22A654u: goto label_22a654;
            case 0x22A658u: goto label_22a658;
            case 0x22A65Cu: goto label_22a65c;
            case 0x22A660u: goto label_22a660;
            case 0x22A664u: goto label_22a664;
            case 0x22A668u: goto label_22a668;
            case 0x22A66Cu: goto label_22a66c;
            case 0x22A670u: goto label_22a670;
            case 0x22A674u: goto label_22a674;
            case 0x22A678u: goto label_22a678;
            case 0x22A67Cu: goto label_22a67c;
            case 0x22A680u: goto label_22a680;
            case 0x22A684u: goto label_22a684;
            case 0x22A688u: goto label_22a688;
            case 0x22A68Cu: goto label_22a68c;
            case 0x22A690u: goto label_22a690;
            case 0x22A694u: goto label_22a694;
            case 0x22A698u: goto label_22a698;
            case 0x22A69Cu: goto label_22a69c;
            case 0x22A6A0u: goto label_22a6a0;
            case 0x22A6A4u: goto label_22a6a4;
            case 0x22A6A8u: goto label_22a6a8;
            case 0x22A6ACu: goto label_22a6ac;
            case 0x22A6B0u: goto label_22a6b0;
            case 0x22A6B4u: goto label_22a6b4;
            case 0x22A6B8u: goto label_22a6b8;
            case 0x22A6BCu: goto label_22a6bc;
            case 0x22A6C0u: goto label_22a6c0;
            case 0x22A6C4u: goto label_22a6c4;
            case 0x22A6C8u: goto label_22a6c8;
            case 0x22A6CCu: goto label_22a6cc;
            case 0x22A6D0u: goto label_22a6d0;
            case 0x22A6D4u: goto label_22a6d4;
            case 0x22A6D8u: goto label_22a6d8;
            case 0x22A6DCu: goto label_22a6dc;
            case 0x22A6E0u: goto label_22a6e0;
            case 0x22A6E4u: goto label_22a6e4;
            case 0x22A6E8u: goto label_22a6e8;
            case 0x22A6ECu: goto label_22a6ec;
            case 0x22A6F0u: goto label_22a6f0;
            case 0x22A6F4u: goto label_22a6f4;
            case 0x22A6F8u: goto label_22a6f8;
            case 0x22A6FCu: goto label_22a6fc;
            case 0x22A700u: goto label_22a700;
            case 0x22A704u: goto label_22a704;
            case 0x22A708u: goto label_22a708;
            case 0x22A70Cu: goto label_22a70c;
            case 0x22A710u: goto label_22a710;
            case 0x22A714u: goto label_22a714;
            case 0x22A718u: goto label_22a718;
            case 0x22A71Cu: goto label_22a71c;
            case 0x22A720u: goto label_22a720;
            case 0x22A724u: goto label_22a724;
            case 0x22A728u: goto label_22a728;
            case 0x22A72Cu: goto label_22a72c;
            case 0x22A730u: goto label_22a730;
            case 0x22A734u: goto label_22a734;
            case 0x22A738u: goto label_22a738;
            case 0x22A73Cu: goto label_22a73c;
            case 0x22A740u: goto label_22a740;
            case 0x22A744u: goto label_22a744;
            case 0x22A748u: goto label_22a748;
            case 0x22A74Cu: goto label_22a74c;
            case 0x22A750u: goto label_22a750;
            case 0x22A754u: goto label_22a754;
            case 0x22A758u: goto label_22a758;
            case 0x22A75Cu: goto label_22a75c;
            case 0x22A760u: goto label_22a760;
            case 0x22A764u: goto label_22a764;
            case 0x22A768u: goto label_22a768;
            case 0x22A76Cu: goto label_22a76c;
            case 0x22A770u: goto label_22a770;
            case 0x22A774u: goto label_22a774;
            case 0x22A778u: goto label_22a778;
            case 0x22A77Cu: goto label_22a77c;
            case 0x22A780u: goto label_22a780;
            case 0x22A784u: goto label_22a784;
            case 0x22A788u: goto label_22a788;
            case 0x22A78Cu: goto label_22a78c;
            case 0x22A790u: goto label_22a790;
            case 0x22A794u: goto label_22a794;
            case 0x22A798u: goto label_22a798;
            case 0x22A79Cu: goto label_22a79c;
            case 0x22A7A0u: goto label_22a7a0;
            case 0x22A7A4u: goto label_22a7a4;
            case 0x22A7A8u: goto label_22a7a8;
            case 0x22A7ACu: goto label_22a7ac;
            case 0x22A7B0u: goto label_22a7b0;
            case 0x22A7B4u: goto label_22a7b4;
            case 0x22A7B8u: goto label_22a7b8;
            case 0x22A7BCu: goto label_22a7bc;
            case 0x22A7C0u: goto label_22a7c0;
            case 0x22A7C4u: goto label_22a7c4;
            case 0x22A7C8u: goto label_22a7c8;
            case 0x22A7CCu: goto label_22a7cc;
            case 0x22A7D0u: goto label_22a7d0;
            case 0x22A7D4u: goto label_22a7d4;
            case 0x22A7D8u: goto label_22a7d8;
            case 0x22A7DCu: goto label_22a7dc;
            case 0x22A7E0u: goto label_22a7e0;
            case 0x22A7E4u: goto label_22a7e4;
            case 0x22A7E8u: goto label_22a7e8;
            case 0x22A7ECu: goto label_22a7ec;
            case 0x22A7F0u: goto label_22a7f0;
            case 0x22A7F4u: goto label_22a7f4;
            case 0x22A7F8u: goto label_22a7f8;
            case 0x22A7FCu: goto label_22a7fc;
            case 0x22A800u: goto label_22a800;
            case 0x22A804u: goto label_22a804;
            case 0x22A808u: goto label_22a808;
            case 0x22A80Cu: goto label_22a80c;
            case 0x22A810u: goto label_22a810;
            case 0x22A814u: goto label_22a814;
            case 0x22A818u: goto label_22a818;
            case 0x22A81Cu: goto label_22a81c;
            case 0x22A820u: goto label_22a820;
            case 0x22A824u: goto label_22a824;
            case 0x22A828u: goto label_22a828;
            case 0x22A82Cu: goto label_22a82c;
            case 0x22A830u: goto label_22a830;
            case 0x22A834u: goto label_22a834;
            case 0x22A838u: goto label_22a838;
            case 0x22A83Cu: goto label_22a83c;
            case 0x22A840u: goto label_22a840;
            case 0x22A844u: goto label_22a844;
            case 0x22A848u: goto label_22a848;
            case 0x22A84Cu: goto label_22a84c;
            case 0x22A850u: goto label_22a850;
            case 0x22A854u: goto label_22a854;
            case 0x22A858u: goto label_22a858;
            case 0x22A85Cu: goto label_22a85c;
            case 0x22A860u: goto label_22a860;
            case 0x22A864u: goto label_22a864;
            case 0x22A868u: goto label_22a868;
            case 0x22A86Cu: goto label_22a86c;
            case 0x22A870u: goto label_22a870;
            case 0x22A874u: goto label_22a874;
            case 0x22A878u: goto label_22a878;
            case 0x22A87Cu: goto label_22a87c;
            case 0x22A880u: goto label_22a880;
            case 0x22A884u: goto label_22a884;
            case 0x22A888u: goto label_22a888;
            case 0x22A88Cu: goto label_22a88c;
            case 0x22A890u: goto label_22a890;
            case 0x22A894u: goto label_22a894;
            case 0x22A898u: goto label_22a898;
            case 0x22A89Cu: goto label_22a89c;
            case 0x22A8A0u: goto label_22a8a0;
            case 0x22A8A4u: goto label_22a8a4;
            case 0x22A8A8u: goto label_22a8a8;
            case 0x22A8ACu: goto label_22a8ac;
            case 0x22A8B0u: goto label_22a8b0;
            case 0x22A8B4u: goto label_22a8b4;
            case 0x22A8B8u: goto label_22a8b8;
            case 0x22A8BCu: goto label_22a8bc;
            case 0x22A8C0u: goto label_22a8c0;
            case 0x22A8C4u: goto label_22a8c4;
            case 0x22A8C8u: goto label_22a8c8;
            case 0x22A8CCu: goto label_22a8cc;
            case 0x22A8D0u: goto label_22a8d0;
            case 0x22A8D4u: goto label_22a8d4;
            case 0x22A8D8u: goto label_22a8d8;
            case 0x22A8DCu: goto label_22a8dc;
            case 0x22A8E0u: goto label_22a8e0;
            case 0x22A8E4u: goto label_22a8e4;
            case 0x22A8E8u: goto label_22a8e8;
            case 0x22A8ECu: goto label_22a8ec;
            case 0x22A8F0u: goto label_22a8f0;
            case 0x22A8F4u: goto label_22a8f4;
            case 0x22A8F8u: goto label_22a8f8;
            case 0x22A8FCu: goto label_22a8fc;
            case 0x22A900u: goto label_22a900;
            case 0x22A904u: goto label_22a904;
            case 0x22A908u: goto label_22a908;
            case 0x22A90Cu: goto label_22a90c;
            case 0x22A910u: goto label_22a910;
            case 0x22A914u: goto label_22a914;
            case 0x22A918u: goto label_22a918;
            case 0x22A91Cu: goto label_22a91c;
            case 0x22A920u: goto label_22a920;
            case 0x22A924u: goto label_22a924;
            case 0x22A928u: goto label_22a928;
            case 0x22A92Cu: goto label_22a92c;
            case 0x22A930u: goto label_22a930;
            case 0x22A934u: goto label_22a934;
            case 0x22A938u: goto label_22a938;
            case 0x22A93Cu: goto label_22a93c;
            case 0x22A940u: goto label_22a940;
            case 0x22A944u: goto label_22a944;
            case 0x22A948u: goto label_22a948;
            case 0x22A94Cu: goto label_22a94c;
            case 0x22A950u: goto label_22a950;
            case 0x22A954u: goto label_22a954;
            case 0x22A958u: goto label_22a958;
            case 0x22A95Cu: goto label_22a95c;
            case 0x22A960u: goto label_22a960;
            case 0x22A964u: goto label_22a964;
            case 0x22A968u: goto label_22a968;
            case 0x22A96Cu: goto label_22a96c;
            case 0x22A970u: goto label_22a970;
            case 0x22A974u: goto label_22a974;
            case 0x22A978u: goto label_22a978;
            case 0x22A97Cu: goto label_22a97c;
            case 0x22A980u: goto label_22a980;
            case 0x22A984u: goto label_22a984;
            case 0x22A988u: goto label_22a988;
            case 0x22A98Cu: goto label_22a98c;
            case 0x22A990u: goto label_22a990;
            case 0x22A994u: goto label_22a994;
            case 0x22A998u: goto label_22a998;
            case 0x22A99Cu: goto label_22a99c;
            case 0x22A9A0u: goto label_22a9a0;
            case 0x22A9A4u: goto label_22a9a4;
            case 0x22A9A8u: goto label_22a9a8;
            case 0x22A9ACu: goto label_22a9ac;
            case 0x22A9B0u: goto label_22a9b0;
            case 0x22A9B4u: goto label_22a9b4;
            case 0x22A9B8u: goto label_22a9b8;
            case 0x22A9BCu: goto label_22a9bc;
            case 0x22A9C0u: goto label_22a9c0;
            case 0x22A9C4u: goto label_22a9c4;
            case 0x22A9C8u: goto label_22a9c8;
            case 0x22A9CCu: goto label_22a9cc;
            case 0x22A9D0u: goto label_22a9d0;
            case 0x22A9D4u: goto label_22a9d4;
            case 0x22A9D8u: goto label_22a9d8;
            case 0x22A9DCu: goto label_22a9dc;
            case 0x22A9E0u: goto label_22a9e0;
            case 0x22A9E4u: goto label_22a9e4;
            case 0x22A9E8u: goto label_22a9e8;
            case 0x22A9ECu: goto label_22a9ec;
            case 0x22A9F0u: goto label_22a9f0;
            case 0x22A9F4u: goto label_22a9f4;
            case 0x22A9F8u: goto label_22a9f8;
            case 0x22A9FCu: goto label_22a9fc;
            case 0x22AA00u: goto label_22aa00;
            case 0x22AA04u: goto label_22aa04;
            case 0x22AA08u: goto label_22aa08;
            case 0x22AA0Cu: goto label_22aa0c;
            case 0x22AA10u: goto label_22aa10;
            case 0x22AA14u: goto label_22aa14;
            case 0x22AA18u: goto label_22aa18;
            case 0x22AA1Cu: goto label_22aa1c;
            case 0x22AA20u: goto label_22aa20;
            case 0x22AA24u: goto label_22aa24;
            case 0x22AA28u: goto label_22aa28;
            case 0x22AA2Cu: goto label_22aa2c;
            case 0x22AA30u: goto label_22aa30;
            case 0x22AA34u: goto label_22aa34;
            case 0x22AA38u: goto label_22aa38;
            case 0x22AA3Cu: goto label_22aa3c;
            case 0x22AA40u: goto label_22aa40;
            case 0x22AA44u: goto label_22aa44;
            case 0x22AA48u: goto label_22aa48;
            case 0x22AA4Cu: goto label_22aa4c;
            case 0x22AA50u: goto label_22aa50;
            case 0x22AA54u: goto label_22aa54;
            case 0x22AA58u: goto label_22aa58;
            case 0x22AA5Cu: goto label_22aa5c;
            case 0x22AA60u: goto label_22aa60;
            case 0x22AA64u: goto label_22aa64;
            case 0x22AA68u: goto label_22aa68;
            case 0x22AA6Cu: goto label_22aa6c;
            case 0x22AA70u: goto label_22aa70;
            case 0x22AA74u: goto label_22aa74;
            case 0x22AA78u: goto label_22aa78;
            case 0x22AA7Cu: goto label_22aa7c;
            case 0x22AA80u: goto label_22aa80;
            case 0x22AA84u: goto label_22aa84;
            case 0x22AA88u: goto label_22aa88;
            case 0x22AA8Cu: goto label_22aa8c;
            case 0x22AA90u: goto label_22aa90;
            case 0x22AA94u: goto label_22aa94;
            case 0x22AA98u: goto label_22aa98;
            case 0x22AA9Cu: goto label_22aa9c;
            case 0x22AAA0u: goto label_22aaa0;
            case 0x22AAA4u: goto label_22aaa4;
            case 0x22AAA8u: goto label_22aaa8;
            case 0x22AAACu: goto label_22aaac;
            case 0x22AAB0u: goto label_22aab0;
            case 0x22AAB4u: goto label_22aab4;
            case 0x22AAB8u: goto label_22aab8;
            case 0x22AABCu: goto label_22aabc;
            case 0x22AAC0u: goto label_22aac0;
            case 0x22AAC4u: goto label_22aac4;
            case 0x22AAC8u: goto label_22aac8;
            case 0x22AACCu: goto label_22aacc;
            case 0x22AAD0u: goto label_22aad0;
            case 0x22AAD4u: goto label_22aad4;
            case 0x22AAD8u: goto label_22aad8;
            case 0x22AADCu: goto label_22aadc;
            case 0x22AAE0u: goto label_22aae0;
            case 0x22AAE4u: goto label_22aae4;
            case 0x22AAE8u: goto label_22aae8;
            case 0x22AAECu: goto label_22aaec;
            case 0x22AAF0u: goto label_22aaf0;
            case 0x22AAF4u: goto label_22aaf4;
            case 0x22AAF8u: goto label_22aaf8;
            case 0x22AAFCu: goto label_22aafc;
            case 0x22AB00u: goto label_22ab00;
            case 0x22AB04u: goto label_22ab04;
            case 0x22AB08u: goto label_22ab08;
            case 0x22AB0Cu: goto label_22ab0c;
            case 0x22AB10u: goto label_22ab10;
            case 0x22AB14u: goto label_22ab14;
            case 0x22AB18u: goto label_22ab18;
            case 0x22AB1Cu: goto label_22ab1c;
            case 0x22AB20u: goto label_22ab20;
            case 0x22AB24u: goto label_22ab24;
            case 0x22AB28u: goto label_22ab28;
            case 0x22AB2Cu: goto label_22ab2c;
            case 0x22AB30u: goto label_22ab30;
            case 0x22AB34u: goto label_22ab34;
            case 0x22AB38u: goto label_22ab38;
            case 0x22AB3Cu: goto label_22ab3c;
            case 0x22AB40u: goto label_22ab40;
            case 0x22AB44u: goto label_22ab44;
            case 0x22AB48u: goto label_22ab48;
            case 0x22AB4Cu: goto label_22ab4c;
            case 0x22AB50u: goto label_22ab50;
            case 0x22AB54u: goto label_22ab54;
            case 0x22AB58u: goto label_22ab58;
            case 0x22AB5Cu: goto label_22ab5c;
            case 0x22AB60u: goto label_22ab60;
            case 0x22AB64u: goto label_22ab64;
            case 0x22AB68u: goto label_22ab68;
            case 0x22AB6Cu: goto label_22ab6c;
            case 0x22AB70u: goto label_22ab70;
            case 0x22AB74u: goto label_22ab74;
            case 0x22AB78u: goto label_22ab78;
            case 0x22AB7Cu: goto label_22ab7c;
            case 0x22AB80u: goto label_22ab80;
            case 0x22AB84u: goto label_22ab84;
            case 0x22AB88u: goto label_22ab88;
            case 0x22AB8Cu: goto label_22ab8c;
            case 0x22AB90u: goto label_22ab90;
            case 0x22AB94u: goto label_22ab94;
            case 0x22AB98u: goto label_22ab98;
            case 0x22AB9Cu: goto label_22ab9c;
            case 0x22ABA0u: goto label_22aba0;
            case 0x22ABA4u: goto label_22aba4;
            case 0x22ABA8u: goto label_22aba8;
            case 0x22ABACu: goto label_22abac;
            case 0x22ABB0u: goto label_22abb0;
            case 0x22ABB4u: goto label_22abb4;
            case 0x22ABB8u: goto label_22abb8;
            case 0x22ABBCu: goto label_22abbc;
            case 0x22ABC0u: goto label_22abc0;
            case 0x22ABC4u: goto label_22abc4;
            case 0x22ABC8u: goto label_22abc8;
            case 0x22ABCCu: goto label_22abcc;
            case 0x22ABD0u: goto label_22abd0;
            case 0x22ABD4u: goto label_22abd4;
            case 0x22ABD8u: goto label_22abd8;
            case 0x22ABDCu: goto label_22abdc;
            case 0x22ABE0u: goto label_22abe0;
            case 0x22ABE4u: goto label_22abe4;
            case 0x22ABE8u: goto label_22abe8;
            default: break;
        }
        return;
    }
label_fallthrough_0x22abe4:
    ctx->pc = 0x22ABECu;
}
