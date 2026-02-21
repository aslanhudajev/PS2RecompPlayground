#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic18
// Address: 0x23e870 - 0x23ec20
void move_logic18_0x23e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23e870u;

    // 0x23e870: 0x27bdffb0
    ctx->pc = 0x23e870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23e874: 0xffbf0030
    ctx->pc = 0x23e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23e878: 0xffb20020
    ctx->pc = 0x23e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23e87c: 0xffb10010
    ctx->pc = 0x23e87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23e880: 0xffb00000
    ctx->pc = 0x23e880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e884: 0xe7b40040
    ctx->pc = 0x23e884u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23e888: 0x80882d
    ctx->pc = 0x23e888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e88c: 0x240303b0
    ctx->pc = 0x23e88cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23e890: 0x2231818
    ctx->pc = 0x23e890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23e894: 0x3c020033
    ctx->pc = 0x23e894u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23e898: 0x2442dfd0
    ctx->pc = 0x23e898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23e89c: 0x628021
    ctx->pc = 0x23e89cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e8a0: 0x4480a000
    ctx->pc = 0x23e8a0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x23e8a4: 0x8e02036c
    ctx->pc = 0x23e8a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23e8a8: 0x2902a
    ctx->pc = 0x23e8a8u;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x23e8ac: 0x40034800
    ctx->pc = 0x23e8acu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23e8b0: 0x3c02003a
    ctx->pc = 0x23e8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23e8b4: 0x8c4221d0
    ctx->pc = 0x23e8b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23e8b8: 0xac430288
    ctx->pc = 0x23e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 648), GPR_U32(ctx, 3));
    // 0x23e8bc: 0x86030324
    ctx->pc = 0x23e8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23e8c0: 0x86020328
    ctx->pc = 0x23e8c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23e8c4: 0x50620004
    ctx->pc = 0x23E8C4u;
    {
        const bool branch_taken_0x23e8c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23e8c4) {
            ctx->pc = 0x23E8C8u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x23E8D8u;
            goto label_23e8d8;
        }
    }
    ctx->pc = 0x23E8CCu;
    // 0x23e8cc: 0xc08e210
    ctx->pc = 0x23E8CCu;
    SET_GPR_U32(ctx, 31, 0x23E8D4u);
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E8D4u; }
    }
    if (ctx->pc != 0x23E8D4u) { return; }
    ctx->pc = 0x23E8D4u;
    // 0x23e8d4: 0x200202d
    ctx->pc = 0x23e8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e8d8:
    // 0x23e8d8: 0xc08f0f0
    ctx->pc = 0x23E8D8u;
    SET_GPR_U32(ctx, 31, 0x23E8E0u);
    ctx->pc = 0x23E8DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E8E0u; }
    }
    if (ctx->pc != 0x23E8E0u) { return; }
    ctx->pc = 0x23E8E0u;
    // 0x23e8e0: 0xe6000260
    ctx->pc = 0x23e8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23e8e4: 0x8603032a
    ctx->pc = 0x23e8e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23e8e8: 0x24020001
    ctx->pc = 0x23e8e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e8ec: 0x10620015
    ctx->pc = 0x23E8ECu;
    {
        const bool branch_taken_0x23e8ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23E8F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x23e8ec) {
            ctx->pc = 0x23E944u;
            goto label_23e944;
        }
    }
    ctx->pc = 0x23E8F4u;
    // 0x23e8f4: 0x54400005
    ctx->pc = 0x23E8F4u;
    {
        const bool branch_taken_0x23e8f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23e8f4) {
            ctx->pc = 0x23E8F8u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
            ctx->pc = 0x23E90Cu;
            goto label_23e90c;
        }
    }
    ctx->pc = 0x23E8FCu;
    // 0x23e8fc: 0x24020002
    ctx->pc = 0x23e8fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23e900: 0x10620028
    ctx->pc = 0x23E900u;
    {
        const bool branch_taken_0x23e900 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23E904u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x23e900) {
            ctx->pc = 0x23E9A4u;
            goto label_23e9a4;
        }
    }
    ctx->pc = 0x23E908u;
    // 0x23e908: 0x86020288
    ctx->pc = 0x23e908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
label_23e90c:
    // 0x23e90c: 0x4400089
    ctx->pc = 0x23E90Cu;
    {
        const bool branch_taken_0x23e90c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23e90c) {
            ctx->pc = 0x23EB34u;
            goto label_23eb34;
        }
    }
    ctx->pc = 0x23E914u;
    // 0x23e914: 0xc6010290
    ctx->pc = 0x23e914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e918: 0xc6000314
    ctx->pc = 0x23e918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e91c: 0x46000836
    ctx->pc = 0x23e91cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e920: 0x45000084
    ctx->pc = 0x23E920u;
    {
        const bool branch_taken_0x23e920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e920) {
            ctx->pc = 0x23EB34u;
            goto label_23eb34;
        }
    }
    ctx->pc = 0x23E928u;
    // 0x23e928: 0x9602032a
    ctx->pc = 0x23e928u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23e92c: 0x24420001
    ctx->pc = 0x23e92cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e930: 0xa602032a
    ctx->pc = 0x23e930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e934: 0x2402003c
    ctx->pc = 0x23e934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x23e938: 0xae020330
    ctx->pc = 0x23e938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
    // 0x23e93c: 0x1000007d
    ctx->pc = 0x23E93Cu;
    {
        const bool branch_taken_0x23e93c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23E940u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
        if (branch_taken_0x23e93c) {
            ctx->pc = 0x23EB34u;
            goto label_23eb34;
        }
    }
    ctx->pc = 0x23E944u;
label_23e944:
    // 0x23e944: 0x86020288
    ctx->pc = 0x23e944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23e948: 0x440000c
    ctx->pc = 0x23E948u;
    {
        const bool branch_taken_0x23e948 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23E94Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x23e948) {
            ctx->pc = 0x23E97Cu;
            goto label_23e97c;
        }
    }
    ctx->pc = 0x23E950u;
    // 0x23e950: 0x8e0300e0
    ctx->pc = 0x23e950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x23e954: 0x1062000d
    ctx->pc = 0x23E954u;
    {
        const bool branch_taken_0x23e954 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23E958u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23e954) {
            ctx->pc = 0x23E98Cu;
            goto label_23e98c;
        }
    }
    ctx->pc = 0x23E95Cu;
    // 0x23e95c: 0x8e030330
    ctx->pc = 0x23e95cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23e960: 0x8c42ffbc
    ctx->pc = 0x23e960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23e964: 0x621823
    ctx->pc = 0x23e964u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e968: 0x1c600004
    ctx->pc = 0x23E968u;
    {
        const bool branch_taken_0x23e968 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x23E96Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 3));
        if (branch_taken_0x23e968) {
            ctx->pc = 0x23E97Cu;
            goto label_23e97c;
        }
    }
    ctx->pc = 0x23E970u;
    // 0x23e970: 0x200202d
    ctx->pc = 0x23e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e974: 0xc09de18
    ctx->pc = 0x23E974u;
    SET_GPR_U32(ctx, 31, 0x23E97Cu);
    ctx->pc = 0x23E978u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E97Cu; }
    }
    if (ctx->pc != 0x23E97Cu) { return; }
    ctx->pc = 0x23E97Cu;
label_23e97c:
    // 0x23e97c: 0x8e0300e0
    ctx->pc = 0x23e97cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x23e980: 0x24020004
    ctx->pc = 0x23e980u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x23e984: 0x1462006b
    ctx->pc = 0x23E984u;
    {
        const bool branch_taken_0x23e984 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23e984) {
            ctx->pc = 0x23EB34u;
            goto label_23eb34;
        }
    }
    ctx->pc = 0x23E98Cu;
label_23e98c:
    // 0x23e98c: 0x9602032a
    ctx->pc = 0x23e98cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23e990: 0x24420001
    ctx->pc = 0x23e990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e994: 0xa602032a
    ctx->pc = 0x23e994u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e998: 0xc097f1a
    ctx->pc = 0x23E998u;
    SET_GPR_U32(ctx, 31, 0x23E9A0u);
    ctx->pc = 0x23E99Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    ctx->pc = 0x25FC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSuicideYell_0x25fc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E9A0u; }
    }
    if (ctx->pc != 0x23E9A0u) { return; }
    ctx->pc = 0x23E9A0u;
    // 0x23e9a0: 0x3c030031
    ctx->pc = 0x23e9a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_23e9a4:
    // 0x23e9a4: 0x8e020334
    ctx->pc = 0x23e9a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e9a8: 0x8c63ffbc
    ctx->pc = 0x23e9a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x23e9ac: 0x431021
    ctx->pc = 0x23e9acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e9b0: 0xae020334
    ctx->pc = 0x23e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
    // 0x23e9b4: 0x860202f2
    ctx->pc = 0x23e9b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
    // 0x23e9b8: 0x10400004
    ctx->pc = 0x23E9B8u;
    {
        const bool branch_taken_0x23e9b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23e9b8) {
            ctx->pc = 0x23E9CCu;
            goto label_23e9cc;
        }
    }
    ctx->pc = 0x23E9C0u;
    // 0x23e9c0: 0x86020288
    ctx->pc = 0x23e9c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23e9c4: 0x4430017
    ctx->pc = 0x23E9C4u;
    {
        const bool branch_taken_0x23e9c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23e9c4) {
            ctx->pc = 0x23E9C8u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
            ctx->pc = 0x23EA24u;
            goto label_23ea24;
        }
    }
    ctx->pc = 0x23E9CCu;
label_23e9cc:
    // 0x23e9cc: 0x40034800
    ctx->pc = 0x23e9ccu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23e9d0: 0x3c02003a
    ctx->pc = 0x23e9d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23e9d4: 0x8c4421d0
    ctx->pc = 0x23e9d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23e9d8: 0x8c820288
    ctx->pc = 0x23e9d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 648)));
    // 0x23e9dc: 0x621823
    ctx->pc = 0x23e9dcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e9e0: 0x8c820280
    ctx->pc = 0x23e9e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x23e9e4: 0x621821
    ctx->pc = 0x23e9e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e9e8: 0xac830280
    ctx->pc = 0x23e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
    // 0x23e9ec: 0x8c820284
    ctx->pc = 0x23e9ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 644)));
    // 0x23e9f0: 0x24420001
    ctx->pc = 0x23e9f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e9f4: 0xac820284
    ctx->pc = 0x23e9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 2));
    // 0x23e9f8: 0x32220001
    ctx->pc = 0x23e9f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
    // 0x23e9fc: 0x24420005
    ctx->pc = 0x23e9fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
    // 0x23ea00: 0xa6020324
    ctx->pc = 0x23ea00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23ea04: 0x220202d
    ctx->pc = 0x23ea04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ea08: 0xdfbf0030
    ctx->pc = 0x23ea08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ea0c: 0xdfb20020
    ctx->pc = 0x23ea0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ea10: 0xdfb10010
    ctx->pc = 0x23ea10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ea14: 0xdfb00000
    ctx->pc = 0x23ea14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ea18: 0xc7b40040
    ctx->pc = 0x23ea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23ea1c: 0x809095a
    ctx->pc = 0x23EA1Cu;
    ctx->pc = 0x23EA20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23EA24u;
label_23ea24:
    // 0x23ea24: 0x24020002
    ctx->pc = 0x23ea24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ea28: 0x54620008
    ctx->pc = 0x23EA28u;
    {
        const bool branch_taken_0x23ea28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23ea28) {
            ctx->pc = 0x23EA2Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->pc = 0x23EA4Cu;
            goto label_23ea4c;
        }
    }
    ctx->pc = 0x23EA30u;
    // 0x23ea30: 0x8e03036c
    ctx->pc = 0x23ea30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23ea34: 0x18600039
    ctx->pc = 0x23EA34u;
    {
        const bool branch_taken_0x23ea34 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23EA38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23ea34) {
            ctx->pc = 0x23EB1Cu;
            goto label_23eb1c;
        }
    }
    ctx->pc = 0x23EA3Cu;
    // 0x23ea3c: 0x8c42ffbc
    ctx->pc = 0x23ea3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23ea40: 0x621023
    ctx->pc = 0x23ea40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ea44: 0xae02036c
    ctx->pc = 0x23ea44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
    // 0x23ea48: 0x8e02036c
    ctx->pc = 0x23ea48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_23ea4c:
    // 0x23ea4c: 0x58400034
    ctx->pc = 0x23EA4Cu;
    {
        const bool branch_taken_0x23ea4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23ea4c) {
            ctx->pc = 0x23EA50u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
            ctx->pc = 0x23EB20u;
            goto label_23eb20;
        }
    }
    ctx->pc = 0x23EA54u;
    // 0x23ea54: 0x8e040338
    ctx->pc = 0x23ea54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23ea58: 0x28820010
    ctx->pc = 0x23ea58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 16));
    // 0x23ea5c: 0x10400008
    ctx->pc = 0x23EA5Cu;
    {
        const bool branch_taken_0x23ea5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23EA60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23ea5c) {
            ctx->pc = 0x23EA80u;
            goto label_23ea80;
        }
    }
    ctx->pc = 0x23EA64u;
    // 0x23ea64: 0x2442de30
    ctx->pc = 0x23ea64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x23ea68: 0x41880
    ctx->pc = 0x23ea68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x23ea6c: 0x621821
    ctx->pc = 0x23ea6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ea70: 0xc4740000
    ctx->pc = 0x23ea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23ea74: 0x24820001
    ctx->pc = 0x23ea74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x23ea78: 0xae020338
    ctx->pc = 0x23ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
    // 0x23ea7c: 0xae00036c
    ctx->pc = 0x23ea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
label_23ea80:
    // 0x23ea80: 0xc6000260
    ctx->pc = 0x23ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ea84: 0x4600a040
    ctx->pc = 0x23ea84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x23ea88: 0x3c014049
    ctx->pc = 0x23ea88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23ea8c: 0x34210fdb
    ctx->pc = 0x23ea8cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23ea90: 0x44810000
    ctx->pc = 0x23ea90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ea94: 0x46010034
    ctx->pc = 0x23ea94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ea98: 0x0
    ctx->pc = 0x23ea98u;
    // NOP
    // 0x23ea9c: 0x45000006
    ctx->pc = 0x23EA9Cu;
    {
        const bool branch_taken_0x23ea9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23EAA0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x23ea9c) {
            ctx->pc = 0x23EAB8u;
            goto label_23eab8;
        }
    }
    ctx->pc = 0x23EAA4u;
    // 0x23eaa4: 0x3c0140c9
    ctx->pc = 0x23eaa4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23eaa8: 0x34210fdb
    ctx->pc = 0x23eaa8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23eaac: 0x44810000
    ctx->pc = 0x23eaacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23eab0: 0x1000000d
    ctx->pc = 0x23EAB0u;
    {
        const bool branch_taken_0x23eab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23EAB4u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x23eab0) {
            ctx->pc = 0x23EAE8u;
            goto label_23eae8;
        }
    }
    ctx->pc = 0x23EAB8u;
label_23eab8:
    // 0x23eab8: 0xc6010260
    ctx->pc = 0x23eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23eabc: 0x3c01c049
    ctx->pc = 0x23eabcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23eac0: 0x34210fdb
    ctx->pc = 0x23eac0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23eac4: 0x44810000
    ctx->pc = 0x23eac4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23eac8: 0x46000836
    ctx->pc = 0x23eac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23eacc: 0x0
    ctx->pc = 0x23eaccu;
    // NOP
    // 0x23ead0: 0x45020006
    ctx->pc = 0x23EAD0u;
    {
        const bool branch_taken_0x23ead0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ead0) {
            ctx->pc = 0x23EAD4u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
            ctx->pc = 0x23EAECu;
            goto label_23eaec;
        }
    }
    ctx->pc = 0x23EAD8u;
    // 0x23ead8: 0x3c0140c9
    ctx->pc = 0x23ead8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23eadc: 0x34210fdb
    ctx->pc = 0x23eadcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23eae0: 0x44810000
    ctx->pc = 0x23eae0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23eae4: 0x46000840
    ctx->pc = 0x23eae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23eae8:
    // 0x23eae8: 0xe6010260
    ctx->pc = 0x23eae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
label_23eaec:
    // 0x23eaec: 0x8e02036c
    ctx->pc = 0x23eaecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23eaf0: 0x5840000b
    ctx->pc = 0x23EAF0u;
    {
        const bool branch_taken_0x23eaf0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23eaf0) {
            ctx->pc = 0x23EAF4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
            ctx->pc = 0x23EB20u;
            goto label_23eb20;
        }
    }
    ctx->pc = 0x23EAF8u;
    // 0x23eaf8: 0xc6000268
    ctx->pc = 0x23eaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23eafc: 0x46000801
    ctx->pc = 0x23eafcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23eb00: 0x46000005
    ctx->pc = 0x23eb00u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x23eb04: 0x3c013dd6
    ctx->pc = 0x23eb04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15830 << 16));
    // 0x23eb08: 0x34217750
    ctx->pc = 0x23eb08u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30544));
    // 0x23eb0c: 0x44810800
    ctx->pc = 0x23eb0cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23eb10: 0x46000836
    ctx->pc = 0x23eb10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23eb14: 0x45000007
    ctx->pc = 0x23EB14u;
    {
        const bool branch_taken_0x23eb14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23eb14) {
            ctx->pc = 0x23EB34u;
            goto label_23eb34;
        }
    }
    ctx->pc = 0x23EB1Cu;
label_23eb1c:
    // 0x23eb1c: 0xae00036c
    ctx->pc = 0x23eb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
label_23eb20:
    // 0x23eb20: 0x200202d
    ctx->pc = 0x23eb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb24: 0x3c013fc0
    ctx->pc = 0x23eb24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x23eb28: 0x44816000
    ctx->pc = 0x23eb28u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23eb2c: 0xc08f14c
    ctx->pc = 0x23EB2Cu;
    SET_GPR_U32(ctx, 31, 0x23EB34u);
    ctx->pc = 0x23EB30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EB34u; }
    }
    if (ctx->pc != 0x23EB34u) { return; }
    ctx->pc = 0x23EB34u;
label_23eb34:
    // 0x23eb34: 0xc08f20c
    ctx->pc = 0x23EB34u;
    SET_GPR_U32(ctx, 31, 0x23EB3Cu);
    ctx->pc = 0x23EB38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EB3Cu; }
    }
    if (ctx->pc != 0x23EB3Cu) { return; }
    ctx->pc = 0x23EB3Cu;
    // 0x23eb3c: 0xe6000258
    ctx->pc = 0x23eb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23eb40: 0xc090e82
    ctx->pc = 0x23EB40u;
    SET_GPR_U32(ctx, 31, 0x23EB48u);
    ctx->pc = 0x23EB44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EB48u; }
    }
    if (ctx->pc != 0x23EB48u) { return; }
    ctx->pc = 0x23EB48u;
    // 0x23eb48: 0x86020294
    ctx->pc = 0x23eb48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x23eb4c: 0x54400001
    ctx->pc = 0x23EB4Cu;
    {
        const bool branch_taken_0x23eb4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23eb4c) {
            ctx->pc = 0x23EB50u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
            ctx->pc = 0x23EB54u;
            goto label_23eb54;
        }
    }
    ctx->pc = 0x23EB54u;
label_23eb54:
    // 0x23eb54: 0xc6010334
    ctx->pc = 0x23eb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23eb58: 0x46800860
    ctx->pc = 0x23eb58u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x23eb5c: 0x3c014370
    ctx->pc = 0x23eb5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17264 << 16));
    // 0x23eb60: 0x44810000
    ctx->pc = 0x23eb60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23eb64: 0x46010036
    ctx->pc = 0x23eb64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23eb68: 0x0
    ctx->pc = 0x23eb68u;
    // NOP
    // 0x23eb6c: 0x45010004
    ctx->pc = 0x23EB6Cu;
    {
        const bool branch_taken_0x23eb6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23EB70u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x23eb6c) {
            ctx->pc = 0x23EB80u;
            goto label_23eb80;
        }
    }
    ctx->pc = 0x23EB74u;
    // 0x23eb74: 0x8e020298
    ctx->pc = 0x23eb74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x23eb78: 0x440000f
    ctx->pc = 0x23EB78u;
    {
        const bool branch_taken_0x23eb78 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23eb78) {
            ctx->pc = 0x23EBB8u;
            goto label_23ebb8;
        }
    }
    ctx->pc = 0x23EB80u;
label_23eb80:
    // 0x23eb80: 0x2402ffff
    ctx->pc = 0x23eb80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23eb84: 0xac624638
    ctx->pc = 0x23eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17976), GPR_U32(ctx, 2));
    // 0x23eb88: 0x200202d
    ctx->pc = 0x23eb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb8c: 0x3c014479
    ctx->pc = 0x23eb8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
    // 0x23eb90: 0x3421c000
    ctx->pc = 0x23eb90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
    // 0x23eb94: 0x44816000
    ctx->pc = 0x23eb94u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23eb98: 0x2405fffe
    ctx->pc = 0x23eb98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x23eb9c: 0x24060001
    ctx->pc = 0x23eb9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23eba0: 0x382d
    ctx->pc = 0x23eba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eba4: 0x402d
    ctx->pc = 0x23eba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eba8: 0xc08e7bc
    ctx->pc = 0x23EBA8u;
    SET_GPR_U32(ctx, 31, 0x23EBB0u);
    ctx->pc = 0x23EBACu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EBB0u; }
    }
    if (ctx->pc != 0x23EBB0u) { return; }
    ctx->pc = 0x23EBB0u;
    // 0x23ebb0: 0x10000009
    ctx->pc = 0x23EBB0u;
    {
        const bool branch_taken_0x23ebb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23ebb0) {
            ctx->pc = 0x23EBD8u;
            goto label_23ebd8;
        }
    }
    ctx->pc = 0x23EBB8u;
label_23ebb8:
    // 0x23ebb8: 0x16400007
    ctx->pc = 0x23EBB8u;
    {
        const bool branch_taken_0x23ebb8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x23ebb8) {
            ctx->pc = 0x23EBD8u;
            goto label_23ebd8;
        }
    }
    ctx->pc = 0x23EBC0u;
    // 0x23ebc0: 0x8e02036c
    ctx->pc = 0x23ebc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23ebc4: 0x18400004
    ctx->pc = 0x23EBC4u;
    {
        const bool branch_taken_0x23ebc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23ebc4) {
            ctx->pc = 0x23EBD8u;
            goto label_23ebd8;
        }
    }
    ctx->pc = 0x23EBCCu;
    // 0x23ebcc: 0xc6000260
    ctx->pc = 0x23ebccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ebd0: 0xe6000268
    ctx->pc = 0x23ebd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x23ebd4: 0xae000338
    ctx->pc = 0x23ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
label_23ebd8:
    // 0x23ebd8: 0x40034800
    ctx->pc = 0x23ebd8u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23ebdc: 0x3c02003a
    ctx->pc = 0x23ebdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23ebe0: 0x8c4421d0
    ctx->pc = 0x23ebe0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23ebe4: 0x8c820288
    ctx->pc = 0x23ebe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 648)));
    // 0x23ebe8: 0x621823
    ctx->pc = 0x23ebe8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ebec: 0x8c820280
    ctx->pc = 0x23ebecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x23ebf0: 0x621821
    ctx->pc = 0x23ebf0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ebf4: 0xac830280
    ctx->pc = 0x23ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 3));
    // 0x23ebf8: 0x8c820284
    ctx->pc = 0x23ebf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 644)));
    // 0x23ebfc: 0x24420001
    ctx->pc = 0x23ebfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ec00: 0xac820284
    ctx->pc = 0x23ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 2));
    // 0x23ec04: 0xdfbf0030
    ctx->pc = 0x23ec04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ec08: 0xdfb20020
    ctx->pc = 0x23ec08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ec0c: 0xdfb10010
    ctx->pc = 0x23ec0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ec10: 0xdfb00000
    ctx->pc = 0x23ec10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ec14: 0xc7b40040
    ctx->pc = 0x23ec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23ec18: 0x3e00008
    ctx->pc = 0x23EC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EC1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23E8D8u: goto label_23e8d8;
            case 0x23E90Cu: goto label_23e90c;
            case 0x23E944u: goto label_23e944;
            case 0x23E97Cu: goto label_23e97c;
            case 0x23E98Cu: goto label_23e98c;
            case 0x23E9A4u: goto label_23e9a4;
            case 0x23E9CCu: goto label_23e9cc;
            case 0x23EA24u: goto label_23ea24;
            case 0x23EA4Cu: goto label_23ea4c;
            case 0x23EA80u: goto label_23ea80;
            case 0x23EAB8u: goto label_23eab8;
            case 0x23EAE8u: goto label_23eae8;
            case 0x23EAECu: goto label_23eaec;
            case 0x23EB1Cu: goto label_23eb1c;
            case 0x23EB20u: goto label_23eb20;
            case 0x23EB34u: goto label_23eb34;
            case 0x23EB54u: goto label_23eb54;
            case 0x23EB80u: goto label_23eb80;
            case 0x23EBB8u: goto label_23ebb8;
            case 0x23EBD8u: goto label_23ebd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23EC20u;
}
